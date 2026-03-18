/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C00368E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0034998 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C0035298 (-GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0036E40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(__int64 *a1, unsigned int *a2, _DWORD *a3)
{
  __int64 v5; // rdi
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v7; // rsi
  DirectComposition::CCompositionFrame *v8; // r14
  char *v9; // r15
  volatile signed __int32 *i; // rcx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  struct CSM_SURFACE_UPDATE *v14; // r10
  unsigned __int64 v15; // rcx
  int v16; // eax
  signed int v18; // [rsp+20h] [rbp-68h]
  DirectComposition::CCompositionFrame *v19; // [rsp+30h] [rbp-58h]
  unsigned int v20; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v21; // [rsp+98h] [rbp+10h]
  _DWORD *v22; // [rsp+A0h] [rbp+18h]
  int SurfaceUpdates; // [rsp+A8h] [rbp+20h]

  v22 = a3;
  v21 = a2;
  v20 = 0;
  SurfaceUpdates = 0;
  v5 = 0LL;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v5 = *a1;
    v18 = *a1 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v18 = -1073741811;
  }
  if ( v18 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess() == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      v7 = DefaultConnection;
      if ( DefaultConnection )
      {
        v8 = 0LL;
        v19 = 0LL;
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
            v19 = (DirectComposition::CCompositionFrame *)(i - 2);
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
        v18 = v11;
        if ( v11 >= 0 )
        {
          v14 = 0LL;
          v15 = 0LL;
          if ( g_pTokenManager && (v12 = *((_QWORD *)g_pTokenManager + 3)) != 0 )
          {
            v14 = (struct CSM_SURFACE_UPDATE *)*((_QWORD *)g_pTokenManager + 3);
            v15 = *((_QWORD *)g_pTokenManager + 4);
            v16 = 0;
          }
          else
          {
            v16 = -1073741823;
          }
          v18 = v16;
          if ( v16 >= 0 )
            SurfaceUpdates = DirectComposition::CCompositionFrame::GetSurfaceUpdates(v8, v14, v15 / 0xC8, &v20);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 && v19 )
          {
            if ( *((_DWORD *)v19 + 20) != 3 )
              DirectComposition::CCompositionFrame::Discard(v19, v12);
            Win32FreePool(v19, v12, v13);
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v7);
      }
      else
      {
        v18 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v18 = -1073741790;
    }
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v20;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = SurfaceUpdates;
  return (unsigned int)v18;
}
