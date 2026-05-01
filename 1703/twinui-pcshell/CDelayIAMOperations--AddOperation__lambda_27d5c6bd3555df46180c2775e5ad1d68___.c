/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x180018FA8
 * Callers:
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013184 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001A0F8 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A6B4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(int *a1, HWND a2)
{
  unsigned int v4; // ebx
  void (__fastcall ***v5)(_QWORD, __int64); // rax
  __int64 v6; // rcx
  int v7; // esi
  void (__fastcall ***v9)(_QWORD, __int64); // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) || *((_QWORD *)a1 + 1) )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *v5 = (void (__fastcall **)(_QWORD, __int64))off_1801A66E0;
      *((_DWORD *)v5 + 3) = 3;
      *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    }
    else
    {
      v5 = 0LL;
    }
    v9 = v5;
    if ( v5 )
    {
      if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                  a1 + 6,
                  &v9) < 0 )
      {
        if ( v9 )
          (**v9)(v9, 1LL);
      }
      else
      {
        v6 = *((_QWORD *)a1 + 1);
        v7 = 1;
        ++a1[14];
        v4 = *a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 65534LL);
        if ( *a1 != -1 )
          v7 = *a1 + 1;
        *a1 = v7;
      }
    }
  }
  return v4;
}
