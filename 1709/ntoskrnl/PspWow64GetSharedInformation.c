/*
 * XREFs of PspWow64GetSharedInformation @ 0x14045FB80
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x14045F94C (PspPrepareSystemDllInitBlock.c)
 *     PsThawProcess @ 0x14057CE6C (PsThawProcess.c)
 *     PspWow64InitThread @ 0x14058EEAC (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x14085020C (PspInitializeSystemDlls.c)
 * Callees:
 *     <none>
 */

void *__fastcall PspWow64GetSharedInformation(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &PsWowX86SharedInformation;
  if ( v1 == 1 )
    return &PsWowArm32SharedInformation;
  return 0LL;
}
