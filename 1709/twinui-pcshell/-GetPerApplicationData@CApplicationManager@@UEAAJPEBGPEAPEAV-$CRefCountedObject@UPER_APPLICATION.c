/*
 * XREFs of ?GetPerApplicationData@CApplicationManager@@UEAAJPEBGPEAPEAV?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@Z @ 0x18000DA00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEBAJAEBQEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18001742C (-GetItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microso.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::GetPerApplicationData(__int64 a1, __int64 a2, _QWORD *a3)
{
  int Item; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *a3 = 0LL;
  v7 = 0LL;
  Item = CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::GetItem(
           a1 + 632,
           &v8,
           &v7);
  if ( Item < 0 )
  {
    v5 = v7;
  }
  else
  {
    v5 = 0LL;
    *a3 = v7;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)Item;
}
