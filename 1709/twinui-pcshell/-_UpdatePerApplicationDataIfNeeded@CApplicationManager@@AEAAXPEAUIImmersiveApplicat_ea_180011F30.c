/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x180011F30
 * Callers:
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x180014FE0 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 * Callees:
 *     ?GetItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEBAJAEBQEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18001742C (-GetItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microso.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  result = CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::GetItem(
             a1 + 880,
             &v9,
             &v8);
  v6 = v8;
  if ( (int)result >= 0 )
  {
    result = SHIsSameObject(a3, *(_QWORD *)(v8 + 16));
    if ( (_DWORD)result )
    {
      *(_QWORD *)(v6 + 24) = 0LL;
      v7 = *(_QWORD *)(v6 + 16);
      if ( v7 )
      {
        *(_QWORD *)(v6 + 16) = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      *(_BYTE *)(v6 + 32) = 0;
    }
  }
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return result;
}
