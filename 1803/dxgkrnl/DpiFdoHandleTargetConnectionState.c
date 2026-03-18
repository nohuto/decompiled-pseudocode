/*
 * XREFs of DpiFdoHandleTargetConnectionState @ 0x1C01F6374
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C003BA24 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiFdoGetChildDescriptor @ 0x1C00396A8 (DpiFdoGetChildDescriptor.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C01F22C0 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptor @ 0x1C01F88A8 (DpiFdoRemoveChildDescriptor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C020C6BC (DpiPdoHandleChildConnectionChange.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C021DEB4 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C021DF64 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C021E01C (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleTargetConnectionState(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int *PoolWithTag; // r15
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v9; // edx
  _QWORD *ChildDescriptor; // rdx
  __int64 v11; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v12; // r9d
  unsigned int v13; // r10d
  int v14; // r11d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edi
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // r11d
  unsigned int v26; // edx
  int v27; // r10d
  int v29; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+38h] [rbp-C8h]
  unsigned int v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-ACh] BYREF
  _DXGK_CHILD_CAPABILITIES v35; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v36[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v37[10]; // [rsp+C0h] [rbp-40h] BYREF

  v35 = (_DXGK_CHILD_CAPABILITIES)0LL;
  v33 = 0;
  v4 = 1;
  LODWORD(v5) = 0;
  v34 = 1;
  PoolWithTag = 0LL;
  memset(v36, 0, 0x48uLL);
  v7 = a2[2];
  memset(&v36[1], 0, 36);
  HIDWORD(v36[6]) = HIBYTE(v7) & 0xF;
  HIDWORD(v36[7]) = a2[4];
  v8 = *(_QWORD *)(a1 + 2536);
  LODWORD(v36[7]) = v7 & 0xFFFFFF;
  v36[8] = v8;
  v36[0] = 0x480000001ELL;
  LODWORD(v36[6]) = 92;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v36);
  v9 = a2[2] & 0xFFFFFF;
  v35.Type.Other.MustBeZero = a2[3];
  v35.Type.VideoOutput.MonitorOrientationAwareness = D3DKMDT_MOA_NONE;
  v35.Type.VideoOutput.SupportsSdtvModes = 0;
  v35.HpdAwareness = HpdAwarenessInterruptible;
  ChildDescriptor = DpiFdoGetChildDescriptor(a1, v9);
  if ( !ChildDescriptor )
  {
    LODWORD(v5) = -1073741810;
    v15 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v15 + 24) = -1073741810LL;
LABEL_3:
    WdLogEvent5_WdError(v15);
LABEL_33:
    memset(v37, 0, 0x48uLL);
    v37[0] = 0x480000001ELL;
    memset(&v37[1], 0, 36);
    v37[8] = *(_QWORD *)(a1 + 2536);
    LODWORD(v37[6]) = 93;
    HIDWORD(v37[6]) = v4;
    v37[7] = (unsigned int)v5;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v37);
    return (unsigned int)v5;
  }
  v16 = HIBYTE(v13) & 0xF;
  if ( (unsigned int)(v16 - 5) > 1 )
  {
    if ( (_DWORD)v16 != v14 )
      return (unsigned int)v5;
    v34 = *(_DWORD *)(a1 + 3344);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v34, 0x74727044u);
    if ( !PoolWithTag )
    {
      v4 = 0x80000000;
      LODWORD(v5) = -1073741801;
      v18 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v18 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v18);
      goto LABEL_33;
    }
    LODWORD(v5) = DmmBuildDynamicVideoPresentTargetChildRelations(
                    *(void **)(a1 + 3728),
                    a2[2] & 0xFFFFFF,
                    &v34,
                    PoolWithTag,
                    (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v33);
    if ( (int)v5 >= 0 )
    {
      v19 = v34;
      while ( v19 )
      {
        v20 = DpiFdoGetChildDescriptor(a1, PoolWithTag[--v19]);
        v21 = v20;
        if ( v20[6] )
        {
          LOBYTE(v32) = 0;
          LOBYTE(v31) = 0;
          LOBYTE(v30) = 0;
          LOBYTE(v29) = 0;
          v22 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(a1 + 24),
                  *((unsigned int *)v20 + 6),
                  *((unsigned int *)v20 + 1),
                  0LL,
                  v29,
                  v30,
                  v31,
                  v32,
                  a2 + 6);
          v5 = v22;
          if ( v22 < 0 )
          {
            v4 = 2;
            v24 = WdLogNewEntry5_WdError(v23);
            *(_QWORD *)(v24 + 24) = v5;
            WdLogEvent5_WdError(v24);
            goto LABEL_30;
          }
        }
        LODWORD(v5) = DmmDestroyDynamicVideoPresentTarget(
                        *(void **)(a1 + 3728),
                        *((_DWORD *)v21 + 6),
                        (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v33);
        if ( (int)v5 < 0 )
          goto LABEL_29;
        DpiFdoRemoveChildDescriptor(a1, v21);
      }
    }
    goto LABEL_29;
  }
  if ( ChildDescriptor[6] )
  {
    v4 = 2;
LABEL_19:
    LODWORD(v5) = -1073741811;
    v15 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    goto LABEL_3;
  }
  if ( IsInternalVideoOutput(v12) )
  {
    v4 = v25;
    goto LABEL_19;
  }
  if ( DpiFdoGetChildDescriptor(a1, a2[4]) )
  {
    if ( (v27 & 0xF000000) == 0x5000000 )
    {
      v4 = 3;
      goto LABEL_19;
    }
  }
  else
  {
    LODWORD(v5) = DpiFdoCreateChildDescriptor(a1, v26, 0, &v34, (__int128 *)&v35, 0);
    if ( (int)v5 < 0 )
    {
      v4 = 0x80000000;
      goto LABEL_32;
    }
    v27 = a2[2];
    LOBYTE(v4) = 0;
    v26 = a2[4];
  }
  LODWORD(v5) = DmmCreateDynamicVideoPresentTarget(
                  *(void **)(a1 + 3728),
                  v26,
                  v27 & 0xFFFFFF,
                  &v35,
                  v4,
                  (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v33);
LABEL_29:
  v4 = v33;
LABEL_30:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_32:
  if ( (int)v5 < 0 )
    goto LABEL_33;
  return (unsigned int)v5;
}
