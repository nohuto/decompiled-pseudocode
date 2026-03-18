/*
 * XREFs of NtUserQueryWindow @ 0x1C0087260
 * Callers:
 *     <none>
 * Callees:
 *     ShouldProcessHungWindow @ 0x1C00842F8 (ShouldProcessHungWindow.c)
 *     IsHungWindow @ 0x1C0088E80 (IsHungWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ProcessHungWindow @ 0x1C013431C (ProcessHungWindow.c)
 */

__int64 __fastcall NtUserQueryWindow(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  HANDLE ThreadId; // rax
  __int64 v10; // rdi
  int v12; // eax
  struct tagWND *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = v4;
  if ( !v4 )
  {
LABEL_22:
    v10 = 0LL;
    goto LABEL_6;
  }
  v8 = *(_QWORD *)(v4 + 16);
  if ( a2 == 2 )
  {
    if ( (*(_DWORD *)(v4 + 304) & 0x800) != 0 )
    {
      v10 = *(int *)(*(_QWORD *)(v4 + 384) + 4LL);
      goto LABEL_6;
    }
    ThreadId = PsGetThreadId(*(PETHREAD *)v8);
    goto LABEL_5;
  }
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v4 + 304) & 0x800) != 0 )
    {
      v10 = **(int **)(v4 + 384);
      goto LABEL_6;
    }
LABEL_9:
    ThreadId = PsGetThreadProcessId(*(PETHREAD *)v8);
LABEL_5:
    v10 = (__int64)ThreadId;
    goto LABEL_6;
  }
  v6 = 0x1C0000000uLL;
  switch ( a2 )
  {
    case 1:
      goto LABEL_9;
    case 3:
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 408) + 120LL);
      if ( !v10 )
        goto LABEL_22;
      goto LABEL_18;
    case 4:
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 408) + 112LL);
      if ( !v10 )
        break;
      goto LABEL_18;
    case 5:
      if ( (*(_WORD *)(v4 + 82) & 0x3FFF) == 0x2AA )
        goto LABEL_26;
      v12 = IsHungWindow(v4);
      v10 = v12;
      if ( v12 )
      {
        v13 = ShouldProcessHungWindow(v7);
        if ( v13 )
        {
          v14 = *(_QWORD *)v13;
          if ( gdwInAtomicOperation )
          {
            v6 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation);
          EnterCrit(0LL, 1LL);
          LOBYTE(v15) = 1;
          v16 = HMValidateHandleNoSecure(v14, v15);
          if ( v16 )
            ProcessHungWindow(v16);
          UserSessionSwitchLeaveCrit(v18, v17);
          EnterSharedCrit(0LL, 1LL);
        }
      }
      break;
    case 7:
      v6 = gpqForeground;
      if ( *(_QWORD *)(v8 + 408) != gpqForeground )
        goto LABEL_22;
LABEL_26:
      v10 = 1LL;
      break;
    case 8:
      v10 = *(_QWORD *)(v8 + 752);
      if ( !v10 )
        goto LABEL_22;
      goto LABEL_18;
    case 9:
      v10 = *(_QWORD *)(v8 + 760);
      if ( !v10 )
        goto LABEL_22;
LABEL_18:
      v10 = *(_QWORD *)v10;
      break;
    default:
      goto LABEL_22;
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v10;
}
