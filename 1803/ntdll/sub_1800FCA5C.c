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

void __fastcall sub_1800FCA5C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  RtlAcquireSRWLockShared(&stru_18015D2E0);
  if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 && (int)sub_1800FD4A4(a1, 1LL, &v9) >= 0 )
  {
    v8 = xmmword_18015A790;
    v5 = (PVOID *)sub_18005E238(0x600uLL, 0x600uLL, 0, &v8);
    v3 = (__int64)v5;
    if ( v5 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v5, 0LL) )
      {
        v6 = sub_18010D1CC(&qword_18015D2F0, v3);
        v7 = v6;
        if ( v6 )
        {
          if ( (unsigned int)sub_1800FCB7C(v9, a2, v6) )
            v7 = 0LL;
          if ( v7 )
            sub_18010D8A4(&qword_18015D2F0, v7);
        }
      }
    }
  }
  RtlReleaseSRWLockShared(&stru_18015D2E0);
  if ( v3 )
  {
    v8 = xmmword_18015A790;
    sub_18005F840(v3, &v8);
  }
}
