/*
 * XREFs of ??1?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAA@XZ @ 0x180016E78
 * Callers:
 *     ??1CActivationBasedAppAndGlomCollection@@UEAA@XZ @ 0x180007C78 (--1CActivationBasedAppAndGlomCollection@@UEAA@XZ.c)
 *     ??_GCActivationBasedAppAndGlomCollection@@UEAAPEAXI@Z @ 0x180007CC0 (--_GCActivationBasedAppAndGlomCollection@@UEAAPEAXI@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180007D1C (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::~CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>(
        LPVOID *a1)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rdi
  char *v4; // rsi
  unsigned __int64 i; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( *a1 )
  {
    v2 = 0LL;
    if ( a1[1] )
    {
      v3 = 0LL;
      do
      {
        v4 = (char *)*a1;
        if ( *(_QWORD *)((char *)*a1 + v3) )
        {
          for ( i = 0LL; i < *(_QWORD *)&v4[v3 + 8]; ++i )
          {
            v6 = *(_QWORD *)&v4[v3];
            v7 = *(_QWORD *)(v6 + 8 * i);
            if ( v7 )
            {
              *(_QWORD *)(v6 + 8 * i) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
            }
          }
          CoTaskMemFree(*(LPVOID *)&v4[v3]);
          *(_QWORD *)&v4[v3] = 0LL;
        }
        *(_QWORD *)&v4[v3 + 8] = 0LL;
        ++v2;
        *(_QWORD *)&v4[v3 + 24] = 0LL;
        v3 += 40LL;
      }
      while ( v2 < (unsigned __int64)a1[1] );
    }
    CoTaskMemFree(*a1);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  a1[3] = 0LL;
}
