/*
 * XREFs of ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x18000FA40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001A0F8 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A6B4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::AsyncInvokeWithApplicationViewSerialization(
        CApplicationManager *this,
        struct IAsyncCallback *a2)
{
  HWND v4; // rdx
  int *v5; // rsi
  unsigned int v6; // r15d
  unsigned int v7; // ebp
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  int v10; // r14d
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+78h] [rbp+10h] BYREF
  struct IAsyncCallback *v14; // [rsp+80h] [rbp+18h]
  struct IAsyncCallback *v15; // [rsp+88h] [rbp+20h]

  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (int *)*((_QWORD *)this + 58);
  v6 = 0;
  v7 = -2147024882;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)v5 + 2), v4) )
  {
    v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    v10 = 1;
    if ( v8 )
    {
      v8[2] = *v5;
      v8[3] = 1;
      *(_QWORD *)v8 = &off_1801A6728;
      *((_QWORD *)v8 + 2) = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
    }
    else
    {
      v9 = 0LL;
    }
    v13 = (void (__fastcall ***)(_QWORD, __int64))v9;
    if ( v9 )
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
          v10 = *v5 + 1;
        *v5 = v10;
      }
    }
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 16LL))(a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D5,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x8007000ELL);
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 16LL))(a2);
  return v7;
}
