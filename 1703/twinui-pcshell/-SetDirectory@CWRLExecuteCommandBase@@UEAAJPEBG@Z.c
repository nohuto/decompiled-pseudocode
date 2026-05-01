/*
 * XREFs of ?SetDirectory@CWRLExecuteCommandBase@@UEAAJPEBG@Z @ 0x180146E10
 * Callers:
 *     <none>
 * Callees:
 *     Str_SetPtrW @ 0x1801909F0 (Str_SetPtrW.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::SetDirectory(LPWSTR *this, const unsigned __int16 *a2)
{
  __int64 result; // rax

  result = !g_pfn_Str_SetPtrW(this + 10, a2) ? 0x8007000E : 0;
  if ( (int)result >= 0 )
    *((_DWORD *)this + 10) |= 0x80u;
  return result;
}
