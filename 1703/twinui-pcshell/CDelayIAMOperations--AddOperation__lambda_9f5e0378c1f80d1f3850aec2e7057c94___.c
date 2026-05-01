/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___ @ 0x180017ED8
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008B20 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001A0F8 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A6B4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___(
        unsigned int *a1,
        HWND a2,
        int a3)
{
  int v3; // edi
  unsigned int v6; // ebp
  LPARAM v7; // r14
  char v8; // r15
  struct HWND__ *v9; // rax
  struct HWND__ *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct HWND__ *v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = a3;
  if ( a3 == 4 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 80LL))(*((_QWORD *)a1 + 1)) )
    {
      v6 = v3 - 3;
      LODWORD(v7) = 0;
      v3 -= 3;
      goto LABEL_6;
    }
    v3 = 3;
  }
  LODWORD(v7) = 0;
  v6 = 1;
  if ( (unsigned int)(v3 - 2) <= 1 )
  {
    v8 = 1;
    goto LABEL_8;
  }
LABEL_6:
  v8 = 0;
LABEL_8:
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2)
    || v8 && *((_QWORD *)a1 + 1) )
  {
    v9 = (struct HWND__ *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v9;
    v10 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 2) = *a1;
      *((_DWORD *)v9 + 3) = v3;
      *(_QWORD *)v9 = &off_1801A67A0;
      *((_QWORD *)v9 + 2) = *(_QWORD *)a2;
      v11 = *((_QWORD *)a2 + 1);
      *((_QWORD *)v9 + 3) = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *((_BYTE *)v10 + 32) = *((_BYTE *)a2 + 16);
      v12 = *((_QWORD *)a2 + 3);
      *((_QWORD *)v10 + 5) = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v10[12] = a2[8];
    }
    else
    {
      v10 = 0LL;
    }
    v14 = v10;
    if ( v10 )
    {
      if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                  a1 + 6,
                  &v14) < 0 )
      {
        if ( v14 )
          (**(void (__fastcall ***)(struct HWND__ *, _QWORD))v14)(v14, v6);
      }
      else
      {
        v7 = *a1;
        if ( v3 != 5 )
        {
          a1[14] += v6;
          if ( v8 )
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 56LL))(
              *((_QWORD *)a1 + 1),
              0xFFFFLL - (v3 != 2),
              (unsigned int)v7);
          else
            PostMessageW(*((HWND *)a1 + 2), (v3 != 0) + 1025, 0LL, v7);
        }
        if ( *a1 != -1 )
          v6 = *a1 + 1;
        *a1 = v6;
      }
    }
  }
  return (unsigned int)v7;
}
