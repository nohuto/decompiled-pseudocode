/*
 * XREFs of PspInitializeSystemDlls @ 0x1408C1410
 * Callers:
 *     PspInitPhase2 @ 0x1408C12D4 (PspInitPhase2.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     PspWow64GetSharedInformation @ 0x1404EA240 (PspWow64GetSharedInformation.c)
 *     RtlFindExportedRoutineByName @ 0x140519F90 (RtlFindExportedRoutineByName.c)
 *     PsQuerySystemDllInfo @ 0x14055FF3C (PsQuerySystemDllInfo.c)
 */

__int64 PspInitializeSystemDlls()
{
  int v0; // ebx
  __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // r15
  unsigned int i; // ebp
  __int64 v6; // r14
  char *ExportedRoutineByName; // rax

  v0 = 0;
  v1 = &qword_1408E5A88;
  do
  {
    result = PsQuerySystemDllInfo(v0);
    v3 = result;
    if ( result )
    {
      v4 = *(v1 - 1);
      for ( i = 0;
            i < *(_DWORD *)v1;
            **(_QWORD **)(v4 + 8 * v6 + 8) = &ExportedRoutineByName[*(_QWORD *)(v3 + 24) - *(_QWORD *)(v3 + 32)] )
      {
        v6 = 2LL * i;
        ExportedRoutineByName = (char *)RtlFindExportedRoutineByName(*(PVOID *)(v3 + 32), *(PCSTR *)(v4 + 16LL * i));
        if ( !ExportedRoutineByName )
          KeBugCheckEx(0x6Bu, 0xFFFFFFFFC000007AuLL, 6uLL, 0LL, 0LL);
        ++i;
      }
      result = (unsigned int)(v0 - 1);
      if ( (unsigned int)result <= 1 )
      {
        result = (__int64)PspWow64GetSharedInformation(v0);
        *(_QWORD *)(result + 48) = *(_QWORD *)(v3 + 24);
      }
    }
    ++v0;
    v1 += 2;
  }
  while ( v0 < 6 );
  return result;
}
