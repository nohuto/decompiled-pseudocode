/*
 * XREFs of ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01208FC
 * Callers:
 *     xxxUserProcessCallout @ 0x1C00340E0 (xxxUserProcessCallout.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0120FC8 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 */

void __fastcall InputExtensibilityCallout::CloseCoreMsgPort(InputExtensibilityCallout *this)
{
  InputExtensibilityCallout *v1; // rdi
  void *v2; // rcx

  v1 = gpInputExtensibilityCallout;
  RIMLockExclusive((__int64)gpInputExtensibilityCallout + 24);
  v2 = (void *)*((_QWORD *)v1 + 5);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)v1 + 5) = 0LL;
  }
  *((_QWORD *)v1 + 4) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 24, 0LL);
  KeLeaveCriticalRegion();
}
