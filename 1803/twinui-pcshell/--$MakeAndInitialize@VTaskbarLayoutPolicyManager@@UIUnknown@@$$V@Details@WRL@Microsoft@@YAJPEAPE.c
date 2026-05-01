/*
 * XREFs of ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18014547C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskbarLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180146510 (-CreateInstance@-$SimpleClassFactory@VTaskbarLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0TaskbarLayoutPolicyManager@@QEAA@XZ @ 0x180145898 (--0TaskbarLayoutPolicyManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x1801489BC (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutPolicyManager,IUnknown,>(_QWORD *a1)
{
  TaskbarLayoutPolicyManager *v2; // rax
  int v3; // edi
  TaskbarLayoutPolicyManager *v4; // rbx

  *a1 = 0LL;
  v2 = (TaskbarLayoutPolicyManager *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = TaskbarLayoutPolicyManager::TaskbarLayoutPolicyManager(v2);
    v3 = TaskbarLayoutPolicyManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(TaskbarLayoutPolicyManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(TaskbarLayoutPolicyManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
