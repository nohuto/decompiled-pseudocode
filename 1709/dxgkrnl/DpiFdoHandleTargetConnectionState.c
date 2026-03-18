/*
 * XREFs of DpiFdoHandleTargetConnectionState @ 0x1C01DE4A4
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     DpiFdoGetChildDescriptor @ 0x1C0012738 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0107824 (DpiPdoHandleChildConnectionChange.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C011F010 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptor @ 0x1C01DECC8 (DpiFdoRemoveChildDescriptor.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F2444 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F24F4 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F25AC (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleTargetConnectionState(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned int *PoolWithTag; // r15
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v9; // edx
  _QWORD *ChildDescriptor; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r9d
  int v13; // r10d
  int v14; // r11d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // r11d
  int v26; // edx
  int v27; // r9d
  unsigned int v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-ACh] BYREF
  _DXGK_CHILD_CAPABILITIES v31; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v32[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v33[10]; // [rsp+C0h] [rbp-40h] BYREF

  v31 = (_DXGK_CHILD_CAPABILITIES)0LL;
  v29 = 0;
  v4 = 1;
  LODWORD(v5) = 0;
  v30 = 1;
  PoolWithTag = 0LL;
  memset(v32, 0, 0x48uLL);
  v7 = *(_DWORD *)(a2 + 8);
  memset(&v32[1], 0, 36);
  HIDWORD(v32[6]) = HIBYTE(v7) & 0xF;
  HIDWORD(v32[7]) = *(_DWORD *)(a2 + 16);
  v8 = *(_QWORD *)(a1 + 2536);
  LODWORD(v32[7]) = v7 & 0xFFFFFF;
  v32[8] = v8;
  v32[0] = 0x480000001ELL;
  LODWORD(v32[6]) = 92;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32);
  v9 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  v31.Type.Other.MustBeZero = *(_DWORD *)(a2 + 12);
  v31.Type.VideoOutput.MonitorOrientationAwareness = D3DKMDT_MOA_NONE;
  v31.Type.VideoOutput.SupportsSdtvModes = 0;
  v31.HpdAwareness = HpdAwarenessInterruptible;
  ChildDescriptor = DpiFdoGetChildDescriptor(a1, v9);
  if ( !ChildDescriptor )
  {
    LODWORD(v5) = -1073741810;
    v15 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v15 + 24) = -1073741810LL;
LABEL_3:
    WdLogEvent5_WdError(v15);
LABEL_33:
    memset(v33, 0, 0x48uLL);
    v33[0] = 0x480000001ELL;
    memset(&v33[1], 0, 36);
    v33[8] = *(_QWORD *)(a1 + 2536);
    LODWORD(v33[6]) = 93;
    HIDWORD(v33[6]) = v4;
    v33[7] = (unsigned int)v5;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33);
    return (unsigned int)v5;
  }
  v16 = HIBYTE(v12) & 0xF;
  if ( (unsigned int)(v16 - 5) > 1 )
  {
    if ( (_DWORD)v16 != v14 )
      return (unsigned int)v5;
    v30 = *(_DWORD *)(a1 + 3344);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v30, 0x74727044u);
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
                    *(_DWORD *)(a2 + 8) & 0xFFFFFF,
                    &v30,
                    PoolWithTag,
                    (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v29);
    if ( (int)v5 >= 0 )
    {
      v19 = v30;
      while ( v19 )
      {
        v20 = DpiFdoGetChildDescriptor(a1, PoolWithTag[--v19]);
        v21 = v20;
        if ( v20[6] )
        {
          v22 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(a1 + 24),
                  *((_DWORD *)v20 + 6),
                  *((_DWORD *)v20 + 1),
                  0,
                  0,
                  0,
                  0,
                  0,
                  (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a2 + 24));
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
                        (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v29);
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
  if ( IsInternalVideoOutput(v13) )
  {
    v4 = v25;
    goto LABEL_19;
  }
  if ( DpiFdoGetChildDescriptor(a1, *(_DWORD *)(a2 + 16)) )
  {
    if ( (v27 & 0xF000000) == 0x5000000 )
    {
      v4 = 3;
      goto LABEL_19;
    }
  }
  else
  {
    LODWORD(v5) = DpiFdoCreateChildDescriptor(a1, v26, 0, &v30, (__int128 *)&v31, 0);
    if ( (int)v5 < 0 )
    {
      v4 = 0x80000000;
      goto LABEL_32;
    }
    LOBYTE(v4) = 0;
  }
  LODWORD(v5) = DmmCreateDynamicVideoPresentTarget(
                  *(void **)(a1 + 3728),
                  *(_DWORD *)(a2 + 16),
                  *(_DWORD *)(a2 + 8) & 0xFFFFFF,
                  &v31,
                  v4,
                  (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v29);
LABEL_29:
  v4 = v29;
LABEL_30:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_32:
  if ( (int)v5 < 0 )
    goto LABEL_33;
  return (unsigned int)v5;
}
