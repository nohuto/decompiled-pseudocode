/*
 * XREFs of DCompositionSessionInitialize @ 0x1C0097BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0097C00 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0097CEC (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 */

__int64 __fastcall DCompositionSessionInitialize(int a1)
{
  __int64 result; // rax

  result = DirectComposition::CConnection::OnSessionCreation(a1);
  if ( (int)result >= 0 )
    return DirectComposition::CSynchronizationManager::OnSessionCreation();
  return result;
}
