/*
 * XREFs of ?DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18000F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001AE88 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int v8; // edi
  int v9; // r12d
  int *v10; // rbx
  HWND v11; // rdx
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int128 v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+80h] [rbp+8h] BYREF
  void (__fastcall ***v16)(_QWORD, __int64); // [rsp+98h] [rbp+20h] BYREF

  v6 = a1 - 208;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 192) & -(__int64)(a1 != 208));
  v8 = 1;
  v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1LL);
  if ( *(_DWORD *)(a1 + 620)
    && (a3 & 0x20) != 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, &v15) >= 0
    && !v15 )
  {
    *(_QWORD *)&v14 = v6;
    *((_QWORD *)&v14 + 1) = a2;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v10 = *(int **)(a1 + 600);
    if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)v10 + 2), v11) )
    {
      v12 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v12;
      if ( v12 )
      {
        *((_DWORD *)v12 + 2) = *v10;
        *((_DWORD *)v12 + 3) = 1;
        *v12 = (void (__fastcall **)(_QWORD, __int64))off_1801F97C0;
        *((_OWORD *)v12 + 1) = v14;
      }
      v16 = v12;
      if ( v12 )
      {
        if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                    v10 + 6,
                    &v16) < 0 )
        {
          if ( v16 )
            (**v16)(v16, 1LL);
        }
        else
        {
          ++v10[14];
          PostMessageW(*((HWND *)v10 + 2), 0x402u, 0LL, (unsigned int)*v10);
          if ( *v10 != -1 )
            v8 = *v10 + 1;
          *v10 = v8;
        }
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  if ( v9 >= 0 )
    LeaveCriticalSection(v7);
  return 0LL;
}
