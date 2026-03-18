/*
 * XREFs of ?GetDeviceTexture@CAtlasEntry@@QEBAXPEAPEAVIDeviceTexture@@@Z @ 0x1800131D4
 * Callers:
 *     ?GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180013120 (-GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasEntry::GetDeviceTexture(CAtlasEntry *this, struct IDeviceTexture **a2)
{
  __int64 v3; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 1) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 8LL) + 112LL))(*(_QWORD *)(*(_QWORD *)this + 8LL));
  (**(void (__fastcall ***)(__int64))v3)(v3);
  *a2 = (struct IDeviceTexture *)(v3 + 120);
}
