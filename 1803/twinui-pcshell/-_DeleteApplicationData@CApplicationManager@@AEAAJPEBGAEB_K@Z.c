/*
 * XREFs of ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18010F198
 * Callers:
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x180106DC0 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x18010F090 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18010F4CC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x18008A7E8 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092EC0 (--4-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHe.c)
 *     ?Release@?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@UEAAKXZ @ 0x180092F20 (-Release@-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180093BA0 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureSet@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJXZ @ 0x1800F87B0 (-_EnsureSet@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Mi.c)
 *     ?DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z @ 0x180106658 (-DeleteItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$.c)
 *     ?_FreeBucket@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x18010F7A0 (-_FreeBucket@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@M.c)
 */

__int64 __fastcall CApplicationManager::_DeleteApplicationData(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 *a3)
{
  char *v3; // rbx
  int v6; // esi
  __int64 v7; // rax
  char *v8; // rbp
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  _QWORD *v16; // r9
  unsigned __int64 v17; // r9
  __int64 (__fastcall *v18)(volatile signed __int32 *); // rax
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v22; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v23; // [rsp+48h] [rbp+10h] BYREF

  v23 = a2;
  v3 = (char *)this + 864;
  v6 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_EnsureSet((__int64)this + 864);
  if ( v6 < 0
    || (v7 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
               *((_QWORD *)v3 + 2),
               *((_DWORD *)v3 + 1),
               a3),
        v6 = -2147319765,
        !(unsigned int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_FreeBucket(
                         v3,
                         v7)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F7B,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v8 = (char *)this + 888;
  v9 = 0LL;
  v10 = *((_QWORD *)this + 113);
  v22 = 0LL;
  v11 = v10 == 0 ? 0x8002802B : 0;
  if ( v10 )
  {
    v12 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
            v10,
            *((_DWORD *)v8 + 1),
            &v23);
    v11 = *(_DWORD *)v12 != 1 ? 0x8002802B : 0;
    if ( *(_DWORD *)v12 == 1 )
    {
      Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>::operator=(
        (void **)&v22,
        (__int64 *)(v12 + 16));
      v9 = v22;
    }
  }
  if ( (v11 & 0x80000000) != 0 )
  {
    v13 = 8061LL;
LABEL_13:
    v17 = v11;
    goto LABEL_14;
  }
  v14 = *((_QWORD *)v9 + 2);
  v15 = 0LL;
  if ( !v14 )
  {
LABEL_11:
    v11 = -2147319765;
LABEL_12:
    v13 = 8062LL;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v16 = (_QWORD *)(*((_QWORD *)v9 + 1) + 8 * v15);
    if ( *v16 == *a3 )
      break;
    if ( ++v15 >= v14 )
      goto LABEL_11;
  }
  if ( v15 >= v14 )
  {
    v11 = -2147316575;
    goto LABEL_12;
  }
  if ( v15 != v14 - 1 )
  {
    memmove(v16, v16 + 1, 8 * (v14 - v15) - 8);
    v14 = *((_QWORD *)v9 + 2);
  }
  *((_QWORD *)v9 + 2) = v14 - 1;
  if ( v14 != 1
    || (v19 = CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>::DeleteItem(
                (__int64)v8,
                &v23),
        v11 = v19,
        v19 >= 0) )
  {
    v11 = 0;
    goto LABEL_15;
  }
  v17 = (unsigned int)v19;
  v13 = 8065LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v17);
LABEL_15:
  if ( v9 )
  {
    v18 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL);
    if ( v18 == CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>::Release )
      CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>::Release(v9);
    else
      v18(v9);
  }
  return v11;
}
