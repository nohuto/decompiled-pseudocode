/*
 * XREFs of ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x18010A250
 * Callers:
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1801113C4 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006D604 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800F8244 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_6ff91a5acb023164635626d4f2ce69ec___ @ 0x180103030 (CIAMGlobals--QueueViewManagementTask__lambda_6ff91a5acb023164635626d4f2ce69ec___.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x18010A3A8 (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18011CC0C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CActivationBasedAppAndGlomCollection::RemoveApplication(
        CActivationBasedAppAndGlomCollection *this,
        __int64 a2)
{
  char *v4; // rdi
  struct IUnknown *v5; // rbx
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  struct IUnknown *v9; // rdi
  PVOID v10; // rcx
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v11; // [rsp+80h] [rbp+48h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v12; // [rsp+88h] [rbp+50h] BYREF
  struct IUnknown *v13; // [rsp+90h] [rbp+58h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+60h] BYREF

  v4 = (char *)this + 8;
  v13 = *(struct IUnknown **)(*((_QWORD *)this + 1) + 8 * a2);
  v5 = v13;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
  if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(
              this,
              (struct IImmersiveApplicationInternal *)v5,
              &v11,
              &v14) >= 0 )
  {
    v6 = v11;
    v7 = *((_QWORD *)v11 + 1);
    v8 = 0LL;
    if ( v7 )
    {
      while ( 1 )
      {
        v11 = *(struct CActivationBasedAppAndGlomCollection::CGlomCollection **)(*(_QWORD *)v6 + 8 * v8);
        v9 = (struct IUnknown *)v11;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
        LODWORD(v9) = SHIsSameObject(v9, v5);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
        if ( (_DWORD)v9 )
          break;
        if ( ++v8 >= v7 )
          goto LABEL_7;
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        v6,
        v8);
LABEL_7:
      v4 = (char *)this + 8;
    }
    if ( !*((_QWORD *)v6 + 1) )
      CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        (char *)this + 40,
        v14);
  }
  v12 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v13, (__int64 *)&v12) >= 0 )
  {
    v11 = v12;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
    CIAMGlobals::QueueViewManagementTask__lambda_6ff91a5acb023164635626d4f2ce69ec___(v10, (__int64 *)&v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
    v4,
    a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
}
