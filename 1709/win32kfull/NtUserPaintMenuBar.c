/*
 * XREFs of NtUserPaintMenuBar @ 0x1C0081140
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxPaintMenuBar @ 0x1C0080FE0 (xxxPaintMenuBar.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, HDC a2, int a3, int a4, signed int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  _QWORD v18[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v13 = 0;
  if ( v10 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v18;
    v18[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( (*(_BYTE *)(v10 + 71) & 0xC0) != 0x40 )
    {
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v17 = 1004LL;
        goto LABEL_12;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v13 = xxxPaintMenuBar(v10, a2, a3, a4, a5, a6);
LABEL_8:
        ThreadUnlock1(v15, v14);
        goto LABEL_9;
      }
    }
    v17 = 87LL;
LABEL_12:
    UserSetLastError(v17, v11);
    goto LABEL_8;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v13;
}
