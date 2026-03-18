/*
 * XREFs of ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C0069988
 * Callers:
 *     ??1VIDMM_DEVICE_PAGING_QUEUE@@QEAA@XZ @ 0x1C00023D0 (--1VIDMM_DEVICE_PAGING_QUEUE@@QEAA@XZ.c)
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0002DD0 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VIDMM_PAGING_QUEUE::~VIDMM_PAGING_QUEUE(struct _LIST_ENTRY *this, __int64 a2, __int64 a3)
{
  VIDMM_PAGING_QUEUE::Destroy(this, a2, a3);
}
