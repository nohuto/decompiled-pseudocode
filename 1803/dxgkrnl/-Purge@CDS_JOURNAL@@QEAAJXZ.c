/*
 * XREFs of ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00D8374
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B334C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00D8140 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ??1CCD_BTL@@AEAA@XZ @ 0x1C022735C (--1CCD_BTL@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Purge(CDS_JOURNAL *this)
{
  char *v1; // rbx
  CDS_JOURNAL **v2; // rax
  char **v3; // rcx

  v1 = (char *)this + 24;
  v2 = (CDS_JOURNAL **)*((_QWORD *)this + 4);
  if ( *v2 != (CDS_JOURNAL *)((char *)this + 24) || (v3 = (char **)v2[1], *v3 != (char *)v2) )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)v1 + 1) = v3;
    *v3 = v1;
    if ( v2 == (CDS_JOURNAL **)v1 )
      break;
    operator delete(v2);
    v2 = (CDS_JOURNAL **)*((_QWORD *)v1 + 1);
    if ( *v2 == (CDS_JOURNAL *)v1 )
    {
      v3 = (char **)v2[1];
      if ( *v3 == (char *)v2 )
        continue;
    }
    __fastfail(3u);
  }
  return 0LL;
}
