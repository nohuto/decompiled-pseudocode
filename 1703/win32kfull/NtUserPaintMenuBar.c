/*
 * XREFs of NtUserPaintMenuBar @ 0x1C000D150
 * Callers:
 *     <none>
 * Callees:
 *     xxxPaintMenuBar @ 0x1C000D23C (xxxPaintMenuBar.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // r10
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+38h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v15 = 0;
  v16 = v10;
  if ( v10 )
  {
    v22 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v22;
    v23 = v10;
    v17 = *(_BYTE *)(v10 + 71);
    ++*(_DWORD *)(v16 + 8);
    if ( (v17 & 0xC0) != 0x40 )
    {
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v21 = 1004LL;
        goto LABEL_12;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v15 = xxxPaintMenuBar(v16, a2, (unsigned int)a3, (unsigned int)a4, a5, a6, v22, v23);
LABEL_8:
        ThreadUnlock1(v19, v18);
        goto LABEL_9;
      }
    }
    v21 = 87LL;
LABEL_12:
    UserSetLastError(v21);
    goto LABEL_8;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
