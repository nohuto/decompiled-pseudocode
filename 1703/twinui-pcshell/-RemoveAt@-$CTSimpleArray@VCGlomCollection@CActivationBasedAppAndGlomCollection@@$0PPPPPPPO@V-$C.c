/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x180016BE0
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x180006EA0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180007070 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v5 = *a1;
  v6 = 5 * a2;
  if ( *(_QWORD *)(*a1 + 40 * a2) )
  {
    v7 = 0LL;
    if ( *(_QWORD *)(v5 + 40 * a2 + 8) )
    {
      do
      {
        v8 = *(_QWORD *)(v5 + 8 * v6);
        v9 = *(_QWORD *)(v8 + 8 * v7);
        if ( v9 )
        {
          *(_QWORD *)(v8 + 8 * v7) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        ++v7;
      }
      while ( v7 < *(_QWORD *)(v5 + 8 * v6 + 8) );
    }
    CoTaskMemFree(*(LPVOID *)(v5 + 8 * v6));
    *(_QWORD *)(v5 + 8 * v6) = 0LL;
  }
  *(_QWORD *)(v5 + 8 * v6 + 8) = 0LL;
  *(_QWORD *)(v5 + 8 * v6 + 24) = 0LL;
  v10 = a1[1];
  if ( a2 != v10 - 1 )
    memmove((void *)(*a1 + 8 * v6), (const void *)(*a1 + 8 * v6 + 40), 40 * (v10 - a2) - 40);
  --a1[1];
  return 0LL;
}
