/*
 * XREFs of sub_1800FCA5C @ 0x1800FCA5C
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18000C3C0 (RtlCaptureStackBackTrace.c)
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_1800FCB7C @ 0x1800FCB7C (sub_1800FCB7C.c)
 *     sub_1800FD4A4 @ 0x1800FD4A4 (sub_1800FD4A4.c)
 *     sub_18010D1CC @ 0x18010D1CC (sub_18010D1CC.c)
 *     sub_18010D8A4 @ 0x18010D8A4 (sub_18010D8A4.c)
 */

signed __int64 __fastcall sub_1800FCA5C(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  PVOID *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  signed __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  RtlAcquireSRWLockShared(&qword_18015D2E0, a2, a3, a4);
  if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 && (int)sub_1800FD4A4(a1, 1LL, &v12) >= 0 )
  {
    v11 = xmmword_18015A790;
    v7 = (PVOID *)sub_18005E238(0x600uLL, 0x600uLL, 0, &v11);
    v5 = (__int64)v7;
    if ( v7 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v7, 0LL) )
      {
        v8 = sub_18010D1CC(&qword_18015D2F0, v5);
        v9 = v8;
        if ( v8 )
        {
          if ( (unsigned int)sub_1800FCB7C(v12, a2, v8) )
            v9 = 0LL;
          if ( v9 )
            sub_18010D8A4(&qword_18015D2F0, v9);
        }
      }
    }
  }
  result = RtlReleaseSRWLockShared(&qword_18015D2E0);
  if ( v5 )
  {
    v11 = xmmword_18015A790;
    return sub_18005F840(v5, &v11);
  }
  return result;
}
