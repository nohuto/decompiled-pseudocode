/*
 * XREFs of NtDCompositionDiscardFrame @ 0x1C0037330
 * Callers:
 *     <none>
 * Callees:
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z @ 0x1C0033018 (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0034168 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0034998 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C0037428 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall NtDCompositionDiscardFrame(struct HDCOMPOSITIONCONNECTION__ *a1, unsigned __int64 *a2)
{
  unsigned int v3; // edx
  struct DirectComposition::CCompositionFrame *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  DirectComposition::CConnection *v7; // rbx
  struct DirectComposition::CCompositionFrame *v9; // rbx
  signed int CompositionFrame; // [rsp+20h] [rbp-18h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]
  DirectComposition::CConnection *v12; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CCompositionFrame *v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v11 = *a2;
    CompositionFrame = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    CompositionFrame = -1073741811;
  }
  if ( CompositionFrame >= 0 )
  {
    KeEnterCriticalRegion();
    CompositionFrame = DirectComposition::CConnection::ReferenceHandle(a1, &v12);
    if ( CompositionFrame >= 0 )
    {
      CompositionFrame = DirectComposition::CConnection::FindCompositionFrame(v12, v11, &v13);
      if ( CompositionFrame >= 0 )
      {
        v4 = v13;
        DirectComposition::CCompositionFrame::Discard(v13, v3);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
        {
          v9 = v13;
          if ( v13 )
          {
            if ( *((_DWORD *)v13 + 20) != 3 )
              DirectComposition::CCompositionFrame::Discard(v13, v5);
            Win32FreePool(v9, v5, v6);
          }
        }
      }
      v7 = v12;
      DirectComposition::CConnection::RemoveCompositionFrame(v12, v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 && v12 )
        DirectComposition::CConnection::`scalar deleting destructor'(v12);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)CompositionFrame;
}
