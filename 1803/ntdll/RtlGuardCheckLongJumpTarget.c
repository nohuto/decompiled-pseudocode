/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x18000B210
 * Callers:
 *     RtlRestoreContext @ 0x18000B1B0 (RtlRestoreContext.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 * Callees:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     RtlQueryProtectedPolicy @ 0x1800712C0 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x18008DC50 (bsearch_s.c)
 *     sub_18009F8D0 @ 0x18009F8D0 (sub_18009F8D0.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // bl
  __int64 v7; // rax
  rsize_t v8; // r8
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced() )
  {
    if ( !a3 )
      return 0LL;
    v6 = 1;
LABEL_15:
    *a3 = v6;
    return 0LL;
  }
  v6 = 0;
  if ( a1 < *((_QWORD *)&xmmword_18016F4E0 + 1)
    || a1 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
  {
    sub_18000EF10(a1, &v11);
  }
  else
  {
    v11 = xmmword_18016F4E0;
  }
  if ( *((_QWORD *)&v11 + 1) )
  {
    v7 = sub_18002B3EC();
    if ( !v7
      || *(_DWORD *)v7 < 0xC0u
      || (*(_DWORD *)(v7 + 144) & 0x10000) == 0
      || (Key = a1 - DWORD2(v11), (v8 = *(_QWORD *)(v7 + 184)) != 0)
      && bsearch_s(
           &Key,
           *(const void **)(v7 + 176),
           v8,
           (unsigned int)((*(_DWORD *)(v7 + 144) >> 28) + 4),
           CompareFunction,
           0LL) )
    {
LABEL_10:
      v6 = 1;
      goto LABEL_11;
    }
  }
  else if ( (int)RtlQueryProtectedPolicy(&unk_18012F360) >= 0 && v10 )
  {
    goto LABEL_10;
  }
  if ( !a2 )
    sub_18009F8D0(38LL, a1);
LABEL_11:
  if ( a3 )
    goto LABEL_15;
  return 0LL;
}
