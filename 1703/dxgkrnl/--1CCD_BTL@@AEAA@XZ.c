/*
 * XREFs of ??1CCD_BTL@@AEAA@XZ @ 0x1C01DFABC
 * Callers:
 *     DxgkUnload @ 0x1C01910D0 (DxgkUnload.c)
 * Callees:
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00ADE50 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 */

void __fastcall CCD_BTL::~CCD_BTL(struct _D3DKMT_GETPATHSMODALITY **this)
{
  CDS_JOURNAL::Purge((CDS_JOURNAL *)(this + 12));
  CCD_TOPOLOGY::~CCD_TOPOLOGY(this);
}
