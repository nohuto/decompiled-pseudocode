/*
 * XREFs of PpmPerfUpdateQosDisableReasons @ 0x140163880
 * Callers:
 *     PpmCheckPausePpmEngineForSx @ 0x14014DDE0 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14014DE28 (PpmCheckResumeStatisticsCollection.c)
 *     PpmPerfTelemetryWorker @ 0x1405F2B50 (PpmPerfTelemetryWorker.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14061034C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfUpdateQosDisableReasons(int *a1)
{
  char v1; // dl
  __int64 v3; // r11
  __int64 v4; // r8
  unsigned int v5; // r9d
  _QWORD *v6; // rcx
  int v7; // eax

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  if ( !byte_14044CA88 )
  {
    v4 = MEMORY[0xFFFFF78000000008] - PpmPerfQosDisableAccounting;
    qword_14044C9D8 += MEMORY[0xFFFFF78000000008] - PpmPerfQosDisableAccounting;
    if ( PpmPerfQosEnabled )
      qword_14044C9E8 += v4;
    v5 = 0;
    v6 = &unk_14044C9F8;
    do
    {
      v7 = PpmPerfQosDisableReasons;
      if ( _bittest(&v7, v5) )
        *v6 += v4;
      ++v5;
      ++v6;
    }
    while ( v5 < 9 );
  }
  if ( a1 )
  {
    if ( PpmPerfQosDisableReasons != *a1 || !PpmPerfQosDisableAccounting )
      v1 = 1;
    PpmPerfQosDisableReasons = *a1;
  }
  PpmPerfQosDisableAccounting = v3;
  return v1;
}
