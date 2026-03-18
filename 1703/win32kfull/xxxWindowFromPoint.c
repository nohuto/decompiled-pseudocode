/*
 * XREFs of xxxWindowFromPoint @ 0x1C00E3160
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C00E3120 (NtUserWindowFromPoint.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C0061C80 (xxxDCEWindowHitTestIndirect.c)
 *     xxxWindowHitTest2 @ 0x1C00FD4B0 (xxxWindowHitTest2.c)
 */

__int64 __fastcall xxxWindowFromPoint(struct tagPOINT a1)
{
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  struct tagWND *v7; // rcx
  HWND v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-1h] BYREF
  int v16; // [rsp+50h] [rbp+17h] BYREF
  __int64 v17; // [rsp+58h] [rbp+1Fh]
  __int128 v18; // [rsp+60h] [rbp+27h]
  int v19; // [rsp+70h] [rbp+37h]
  int v20; // [rsp+74h] [rbp+3Bh]
  __int64 v21; // [rsp+78h] [rbp+3Fh]
  int v22; // [rsp+80h] [rbp+47h]

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v4 = *ThreadWin32Thread;
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 416);
      if ( v5 )
        v2 = *(_QWORD *)(v5 + 16);
    }
  }
  v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v14;
  v14[1] = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  if ( (unsigned int)IsWindowDesktopComposed(v2) )
  {
    v6 = *(_QWORD *)(v2 + 112);
    v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v15;
    v15[1] = v6;
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    v7 = *(struct tagWND **)(v2 + 112);
    v16 = 0;
    v17 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v22 = 0;
    v18 = 0LL;
    v19 = 5;
    v8 = xxxDCEWindowHitTestIndirect(v7, a1, (__int64)&v16);
    ThreadUnlock1(v10, v9);
  }
  else
  {
    v8 = (HWND)xxxWindowHitTest2(v2);
  }
  ThreadUnlock1(v12, v11);
  return HMValidateHandleNoSecure((unsigned __int64)v8, 1);
}
