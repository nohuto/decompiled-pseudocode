/*
 * XREFs of ??1CCD_BTL@@AEAA@XZ @ 0x1C022735C
 * Callers:
 *     DxgkUnload @ 0x1C0197330 (DxgkUnload.c)
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00D8374 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 */

void __fastcall CCD_BTL::~CCD_BTL(CCD_BTL *this)
{
  CDS_JOURNAL::Purge((CCD_BTL *)((char *)this + 96));
  CCD_TOPOLOGY::~CCD_TOPOLOGY(this);
}
