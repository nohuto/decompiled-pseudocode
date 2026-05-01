/*
 * XREFs of ??_GCImmersiveAppArray@@UEAAPEAXI@Z @ 0x180080AC0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180080970.c)
 * Callees:
 *     ?Release@CEnumerableObjectCollection@@UEAAKXZ @ 0x180080E30 (-Release@CEnumerableObjectCollection@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

CImmersiveAppArray *__fastcall CImmersiveAppArray::`scalar deleting destructor'(CImmersiveAppArray *this, char a2)
{
  CEnumerableObjectCollection *v4; // rcx
  unsigned int (__fastcall *v5)(CEnumerableObjectCollection *__hidden); // rax

  v4 = (CEnumerableObjectCollection *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    v5 = *(unsigned int (__fastcall **)(CEnumerableObjectCollection *__hidden))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CEnumerableObjectCollection::Release )
      CEnumerableObjectCollection::Release(v4);
    else
      v5(v4);
  }
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
