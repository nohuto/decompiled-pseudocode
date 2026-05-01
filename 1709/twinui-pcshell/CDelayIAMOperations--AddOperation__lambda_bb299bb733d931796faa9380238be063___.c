/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x1800196DC
 * Callers:
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x18000C948 (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 * Callees:
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001AE88 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___(int *a1, HWND a2)
{
  unsigned int v4; // ebx
  void (__fastcall ***v5)(_QWORD, __int64); // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rdi
  void (__fastcall **v7)(_QWORD, __int64); // rcx
  __int64 v8; // rcx
  int v9; // edi
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) || *((_QWORD *)a1 + 1) )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v5;
    v6 = v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *v5 = (void (__fastcall **)(_QWORD, __int64))&off_1801F97F0;
      *((_DWORD *)v5 + 3) = 2;
      v5[2] = *(void (__fastcall ***)(_QWORD, __int64))a2;
      v5[3] = (void (__fastcall **)(_QWORD, __int64))*((_QWORD *)a2 + 1);
      v5[4] = (void (__fastcall **)(_QWORD, __int64))*((_QWORD *)a2 + 2);
      v7 = (void (__fastcall **)(_QWORD, __int64))*((_QWORD *)a2 + 3);
      v5[5] = v7;
      if ( v7 )
        (*((void (__fastcall **)(void (__fastcall **)(_QWORD, __int64)))*v7 + 1))(v7);
    }
    else
    {
      v6 = 0LL;
    }
    v11 = v6;
    if ( v6 )
    {
      if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                  a1 + 6,
                  &v11) < 0 )
      {
        if ( v11 )
          (**v11)(v11, 1LL);
      }
      else
      {
        v8 = *((_QWORD *)a1 + 1);
        v9 = 1;
        ++a1[14];
        v4 = *a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL))(v8, 0xFFFFLL);
        if ( *a1 != -1 )
          v9 = *a1 + 1;
        *a1 = v9;
      }
    }
  }
  return v4;
}
