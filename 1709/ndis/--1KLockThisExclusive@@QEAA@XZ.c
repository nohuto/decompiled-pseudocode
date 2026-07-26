/*
 * XREFs of ??1KLockThisExclusive@@QEAA@XZ @ 0x1C00BDC70
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall KLockThisExclusive::~KLockThisExclusive(KLockThisExclusive *this)
{
  KLockHolder::~KLockHolder(this);
}
