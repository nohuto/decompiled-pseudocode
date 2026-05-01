/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIImmersiveCharmsWindowManager@@UICharmWindowManagerInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18002D540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IImmersiveCharmsWindowManager,ICharmWindowManagerInternal>::`scalar deleting destructor'(
        _DWORD *Block,
        char a2)
{
  __int64 v3; // rcx

  Block[11] = -1073741823;
  v3 = *((_QWORD *)Block + 2);
  if ( v3 )
  {
    *((_QWORD *)Block + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
