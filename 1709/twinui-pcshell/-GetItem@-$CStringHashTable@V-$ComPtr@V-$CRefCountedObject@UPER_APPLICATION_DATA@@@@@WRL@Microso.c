/*
 * XREFs of ?GetItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEBAJAEBQEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18001742C
 * Callers:
 *     ?GetPerApplicationData@CApplicationManager@@UEAAJPEBGPEAPEAV?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@Z @ 0x18000DA00 (-GetPerApplicationData@CApplicationManager@@UEAAJPEBGPEAPEAV-$CRefCountedObject@UPER_APPLICATION.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18001114C (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180011D10 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x180011F30 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_180011F30.c)
 * Callees:
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18001877C (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@W.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::GetItem(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx

  v5 = *(_QWORD *)(a1 + 16);
  v6 = v5 == 0 ? 0x8002802B : 0;
  if ( v5 )
  {
    v7 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
           v5,
           *(unsigned int *)(a1 + 4),
           a2);
    v6 = *(_DWORD *)v7 != 1 ? 0x8002802B : 0;
    if ( *(_DWORD *)v7 == 1 )
    {
      v8 = *(_QWORD *)(v7 + 16);
      if ( *a3 != v8 )
      {
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v9 = *a3;
        *a3 = v8;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  return v6;
}
