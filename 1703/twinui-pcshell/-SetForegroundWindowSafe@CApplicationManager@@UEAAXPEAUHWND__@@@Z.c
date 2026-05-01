/*
 * XREFs of ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18000D360
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001A0F8 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x18002A680 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A6B4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x18002B1D4 (-CanChangeForeground@@YAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplicationManager::SetForegroundWindowSafe(CApplicationManager *this, CApplicationManagerUtility *a2)
{
  PSRWLOCK v2; // rbx
  HWND v5; // rdx
  DWORD WindowThreadProcessId; // ebx
  HWND v7; // rdx
  HWND LastActiveVisiblePopupOrSelf; // rax
  int *v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // rax
  int v11; // edi
  LPARAM v12; // r9
  HWND v13; // rcx
  void (__fastcall ***v14)(_QWORD, __int64); // [rsp+38h] [rbp+10h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( LODWORD(v2[9].Ptr) == GetCurrentThreadId()
    || (WindowThreadProcessId = GetWindowThreadProcessId((HWND)a2, 0LL), WindowThreadProcessId == GetCurrentThreadId()) )
  {
    v9 = (int *)*((_QWORD *)this + 66);
    if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)v9 + 2), v5) )
    {
      v10 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v10;
      v11 = 1;
      if ( v10 )
      {
        *((_DWORD *)v10 + 2) = *v9;
        *v10 = (void (__fastcall **)(_QWORD, __int64))off_1801A6758;
        *((_DWORD *)v10 + 3) = 1;
        v10[2] = (void (__fastcall **)(_QWORD, __int64))a2;
      }
      v14 = v10;
      if ( v10 )
      {
        if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                    v9 + 6,
                    &v14) < 0 )
        {
          if ( v14 )
            (**v14)(v14, 1LL);
        }
        else
        {
          v12 = (unsigned int)*v9;
          v13 = (HWND)*((_QWORD *)v9 + 2);
          ++v9[14];
          PostMessageW(v13, 0x402u, 0LL, v12);
          if ( *v9 != -1 )
            v11 = *v9 + 1;
          *v9 = v11;
        }
      }
    }
  }
  else if ( (int)CanChangeForeground() >= 0 )
  {
    LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(a2, v7);
    SetForegroundWindow(LastActiveVisiblePopupOrSelf);
  }
}
