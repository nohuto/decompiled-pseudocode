/*
 * XREFs of NtUserFillWindow @ 0x1C0028EF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxFillWindow @ 0x1C0028FEC (xxxFillWindow.c)
 */

__int64 __fastcall NtUserFillWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h]
  _QWORD v20[3]; // [rsp+38h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a2);
  v13 = 0;
  v14 = v8;
  if ( v8 )
  {
    v18 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v18;
    v19 = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( a3 )
    {
      if ( !a1 )
      {
        v10 = 0LL;
        goto LABEL_5;
      }
      v10 = ValidateHwnd(a1);
      if ( v10 )
      {
LABEL_5:
        v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v20;
        v20[1] = v10;
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        v13 = xxxFillWindow(v10, v14, a3, a4, v18, v19);
        ThreadUnlock1(v16, v15);
      }
    }
    ThreadUnlock1(v10, v9);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
