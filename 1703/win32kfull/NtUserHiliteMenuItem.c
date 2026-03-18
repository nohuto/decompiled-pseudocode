/*
 * XREFs of NtUserHiliteMenuItem @ 0x1C01DB5D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxHiliteMenuItem @ 0x1C021261C (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  _QWORD v23[3]; // [rsp+38h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = 0;
  v14 = v8;
  if ( v8 )
  {
    v21 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v21;
    v22 = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004LL);
    }
    else
    {
      v17 = ValidateHmenu(a2);
      v15 = v17;
      if ( v17 && (*(_DWORD *)(v17 + 56) & 0x40) == 0 )
      {
        v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v23;
        v23[1] = v17;
        ++*(_DWORD *)(v17 + 8);
        v13 = xxxHiliteMenuItem(v14, v17, a3, a4, v21, v22);
        ThreadUnlock1(v19, v18);
      }
    }
    ThreadUnlock1(v16, v15);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
