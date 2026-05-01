/*
 * XREFs of ?SetNoShowUI@CWRLExecuteCommandBase@@UEAAJH@Z @ 0x180146E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWRLExecuteCommandBase::SetNoShowUI(CWRLExecuteCommandBase *this, int a2)
{
  __int64 result; // rax

  *((_DWORD *)this + 15) = a2;
  result = 0LL;
  *((_DWORD *)this + 10) |= 0x100u;
  return result;
}
