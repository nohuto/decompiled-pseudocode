/*
 * XREFs of ExpLegacyWorkerInitialization @ 0x140153904
 * Callers:
 *     ExpWorkerInitialization @ 0x14084F4D4 (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

ULONG_PTR ExpLegacyWorkerInitialization()
{
  int v0; // eax
  int v1; // ecx
  int v2; // edx
  int v3; // edx
  int v4; // eax
  __int64 v5; // rcx
  ULONG_PTR result; // rax

  v0 = ExpAdditionalCriticalWorkerThreads;
  if ( (unsigned int)ExpAdditionalCriticalWorkerThreads > 0x64 )
  {
    v0 = 100;
    ExpAdditionalCriticalWorkerThreads = 100;
  }
  v1 = ExpAdditionalDelayedWorkerThreads;
  if ( (unsigned int)ExpAdditionalDelayedWorkerThreads > 0x64 )
  {
    v1 = 100;
    ExpAdditionalDelayedWorkerThreads = 100;
  }
  v2 = 5;
  if ( (_BYTE)dword_140400130 )
    v2 = 10;
  v3 = v0 + v2;
  v4 = v1 + 7;
  v5 = KeNodeBlock[0];
  ExDelayedWorkerThreads = v4;
  ExCriticalWorkerThreads = v3;
  if ( (_UNKNOWN *)KeNodeBlock[0] == &KiNodeInit )
    v5 = 0LL;
  result = **(_QWORD **)(*(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL) + 8LL * *(unsigned __int16 *)(v5 + 146));
  if ( (result & 1) != 0 )
    result = 0LL;
  ExWorkerQueue = result;
  return result;
}
