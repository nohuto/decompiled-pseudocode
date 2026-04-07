/*
 * XREFs of ?GetColorSpace@CBitmap@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180014880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetColorSpace(CBitmap *this)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // edi

  v2 = ((unsigned __int64)this + 96) & -(__int64)(this != (CBitmap *)16);
  if ( *(_BYTE *)(v2 + 0x30) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  v3 = *((_DWORD *)this + 48);
  if ( v2 && *(_BYTE *)(v2 + 48) )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  return v3;
}
