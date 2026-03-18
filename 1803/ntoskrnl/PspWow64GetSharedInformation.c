/*
 * XREFs of PspWow64GetSharedInformation @ 0x1404EA240
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x1404EA008 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x140563200 (PspWow64InitThread.c)
 *     PsThawProcess @ 0x140565D8C (PsThawProcess.c)
 *     PspInitializeSystemDlls @ 0x1408C1410 (PspInitializeSystemDlls.c)
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
