/*
 * XREFs of PoInitializePrcb @ 0x140411D4C
 * Callers:
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     PpmHvConsiderNative @ 0x140155908 (PpmHvConsiderNative.c)
 *     memset @ 0x140192D80 (memset.c)
 */

char __fastcall PoInitializePrcb(char *DeferredContext)
{
  char *v1; // rdi
  char result; // al

  v1 = DeferredContext + 23936;
  memset(DeferredContext + 23936, 0, 0x1D8uLL);
  v1[240] = 1;
  *((_QWORD *)v1 + 28) = PpmWmiDispatch;
  v1[208] = 2;
  *((_DWORD *)v1 + 106) = 100;
  *((_DWORD *)v1 + 105) = 100;
  v1[416] = 100;
  KeInitializeDpc((PRKDPC)(v1 + 272), (PKDEFERRED_ROUTINE)PpmPerfAction, DeferredContext);
  if ( !*((_QWORD *)v1 + 41) )
    *((_WORD *)v1 + 137) = *((_DWORD *)DeferredContext + 9) + 640;
  v1[273] = 3;
  result = PpmHvConsiderNative();
  if ( result )
  {
    *((_DWORD *)v1 + 54) = 0;
  }
  else
  {
    result = -(HvlpFlags & 2);
    *((_DWORD *)v1 + 54) = ((HvlpFlags & 2) != 0) + 1;
  }
  return result;
}
