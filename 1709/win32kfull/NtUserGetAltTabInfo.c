/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C01E4950
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     _GetAltTabInfo @ 0x1C01D0154 (_GetAltTabInfo.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, int a2, ULONG64 a3, volatile void *a4, ULONG a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  _BYTE *v13; // rdx
  SIZE_T v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int16 v25; // di
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  INT v28; // ebx
  int AltTabInfo; // [rsp+30h] [rbp-A8h]
  _BYTE v31[40]; // [rsp+68h] [rbp-70h] BYREF

  memset(v31, 0, sizeof(v31));
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
    {
      AltTabInfo = 0;
      goto LABEL_29;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 || v12 == gspwndAltTab )
  {
    if ( ((PsGetCurrentProcessWow64Process(v11) != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v13 = (_BYTE *)MmUserProbeAddress;
    *v13 = *v13;
    v13[39] = v13[39];
    v14 = a5;
    if ( !a6 )
      v14 = 2LL * a5;
    ProbeForWrite(a4, v14, 2u);
    if ( *(_DWORD *)a3 == 40 )
    {
      *(_DWORD *)v31 = 40;
      AltTabInfo = GetAltTabInfo(a2, (__int64)v31, (CHAR *)a4, a5, a6);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19);
      if ( v12 )
      {
        v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v21, v22) + 456);
        if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
        {
          v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v23, v24) + 456);
          if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
          {
            v25 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
            if ( ((*(_DWORD *)(v12 + 368) >> 8) & 0x1FF) != v25 )
            {
              v26 = ValidateHmonitorNoRip(*(_QWORD *)(v12 + 360));
              if ( v26 )
              {
                if ( !v25 )
                  v25 = *(_WORD *)(*(_QWORD *)(v26 + 40) + 64LL);
                v27 = (*(_DWORD *)(v12 + 368) >> 8) & 0x1FF;
                if ( !v27 )
                  v27 = *(_WORD *)(*(_QWORD *)(v26 + 40) + 64LL);
                v28 = v27;
                *(_DWORD *)&v31[24] = EngMulDiv(*(INT *)&v31[24], v25, v27);
                *(_DWORD *)&v31[28] = EngMulDiv(*(INT *)&v31[28], v25, v28);
              }
              TransformPointBetweenCoordinateSpaces(&v31[32], &v31[32], 0LL, v12);
            }
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = *(_OWORD *)v31;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v31[16];
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v31[32];
      }
    }
    else
    {
      UserSetLastError(87LL, v15);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400LL, v10);
  }
LABEL_29:
  UserSessionSwitchLeaveCrit(v11, v10);
  return AltTabInfo;
}
