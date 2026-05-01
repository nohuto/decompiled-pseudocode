/*
 * XREFs of ?AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z @ 0x180080F50
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?AddObject@CImmersiveAppArray@@UEAAJPEAUIUnknown@@@Z @ 0x180080A90 (-AddObject@CImmersiveAppArray@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180080B40 (-GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CEnumerableObjectCollection::AddObject(CEnumerableObjectCollection *this, struct IUnknown *a2)
{
  unsigned __int64 v2; // r8
  char *v3; // rbx
  int v4; // esi
  __int64 result; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  char *v11; // rbp
  unsigned __int64 v12; // r12
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  LPMALLOC ppMalloc; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((int *)this + 7);
  v3 = (char *)this + 40;
  v4 = 0;
  result = 2147942522LL;
  if ( v2 <= 0xFFFFFFFE )
  {
    v7 = *((_QWORD *)this + 8);
    result = 0LL;
    if ( v2 > v7 )
    {
      v8 = 2 * v7;
      if ( !is_mul_ok(v7, 2uLL) )
        return 2147942934LL;
      if ( v7 > 0x1000 )
        v8 = v7 + 4096;
      if ( v2 <= v8 )
        v9 = v8;
      else
        v9 = *((int *)this + 7);
      if ( v9 > 0xFFFFFFFE )
      {
        v8 = 4294967294LL;
      }
      else if ( v2 > v8 )
      {
        v8 = *((int *)this + 7);
      }
      v10 = 8 * v8;
      if ( is_mul_ok(v8, 8uLL) )
      {
        v11 = (char *)CoTaskMemRealloc(*(LPVOID *)v3, 8 * v8);
        if ( !v11 )
          return 2147942414LL;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v12 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v11);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          if ( v12 > v10 )
            memset_0(&v11[v10], 0, v12 - v10);
        }
        result = 0LL;
        *((_QWORD *)v3 + 3) = v8;
        *(_QWORD *)v3 = v11;
      }
      else
      {
        result = 2147942934LL;
      }
    }
  }
  if ( (int)result >= 0 )
  {
    v13 = *((_QWORD *)v3 + 1);
    if ( v13 != *((_QWORD *)v3 + 3)
      || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 v3,
                 v13 + 1),
          v4 >= 0) )
    {
      v14 = (_QWORD *)(*(_QWORD *)v3 + 8 * (*((_QWORD *)v3 + 1))++);
      if ( v14 )
        *v14 = a2;
    }
    if ( v4 >= 0 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    return (unsigned int)v4;
  }
  return result;
}
