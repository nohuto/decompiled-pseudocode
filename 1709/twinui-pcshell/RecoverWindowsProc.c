/*
 * XREFs of RecoverWindowsProc @ 0x18002CA00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x18002BD48 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BE7C (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredViewInfo@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredViewInfo@@@@@@QEAAJ_K@Z @ 0x18002CD54 (-EnsureCapacity@-$CTSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@URecoveredVi.c)
 */

__int64 __fastcall RecoverWindowsProc(HWND a1, _QWORD *a2)
{
  HWND v3; // rdx
  char v4; // al
  HWND v5; // rdx
  __int64 v6; // rdx
  _OWORD *v7; // r8
  HWND hWnd[2]; // [rsp+20h] [rbp-10h] BYREF

  hWnd[0] = a1;
  if ( !IsWindowVisible(a1) || !(unsigned int)GetWindowBand(hWnd[0], &hWnd[1]) )
    return 1LL;
  if ( (LODWORD(hWnd[1]) == 1 || LODWORD(hWnd[1]) == 8) && LODWORD(hWnd[1]) != 1 )
  {
    v4 = !GetWindow(hWnd[0], 4u) && CApplicationManagerUtility::IsTrayWindowStyleCheck(hWnd[0], v3);
    BYTE4(hWnd[1]) = 0;
LABEL_18:
    if ( !v4 )
      return 1LL;
    goto LABEL_19;
  }
  if ( !CApplicationManagerUtility::IsClassicApplication(hWnd[0], (int)hWnd[1]) )
  {
    v4 = 0;
    goto LABEL_18;
  }
  if ( (GetWindowLongPtrW(hWnd[0], -20) & 0x40000) != 0 )
  {
    BYTE4(hWnd[1]) = 0;
  }
  else
  {
    if ( !GetWindow(hWnd[0], 4u) )
    {
      BYTE4(hWnd[1]) = 0;
      v4 = CApplicationManagerUtility::IsTrayWindowStyleCheck(hWnd[0], v5);
      goto LABEL_18;
    }
    BYTE4(hWnd[1]) = 1;
  }
LABEL_19:
  v6 = a2[1];
  if ( v6 != a2[3]
    || (int)CTSimpleArray<RecoveredViewInfo,4294967294,CTPolicyCoTaskMem<RecoveredViewInfo>,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>,CSimpleArrayStandardMergeHelper<RecoveredViewInfo>>::EnsureCapacity(
              a2,
              v6 + 1) >= 0 )
  {
    ++a2[1];
    v7 = (_OWORD *)(16LL * a2[1] + *a2 - 16LL);
    if ( v7 )
      *v7 = *(_OWORD *)hWnd;
  }
  return 1LL;
}
