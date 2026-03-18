/*
 * XREFs of ?GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z @ 0x180157C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::GetNumberOfDisplays(CDesktopRenderTarget *this, unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  __int64 result; // rax

  v2 = *((_DWORD *)this + 8);
  v3 = -1;
  if ( v2 >= 0 )
    v3 = v2;
  result = (v2 >> 31) & 0x80070216;
  *a2 = v3;
  return result;
}
