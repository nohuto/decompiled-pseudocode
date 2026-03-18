/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C00132F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C0013808 (-GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?GetMappedSectionPointer@CTokenManager@@SAJPEAPEAXPEA_K@Z @ 0x1C0013D04 (-GetMappedSectionPointer@CTokenManager@@SAJPEAPEAXPEA_K@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0013D40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00146EC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(__int64 *a1, unsigned int *a2, int *a3)
{
  __int64 v5; // rsi
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v7; // rdi
  DirectComposition::CCompositionFrame *v8; // r14
  char *v9; // r13
  volatile signed __int32 *i; // rcx
  int v11; // esi
  unsigned int v12; // edx
  signed int MappedSectionPointer; // [rsp+20h] [rbp-68h]
  DirectComposition::CCompositionFrame *v15; // [rsp+30h] [rbp-58h]
  unsigned __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  struct CSM_SURFACE_UPDATE *v17; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v19; // [rsp+98h] [rbp+10h]
  int *v20; // [rsp+A0h] [rbp+18h]
  int SurfaceUpdates; // [rsp+A8h] [rbp+20h]

  v20 = a3;
  v19 = a2;
  v18 = 0;
  SurfaceUpdates = 0;
  v5 = 0LL;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v5 = *a1;
    MappedSectionPointer = *a1 == 0 ? 0xC000000D : 0;
  }
  else
  {
    MappedSectionPointer = -1073741811;
  }
  if ( MappedSectionPointer >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess() == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      v7 = DefaultConnection;
      if ( DefaultConnection )
      {
        v8 = 0LL;
        v15 = 0LL;
        v9 = (char *)DefaultConnection + 200;
        ExAcquirePushLockSharedEx((char *)DefaultConnection + 200, 0LL);
        v9[8] = 0;
        for ( i = (volatile signed __int32 *)*((_QWORD *)v7 + 24);
              i != (volatile signed __int32 *)((char *)v7 + 184);
              i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
        {
          if ( *((_QWORD *)i + 8) == v5 )
          {
            _InterlockedIncrement(i - 2);
            v8 = (DirectComposition::CCompositionFrame *)(i - 2);
            v15 = (DirectComposition::CCompositionFrame *)(i - 2);
            v11 = 0;
            goto LABEL_13;
          }
        }
        v11 = -1073741275;
LABEL_13:
        if ( v9[8] )
          ExReleasePushLockExclusiveEx(v9, 0LL);
        else
          ExReleasePushLockSharedEx(v9, 0LL);
        MappedSectionPointer = v11;
        if ( v11 >= 0 )
        {
          MappedSectionPointer = CTokenManager::GetMappedSectionPointer((void **)&v17, &v16);
          if ( MappedSectionPointer >= 0 )
            SurfaceUpdates = DirectComposition::CCompositionFrame::GetSurfaceUpdates(v8, v17, v16 / 0xC8, &v18);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 && v15 )
          {
            if ( *((_DWORD *)v15 + 20) != 3 )
              DirectComposition::CCompositionFrame::Discard(v15);
            Win32FreePool(v15);
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v7, v12);
      }
      else
      {
        MappedSectionPointer = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      MappedSectionPointer = -1073741790;
    }
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v18;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = SurfaceUpdates;
  return (unsigned int)MappedSectionPointer;
}
