/*
 * XREFs of ??0CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800C8970
 * Callers:
 *     _dynamic_initializer_for__g_D3DModuleLoader__ @ 0x1800011A0 (_dynamic_initializer_for__g_D3DModuleLoader__.c)
 * Callees:
 *     <none>
 */

CD3DModuleLoaderInternal *__fastcall CD3DModuleLoaderInternal::CD3DModuleLoaderInternal(CD3DModuleLoaderInternal *this)
{
  CD3DModuleLoaderInternal *result; // rax

  InitializeCriticalSection(&stru_18023E550);
  hLibModule = 0LL;
  result = (CD3DModuleLoaderInternal *)&stru_18023E550;
  dword_18023E578 = -2003292404;
  return result;
}
