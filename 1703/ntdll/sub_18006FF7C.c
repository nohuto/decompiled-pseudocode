/*
 * XREFs of sub_18006FF7C @ 0x18006FF7C
 * Callers:
 *     sub_180010590 @ 0x180010590 (sub_180010590.c)
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     LdrShutdownProcess @ 0x18006FA10 (LdrShutdownProcess.c)
 *     sub_18006FD08 @ 0x18006FD08 (sub_18006FD08.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_180043C64 @ 0x180043C64 (sub_180043C64.c)
 *     sub_180070068 @ 0x180070068 (sub_180070068.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 */

void __fastcall sub_18006FF7C(int a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockShared(&stru_18015C0D8);
  v4 = sub_180070068(a2);
  RtlReleaseSRWLockShared(&stru_18015C0D8);
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
        if ( (dword_180155A10 & 5) != 0 )
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1061,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v6,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        sub_180043C64(v6, *(_QWORD *)(a2 + 48), a1);
      }
    }
  }
}
