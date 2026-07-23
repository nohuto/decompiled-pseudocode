/*
 * XREFs of sub_18003B5F8 @ 0x18003B5F8
 * Callers:
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_1800473FC @ 0x1800473FC (sub_1800473FC.c)
 *     LdrShutdownProcess @ 0x180047E60 (LdrShutdownProcess.c)
 *     sub_180054DE8 @ 0x180054DE8 (sub_180054DE8.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003B6D8 @ 0x18003B6D8 (sub_18003B6D8.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 */

void __fastcall sub_18003B5F8(int a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockShared(&stru_18015D118);
  v4 = sub_18003B6D8(a2);
  RtlReleaseSRWLockShared(&stru_18015D118);
  if ( v4 )
  {
    v5 = *(__int64 **)(v4 + 40);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        ++v5;
        if ( (dword_180156A70 & 5) != 0 )
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1061,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v6,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        sub_18003B518(v6, *(_QWORD *)(a2 + 48), a1);
      }
    }
  }
}
