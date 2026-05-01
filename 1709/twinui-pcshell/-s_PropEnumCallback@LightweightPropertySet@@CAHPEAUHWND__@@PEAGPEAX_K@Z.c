/*
 * XREFs of ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x18013AA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x18007752C (-Add@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18012C63C (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x18013AB24 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA-AV-$ComPtr@V-$CRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightweightPropertySet::s_PropEnumCallback(
        HWND a1,
        const unsigned __int16 *a2,
        HANDLE a3,
        __int64 a4)
{
  int v5; // ebp
  unsigned __int64 v7; // rax
  _DWORD *v8; // rbx
  int v9; // eax
  void *v10; // r8
  _DWORD *v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = (int)a3;
  if ( (unsigned __int64)a2 >= 0xC000 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
    if ( v7 > 0x14 && CompareStringOrdinal(L"LightweightProperty_", 20, a2, 20, 1) == 2 )
    {
      CreateRefCountedObj<LightweightPropertySet::LightweightProperty>(&v13);
      v8 = (_DWORD *)v13;
      if ( v13 )
      {
        v9 = a2 ? Windows::Internal::String::_InitializeHelper((HSTRING *)(v13 + 8), a2) : -2147467261;
        if ( v9 >= 0 )
        {
          v8[4] = v5;
          v12 = v8;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
          CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::Add(
            a4,
            &v12,
            v10);
          if ( v12 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      if ( v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return 1LL;
}
