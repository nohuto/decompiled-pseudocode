/*
 * XREFs of ?GetAppUserModelId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18002AB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWin32ApplicationView::GetAppUserModelId(CWin32ApplicationView *this, unsigned __int16 **a2)
{
  CClassicWindowExternal *v2; // rcx
  __int64 (__fastcall *v3)(CClassicWindowExternal *, unsigned __int16 **); // rax

  v2 = (CClassicWindowExternal *)*((_QWORD *)this + 26);
  v3 = *(__int64 (__fastcall **)(CClassicWindowExternal *, unsigned __int16 **))(*(_QWORD *)v2 + 32LL);
  if ( v3 == CClassicWindowExternal::GetAppUserModelId )
    return CClassicWindowExternal::GetAppUserModelId(v2, a2);
  else
    return v3(v2, a2);
}
