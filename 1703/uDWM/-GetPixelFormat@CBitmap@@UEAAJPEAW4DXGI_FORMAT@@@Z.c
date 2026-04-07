/*
 * XREFs of ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800148E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetPixelFormat(enum DXGI_FORMAT *this, enum DXGI_FORMAT *a2)
{
  unsigned int v2; // ebp
  char *v5; // rbx

  v2 = 0;
  if ( this == (enum DXGI_FORMAT *)16 )
    v5 = 0LL;
  else
    v5 = (char *)(this + 24);
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( a2 )
    *a2 = this[46];
  else
    v2 = -2147024809;
  if ( v5[48] )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  return v2;
}
