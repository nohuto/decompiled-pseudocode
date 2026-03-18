/*
 * XREFs of NtUserSetWindowBand @ 0x1C00F1550
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _DeferWindowPosAndBand @ 0x1C00455E4 (_DeferWindowPosAndBand.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0062F94 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     _BeginDeferWindowPos @ 0x1C00F1720 (_BeginDeferWindowPos.c)
 */

__int64 __fastcall NtUserSetWindowBand(__int64 a1, struct tagWND *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct tagWND *v16; // rdi
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rcx
  _QWORD v24[3]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v26[4]; // [rsp+80h] [rbp-38h] BYREF
  struct tagWND *v27; // [rsp+D8h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v6;
  if ( v6 )
  {
    v8 = (*(_WORD *)(v6 + 82) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v24;
      v24[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      if ( (unsigned int)ValidateHWNDIA(a2, &v27) )
      {
        v15 = BeginDeferWindowPos(1LL);
        if ( v15 )
        {
          v16 = v27;
          if ( DeferWindowPosAndBand(v15, v12, (unsigned __int64)v27, 0, 0, 0, 0, 0x13u, a3, 1) )
          {
            if ( GetProp(v12, gatomBrokeredForeground, 1) )
            {
              v23 = 5LL;
            }
            else
            {
              if ( (unsigned __int64)v16 <= 1 )
                goto LABEL_8;
              if ( (unsigned __int64)v16 <= 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_9;
              if ( a3 == 1 )
              {
LABEL_8:
                v16 = 0LL;
LABEL_9:
                v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v25;
                v25[1] = v16;
                if ( v16 )
                  ++*((_DWORD *)v16 + 2);
                v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v26;
                v26[1] = v17;
                ++*(_DWORD *)(v17 + 8);
                v11 = xxxEndDeferWindowPosEx((struct tagSMWP *)v17, 1);
                ThreadUnlock1(v19, v18);
                ThreadUnlock1(v21, v20);
                goto LABEL_12;
              }
              v23 = 87LL;
            }
            UserSetLastError(v23);
          }
        }
      }
LABEL_12:
      ThreadUnlock1(v14, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
