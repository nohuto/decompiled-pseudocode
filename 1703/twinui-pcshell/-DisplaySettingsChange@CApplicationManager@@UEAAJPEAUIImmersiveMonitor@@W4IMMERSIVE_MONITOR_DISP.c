/*
 * XREFs of ?DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18000F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001A0F8 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A6B4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rbp
  int *v7; // rbx
  HWND v8; // rdx
  _DWORD *v9; // rax
  int v10; // edi
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v17; // [rsp+88h] [rbp+20h]

  v13 = -2LL;
  v6 = a1 - 168;
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 168) >> 64)));
  if ( *(_DWORD *)(a1 + 580)
    && (a3 & 0x20) != 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, &v16) >= 0
    && !v16 )
  {
    *(_QWORD *)&v12 = v6;
    *((_QWORD *)&v12 + 1) = a2;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = *(int **)(a1 + 560);
    if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)v7 + 2), v8) )
    {
      v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v17 = v9;
      v10 = 1;
      if ( v9 )
      {
        v9[2] = *v7;
        v9[3] = 1;
        *(_QWORD *)v9 = off_1801A6738;
        *((_OWORD *)v9 + 1) = v12;
      }
      *(_QWORD *)&v12 = v9;
      if ( v9 )
      {
        if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                    v7 + 6,
                    &v12) < 0 )
        {
          if ( (_QWORD)v12 )
            (**(void (__fastcall ***)(_QWORD, __int64))v12)(v12, 1LL);
        }
        else
        {
          ++v7[14];
          PostMessageW(*((HWND *)v7 + 2), 0x402u, 0LL, (unsigned int)*v7);
          if ( *v7 != -1 )
            v10 = *v7 + 1;
          *v7 = v10;
        }
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  if ( v15 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
