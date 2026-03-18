/*
 * XREFs of ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00ADE50
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADC20 (-Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??1CCD_BTL@@AEAA@XZ @ 0x1C01DFABC (--1CCD_BTL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDS_JOURNAL::Purge(CDS_JOURNAL *this)
{
  char *v1; // rbx
  char **v2; // rax
  char **v3; // rcx

  v1 = (char *)this + 24;
  v2 = (char **)*((_QWORD *)this + 4);
  v3 = (char **)v2[1];
  if ( *v2 != v1 || *v3 != (char *)v2 )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)v1 + 1) = v3;
    *v3 = v1;
    if ( v2 == (char **)v1 )
      break;
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v2 = (char **)*((_QWORD *)v1 + 1);
    v3 = (char **)v2[1];
    if ( *v2 != v1 || *v3 != (char *)v2 )
      __fastfail(3u);
  }
  return 0LL;
}
