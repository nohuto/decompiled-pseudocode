/*
 * XREFs of NtUserIsChildWindowDpiMessageEnabled @ 0x1C00D9F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsChildWindowDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r10
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    v8 = 0LL;
    v9 = gptiCurrent;
    v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v16;
    v16[1] = v2;
    v10 = *(_DWORD *)(v2 + 368);
    ++*(_DWORD *)(v7 + 8);
    if ( (v10 & 0xF) == 2 )
    {
      v11 = v7;
      do
      {
        v9 = *(_QWORD *)(v11 + 104);
        if ( v9 )
        {
          v12 = *(_QWORD *)(v11 + 24);
          v13 = 0LL;
          if ( v12 )
          {
            v14 = *(_QWORD *)(v12 + 8);
            if ( v14 )
              v13 = *(_QWORD *)(v14 + 16);
          }
          if ( v9 == v13 )
            break;
        }
        v11 = *(_QWORD *)(v11 + 104);
      }
      while ( v9 );
      if ( v7 == v11 )
      {
        v8 = 1LL;
      }
      else if ( v11 && (*(_DWORD *)(v11 + 304) & 0x40000000) != 0 )
      {
        v8 = 1LL;
      }
    }
    ThreadUnlock1(v9, v7);
    v6 = v8;
  }
  UserSessionSwitchLeaveCrit(v3, v7, v4, v5);
  return v6;
}
