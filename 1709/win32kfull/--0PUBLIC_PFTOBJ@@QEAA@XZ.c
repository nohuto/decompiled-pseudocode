/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C014323C
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0257B00 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C02697A0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this)
{
  *(_QWORD *)this = gpPFTPublic;
  return this;
}
