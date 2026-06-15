/*
 * XREFs of HAUDIOSRVDIAGNOSTICS_rundown @ 0x1800D9A70
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D870 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 */

LPCRITICAL_SECTION __fastcall HAUDIOSRVDIAGNOSTICS_rundown(CAudioDGProcess *a1)
{
  LPCRITICAL_SECTION result; // rax

  result = g_ADGProcess;
  if ( a1 == *(CAudioDGProcess **)&g_ADGProcess[2].LockCount )
    return (LPCRITICAL_SECTION)CAudioDGProcess::UnlockADGProcess(a1);
  return result;
}
