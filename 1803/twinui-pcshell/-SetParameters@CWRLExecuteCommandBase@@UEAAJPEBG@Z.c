/*
 * XREFs of ?SetParameters@CWRLExecuteCommandBase@@UEAAJPEBG@Z @ 0x180224DF0
 * Callers:
 *     <none>
 * Callees:
 *     Str_SetPtrW @ 0x18030A8C0 (Str_SetPtrW.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::SetParameters(LPWSTR *this, const unsigned __int16 *a2)
{
  BOOL v3; // eax
  unsigned int v4; // edx

  v3 = g_pfn_Str_SetPtrW(this + 11, a2);
  v4 = 0;
  if ( v3 )
    *((_DWORD *)this + 14) |= 4u;
  else
    return (unsigned int)-2147024882;
  return v4;
}
