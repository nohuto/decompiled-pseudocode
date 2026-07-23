/*
 * XREFs of PspInitializeSystemDlls @ 0x14081F998
 * Callers:
 *     PspInitPhase2 @ 0x14081F848 (PspInitPhase2.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PsQuerySystemDllInfo @ 0x1404499AC (PsQuerySystemDllInfo.c)
 *     RtlFindExportedRoutineByName @ 0x1404C05B0 (RtlFindExportedRoutineByName.c)
 */

__int64 PspInitializeSystemDlls()
{
  int v0; // ebx
  __int64 *v1; // rsi
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r15
  unsigned int i; // ebp
  __int64 v6; // r14
  PVOID ExportedRoutineByName; // rax

  v0 = 0;
  v1 = &qword_140839728;
  do
  {
    result = PsQuerySystemDllInfo(v0);
    v3 = result;
    if ( result )
    {
      v4 = *(v1 - 1);
      for ( i = 0; i < *(_DWORD *)v1; **(_QWORD **)(v4 + 8 * v6 + 8) = result )
      {
        v6 = 2LL * i;
        ExportedRoutineByName = RtlFindExportedRoutineByName(*(PVOID *)(v3 + 32), *(PCSTR *)(v4 + 16LL * i));
        if ( !ExportedRoutineByName )
          KeBugCheckEx(0x6Bu, 0xFFFFFFFFC000007AuLL, 6uLL, 0LL, 0LL);
        ++i;
        result = (__int64)ExportedRoutineByName + *(_QWORD *)(v3 + 24) - *(_QWORD *)(v3 + 32);
      }
      switch ( v0 )
      {
        case 1:
          result = *(_QWORD *)(v3 + 24);
          qword_1407AD5F0 = result;
          break;
        case 2:
          result = *(_QWORD *)(v3 + 24);
          qword_1407AD570 = result;
          break;
        case 3:
          result = *(_QWORD *)(v3 + 24);
          qword_1407AD670 = result;
          break;
      }
    }
    ++v0;
    v1 += 2;
  }
  while ( v0 < 4 );
  return result;
}
