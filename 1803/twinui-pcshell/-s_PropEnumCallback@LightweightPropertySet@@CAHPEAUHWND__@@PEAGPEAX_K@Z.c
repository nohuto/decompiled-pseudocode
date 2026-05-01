/*
 * XREFs of ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1801E22B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x18004EA40 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA-AV-$ComPtr@V-$CRefCount.c)
 *     ??$_Add@$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x1800836E0 (--$_Add@$$QEAV-$ComPtr@V-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180087690 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z @ 0x1801E221C (-s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightweightPropertySet::s_PropEnumCallback(
        HWND a1,
        const unsigned __int16 *a2,
        HANDLE a3,
        __int64 a4)
{
  int v5; // ebp
  _DWORD *v7; // rbx
  HRESULT v8; // eax
  IMalloc *v9; // r8
  _DWORD *v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = (int)a3;
  if ( (unsigned __int64)a2 >= 0xC000 && LightweightPropertySet::s_IsMangledName(a2) )
  {
    CreateRefCountedObj<LightweightPropertySet::LightweightProperty>(&v12);
    v7 = (_DWORD *)v12;
    if ( v12 )
    {
      v8 = a2 ? Windows::Internal::String::_InitializeHelper((HSTRING *)(v12 + 8), a2) : -2147467261;
      if ( v8 >= 0 )
      {
        v7[4] = v5;
        v11 = v7;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
        CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>> &&>(
          a4,
          &v11,
          v9);
        if ( v11 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    if ( v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 1LL;
}
