/*
 * XREFs of ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x18000FF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001AE88 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::AsyncInvokeWithApplicationViewSerialization(
        CApplicationManager *this,
        struct IAsyncCallback *a2)
{
  HWND v4; // rdx
  int *v5; // rsi
  unsigned int v6; // r14d
  _QWORD *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  int v9; // ebp
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+60h] [rbp+8h] BYREF
  struct IAsyncCallback *v14; // [rsp+68h] [rbp+10h]
  struct IAsyncCallback *v15; // [rsp+70h] [rbp+18h]

  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (int *)*((_QWORD *)this + 61);
  v6 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)v5 + 2), v4) )
  {
    v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = (void (__fastcall ***)(_QWORD, __int64))v7;
    v13 = (void (__fastcall ***)(_QWORD, __int64))v7;
    v9 = 1;
    if ( v7 )
    {
      *((_DWORD *)v7 + 2) = *v5;
      *((_DWORD *)v7 + 3) = 1;
      *v7 = &off_1801F97B0;
      v7[2] = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
    }
    else
    {
      v8 = 0LL;
    }
    v13 = v8;
    if ( v8 )
    {
      if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                  v5 + 6,
                  &v13) < 0 )
      {
        if ( v13 )
          (**v13)(v13, 1LL);
      }
      else
      {
        v6 = *v5;
        ++v5[14];
        PostMessageW(*((HWND *)v5 + 2), 0x402u, 0LL, v6);
        if ( *v5 != -1 )
          v9 = *v5 + 1;
        *v5 = v9;
      }
    }
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 16LL))(a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 )
  {
    v10 = 0;
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x113E,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x8007000ELL);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 16LL))(a2);
  return v10;
}
