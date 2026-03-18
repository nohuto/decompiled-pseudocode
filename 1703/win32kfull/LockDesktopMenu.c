/*
 * XREFs of LockDesktopMenu @ 0x1C0114C44
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x1C0114BE4 (xxxLoadSysDesktopMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C020E620 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockDesktopMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _DWORD *v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 || !*(_DWORD *)(a2 + 68) || !*(_QWORD *)(*(_QWORD *)(a2 + 96) + 16LL) )
    return 0LL;
  *(_DWORD *)(a2 + 56) |= 0x40u;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 40LL) + 24LL) + 16LL);
  HMChangeOwnerPheProcess(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a2, v4);
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 96) + 16LL);
  v5[14] |= 0x40u;
  HMChangeOwnerPheProcess(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v5, v4);
  v7[0] = a1;
  v7[1] = a2;
  HMAssignmentLock(v7);
  return 1LL;
}
