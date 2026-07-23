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

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // bp
  int v6; // eax
  char v7; // bl
  __int64 v8; // rax
  rsize_t v9; // r8
  unsigned __int64 PolicyValue; // [rsp+30h] [rbp-28h] BYREF
  PVOID BaseOfImage[2]; // [rsp+38h] [rbp-20h]
  int Key; // [rsp+78h] [rbp+20h] BYREF

  v4 = IsFastFail;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( !v6 )
  {
    if ( !IsLongJumpTarget )
      return 0;
    v7 = 1;
LABEL_15:
    *(_BYTE *)IsLongJumpTarget = v7;
    return 0;
  }
  v7 = 0;
  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18016F4E0 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18016F4E0 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18016F4F0 )
  {
    sub_18000EF10(PcValue);
  }
  else
  {
    *(_OWORD *)BaseOfImage = xmmword_18016F4E0;
  }
  if ( BaseOfImage[1] )
  {
    v8 = sub_18002B3EC(BaseOfImage[1]);
    if ( !v8
      || *(_DWORD *)v8 < 0xC0u
      || (*(_DWORD *)(v8 + 144) & 0x10000) == 0
      || (Key = (_DWORD)PcValue - LODWORD(BaseOfImage[1]), (v9 = *(_QWORD *)(v8 + 184)) != 0)
      && bsearch_s(
           &Key,
           *(const void **)(v8 + 176),
           v9,
           (unsigned int)((*(_DWORD *)(v8 + 144) >> 28) + 4),
           CompareFunction,
           0LL) )
    {
LABEL_10:
      v7 = 1;
      goto LABEL_11;
    }
  }
  else if ( RtlQueryProtectedPolicy((PGUID)&stru_18012F360, &PolicyValue) >= 0 && PolicyValue )
  {
    goto LABEL_10;
  }
  if ( !v4 )
    sub_18009F8D0(38LL, PcValue);
LABEL_11:
  if ( IsLongJumpTarget )
    goto LABEL_15;
  return 0;
}
