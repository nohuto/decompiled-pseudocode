/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x180111718
 * Callers:
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1801101D8 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18008868C (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800886F0 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        struct IUnknown *a3)
{
  struct IUnknown **v6; // rbx
  struct IUnknown **v8; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+18h] BYREF

  v9[1] = -2LL;
  v8 = 0LL;
  v9[0] = -1LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( (**a2)(a2, &GUID_068fc85a_d4d0_45b0_ab39_311de750a277, &v10) >= 0
    && (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 24LL))(v10, v9) >= 0
    && (int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
              a1 + 864,
              (__int64)v9,
              (__int64)&v8) >= 0 )
  {
    v6 = v8;
    if ( (unsigned int)SHIsSameObject(a3, v8[2]) )
    {
      v6[3] = 0LL;
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v6 + 2, 0LL);
      *((_BYTE *)v6 + 32) = 0;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease((void **)&v8);
}
