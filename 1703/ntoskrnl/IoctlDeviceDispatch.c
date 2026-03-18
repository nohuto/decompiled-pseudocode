/*
 * XREFs of IoctlDeviceDispatch @ 0x140678B40
 * Callers:
 *     <none>
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VRegEnabledInJob @ 0x14067948C (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140679694 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1406799C8 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140679C08 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14067A1F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14067A4F4 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x14067A6E8 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14067A844 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14067AA04 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 */

__int64 __fastcall IoctlDeviceDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // r8
  int v8; // r9d
  unsigned int LevelPlus1; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int DifferencingHive; // eax
  void *cData; // [rsp+20h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-31h]
  unsigned int v16; // [rsp+30h] [rbp-29h] BYREF
  GUID pActivityId; // [rsp+38h] [rbp-21h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+58h] [rbp-1h] BYREF
  unsigned int *v20; // [rsp+78h] [rbp+1Fh]
  int v21; // [rsp+80h] [rbp+27h]
  int v22; // [rsp+84h] [rbp+2Bh]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = a2 + 56;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)&pActivityId.Data1 = 0LL;
  *(_QWORD *)pActivityId.Data4 = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( (unsigned int)VRegEnabledInJob(&v16) )
  {
    v5 = -1073741808;
    if ( stru_14033C400.LevelPlus1 > 2 )
    {
      v6 = *(_DWORD *)(v2 + 24);
      v22 = 0;
      v16 = v6;
      v20 = &v16;
      v21 = 4;
      TlgWrite(&stru_14033C400, &unk_1402AB538, &pActivityId, 0LL, 3u, &v19);
    }
    goto LABEL_28;
  }
  EtwActivityIdControl(1u, &ActivityId);
  LevelPlus1 = stru_14033C400.LevelPlus1;
  if ( stru_14033C400.LevelPlus1 > 4 )
  {
    v10 = *(_DWORD *)(v2 + 24);
    v22 = 0;
    v16 = v10;
    v20 = &v16;
    v21 = 4;
    TlgWrite(&stru_14033C400, &unk_1402AB5BE, &pActivityId, &ActivityId, 3u, &v19);
    LevelPlus1 = stru_14033C400.LevelPlus1;
  }
  v11 = *(_DWORD *)(v2 + 24);
  if ( v11 == 2228228 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlInitializeJobForVreg(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v7,
                         v8,
                         cData,
                         (ULONGLONG)pData);
    goto LABEL_27;
  }
  switch ( *(_DWORD *)(v2 + 24) )
  {
    case 0x220008:
      LOBYTE(v7) = *(_BYTE *)(a2 + 64);
      DifferencingHive = VrpHandleIoctlLoadDifferencingHive(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v7);
      goto LABEL_27;
    case 0x22000C:
      LOBYTE(v7) = *(_BYTE *)(a2 + 64);
      DifferencingHive = VrpHandleIoctlCreateNamespaceNode(
                           *(_QWORD *)(a2 + 24),
                           *(_DWORD *)(v2 + 16),
                           v7,
                           v8,
                           cData,
                           (__int64)pData);
      goto LABEL_27;
    case 0x220010:
      LOBYTE(v7) = *(_BYTE *)(a2 + 64);
      DifferencingHive = VrpHandleIoctlModifyFlags(
                           *(_QWORD *)(a2 + 24),
                           *(_DWORD *)(v2 + 16),
                           v7,
                           v8,
                           (__int64)cData,
                           (__int64)pData);
      goto LABEL_27;
    case 0x220014:
      LOBYTE(v7) = *(_BYTE *)(a2 + 64);
      DifferencingHive = VrpHandleIoctlCreateMultipleNamespaceNodes(
                           *(_QWORD *)(a2 + 24),
                           *(_DWORD *)(v2 + 16),
                           v7,
                           v8,
                           (_DWORD)cData,
                           (__int64)pData);
      goto LABEL_27;
    case 0x220018:
      LOBYTE(v7) = *(_BYTE *)(a2 + 64);
      DifferencingHive = VrpHandleIoctlUnloadDynamicallyLoadedHives(
                           *(_QWORD *)(a2 + 24),
                           *(_DWORD *)(v2 + 16),
                           v7,
                           v8,
                           cData,
                           (__int64)pData);
      goto LABEL_27;
    case 0x22001C:
      LOBYTE(v7) = *(_BYTE *)(a2 + 64);
      DifferencingHive = VrpHandleIoctlGetVirtualRootKey(
                           *(_QWORD *)(a2 + 24),
                           *(_DWORD *)(v2 + 16),
                           v7,
                           v8,
                           *(_QWORD *)(a2 + 24),
                           v3);
      goto LABEL_27;
    case 0x220020:
      LOBYTE(v7) = *(_BYTE *)(a2 + 64);
      DifferencingHive = VrpHandleIoctlLoadDifferencingHiveForHost(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v7);
      goto LABEL_27;
    case 0x220024:
      LOBYTE(v7) = *(_BYTE *)(a2 + 64);
      DifferencingHive = VrpHandleIoctlUnloadDifferencingHiveForHost(
                           *(_QWORD *)(a2 + 24),
                           *(unsigned int *)(v2 + 16),
                           v7);
LABEL_27:
      v5 = DifferencingHive;
      goto LABEL_28;
  }
  if ( LevelPlus1 > 2 )
  {
    v22 = 0;
    v20 = &v16;
    v16 = v11;
    v21 = 4;
    TlgWrite(&stru_14033C400, &unk_1402AB5E3, &pActivityId, 0LL, 3u, &v19);
  }
  v5 = -1073741808;
LABEL_28:
  *(_DWORD *)(a2 + 48) = v5;
  IofCompleteRequest((PIRP)a2, 0);
  if ( stru_14033C400.LevelPlus1 > 4 )
  {
    v22 = 0;
    v20 = &v16;
    v16 = v5;
    v21 = 4;
    TlgWrite(&stru_14033C400, &unk_1402AB57A, &pActivityId, 0LL, 3u, &v19);
  }
  return v5;
}
