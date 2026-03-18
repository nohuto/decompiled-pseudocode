/*
 * XREFs of NtUserRemoveMenu @ 0x1C01104E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C00F1334 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 */

__int64 __fastcall NtUserRemoveMenu(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL);
    v11 = 0;
  }
  else
  {
    v6 = ValidateHmenu(a1);
    v11 = 0;
    v12 = v6;
    if ( v6 )
    {
      v13 = *(_DWORD *)(v6 + 56);
      if ( (v13 & 0x40) == 0 && (v13 & 0x200) == 0 )
      {
        v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v17;
        v17[1] = v12;
        ++*(_DWORD *)(v12 + 8);
        v11 = xxxRemoveDeleteMenuHelper((struct tagMENU *)v12, a2, a3, 0);
        ThreadUnlock1(v15, v14);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
