/*
 * XREFs of ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x180110710
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x18007472C (-Add@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x180110870 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA-AV-$ComPtr@V-$CRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightweightPropertySet::s_PropEnumCallback(HWND a1, const WCHAR *a2, HANDLE a3, __int64 a4)
{
  int v5; // r14d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  HSTRING v9; // rbx
  HRESULT v10; // edi
  HSTRING v11; // rdx
  void *v12; // r8
  HSTRING string; // [rsp+78h] [rbp+10h] BYREF
  HSTRING v15; // [rsp+88h] [rbp+20h] BYREF

  v5 = (int)a3;
  if ( (unsigned __int64)a2 >= 0xC000 )
  {
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    if ( v8 > 0x14 && CompareStringOrdinal(L"LightweightProperty_", 20, a2, 20, 1) == 2 )
    {
      CreateRefCountedObj<LightweightPropertySet::LightweightProperty>(&v15);
      v9 = v15;
      if ( v15 )
      {
        if ( a2 )
        {
          string = 0LL;
          do
            ++v7;
          while ( a2[v7] );
          if ( v7 <= 0xFFFFFFFF )
          {
            v10 = WindowsCreateString(a2, v7, &string);
            if ( v10 >= 0 )
            {
              v11 = (HSTRING)*((_QWORD *)v9 + 1);
              *((_QWORD *)v9 + 1) = string;
              WindowsDeleteString(v11);
            }
          }
          else
          {
            v10 = -2147024362;
          }
        }
        else
        {
          v10 = -2147467261;
        }
        if ( v10 >= 0 )
        {
          *((_DWORD *)v9 + 4) = v5;
          string = v9;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 8LL))(v9);
          CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::Add(
            a4,
            &string,
            v12);
          if ( string )
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 16LL))(string);
        }
      }
      if ( v9 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return 1LL;
}
