/*
 * XREFs of ??$_Add@$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x1800836E0
 * Callers:
 *     ?SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z @ 0x18004FCE0 (-SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x1800FA8D8 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1801E22B0 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>> &&>(
        __int64 a1,
        _QWORD *a2,
        IMalloc *a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  int v7; // r8d
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  char *v12; // rbp
  unsigned __int64 v13; // r15
  _QWORD *v14; // rdx
  LPMALLOC ppMalloc; // [rsp+60h] [rbp+18h] BYREF

  ppMalloc = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 24);
  v7 = 0;
  if ( v3 != v4 )
    goto LABEL_19;
  v8 = v3 + 1;
  v7 = -2147024774;
  if ( (unsigned __int64)(v3 + 1) > 0xFFFFFFFE || (v7 = 0, v8 <= v4) )
  {
LABEL_18:
    if ( v7 < 0 )
      return (unsigned int)v7;
LABEL_19:
    v14 = (_QWORD *)(*(_QWORD *)a1 + 8 * (*(_QWORD *)(a1 + 8))++);
    if ( v14 )
    {
      *v14 = 0LL;
      if ( v14 != a2 )
      {
        *v14 = *a2;
        *a2 = 0LL;
      }
    }
    return (unsigned int)v7;
  }
  v9 = 2 * v4;
  if ( !is_mul_ok(v4, 2uLL) )
    return 2147942934LL;
  if ( v4 > 0x1000 )
    v9 = v4 + 4096;
  if ( v8 > v9 )
    v10 = v3 + 1;
  else
    v10 = v9;
  if ( v10 > 0xFFFFFFFE )
  {
    v9 = 4294967294LL;
  }
  else if ( v8 > v9 )
  {
    v9 = v8;
  }
  v11 = 8 * v9;
  if ( !is_mul_ok(v9, 8uLL) )
  {
    v7 = -2147024362;
    goto LABEL_18;
  }
  v12 = (char *)CoTaskMemRealloc(*(LPVOID *)a1, 8 * v9);
  if ( v12 )
  {
    if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
    {
      v13 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v12);
      ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      if ( v13 > v11 )
        memset_0(&v12[v11], 0, v13 - v11);
    }
    v7 = 0;
    *(_QWORD *)(a1 + 24) = v9;
    *(_QWORD *)a1 = v12;
    goto LABEL_18;
  }
  return 2147942414LL;
}
