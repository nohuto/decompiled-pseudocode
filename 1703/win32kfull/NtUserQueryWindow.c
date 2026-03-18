/*
 * XREFs of NtUserQueryWindow @ 0x1C003C1C0
 * Callers:
 *     <none>
 * Callees:
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ShouldProcessHungWindow @ 0x1C01199B0 (ShouldProcessHungWindow.c)
 *     ProcessHungWindow @ 0x1C01321FC (ProcessHungWindow.c)
 */

__int64 __fastcall NtUserQueryWindow(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  int v10; // edi
  int v11; // edi
  HANDLE ThreadProcessId; // rax
  __int64 v13; // rbx
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  __int64 *v20; // rbx
  int v21; // eax
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = v4;
  if ( !v4 )
    goto LABEL_27;
  v5 = *(_QWORD *)(v4 + 16);
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v4 + 304) & 0x800) != 0 )
    {
      v13 = **(int **)(v4 + 384);
      goto LABEL_8;
    }
    goto LABEL_10;
  }
  v10 = a2 - 1;
  if ( !v10 )
  {
LABEL_10:
    ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v5);
LABEL_7:
    v13 = (__int64)ThreadProcessId;
    goto LABEL_8;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( (*(_DWORD *)(v4 + 304) & 0x800) != 0 )
    {
      v13 = *(int *)(*(_QWORD *)(v4 + 384) + 4LL);
      goto LABEL_8;
    }
    ThreadProcessId = PsGetThreadId(*(PETHREAD *)v5);
    goto LABEL_7;
  }
  v15 = v11 - 1;
  if ( !v15 )
  {
    v20 = *(__int64 **)(*(_QWORD *)(v5 + 384) + 88LL);
    goto LABEL_19;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v20 = *(__int64 **)(*(_QWORD *)(v5 + 384) + 80LL);
    goto LABEL_19;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 2;
    if ( !v18 )
    {
      v6 = gpqForeground;
      v13 = *(_QWORD *)(v5 + 384) == gpqForeground;
      goto LABEL_8;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
        goto LABEL_27;
      v20 = *(__int64 **)(v5 + 704);
    }
    else
    {
      v20 = *(__int64 **)(v5 + 696);
    }
LABEL_19:
    if ( v20 )
    {
      v13 = *v20;
      goto LABEL_8;
    }
LABEL_27:
    v13 = 0LL;
    goto LABEL_8;
  }
  if ( (*(_WORD *)(v4 + 82) & 0x3FFF) == 0x2AA )
  {
    v13 = 1LL;
  }
  else
  {
    v21 = IsHungWindow(v4, v5);
    v13 = v21;
    if ( v21 )
    {
      v22 = (__int64 *)ShouldProcessHungWindow(v9);
      if ( v22 )
      {
        v23 = *v22;
        if ( gdwInAtomicOperation )
        {
          v6 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
        EnterCrit(0LL, 1LL);
        LOBYTE(v24) = 1;
        v25 = HMValidateHandleNoSecure(v23, v24);
        if ( v25 )
          ProcessHungWindow(v25);
        UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
        EnterSharedCrit(0LL, 1LL);
      }
    }
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v13;
}
