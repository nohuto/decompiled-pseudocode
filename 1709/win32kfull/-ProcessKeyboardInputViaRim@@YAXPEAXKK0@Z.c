/*
 * XREFs of ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C01A1A20
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     FindRimDevBackedDeviceInfo @ 0x1C01AB500 (FindRimDevBackedDeviceInfo.c)
 */

void __fastcall ProcessKeyboardInputViaRim(char *a1, __int64 a2, int a3, void *a4)
{
  char *v4; // rdi
  char *v5; // rsi
  __int16 v7; // bp
  __int64 RimDevBackedDeviceInfo; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx

  v4 = a1;
  v5 = &a1[a3];
  EnterCrit(0LL, 1LL);
  v7 = *(_WORD *)v4;
  RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, *(_WORD *)v4 == 0xFFFE, 1LL);
  v11 = RimDevBackedDeviceInfo;
  if ( RimDevBackedDeviceInfo )
  {
    v10 = gpKL;
    if ( gpKL )
    {
      if ( *(_DWORD *)(gpKL + 88LL) )
      {
        v9 = *(unsigned int *)(RimDevBackedDeviceInfo + 484);
        if ( *(_QWORD *)(gpKL + 104LL) != *(_QWORD *)(RimDevBackedDeviceInfo + 484) )
        {
          SearchAndSetKbdTbl((struct DEVICEINFO *)RimDevBackedDeviceInfo, v9, *(_DWORD *)(RimDevBackedDeviceInfo + 488));
          v9 = gpKL;
          *(_DWORD *)(gpKL + 104LL) = *(_DWORD *)(v11 + 484);
          v10 = gpKL;
          *(_DWORD *)(gpKL + 108LL) = *(_DWORD *)(v11 + 488);
        }
      }
    }
    while ( v4 < v5 )
    {
      v10 = gpsi;
      if ( (*gpsi & 0x2000) != 0 )
        break;
      if ( v7 == -2 )
        ProcessKeyboardInjectedInputViaRim(v4, v11);
      else
        ProcessKeyboardInputWorker(v4, v11, 1LL);
      v4 += 12;
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9);
}
