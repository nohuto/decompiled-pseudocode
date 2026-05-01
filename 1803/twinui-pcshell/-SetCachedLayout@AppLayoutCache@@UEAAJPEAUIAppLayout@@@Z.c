/*
 * XREFs of ?SetCachedLayout@AppLayoutCache@@UEAAJPEAUIAppLayout@@@Z @ 0x1802D2560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

__int64 __fastcall AppLayoutCache::SetCachedLayout(RTL_SRWLOCK *this, struct IAppLayout *a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  wil::srwlock::lock_exclusive(this + 7, &v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v3[8]);
  LODWORD(v3) = (*(__int64 (__fastcall **)(struct IAppLayout *, GUID *, RTL_SRWLOCK *))(*(_QWORD *)a2 + 192LL))(
                  a2,
                  &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
                  v3 + 8);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return (unsigned int)v3;
}
