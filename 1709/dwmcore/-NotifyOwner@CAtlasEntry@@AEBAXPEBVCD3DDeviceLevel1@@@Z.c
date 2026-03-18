/*
 * XREFs of ?NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDeviceLevel1@@@Z @ 0x1801CF588
 * Callers:
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801B3A14 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x1801B3B48 (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasEntry::NotifyOwner(CAtlasEntry *this, const struct CD3DDeviceLevel1 *a2)
{
  void (__fastcall ***v3)(_QWORD, const struct CD3DDeviceLevel1 *); // rcx
  bool v4; // zf
  void (__fastcall **v5)(_QWORD, const struct CD3DDeviceLevel1 *); // rax

  v3 = (void (__fastcall ***)(_QWORD, const struct CD3DDeviceLevel1 *))*((_QWORD *)this + 1);
  if ( v3 )
  {
    v4 = *(_QWORD *)this == 0LL;
    v5 = *v3;
    if ( v4 )
      v5[1](v3, a2);
    else
      (*v5)(v3, a2);
  }
}
