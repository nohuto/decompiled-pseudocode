/*
 * XREFs of ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0006D0C
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C008725C (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C009F354 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGPROCESS::CreateResourceHandleSafe(DXGPROCESS *this, struct DXGRESOURCE *a2)
{
  char *v2; // rsi

  v2 = (char *)this + 168;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 168));
  *((_DWORD *)a2 + 4) = HMGRTABLE::AllocHandle((char *)this + 192, a2, 4LL);
  DxgkReferenceDxgResource(a2);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
