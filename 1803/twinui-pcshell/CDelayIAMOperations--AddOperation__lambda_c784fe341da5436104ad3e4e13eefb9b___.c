/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___ @ 0x18000B180
 * Callers:
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x180042770 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180084070 (-s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x1800F0B70 (-_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___(int *a1, _OWORD *a2)
{
  __int64 v2; // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  __int64 result; // rax
  int v10; // ecx

  v2 = *((_QWORD *)a1 + 2);
  SetLastError(0);
  if ( (unsigned int)IsWindowInDestroy(v2) )
    return 0LL;
  if ( GetLastError() == 1400 )
    return 0LL;
  v5 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  *((_DWORD *)v5 + 2) = *a1;
  *v5 = (void (__fastcall **)(_QWORD, __int64))off_180318688;
  *((_DWORD *)v5 + 3) = 5;
  *((_OWORD *)v5 + 1) = *a2;
  v7 = *((_QWORD *)a1 + 4);
  if ( v7 == *((_QWORD *)a1 + 6)
    && (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
              a1 + 6,
              v7 + 1) < 0 )
  {
    (**v6)(v6, 1LL);
    return 0LL;
  }
  v8 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
  if ( v8 )
    *v8 = v6;
  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
    v10 = 1;
  else
    v10 = result + 1;
  *a1 = v10;
  return result;
}
