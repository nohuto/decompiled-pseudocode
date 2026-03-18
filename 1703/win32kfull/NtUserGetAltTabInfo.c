/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C01D81E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     _GetAltTabInfo @ 0x1C01CBDC4 (_GetAltTabInfo.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, int a2, unsigned __int64 a3, volatile void *a4, ULONG a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  _BYTE *v15; // rdx
  SIZE_T v16; // rdx
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v18; // rdi
  unsigned int v19; // eax
  INT v20; // ebx
  INT v21; // edi
  int AltTabInfo; // [rsp+30h] [rbp-A8h]
  _BYTE v24[40]; // [rsp+68h] [rbp-70h] BYREF

  memset(v24, 0, sizeof(v24));
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      AltTabInfo = 0;
      goto LABEL_25;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 || (struct tagWND *)v14 == gspwndAltTab )
  {
    if ( ((PsGetCurrentProcessWow64Process(v11, v10, v12, v13) != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (_BYTE *)a3;
    if ( a3 >= W32UserProbeAddress )
      v15 = (_BYTE *)W32UserProbeAddress;
    *v15 = *v15;
    v15[39] = v15[39];
    v16 = a5;
    if ( !a6 )
      v16 = 2LL * a5;
    ProbeForWrite(a4, v16, 2u);
    if ( *(_DWORD *)a3 == 40 )
    {
      *(_DWORD *)v24 = 40;
      AltTabInfo = GetAltTabInfo(a2, (__int64)v24, (CHAR *)a4, a5, a6);
      if ( v14 )
      {
        v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
        if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
        {
          v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
          if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
          {
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
            v11 = *(_DWORD *)(v14 + 368) & 0xF;
            if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v11 )
            {
              v18 = ValidateHmonitorNoRip(*(_QWORD *)(v14 + 360));
              if ( v18 )
              {
                v19 = W32GetCurrentThreadDpiAwarenessContext();
                v20 = (unsigned __int16)MonitorDpiFromDpiAwarenessContext(v18, v19);
                v21 = (unsigned __int16)MonitorDpiFromDpiAwarenessContext(v18, *(unsigned int *)(v14 + 368));
                *(_DWORD *)&v24[24] = EngMulDiv(*(INT *)&v24[24], v20, v21);
                *(_DWORD *)&v24[28] = EngMulDiv(*(INT *)&v24[28], v20, v21);
              }
              TransformPointBetweenCoordinateSpaces(&v24[32], &v24[32], 0LL, v14);
            }
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = *(_OWORD *)v24;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v24[16];
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v24[32];
      }
    }
    else
    {
      UserSetLastError(87LL);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400LL);
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return AltTabInfo;
}
