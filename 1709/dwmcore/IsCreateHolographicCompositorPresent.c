/*
 * XREFs of IsCreateHolographicCompositorPresent @ 0x1800C47C0
 * Callers:
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x1801C2B70 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800C4A20 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateHolographicCompositorPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18026EA8C == 1 )
    return 1;
  if ( dword_18026EA8C == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_18026EA8C = 2 - (v1 != 0);
  return result;
}
