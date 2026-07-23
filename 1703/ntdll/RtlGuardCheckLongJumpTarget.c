/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x180079EB0
 * Callers:
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     RtlRestoreContext @ 0x180086E50 (RtlRestoreContext.c)
 * Callees:
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_18003A72C @ 0x18003A72C (sub_18003A72C.c)
 *     RtlQueryProtectedPolicy @ 0x180077890 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x1800987F0 (bsearch_s.c)
 *     sub_1800A9FB0 @ 0x1800A9FB0 (sub_1800A9FB0.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // bp
  char v6; // bl
  _DWORD *v7; // rax
  rsize_t v8; // r8
  unsigned __int64 PolicyValue; // [rsp+30h] [rbp-28h] BYREF
  PVOID BaseOfImage[2]; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  v4 = IsFastFail;
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    v6 = 0;
    if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18016B4C0 + 1)
      || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18016B4C0 + 1)
                                    + (unsigned __int64)(unsigned int)qword_18016B4D0 )
    {
      sub_180034A40(PcValue, (__int64)BaseOfImage);
    }
    else
    {
      *(_OWORD *)BaseOfImage = xmmword_18016B4C0;
    }
    if ( BaseOfImage[1] )
    {
      v7 = sub_18003A72C(BaseOfImage[1]);
      if ( !v7
        || *v7 < 0xC0u
        || (v7[36] & 0x10000) == 0
        || (Key = (_DWORD)PcValue - LODWORD(BaseOfImage[1]), (v8 = *((_QWORD *)v7 + 23)) != 0)
        && bsearch_s(&Key, *((const void **)v7 + 22), v8, (unsigned int)((v7[36] >> 28) + 4), sub_18008BC30, 0LL) )
      {
LABEL_10:
        v6 = 1;
LABEL_11:
        if ( IsLongJumpTarget )
          *(_BYTE *)IsLongJumpTarget = v6;
        return 0;
      }
    }
    else if ( RtlQueryProtectedPolicy((PGUID)&stru_18012F400, &PolicyValue) >= 0 && PolicyValue )
    {
      goto LABEL_10;
    }
    if ( !v4 )
      sub_1800A9FB0(38LL, PcValue);
    goto LABEL_11;
  }
  if ( IsLongJumpTarget )
    *(_BYTE *)IsLongJumpTarget = 1;
  return 0;
}
