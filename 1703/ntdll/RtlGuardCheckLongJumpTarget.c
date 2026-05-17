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

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // bl
  _DWORD *v7; // rax
  rsize_t v8; // r8
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  if ( qword_18016B370 )
  {
    v6 = 0;
    if ( a1 < *((_QWORD *)&xmmword_18016B4C0 + 1)
      || a1 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
    {
      sub_180034A40(a1, (__int64)&v11);
    }
    else
    {
      v11 = xmmword_18016B4C0;
    }
    if ( *((_QWORD *)&v11 + 1) )
    {
      v7 = sub_18003A72C(*((unsigned __int64 *)&v11 + 1));
      if ( !v7
        || *v7 < 0xC0u
        || (v7[36] & 0x10000) == 0
        || (Key = a1 - DWORD2(v11), (v8 = *((_QWORD *)v7 + 23)) != 0)
        && bsearch_s(&Key, *((const void **)v7 + 22), v8, (unsigned int)((v7[36] >> 28) + 4), sub_18008BC30, 0LL) )
      {
LABEL_10:
        v6 = 1;
LABEL_11:
        if ( a3 )
          *a3 = v6;
        return 0LL;
      }
    }
    else if ( (int)RtlQueryProtectedPolicy(&unk_18012F400, &v10) >= 0 && v10 )
    {
      goto LABEL_10;
    }
    if ( !a2 )
      sub_1800A9FB0(38LL, a1);
    goto LABEL_11;
  }
  if ( a3 )
    *a3 = 1;
  return 0LL;
}
