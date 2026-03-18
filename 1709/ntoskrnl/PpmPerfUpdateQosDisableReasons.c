/*
 * XREFs of PpmPerfUpdateQosDisableReasons @ 0x140138A18
 * Callers:
 *     PpmCheckPausePpmEngineForSx @ 0x1402486EC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x140248734 (PpmCheckResumeStatisticsCollection.c)
 *     PpmPerfTelemetryWorker @ 0x1405B3C70 (PpmPerfTelemetryWorker.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1405B62EC (PpmPerfUpdateDomainPolicy.c)
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
  if ( !byte_1404018C8 )
  {
    v4 = MEMORY[0xFFFFF78000000008] - PpmPerfQosDisableAccounting;
    qword_140401818 += MEMORY[0xFFFFF78000000008] - PpmPerfQosDisableAccounting;
    if ( PpmPerfQosEnabled )
      qword_140401828 += v4;
    v5 = 0;
    v6 = &unk_140401838;
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
    if ( !PpmPerfQosDisableAccounting || PpmPerfQosDisableReasons != *a1 )
      v1 = 1;
    PpmPerfQosDisableReasons = *a1;
  }
  PpmPerfQosDisableAccounting = v3;
  return v1;
}
