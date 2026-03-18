/*
 * XREFs of _DestroyMenu @ 0x1C009C5C0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxGetSystemMenu @ 0x1C007C624 (xxxGetSystemMenu.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00976B4 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MNFreeItem @ 0x1C009C568 (MNFreeItem.c)
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 *     NtUserDestroyMenu @ 0x1C01143F0 (NtUserDestroyMenu.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C011DAE4 (xxxLoadSysDesktopMenu.c)
 *     xxxSetSystemMenu @ 0x1C0138420 (xxxSetSystemMenu.c)
 * Callees:
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C009C6A4 (-UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z.c)
 *     ?FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C009C6D4 (-FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 */

__int64 __fastcall DestroyMenu(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // esi
  struct tagMENU *v4; // rax
  void *v5; // r8
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v2 = *(_QWORD *)(a1 + 96);
    v3 = *(_DWORD *)(a1 + 68);
    while ( v3 )
    {
      *(_QWORD *)(v2 + 104) = 0LL;
      --v3;
      FreeItemString((struct tagMENU *)a1, (struct tagITEM *)v2);
      v4 = UnlockSubMenu((struct tagMENU *)a1, (struct tagMENU **)(v2 + 16));
      if ( v4 )
        DestroyMenu(v4);
      v2 += 152LL;
    }
    v5 = *(void **)(a1 + 96);
    if ( v5 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, v5);
      *(_QWORD *)(a1 + 96) = 0LL;
      *(_DWORD *)(a1 + 68) = 0;
    }
    v6 = *(_QWORD *)(a1 + 24);
    v8 = 0LL;
    LockObjectAssignment(&v8, v6);
    HMAssignmentUnlock(a1 + 88);
    HMFreeObject(a1);
    UnlockObjectAssignment(&v8);
  }
  return 1LL;
}
