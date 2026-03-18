/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1C01EC350
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     SelectNewFrameRgn @ 0x1C00C6BDC (SelectNewFrameRgn.c)
 *     SelectWindowRgn @ 0x1C00E6E74 (SelectWindowRgn.c)
 *     xxxSetWindowRgn @ 0x1C0107570 (xxxSetWindowRgn.c)
 *     MirrorRegion @ 0x1C0107644 (MirrorRegion.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  v7 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v11 = v8;
  if ( v8 && (v10 = (*(_WORD *)(v8 + 82) & 0x3FFFu) - 669, (v10 & 0xFFFFFFFD) != 0) )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v18;
    v18[1] = v8;
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    CurrentProcess = PsGetCurrentProcess(gptiCurrent, gptiCurrent);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      if ( (a3 & 5) != 0 )
      {
        if ( !a2
          || (v16 = UserValidateCopyRgn(a2), (v5 = v16) != 0)
          && ((*(_BYTE *)(v11 + 66) & 0x40) == 0
           || v16 <= 2
           || (unsigned int)GreOffsetRgn(
                              v16,
                              (unsigned int)-*(_DWORD *)(v11 + 128),
                              (unsigned int)-*(_DWORD *)(v11 + 132))
           && (unsigned int)MirrorRegion(v11, v5, 0)
           && (unsigned int)GreOffsetRgn(v5, *(unsigned int *)(v11 + 128), *(unsigned int *)(v11 + 132))) )
        {
          if ( (a3 & 1) != 0 )
          {
            SelectNewFrameRgn(v11, v5);
          }
          else
          {
            if ( !a2 )
              v5 = 1LL;
            SelectWindowRgn((struct tagWND *)v11, (HRGN)v5, 0);
          }
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        v7 = xxxSetWindowRgn(v11, a2, a3 & 2);
      }
    }
    else
    {
      v7 = 0;
      UserSetLastError(5LL, v13);
    }
    ThreadUnlock1(v15, v14);
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v7;
}
