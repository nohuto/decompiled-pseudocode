/*
 * XREFs of IsRegisterManipulationThreadPresent @ 0x1800C4588
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1801962CC (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800C4A20 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterManipulationThreadPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18026EA70 == 1 )
    return 1;
  if ( dword_18026EA70 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_18026EA70 = 2 - (v1 != 0);
  return result;
}
