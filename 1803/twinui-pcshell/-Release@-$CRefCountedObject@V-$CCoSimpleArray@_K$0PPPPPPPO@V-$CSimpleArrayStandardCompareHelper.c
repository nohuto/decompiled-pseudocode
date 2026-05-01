/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@UEAAKXZ @ 0x180092F20
 * Callers:
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18003C210 (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     ?_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18003C5E4 (-_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV-$ComPtr@V-$CRefCountedObject@UPER_APPLIC.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092EC0 (--4-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHe.c)
 *     ??1?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F87EC (--1-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHe.c)
 *     ??_GHashBucket@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAPEAXI@Z @ 0x180105754 (--_GHashBucket@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x18010F090 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18010F198 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  void *v4; // rcx

  v2 = _InterlockedDecrement(a1 + 10);
  if ( !v2 && a1 )
  {
    v4 = (void *)*((_QWORD *)a1 + 1);
    if ( v4 )
    {
      CoTaskMemFree(v4);
      *((_QWORD *)a1 + 1) = 0LL;
    }
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
    operator delete((void *)a1, (const struct std::nothrow_t *)0x30);
  }
  return v2;
}
