/*
 * XREFs of _ReplyMessage @ 0x1C00F5F20
 * Callers:
 *     <none>
 * Callees:
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 */

__int64 __fastcall ReplyMessage(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ecx
  __int64 v4; // rax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int CurrentThreadDpiAwarenessContext; // [rsp+28h] [rbp-80h]
  BOOL v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+50h] [rbp-58h] BYREF
  __int64 v14; // [rsp+58h] [rbp-50h]
  int v15; // [rsp+68h] [rbp-40h] BYREF
  __int64 v16; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp-30h]
  __int64 v18; // [rsp+80h] [rbp-28h]

  v2 = *(_QWORD *)(gptiCurrent + 464LL);
  if ( !v2 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 84);
  if ( (v3 & 1) != 0 )
    return 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  if ( v4 )
  {
    *(_QWORD *)(v2 + 72) = a1;
    *(_DWORD *)(v2 + 84) = v3 | 1;
    SetWakeBit(v4, 0x200u);
  }
  else if ( (v3 & 0x100) != 0 )
  {
    v6 = v3 | 1;
    *(_DWORD *)(v2 + 84) = v6;
    if ( (v6 & 4) == 0 )
    {
      v18 = a1;
      v7 = 33;
      if ( (v6 & 0x400) != 0 )
        v7 = 289;
      v8 = *(_QWORD *)(v2 + 112);
      v15 = v7;
      v16 = *(_QWORD *)(v2 + 48);
      v17 = *(_QWORD *)(v2 + 56);
      v13 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v13;
      v14 = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      v12 = (*(_WORD *)(v2 + 86) & 1) == 0;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      xxxInterSendMsgEx(
        *(_QWORD *)(v2 + 112),
        *(unsigned int *)(v2 + 104),
        0LL,
        0LL,
        0LL,
        CurrentThreadDpiAwarenessContext,
        *(_QWORD *)(v2 + 64),
        &v15,
        1,
        v12,
        v13,
        v14);
      ThreadUnlock1(v10, v9);
    }
  }
  return 1LL;
}
