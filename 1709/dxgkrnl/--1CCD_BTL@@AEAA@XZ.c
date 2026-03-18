/*
 * XREFs of ??1CCD_BTL@@AEAA@XZ @ 0x1C01F950C
 * Callers:
 *     DxgkUnload @ 0x1C01A5BE0 (DxgkUnload.c)
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00E1244 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 */

void __fastcall CCD_BTL::~CCD_BTL(struct D3DKMT_GETPATHSMODALITY **this)
{
  CDS_JOURNAL::Purge((CDS_JOURNAL *)(this + 12));
  CCD_TOPOLOGY::~CCD_TOPOLOGY(this);
}
