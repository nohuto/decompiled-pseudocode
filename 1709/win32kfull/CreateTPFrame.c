/*
 * XREFs of CreateTPFrame @ 0x1C01A64E8
 * Callers:
 *     xxxDoTouchpadProcessing @ 0x1C01B47C0 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C01A3CFC (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 */

__int64 __fastcall CreateTPFrame(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  struct tagPOINTERQFRAME *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = Win32AllocPoolZInit(112LL, 1718645589LL);
  if ( !v2 )
    return 0LL;
  v4 = AllocPointerQFrameList(*(_DWORD *)(a1 + 32));
  *(_QWORD *)(v2 + 96) = v4;
  if ( !v4 )
  {
    Win32FreePool(v2, v5, v6);
    return 0LL;
  }
  v8 = 1LL;
  v9 = dword_1C0327610 == -1;
  v10 = dword_1C0327610 + 1;
  *(_DWORD *)(v2 + 32) = dword_1C0327610;
  if ( v9 )
    v10 = 1;
  LOBYTE(v8) = 19;
  dword_1C0327610 = v10;
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 56) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 88) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(v2 + 64) = *(_QWORD *)(a1 + 24);
  v11 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 16), v8, v6, v7);
  v15[0] = v2 + 104;
  v15[1] = *(_QWORD *)(v11 + 472);
  HMAssignmentLock(v15);
  v12 = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(a1 + 40);
  v13 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v2 + 80) = v13;
  while ( v13 )
  {
    *(_DWORD *)v13 = v12;
    v13 = *(_QWORD *)(v13 + 24);
  }
  v14 = gFrameTPListHead;
  if ( *(_UNKNOWN **)(gFrameTPListHead + 8LL) != &gFrameTPListHead )
    __fastfail(3u);
  *(_QWORD *)v2 = gFrameTPListHead;
  *(_QWORD *)(v2 + 8) = &gFrameTPListHead;
  *(_QWORD *)(v14 + 8) = v2;
  result = v2;
  gFrameTPListHead = v2;
  return result;
}
