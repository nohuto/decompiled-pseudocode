/*
 * XREFs of CreateTPFrame @ 0x1C019A8B0
 * Callers:
 *     xxxDoTouchpadProcessing @ 0x1C01B13B8 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C019815C (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 */

__int64 __fastcall CreateTPFrame(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  struct tagPOINTERQFRAME *v4; // rax
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = Win32AllocPoolZInit(112LL, 1718645589LL);
  if ( !v2 )
    return 0LL;
  v4 = AllocPointerQFrameList(*(_DWORD *)(a1 + 32));
  *(_QWORD *)(v2 + 96) = v4;
  if ( !v4 )
  {
    Win32FreePool(v2);
    return 0LL;
  }
  v5 = dword_1C032C390 == -1;
  v6 = dword_1C032C390 + 1;
  *(_DWORD *)(v2 + 32) = dword_1C032C390;
  if ( v5 )
    v6 = 1;
  dword_1C032C390 = v6;
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 56) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 88) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(v2 + 64) = *(_QWORD *)(a1 + 24);
  v7 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 16), 19);
  v11[0] = v2 + 104;
  v11[1] = *(_QWORD *)(v7 + 472);
  HMAssignmentLock(v11);
  v8 = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v2 + 80) = v9;
  while ( v9 )
  {
    *(_DWORD *)v9 = v8;
    v9 = *(_QWORD *)(v9 + 24);
  }
  v10 = gFrameTPListHead;
  if ( *(_UNKNOWN **)(gFrameTPListHead + 8LL) != &gFrameTPListHead )
    __fastfail(3u);
  *(_QWORD *)v2 = gFrameTPListHead;
  *(_QWORD *)(v2 + 8) = &gFrameTPListHead;
  *(_QWORD *)(v10 + 8) = v2;
  result = v2;
  gFrameTPListHead = v2;
  return result;
}
