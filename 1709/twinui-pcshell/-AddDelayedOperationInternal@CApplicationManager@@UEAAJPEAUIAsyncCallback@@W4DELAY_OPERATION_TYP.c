/*
 * XREFs of ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x18000DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001AE88 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::AddDelayedOperationInternal(__int64 a1, HWND a2, int a3)
{
  int *v6; // rdi
  int v7; // ebp
  char v8; // r12
  LPARAM v9; // r14
  _QWORD *v10; // rax
  void (__fastcall ***v11)(_QWORD, __int64); // r15
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+70h] [rbp+8h] BYREF
  HWND v14; // [rsp+78h] [rbp+10h]
  HWND v15; // [rsp+88h] [rbp+20h]

  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(HWND))(*(_QWORD *)a2 + 8LL))(a2);
  v15 = a2;
  if ( a2 )
    (*(void (__fastcall **)(HWND))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = *(int **)(a1 + 560);
  if ( a3 == 4 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 1) + 80LL))(*((_QWORD *)v6 + 1)) )
    {
      v7 = 1;
      a3 = 1;
      goto LABEL_10;
    }
    a3 = 3;
  }
  v7 = 1;
  if ( (unsigned int)(a3 - 2) <= 1 )
  {
    v8 = 1;
    goto LABEL_12;
  }
LABEL_10:
  v8 = 0;
LABEL_12:
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)v6 + 2), a2)
    || v8 && *((_QWORD *)v6 + 1) )
  {
    v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = (void (__fastcall ***)(_QWORD, __int64))v10;
    v13 = (void (__fastcall ***)(_QWORD, __int64))v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 2) = *v6;
      *((_DWORD *)v10 + 3) = a3;
      *v10 = &off_1801F97D0;
      v10[2] = a2;
      if ( a2 )
        (*(void (__fastcall **)(HWND))(*(_QWORD *)a2 + 8LL))(a2);
    }
    else
    {
      v11 = 0LL;
    }
    v13 = v11;
    LODWORD(v9) = 0;
    if ( v11 )
    {
      if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                  v6 + 6,
                  &v13) < 0 )
      {
        if ( v13 )
          (**v13)(v13, 1LL);
      }
      else
      {
        v9 = (unsigned int)*v6;
        if ( a3 != 5 )
        {
          ++v6[14];
          if ( v8 )
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)v6 + 1) + 56LL))(
              *((_QWORD *)v6 + 1),
              0xFFFFLL - (a3 != 2),
              (unsigned int)v9);
          else
            PostMessageW(*((HWND *)v6 + 2), (a3 != 0) + 1025, 0LL, v9);
        }
        if ( *v6 != -1 )
          v7 = *v6 + 1;
        *v6 = v7;
      }
    }
  }
  else
  {
    LODWORD(v9) = 0;
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(HWND))(*(_QWORD *)a2 + 16LL))(a2);
    (*(void (__fastcall **)(HWND))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return (_DWORD)v9 == 0 ? 0x8007000E : 0;
}
