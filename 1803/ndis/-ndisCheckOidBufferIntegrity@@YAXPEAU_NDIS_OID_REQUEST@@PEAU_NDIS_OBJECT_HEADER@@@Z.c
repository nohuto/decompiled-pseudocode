/*
 * XREFs of ?ndisCheckOidBufferIntegrity@@YAXPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0043148
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

void __fastcall ndisCheckOidBufferIntegrity(_DWORD *BugCheckParameter3, struct _NDIS_OBJECT_HEADER *a2)
{
  int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // r8d

  v2 = BugCheckParameter3[1];
  if ( (v2 & 0xFFFFFFFD) != 0 )
  {
    if ( v2 != 12 )
      return;
    v3 = BugCheckParameter3[13];
    v4 = BugCheckParameter3[15];
  }
  else
  {
    v3 = BugCheckParameter3[12];
    v4 = BugCheckParameter3[13];
  }
  if ( v4 > v3 )
    ndisBugCheckEx(0x1DuLL, (ULONG_PTR)a2, (ULONG_PTR)BugCheckParameter3, 0LL);
}
