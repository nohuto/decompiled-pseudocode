/*
 * XREFs of GetUserHandedness @ 0x1C0125620
 * Callers:
 *     ?_GetNonRejectionRegion@PalmRejection@@YA?AUtagRECT@@PEAX@Z @ 0x1C01E052C (-_GetNonRejectionRegion@PalmRejection@@YA-AUtagRECT@@PEAX@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0220824 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0221524 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetUserHandedness()
{
  int v0; // eax
  int v1; // edx

  v0 = RIMIsDefaultUILanguageRTL();
  v1 = 0;
  if ( v0 )
    LOBYTE(v1) = *(_DWORD *)(gpsi + 2040LL) == 0;
  else
    LOBYTE(v1) = *(_DWORD *)(gpsi + 2040LL) != 0;
  return (unsigned int)(v1 + 1);
}
