/*
 * XREFs of ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x18010F090
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x180106CF0 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x180106E90 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092EC0 (--4-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHe.c)
 *     ?Release@?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@UEAAKXZ @ 0x180092F20 (-Release@-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180093BA0 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18010F198 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 */

__int64 __fastcall CApplicationManager::_DeleteApplicationData(CApplicationManager *this, const unsigned __int16 *a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 v4; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(volatile signed __int32 *); // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = 0LL;
  v4 = *((_QWORD *)this + 113);
  v12 = 0LL;
  v6 = v4 == 0 ? 0x8002802B : 0;
  if ( v4 )
  {
    v7 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
           v4,
           *((_DWORD *)this + 223),
           &v13);
    v6 = *(_DWORD *)v7 != 1 ? 0x8002802B : 0;
    if ( *(_DWORD *)v7 == 1 )
    {
      Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>::operator=(
        (void **)&v12,
        (__int64 *)(v7 + 16));
      v2 = (volatile signed __int32 *)v12;
    }
  }
  if ( (v6 & 0x80000000) == 0 )
  {
    if ( *((_QWORD *)v2 + 2) != 1LL )
    {
      v6 = -2147024809;
      goto LABEL_12;
    }
    if ( *((_QWORD *)v2 + 2) )
    {
      v12 = **((_QWORD **)v2 + 1);
      v6 = CApplicationManager::_DeleteApplicationData(this, a2, &v12);
      goto LABEL_12;
    }
    v6 = -2147316575;
    v8 = 8082LL;
  }
  else
  {
    v8 = 8074LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v6);
LABEL_12:
  if ( v2 )
  {
    v9 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL);
    if ( v9 == CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>::Release )
      CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>::Release(v2);
    else
      v9(v2);
  }
  return v6;
}
