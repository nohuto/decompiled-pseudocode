/*
 * XREFs of ??0StoredFailureInfo@wil@@QEAA@XZ @ 0x18001D37C
 * Callers:
 *     ??0?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017F004 (--0-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 * Callees:
 *     memset @ 0x180194E50 (memset.c)
 */

wil::StoredFailureInfo *__fastcall wil::StoredFailureInfo::StoredFailureInfo(wil::StoredFailureInfo *this)
{
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  memset(this, 0, 0x90uLL);
  return this;
}
