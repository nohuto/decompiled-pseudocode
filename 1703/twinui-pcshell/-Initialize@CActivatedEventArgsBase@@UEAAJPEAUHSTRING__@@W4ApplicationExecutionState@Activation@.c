/*
 * XREFs of ?Initialize@CActivatedEventArgsBase@@UEAAJPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@PEAUISplashScreen@456@@Z @ 0x1801928F0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18002620C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x1800472D0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivatedEventArgsBase::Initialize(__int64 a1, __int64 a2, int a3, struct IUnknown *a4)
{
  signed int v8; // edi
  __int64 v9; // rcx
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF

  v8 = *(_BYTE *)(a1 + 64) != 0 ? 0x8000FFFF : 0;
  if ( *(_BYTE *)(a1 + 64) )
  {
    RoOriginateError((unsigned int)v8, 0LL);
  }
  else
  {
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 88), &v11);
    *(_DWORD *)(a1 + 52) = a3;
    if ( a4 )
      v8 = CMarshaledInterface::Marshal((__int64 *)(a1 + 56), &GUID_ca4d975c_d4d6_43f0_97c0_0833c6391c24, a4, 2);
    if ( v8 < 0
      || (v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 16) + 80LL))(
                 a1 - 16,
                 a2,
                 a1 + 48),
          v8 < 0) )
    {
      v9 = *(_QWORD *)(a1 + 56);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 56) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    else
    {
      *(_BYTE *)(a1 + 64) = 1;
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
  }
  return (unsigned int)v8;
}
