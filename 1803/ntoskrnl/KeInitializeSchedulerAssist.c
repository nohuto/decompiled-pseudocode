/*
 * XREFs of KeInitializeSchedulerAssist @ 0x14089819C
 * Callers:
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeSchedulerAssist(__int64 a1)
{
  bool v1; // al
  __int64 result; // rax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 25016) )
    v1 = KiSchedulerAssistThreadFlagOverride == 1 || KiSchedulerAssistThreadFlagOverride != 2;
  KiSchedulerAssistThreadFlagEnabled = v1;
  if ( v1 )
    _interlockedbittestandset(*(volatile signed __int32 **)(a1 + 24), 0x16u);
  result = (unsigned int)(KiVpThreadSystemWorkPriority - 1);
  if ( (unsigned int)result > 0x1E )
    KiVpThreadSystemWorkPriority = 1;
  return result;
}
