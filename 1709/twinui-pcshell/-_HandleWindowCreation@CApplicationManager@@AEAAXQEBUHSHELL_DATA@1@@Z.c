/*
 * XREFs of ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013B18
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008450 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180015584 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800114E8 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x180016D50 (-_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z.c)
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001AE88 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::_HandleWindowCreation(int **this, HWND *a2)
{
  int v4; // edi
  HWND ForegroundWindow; // rax
  HWND v6; // rdx
  int *v7; // rbx
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  struct IImmersiveMonitor *v9; // rcx
  __int128 v10; // [rsp+38h] [rbp-20h]
  struct IImmersiveMonitor *v11; // [rsp+68h] [rbp+10h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+70h] [rbp+18h] BYREF

  v4 = 1;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    v11 = 0LL;
    CApplicationManager::_MonitorFromWindow((CApplicationManager *)this, a2[1], &v11);
    (*(void (__fastcall **)(int *, HWND, _QWORD, __int64, struct IImmersiveMonitor *))(*(_QWORD *)this[68] + 24LL))(
      this[68],
      a2[1],
      *((unsigned int *)a2 + 6),
      1LL,
      v11);
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow == a2[1] )
    {
      *(_QWORD *)&v10 = this;
      *((_QWORD *)&v10 + 1) = ForegroundWindow;
      v7 = this[101];
      if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)v7 + 2), v6)
        || *((_QWORD *)v7 + 1) )
      {
        v8 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
        v12 = v8;
        if ( v8 )
        {
          *((_DWORD *)v8 + 2) = *v7;
          *((_DWORD *)v8 + 3) = 3;
          *v8 = (void (__fastcall **)(_QWORD, __int64))off_1801F9768;
          *((_OWORD *)v8 + 1) = v10;
        }
        v12 = v8;
        if ( v8 )
        {
          if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                      v7 + 6,
                      &v12) < 0 )
          {
            if ( v12 )
              (**v12)(v12, 1LL);
          }
          else
          {
            ++v7[14];
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)v7 + 1) + 56LL))(
              *((_QWORD *)v7 + 1),
              65534LL,
              (unsigned int)*v7);
            if ( *v7 != -1 )
              v4 = *v7 + 1;
            *v7 = v4;
          }
        }
      }
    }
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( (*a2 == (HWND)26 || *a2 == (HWND)29)
      && !CApplicationManager::_HandleUncloakableWindow(
            (CApplicationManager *)this,
            (const struct CApplicationManager::HSHELL_DATA *const)a2) )
    {
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
        a2[1],
        1LL);
    }
  }
  else
  {
    (*(void (__fastcall **)(int *, HWND))(*(_QWORD *)this[75] + 24LL))(this[75], a2[1]);
  }
}
