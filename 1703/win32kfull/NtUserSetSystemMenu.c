/*
 * XREFs of NtUserSetSystemMenu @ 0x1C0133580
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetSystemMenu @ 0x1C0133650 (xxxSetSystemMenu.c)
 */

__int64 __fastcall NtUserSetSystemMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v16;
    v16[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    v11 = ValidateHmenu(a2);
    if ( v11 )
    {
      v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v17;
      v17[1] = v11;
      ++*(_DWORD *)(v11 + 8);
      v9 = xxxSetSystemMenu(v10);
      ThreadUnlock1(v14, v13);
    }
    ThreadUnlock1(v12, v11);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
