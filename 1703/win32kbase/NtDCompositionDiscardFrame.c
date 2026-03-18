/*
 * XREFs of NtDCompositionDiscardFrame @ 0x1C0013DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C0013244 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C0013648 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z @ 0x1C0014620 (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00146C8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0015ACC (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall NtDCompositionDiscardFrame(struct HDCOMPOSITIONCONNECTION__ *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rdi
  signed int CompositionFrame; // ebx
  DirectComposition::CConnection *v5; // rsi
  struct DirectComposition::CConnection *v7; // [rsp+58h] [rbp+10h] BYREF
  struct DirectComposition::CCompositionFrame *v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v3 = *a2;
    CompositionFrame = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    CompositionFrame = -1073741811;
  }
  if ( CompositionFrame >= 0 )
  {
    KeEnterCriticalRegion();
    CompositionFrame = DirectComposition::CConnection::ReferenceHandle(a1, &v7);
    if ( CompositionFrame >= 0 )
    {
      v5 = v7;
      CompositionFrame = DirectComposition::CConnection::FindCompositionFrame(v7, v3, &v8);
      if ( CompositionFrame >= 0 )
      {
        DirectComposition::CCompositionFrame::Discard(v8);
        DirectComposition::CCompositionFrame::Release(v8);
      }
      DirectComposition::CConnection::RemoveCompositionFrame(v5, v3);
      DirectComposition::CConnection::Release(v5);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)CompositionFrame;
}
