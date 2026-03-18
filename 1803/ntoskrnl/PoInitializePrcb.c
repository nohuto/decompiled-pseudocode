/*
 * XREFs of PoInitializePrcb @ 0x14047B368
 * Callers:
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     PpmHvUseNativeAlgorithms @ 0x140171CE8 (PpmHvUseNativeAlgorithms.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

char __fastcall PoInitializePrcb(char *DeferredContext)
{
  char *v1; // rdi
  char result; // al

  v1 = DeferredContext + 23808;
  memset(DeferredContext + 23808, 0, 0x200uLL);
  v1[240] = 1;
  *((_QWORD *)v1 + 28) = PpmWmiDispatch;
  v1[208] = 2;
  *((_DWORD *)v1 + 106) = 100;
  *((_DWORD *)v1 + 105) = 100;
  v1[416] = 100;
  KeInitializeDpc((PRKDPC)(v1 + 272), (PKDEFERRED_ROUTINE)PpmPerfAction, DeferredContext);
  if ( !*((_QWORD *)v1 + 41) )
    *((_WORD *)v1 + 137) = *((_WORD *)DeferredContext + 18) + 1280;
  v1[273] = 3;
  result = PpmHvUseNativeAlgorithms();
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
