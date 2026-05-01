/*
 * XREFs of ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x1800393C0
 * Callers:
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180038D98 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // edi
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rcx

  v3 = (_QWORD *)(a1 + 8);
  if ( a3 < *(_QWORD *)(a1 + 16) )
  {
    v6 = *(_QWORD *)(*v3 + 8 * a3);
    if ( v6 )
    {
      *(_QWORD *)(*v3 + 8 * a3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = v3[1];
    if ( a3 != v7 - 1 )
      memmove((void *)(*v3 + 8 * a3), (const void *)(*v3 + 8 * a3 + 8), 8 * (v7 - a3) - 8);
    --v3[1];
  }
  v8 = v3[1];
  v9 = 0;
  v10 = 1LL;
  if ( v8 )
    v10 = v8 + 1;
  if ( v10 <= v3[3]
    || (v9 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
               (__int64)v3,
               v10),
        v9 >= 0) )
  {
    v11 = v3[1];
    if ( v11 )
      memmove((void *)(*v3 + 8LL), (const void *)*v3, 8 * v11);
    v3[1] = v10;
    if ( *v3 )
    {
      v12 = *a2;
      *(_QWORD *)*v3 = *a2;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return (unsigned int)v9;
}
