/*
 * XREFs of ?GetIids@MPCManagerClientFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180027870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClientFactory::GetIids(MPCManagerClientFactory *this, unsigned int *a2, struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x10uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    *a2 = 1;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
