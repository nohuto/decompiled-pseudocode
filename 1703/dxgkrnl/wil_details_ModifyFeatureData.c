/*
 * XREFs of wil_details_ModifyFeatureData @ 0x1C0010658
 * Callers:
 *     wil_details_RecordUsageInPropertyCache @ 0x1C0010580 (wil_details_RecordUsageInPropertyCache.c)
 *     ?Feature_DxgkrnlPrereleaseDiagnostic__private_IsEnabled@@YAHXZ @ 0x1C0011AA0 (-Feature_DxgkrnlPrereleaseDiagnostic__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        volatile signed __int32 *a1,
        __int64 (__fastcall *a2)(volatile signed __int32 *, __int64),
        __int64 a3)
{
  signed __int32 v6; // ebp
  __int64 result; // rax
  volatile signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v8 = *a1;
    v8 = *a1;
    v6 = v8;
    result = a2(&v8, a3);
    if ( !(_DWORD)result )
      break;
    if ( v6 == _InterlockedCompareExchange(a1, v8, v6) )
      return 1LL;
  }
  return result;
}
