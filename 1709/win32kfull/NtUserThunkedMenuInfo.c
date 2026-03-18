/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C013A1C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSetMenuInfo @ 0x1C007D540 (xxxSetMenuInfo.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[3]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v16[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v17; // [rsp+70h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v16[0] = *(_OWORD *)a2;
  v16[1] = *(_OWORD *)(a2 + 16);
  v17 = *(_QWORD *)(a2 + 32);
  v4 = ValidateHmenu(a1);
  v9 = v4;
  v10 = 0;
  if ( v4 && (*(_DWORD *)(v4 + 56) & 0x40) == 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7, v8);
    v15[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v15;
    v15[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v10 = xxxSetMenuInfo(v9, (__int64)v16);
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v10;
}
