/*
 * XREFs of DpiFdoHandleTargetConnectionState @ 0x1C01C4A2C
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011068 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     DpiFdoGetChildDescriptor @ 0x1C0010B6C (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0119220 (DpiPdoHandleChildConnectionChange.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C011FA28 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptor @ 0x1C01C51C8 (DpiFdoRemoveChildDescriptor.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01D9284 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01D9334 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01D93EC (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleTargetConnectionState(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int *PoolWithTag; // r15
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  _QWORD *ChildDescriptor; // rdx
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // r10d
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edi
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // r11d
  int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-ACh] BYREF
  _DXGK_CHILD_CAPABILITIES v36; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v37[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v38[10]; // [rsp+C0h] [rbp-40h] BYREF

  v36 = (_DXGK_CHILD_CAPABILITIES)0LL;
  v34 = 0;
  v4 = 1;
  LODWORD(v5) = 0;
  v35 = 1;
  PoolWithTag = 0LL;
  memset(v37, 0, 0x48uLL);
  v7 = *(_DWORD *)(a2 + 8);
  memset(&v37[1], 0, 36);
  HIDWORD(v37[6]) = HIBYTE(v7) & 0xF;
  HIDWORD(v37[7]) = *(_DWORD *)(a2 + 16);
  v8 = *(_QWORD *)(a1 + 2536);
  LODWORD(v37[7]) = v7 & 0xFFFFFF;
  v37[8] = v8;
  v37[0] = 0x480000001ELL;
  LODWORD(v37[6]) = 92;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v37, v9, v10, v11);
  v12 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  v36.Type.Other.MustBeZero = *(_DWORD *)(a2 + 12);
  v36.Type.VideoOutput.MonitorOrientationAwareness = D3DKMDT_MOA_NONE;
  v36.Type.VideoOutput.SupportsSdtvModes = 0;
  v36.HpdAwareness = HpdAwarenessInterruptible;
  ChildDescriptor = DpiFdoGetChildDescriptor(a1, v12);
  if ( !ChildDescriptor )
  {
    LODWORD(v5) = -1073741810;
    v17 = WdLogNewEntry5_WdError(v14, 0LL);
    *(_QWORD *)(v17 + 24) = -1073741810LL;
LABEL_3:
    WdLogEvent5_WdError(v17);
LABEL_33:
    memset(v38, 0, 0x48uLL);
    v38[0] = 0x480000001ELL;
    memset(&v38[1], 0, 36);
    v38[8] = *(_QWORD *)(a1 + 2536);
    LODWORD(v38[6]) = 93;
    HIDWORD(v38[6]) = v4;
    v38[7] = (unsigned int)v5;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v38, v30, v31, v32);
    return (unsigned int)v5;
  }
  v18 = v15 & 0xF000000;
  if ( ((v18 - 83886080) & 0xFEFFFFFF) != 0 )
  {
    if ( v18 != 0x4000000 )
      return (unsigned int)v5;
    v35 = *(_DWORD *)(a1 + 3320);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v35, 0x74727044u);
    if ( !PoolWithTag )
    {
      v4 = 0x80000000;
      LODWORD(v5) = -1073741801;
      v20 = WdLogNewEntry5_WdLowResource(v19);
      *(_QWORD *)(v20 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v20);
      goto LABEL_33;
    }
    LODWORD(v5) = DmmBuildDynamicVideoPresentTargetChildRelations(
                    *(void **)(a1 + 3704),
                    *(_DWORD *)(a2 + 8) & 0xFFFFFF,
                    &v35,
                    PoolWithTag,
                    (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v34);
    if ( (int)v5 >= 0 )
    {
      v21 = v35;
      while ( v21 )
      {
        v22 = DpiFdoGetChildDescriptor(a1, PoolWithTag[--v21]);
        v23 = v22;
        if ( v22[6] )
        {
          v24 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(a1 + 24),
                  *((_DWORD *)v22 + 6),
                  (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v22 + 1),
                  0,
                  0,
                  0,
                  0,
                  0,
                  (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a2 + 24));
          v5 = v24;
          if ( v24 < 0 )
          {
            v4 = 2;
            v27 = WdLogNewEntry5_WdError(v26, v25);
            *(_QWORD *)(v27 + 24) = v5;
            WdLogEvent5_WdError(v27);
            goto LABEL_30;
          }
        }
        LODWORD(v5) = DmmDestroyDynamicVideoPresentTarget(
                        *(void **)(a1 + 3704),
                        *((_DWORD *)v23 + 6),
                        (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v34);
        if ( (int)v5 < 0 )
          goto LABEL_29;
        DpiFdoRemoveChildDescriptor(a1, v23);
      }
    }
    goto LABEL_29;
  }
  if ( ChildDescriptor[6] )
  {
    v4 = 2;
LABEL_19:
    LODWORD(v5) = -1073741811;
    v17 = WdLogNewEntry5_WdError(v14, ChildDescriptor);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    goto LABEL_3;
  }
  if ( IsInternalVideoOutput(v16) )
  {
    v4 = v28;
    goto LABEL_19;
  }
  if ( DpiFdoGetChildDescriptor(a1, *(_DWORD *)(a2 + 16)) )
  {
    if ( v29 == 83886080 )
    {
      v4 = 3;
      goto LABEL_19;
    }
  }
  else
  {
    LODWORD(v5) = DpiFdoCreateChildDescriptor(a1, (__int64)ChildDescriptor, 0, &v35, (__int128 *)&v36, 0);
    if ( (int)v5 < 0 )
    {
      v4 = 0x80000000;
      goto LABEL_32;
    }
    LOBYTE(v4) = 0;
  }
  LODWORD(v5) = DmmCreateDynamicVideoPresentTarget(
                  *(void **)(a1 + 3704),
                  *(_DWORD *)(a2 + 16),
                  *(_DWORD *)(a2 + 8) & 0xFFFFFF,
                  &v36,
                  v4,
                  (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v34);
LABEL_29:
  v4 = v34;
LABEL_30:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_32:
  if ( (int)v5 < 0 )
    goto LABEL_33;
  return (unsigned int)v5;
}
