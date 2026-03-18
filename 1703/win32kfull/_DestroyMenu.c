/*
 * XREFs of _DestroyMenu @ 0x1C0042DC0
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0042670 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MNFreeItem @ 0x1C0042C60 (MNFreeItem.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 *     xxxGetSystemMenu @ 0x1C00C1EA0 (xxxGetSystemMenu.c)
 *     NtUserDestroyMenu @ 0x1C0108230 (NtUserDestroyMenu.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0111624 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0114BE4 (xxxLoadSysDesktopMenu.c)
 *     xxxSetSystemMenu @ 0x1C0133650 (xxxSetSystemMenu.c)
 * Callees:
 *     MNFreeItem @ 0x1C0042C60 (MNFreeItem.c)
 */

__int64 __fastcall DestroyMenu(struct tagMENU *a1)
{
  int v2; // edi
  __int64 i; // rsi
  void *v4; // r8
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)HMMarkObjectDestroy() )
  {
    v2 = *((_DWORD *)a1 + 17);
    for ( i = *((_QWORD *)a1 + 12); v2; --v2 )
    {
      MNFreeItem(a1, i, 1);
      i += 152LL;
    }
    v4 = (void *)*((_QWORD *)a1 + 12);
    if ( v4 )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v4);
      *((_QWORD *)a1 + 12) = 0LL;
      *((_DWORD *)a1 + 17) = 0;
    }
    v5 = *((_QWORD *)a1 + 3);
    v7 = 0LL;
    LockObjectAssignment(&v7, v5);
    HMAssignmentUnlock((char *)a1 + 88);
    HMFreeObject(a1);
    UnlockObjectAssignment(&v7);
  }
  return 1LL;
}
