/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x180011850
 * Callers:
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1800143FC (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 * Callees:
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180017684 (-s_LookupEntry@-$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  signed int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  v6 = *(_QWORD *)(a1 + 816);
  v11 = v5;
  result = -v6;
  v8 = v6 == 0 ? 0x8002802B : 0;
  if ( !v6
    || (result = CSimpleHashTable<unsigned short const *,PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                   v6,
                   *(unsigned int *)(a1 + 804),
                   &v11),
        v9 = result + 16,
        v8 = *(_DWORD *)result != 1 ? 0x8002802B : 0,
        *(_DWORD *)result != 1) )
  {
    v9 = v11;
  }
  if ( v8 >= 0 )
  {
    result = SHIsSameObject(a3, *(_QWORD *)v9);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(v9 + 8) = 0LL;
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 )
      {
        *(_QWORD *)v9 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      *(_BYTE *)(v9 + 16) = 0;
    }
  }
  return result;
}
