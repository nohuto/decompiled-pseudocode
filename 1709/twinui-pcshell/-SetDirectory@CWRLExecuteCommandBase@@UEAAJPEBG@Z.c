/*
 * XREFs of ?SetDirectory@CWRLExecuteCommandBase@@UEAAJPEBG@Z @ 0x18017BAB0
 * Callers:
 *     <none>
 * Callees:
 *     Str_SetPtrW @ 0x1801DE3C0 (Str_SetPtrW.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::SetDirectory(LPWSTR *this, const unsigned __int16 *a2)
{
  BOOL v3; // eax

  v3 = g_pfn_Str_SetPtrW(this + 12, a2);
  if ( v3 )
    *((_DWORD *)this + 14) |= 0x80u;
  return !v3 ? 0x8007000E : 0;
}
