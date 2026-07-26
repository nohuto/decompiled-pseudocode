/*
 * XREFs of ?ndisVerifySynchronousOidAfterCompletion@@YAXPEAU_NDIS_OID_REQUEST@@HPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C004232C
 * Callers:
 *     ndisSynchronousOidRequest @ 0x1C00477E8 (ndisSynchronousOidRequest_ea_1C00477E8.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 */

void __fastcall ndisVerifySynchronousOidAfterCompletion(
        ULONG_PTR BugCheckParameter3,
        int a2,
        struct _NDIS_OBJECT_HEADER *a3)
{
  int v3; // r9d
  int v4; // r9d

  v3 = *(_DWORD *)(BugCheckParameter3 + 4);
  if ( v3 && (v4 = v3 - 1) != 0 )
  {
    if ( v4 == 11
      && (*(_DWORD *)(BugCheckParameter3 + 60) > *(_DWORD *)(BugCheckParameter3 + 52)
       || *(_DWORD *)(BugCheckParameter3 + 64) > *(_DWORD *)(BugCheckParameter3 + 48)) )
    {
LABEL_10:
      ndisBugCheckEx(0x26uLL, (ULONG_PTR)a3, BugCheckParameter3, a2);
    }
  }
  else if ( *(_DWORD *)(BugCheckParameter3 + 52) > *(_DWORD *)(BugCheckParameter3 + 48) )
  {
    goto LABEL_10;
  }
  if ( a2 == 259 || *(_QWORD *)(BugCheckParameter3 + 72) )
    goto LABEL_10;
}
