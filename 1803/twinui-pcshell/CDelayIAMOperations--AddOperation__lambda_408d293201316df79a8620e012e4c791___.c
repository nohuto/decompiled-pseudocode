/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___ @ 0x18000B45C
 * Callers:
 *     ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x180043860 (-AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYP.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___(
        int *a1,
        char *a2,
        int a3)
{
  int v3; // esi
  int v6; // edi
  char v7; // r12
  __int64 v8; // rbx
  char *v9; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rbx
  unsigned int v11; // ebp
  __int64 v12; // rdx
  _QWORD *v13; // rdx

  v3 = a3;
  if ( a3 == 4 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 80LL))(*((_QWORD *)a1 + 1)) )
    {
      v6 = 1;
      v3 = 1;
      goto LABEL_3;
    }
    v3 = 3;
  }
  v6 = 1;
  if ( (unsigned int)(v3 - 2) > 1 )
  {
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  v7 = 1;
LABEL_4:
  v8 = *((_QWORD *)a1 + 2);
  SetLastError(0);
  if ( !(unsigned int)IsWindowInDestroy(v8) && GetLastError() != 1400 || v7 && *((_QWORD *)a1 + 1) )
  {
    v9 = (char *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = (void (__fastcall ***)(_QWORD, __int64))v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 2) = *a1;
      *(_QWORD *)v9 = &off_180318698;
      *((_DWORD *)v9 + 3) = v3;
      *((_QWORD *)v9 + 2) = 0LL;
      if ( v9 + 16 != a2 )
      {
        *((_QWORD *)v9 + 2) = *(_QWORD *)a2;
        *(_QWORD *)a2 = 0LL;
      }
    }
    else
    {
      v10 = 0LL;
    }
    v11 = 0;
    if ( v10 )
    {
      v12 = *((_QWORD *)a1 + 4);
      if ( v12 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  a1 + 6,
                  v12 + 1) < 0 )
      {
        (**v10)(v10, 1LL);
      }
      else
      {
        v13 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v13 )
          *v13 = v10;
        v11 = *a1;
        if ( v3 != 5 )
        {
          ++a1[14];
          if ( v7 )
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 56LL))(
              *((_QWORD *)a1 + 1),
              0xFFFFLL - (v3 != 2),
              v11);
          else
            PostMessageW(*((HWND *)a1 + 2), (v3 != 0) + 1025, 0LL, v11);
        }
        if ( *a1 != -1 )
          v6 = *a1 + 1;
        *a1 = v6;
      }
    }
  }
  else
  {
    return 0;
  }
  return v11;
}
