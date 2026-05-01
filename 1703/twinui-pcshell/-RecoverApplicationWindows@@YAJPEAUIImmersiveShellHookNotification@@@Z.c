/*
 * XREFs of ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x18002B3D4
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A8F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredViewInfo@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredViewInfo@@@@@@QEAAJ_K@Z @ 0x18002B57C (-EnsureCapacity@-$CTSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@URecoveredVi.c)
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x18002B644 (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RecoverApplicationWindows(struct IImmersiveShellHookNotification *a1)
{
  int v2; // ebx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  LPARAM v8; // r14
  bool v9; // cl
  LPARAM lParam; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-20h]
  LPVOID pv[3]; // [rsp+48h] [rbp-18h] BYREF
  char v14; // [rsp+88h] [rbp+28h] BYREF

  lParam = 0LL;
  v12 = 0LL;
  pv[0] = 0LL;
  pv[1] = 0LL;
  v2 = CTSimpleArray<RecoveredViewInfo,4294967294,CTPolicyCoTaskMem<RecoveredViewInfo>,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>,CSimpleArrayStandardMergeHelper<RecoveredViewInfo>>::EnsureCapacity(
         &lParam,
         50LL);
  if ( v2 < 0 )
    goto LABEL_21;
  EnumWindows((WNDENUMPROC)RecoverWindowsProc, (LPARAM)&lParam);
  v3 = v12;
  if ( !v12 )
    goto LABEL_22;
  v2 = 0;
  if ( v12 > 1 )
  {
    pv[0] = 0LL;
    if ( is_mul_ok(v12 >> 1, 0x10uLL) )
    {
      v2 = CTCoAllocPolicy::Realloc(
             (IMalloc *)pv,
             ((v12 >> 1) * (unsigned __int128)0x10u) >> 64,
             0LL,
             16 * (v12 >> 1),
             pv);
      if ( v2 >= 0 )
      {
        CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeSort<CCompareRecoveredWindows>(
          &lParam,
          &v14,
          0LL,
          v12);
        CoTaskMemFree(pv[0]);
        pv[0] = 0LL;
      }
    }
    else
    {
      v2 = -2147024362;
    }
  }
  if ( v2 < 0 )
  {
LABEL_21:
    v2 = -2147023617;
  }
  else
  {
    v4 = 0LL;
    if ( v3 )
    {
      v5 = 0LL;
      do
      {
        if ( *(_DWORD *)(v5 + lParam + 8) == 1 )
          break;
        (*(void (__fastcall **)(struct IImmersiveShellHookNotification *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(
          a1,
          17LL,
          *(_QWORD *)(v5 + lParam));
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < v3 );
    }
    if ( v3 != v4 )
    {
      v6 = 16 * v3;
      v7 = v3 - v4;
      do
      {
        v6 -= 16LL;
        v8 = lParam;
        v9 = *(_BYTE *)(v6 + lParam + 12) && (GetWindowLongPtrW(*(HWND *)(v6 + lParam), -20) & 0x40000) == 0;
        (*(void (__fastcall **)(struct IImmersiveShellHookNotification *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(
          a1,
          v9 ? 21LL : 17LL,
          *(_QWORD *)(v6 + v8));
        --v7;
      }
      while ( v7 );
    }
  }
LABEL_22:
  if ( lParam )
    CoTaskMemFree((LPVOID)lParam);
  return (unsigned int)v2;
}
