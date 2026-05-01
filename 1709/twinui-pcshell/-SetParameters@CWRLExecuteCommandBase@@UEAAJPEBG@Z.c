/*
 * XREFs of ?SetParameters@CWRLExecuteCommandBase@@UEAAJPEBG@Z @ 0x18017BA40
 * Callers:
 *     <none>
 * Callees:
 *     Str_SetPtrW @ 0x1801DE3C0 (Str_SetPtrW.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::SetParameters(LPWSTR *this, const unsigned __int16 *a2)
{
  BOOL v3; // eax

  v3 = g_pfn_Str_SetPtrW(this + 11, a2);
  if ( v3 )
    *((_DWORD *)this + 14) |= 4u;
  return !v3 ? 0x8007000E : 0;
}
