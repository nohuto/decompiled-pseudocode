/*
 * XREFs of ??4?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092EC0
 * Callers:
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18003C210 (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     ?_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18003C5E4 (-_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV-$ComPtr@V-$CRefCountedObject@UPER_APPLIC.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x18010F090 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18010F198 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@UEAAKXZ @ 0x180092F20 (-Release@-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>::operator=(
        void **a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  void *v4; // rcx
  void (*v5)(void); // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != (void *)*a2 )
  {
    v7 = *a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v7);
    v4 = *a1;
    *a1 = (void *)v2;
    if ( v4 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
      if ( (char *)v5 == (char *)CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>::Release )
        CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>::Release(v4);
      else
        v5();
    }
  }
  return a1;
}
