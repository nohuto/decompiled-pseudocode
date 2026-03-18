/*
 * XREFs of ??0CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800CA578
 * Callers:
 *     _dynamic_initializer_for__g_D3DModuleLoader__ @ 0x180002800 (_dynamic_initializer_for__g_D3DModuleLoader__.c)
 * Callees:
 *     <none>
 */

CD3DModuleLoaderInternal *__fastcall CD3DModuleLoaderInternal::CD3DModuleLoaderInternal(CD3DModuleLoaderInternal *this)
{
  CD3DModuleLoaderInternal *result; // rax

  InitializeCriticalSection(&stru_1802D6450);
  hLibModule = 0LL;
  result = (CD3DModuleLoaderInternal *)&stru_1802D6450;
  dword_1802D6478 = -2003292404;
  return result;
}
