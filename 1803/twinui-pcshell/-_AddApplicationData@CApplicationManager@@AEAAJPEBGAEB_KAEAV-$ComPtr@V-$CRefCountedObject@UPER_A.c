/*
 * XREFs of ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18003C210
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180041C70 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18000CBA4 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1800885F0 (-_RehashTable@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x18008A7E8 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18008CC0C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092EC0 (--4-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHe.c)
 *     ?Release@?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@UEAAKXZ @ 0x180092F20 (-Release@-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper.c)
 *     ?CompareKey@CStringCompare@@SAHQEBG0@Z @ 0x180093C74 (-CompareKey@CStringCompare@@SAHQEBG0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180111304 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_AddApplicationData(
        __int64 a1,
        const unsigned __int16 *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v8; // rbx
  unsigned int v9; // r12d
  int v10; // edi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r15
  unsigned int v15; // esi
  __int64 v16; // rbp
  unsigned int v17; // r12d
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // zf
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned int v23; // edx
  int v24; // edi
  unsigned int v25; // ebx
  int v26; // eax
  char *v27; // rax
  char *v28; // rbx
  int v29; // edi
  __int64 v30; // rdx
  unsigned int v31; // r15d
  __int64 v32; // r14
  unsigned __int16 *v33; // r8
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rax
  unsigned int v36; // edx
  int v37; // esi
  unsigned int v38; // edi
  int v39; // eax
  __int64 v40; // rdi
  __int64 v41; // rdx
  _QWORD *v42; // rdx
  __int64 (__fastcall *v43)(void *); // rax
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  int v49[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v50; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LPWSTR ppwsz; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v53; // [rsp+80h] [rbp+18h]

  v53 = a3;
  v50 = -2LL;
  v8 = a1 + 864;
  v9 = 0;
  v10 = 0;
  if ( !*(_QWORD *)(a1 + 880) )
  {
    v45 = *(unsigned int *)(a1 + 868);
    *(_QWORD *)(a1 + 880) = 0LL;
    if ( is_mul_ok(v45, 0x18uLL) )
      v10 = CTLocalAllocPolicy::Alloc(
              (void *)a1,
              (v45 * (unsigned __int128)0x18uLL) >> 64,
              24 * v45,
              (void **)(a1 + 880));
    else
      v10 = -2147024362;
  }
  if ( v10 < 0 )
    goto LABEL_67;
  if ( *(_DWORD *)v8 > *(_DWORD *)(v8 + 4) >> 1 || *(_DWORD *)(v8 + 8) > *(_DWORD *)(v8 + 4) >> 2 )
    v10 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(v8);
  if ( v10 < 0 )
    goto LABEL_67;
  v11 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
          *(_QWORD *)(v8 + 16),
          *(unsigned int *)(v8 + 4),
          a3);
  if ( *(_DWORD *)v11 == 1 )
  {
    v10 = -2147024809;
LABEL_67:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F6B,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v10,
      v49[0]);
    return (unsigned int)v10;
  }
  if ( *(_DWORD *)v11 == 2 )
    --*(_DWORD *)(v8 + 8);
  *(_QWORD *)(v11 + 8) = *a3;
  v12 = *a4;
  *(_QWORD *)(v11 + 16) = *a4;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  *(_DWORD *)v11 = 1;
  ++*(_DWORD *)v8;
  *(_QWORD *)v49 = 0LL;
  v13 = a1 + 888;
  v14 = *(_QWORD *)(a1 + 904);
  v15 = 314159269;
  v16 = -1LL;
  if ( !v14 )
    goto LABEL_23;
  v17 = *(_DWORD *)(v13 + 4);
  v18 = 314159269LL;
  v19 = -1LL;
  do
    ++v19;
  while ( a2[v19] );
  v20 = 2 * v19 == 0;
  v21 = 2 * v19;
  v22 = 0LL;
  if ( !v20 )
  {
    do
      v18 = (((unsigned int)v18 >> 2) + 2080 * (_DWORD)v18 + *((unsigned __int8 *)a2 + v22++)) ^ (unsigned int)v18;
    while ( v22 < v21 );
  }
  LODWORD(v18) = v18 & 0x7FFFFFFF;
  v23 = (unsigned int)v18 % v17;
  v24 = -1;
  while ( 1 )
  {
    v25 = v23;
    v26 = *(_DWORD *)(v14 + 24LL * v23);
    if ( v26 != 2 )
      break;
    if ( v24 == -1 )
    {
      v24 = v23;
      goto LABEL_42;
    }
LABEL_68:
    if ( v26 == 1 && CStringCompare::CompareKey(*(const unsigned __int16 *const *)(v14 + 24LL * v23 + 8), a2) )
      goto LABEL_21;
LABEL_42:
    v23 = (v25 + 1) % v17;
  }
  if ( v26 )
    goto LABEL_68;
  if ( v24 != -1 )
    v25 = v24;
LABEL_21:
  if ( *(_DWORD *)(v14 + 24LL * v25) == 1 )
  {
    Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>::operator=(
      v49,
      v14 + 8 * (3LL * v25 + 2),
      v18,
      v21);
    v28 = *(char **)v49;
    v9 = 0;
    goto LABEL_52;
  }
  v9 = 0;
LABEL_23:
  v27 = (char *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v28 = v27;
  if ( v27 )
  {
    memset_0(v27 + 8, 0, 0x20uLL);
    *((_QWORD *)v28 + 1) = 0LL;
    *((_QWORD *)v28 + 2) = 0LL;
    *((_QWORD *)v28 + 3) = 0LL;
    *((_QWORD *)v28 + 4) = 0LL;
    *(_QWORD *)v28 = &CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>::`vftable';
    *((_DWORD *)v28 + 10) = 0;
    CRunnableTask::AddRef((CRunnableTask *)v28);
  }
  else
  {
    v28 = 0LL;
  }
  *(_QWORD *)v49 = v28;
  ppwsz = 0LL;
  v29 = SHStrDupW(a2, &ppwsz);
  if ( v29 < 0 )
    goto LABEL_84;
  v29 = 0;
  if ( !*(_QWORD *)(v13 + 16) )
  {
    v46 = *(unsigned int *)(v13 + 4);
    *(_QWORD *)(v13 + 16) = 0LL;
    if ( is_mul_ok(v46, 0x18uLL) )
      v29 = CTLocalAllocPolicy::Alloc(
              (void *)v46,
              (v46 * (unsigned __int128)0x18uLL) >> 64,
              24 * v46,
              (void **)(v13 + 16));
    else
      v29 = -2147024362;
  }
  if ( v29 < 0 )
    goto LABEL_82;
  v30 = *(unsigned int *)(v13 + 4);
  if ( *(_DWORD *)v13 > *(_DWORD *)(v13 + 4) >> 1 )
  {
    v30 = (unsigned int)(2 * v30 - 1);
  }
  else if ( *(_DWORD *)(v13 + 8) <= (unsigned int)v30 >> 2 )
  {
    goto LABEL_30;
  }
  v29 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
          v13,
          v30);
LABEL_30:
  if ( v29 < 0 )
  {
LABEL_82:
    v33 = ppwsz;
    goto LABEL_83;
  }
  v31 = *(_DWORD *)(v13 + 4);
  v32 = *(_QWORD *)(v13 + 16);
  v33 = ppwsz;
  do
    ++v16;
  while ( ppwsz[v16] );
  v20 = 2 * v16 == 0;
  v34 = 2 * v16;
  v35 = 0LL;
  if ( !v20 )
  {
    do
      v15 ^= (v15 >> 2) + 2080 * v15 + *((unsigned __int8 *)ppwsz + v35++);
    while ( v35 < v34 );
  }
  v36 = (v15 & 0x7FFFFFFF) % v31;
  v37 = -1;
  while ( 2 )
  {
    v38 = v36;
    v39 = *(_DWORD *)(v32 + 24LL * v36);
    if ( v39 == 2 )
    {
      if ( v37 == -1 )
      {
        v37 = v36;
LABEL_39:
        v36 = (v38 + 1) % v31;
        continue;
      }
LABEL_78:
      if ( v39 == 1 )
      {
        v47 = CStringCompare::CompareKey(*(const unsigned __int16 *const *)(v32 + 24LL * v36 + 8), v33);
        v33 = ppwsz;
        if ( v47 )
          goto LABEL_46;
      }
      goto LABEL_39;
    }
    break;
  }
  if ( v39 )
    goto LABEL_78;
  if ( v37 != -1 )
    v38 = v37;
LABEL_46:
  v40 = v32 + 24LL * v38;
  if ( *(_DWORD *)v40 == 1 )
  {
    v29 = -2147024809;
LABEL_83:
    CoTaskMemFree(v33);
LABEL_84:
    v48 = 8049LL;
LABEL_85:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v48,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v29,
      v49[0]);
    v9 = v29;
    goto LABEL_56;
  }
  if ( *(_DWORD *)v40 == 2 )
    --*(_DWORD *)(v13 + 8);
  *(_QWORD *)(v40 + 8) = v33;
  *(_QWORD *)(v40 + 16) = v28;
  if ( v28 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v28 + 8LL))(v28);
  *(_DWORD *)v40 = 1;
  ++*(_DWORD *)v13;
LABEL_52:
  v41 = *((_QWORD *)v28 + 2);
  if ( v41 == *((_QWORD *)v28 + 4) )
  {
    v29 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
            v28 + 8,
            v41 + 1);
    if ( v29 < 0 )
    {
      v48 = 8052LL;
      goto LABEL_85;
    }
  }
  v42 = (_QWORD *)(*((_QWORD *)v28 + 1) + 8 * (*((_QWORD *)v28 + 2))++);
  if ( v42 )
    *v42 = *v53;
LABEL_56:
  if ( v28 )
  {
    v43 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v28 + 16LL);
    if ( v43 == CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>::Release )
      CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>::Release(v28);
    else
      v43(v28);
  }
  return v9;
}
