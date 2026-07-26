/*
 * XREFs of ?ndisVerifySynchronousOidAfterCompletion@@YAXPEAU_NDIS_OID_REQUEST@@HPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0043390
 * Callers:
 *     ndisSynchronousOidRequest @ 0x1C0048A94 (ndisSynchronousOidRequest_ea_1C0048A94.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

void __fastcall ndisVerifySynchronousOidAfterCompletion(
        ULONG_PTR BugCheckParameter3,
        int a2,
        struct _NDIS_OBJECT_HEADER *a3)
{
  int v3; // r9d
  int v4; // r9d
  bool v5; // cc

  v3 = *(_DWORD *)(BugCheckParameter3 + 4);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 11 )
        goto LABEL_10;
      if ( *(_DWORD *)(BugCheckParameter3 + 60) > *(_DWORD *)(BugCheckParameter3 + 52) )
        goto LABEL_12;
      v5 = *(_DWORD *)(BugCheckParameter3 + 64) <= *(_DWORD *)(BugCheckParameter3 + 48);
    }
    else
    {
      v5 = *(_DWORD *)(BugCheckParameter3 + 52) <= *(_DWORD *)(BugCheckParameter3 + 48);
    }
    if ( !v5 )
      goto LABEL_12;
  }
  else if ( *(_DWORD *)(BugCheckParameter3 + 52) > *(_DWORD *)(BugCheckParameter3 + 48) )
  {
    goto LABEL_12;
  }
LABEL_10:
  if ( a2 == 259 || *(_QWORD *)(BugCheckParameter3 + 72) )
LABEL_12:
    ndisBugCheckEx(0x26uLL, (ULONG_PTR)a3, BugCheckParameter3, a2);
}
