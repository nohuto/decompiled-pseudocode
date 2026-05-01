/*
 * XREFs of ?GetIids@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CB0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetIids(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
