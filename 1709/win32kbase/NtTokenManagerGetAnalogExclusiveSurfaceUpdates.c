/*
 * XREFs of NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C01533C0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C01539AC (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveSurfaceUpdates(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        int *a5)
{
  unsigned int v7; // esi
  unsigned int v8; // edi
  int AnalogSurfaceUpdatesInternal; // ebx
  CTokenManager *v10; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // r14d
  size_t v13; // r8
  char *v14; // rcx
  unsigned int v16; // [rsp+30h] [rbp-3A8h] BYREF
  int v17; // [rsp+34h] [rbp-3A4h]
  unsigned int v18; // [rsp+38h] [rbp-3A0h]
  unsigned int v19; // [rsp+3Ch] [rbp-39Ch]
  unsigned int v20; // [rsp+40h] [rbp-398h]
  __int64 v21; // [rsp+48h] [rbp-390h]
  __int64 v22; // [rsp+50h] [rbp-388h]
  unsigned int *v23; // [rsp+58h] [rbp-380h]
  int *v24; // [rsp+60h] [rbp-378h]
  _BYTE Src[800]; // [rsp+70h] [rbp-368h] BYREF

  v21 = a2;
  v18 = a1;
  v20 = a1;
  v22 = a2;
  v23 = a4;
  v24 = a5;
  v7 = 0;
  v8 = 0;
  v19 = 0;
  AnalogSurfaceUpdatesInternal = 0;
  v17 = 0;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm() )
  {
    AnalogSurfaceUpdatesInternal = 1;
    v17 = 1;
    v16 = 0;
    while ( a3 > v8 && AnalogSurfaceUpdatesInternal )
    {
      v11 = a3 - v8;
      if ( a3 - v8 > 4 )
        v11 = 4;
      v12 = 0;
      v16 = 0;
      if ( g_pTokenManager )
      {
        AnalogSurfaceUpdatesInternal = CTokenManager::GetAnalogSurfaceUpdatesInternal(
                                         v10,
                                         v18,
                                         v11,
                                         (struct CSM_SURFACE_UPDATE *)Src,
                                         &v16);
        v12 = v16;
      }
      else
      {
        AnalogSurfaceUpdatesInternal = 0;
      }
      v17 = AnalogSurfaceUpdatesInternal;
      if ( v12 )
      {
        v13 = 200LL * v12;
        v14 = (char *)(v21 + 200LL * v8);
        if ( (unsigned __int64)&v14[v13] > MmUserProbeAddress || &v14[v13] <= v14 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v14, Src, v13);
      }
      v8 += v12;
      v19 = v8;
    }
  }
  else
  {
    v7 = -1073741790;
  }
  KeLeaveCriticalRegion();
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a4 = v8;
  if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a5 = AnalogSurfaceUpdatesInternal;
  return v7;
}
