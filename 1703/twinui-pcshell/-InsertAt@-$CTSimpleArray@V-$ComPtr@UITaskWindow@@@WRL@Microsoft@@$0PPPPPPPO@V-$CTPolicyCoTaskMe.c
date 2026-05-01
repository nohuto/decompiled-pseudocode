/*
 * XREFs of ?InsertAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x180016FB4
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x180006EA0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18001350C (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@@Z @ 0x18002F1A4 (-_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@P.c)
 *     ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18003B5C0 (-HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x180054AE0 (-HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::InsertAt(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  int v4; // edi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 v11; // rcx

  v3 = a1[1];
  v4 = 0;
  if ( a3 >= v3 )
    v3 = a3;
  v8 = v3 + 1;
  if ( v3 + 1 <= a1[3]
    || (v4 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
               a1,
               v3 + 1),
        v4 >= 0) )
  {
    v9 = a1[1];
    if ( a3 < v9 )
      memmove((void *)(*a1 + 8 * a3 + 8), (const void *)(*a1 + 8 * a3), 8 * (v9 - a3));
    a1[1] = v8;
    v10 = (__int64 *)(*a1 + 8 * a3);
    if ( v10 )
    {
      v11 = *a2;
      *v10 = *a2;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return (unsigned int)v4;
}
