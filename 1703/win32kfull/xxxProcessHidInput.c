/*
 * XREFs of xxxProcessHidInput @ 0x1C01B3FC0
 * Callers:
 *     ProcessHidRawInput @ 0x1C01B3710 (ProcessHidRawInput.c)
 *     DitTouchInject @ 0x1C01BA218 (DitTouchInject.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01B2F00 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01B2F74 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1)
{
  __int64 v2; // r15
  int v3; // r14d
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct tagPROCESS_HID_REQUEST *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int *v18; // rsi
  struct tagPROCESS_HID_REQUEST *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // rax
  unsigned __int16 v23; // cx
  unsigned __int64 v24; // rdx
  bool v25; // zf
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  result = (unsigned int)*gpsi;
  if ( (result & 0x2000) != 0 )
    return result;
  if ( (result & 0x4000) != 0 )
  {
    result = *((unsigned int *)a1 + 50);
    if ( (result & 0x80u) == 0LL )
      return result;
    result = *((_QWORD *)a1 + 57);
    if ( *(_DWORD *)(result + 40) != 851973 )
      return result;
  }
  if ( *((int *)a1 + 64) < 0 )
    return result;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v31);
  v8 = 1LL;
  v9 = gpqForeground;
  if ( gpqForeground )
  {
    v10 = *(_QWORD *)(gpqForeground + 88LL);
    v11 = v10 ? *(_QWORD *)(v10 + 16) : *(_QWORD *)(gpqForeground + 64LL);
    v2 = *(_QWORD *)(v11 + 376);
    v12 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v2 + 776));
    if ( v12 )
    {
      v9 = gpqForeground;
      v13 = *((_QWORD *)v12 + 4);
      v14 = gpqForeground;
      if ( !v13 || (v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 384LL), *(char *)(v13 + 60) >= 0) )
      {
        if ( (*((_BYTE *)a1 + 64) & 0x40) == 0
          || (v15 = *(unsigned int *)(*((_QWORD *)a1 + 59) + 260LL), (v15 & 0x40) != 0)
          || (!(unsigned int)IsDwmInputThread(v15, v5, v6, v7)
            ? (v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL))
            : (v16 = *(_QWORD *)(*((_QWORD *)a1 + 59) + 1520LL)),
              (v5 = gbEnforceUIPI, v9 = *(_QWORD *)(v14 + 380), !gbEnforceUIPI)
           || (unsigned int)v16 > (unsigned int)v9
           || (_DWORD)v16 == (_DWORD)v9
           && ((v17 = HIDWORD(v16), v9 >>= 32, (_DWORD)v17 == (_DWORD)v9)
            || (v5 = 0xFFFFFFFFLL, (_DWORD)v17 == -1)
            || (_DWORD)v9 == -1)) )
        {
          v8 = 1LL;
          if ( (unsigned int)PostHidInput(a1, (struct tagQ *)v14, (struct tagWND *)v13, 0LL) )
          {
            v3 = 1;
            v8 = 0LL;
          }
        }
        else
        {
          v8 = 1LL;
        }
      }
    }
  }
  result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
  v18 = (int *)RawInputManagerObject::gHidRequestTable[4];
  while ( v18 != (int *)result )
  {
    if ( v18[20] <= 0 )
      goto LABEL_68;
    v19 = HidIsRequestedByThisProcess(a1, (struct tagPROCESS_HID_TABLE *)v18);
    if ( !v19 )
      goto LABEL_68;
    v9 = *((unsigned int *)v19 + 5);
    if ( (v9 & 1) == 0 || (v9 & 2) != 0 && !v8 )
      goto LABEL_68;
    v5 = *((_QWORD *)v19 + 5);
    if ( v5 )
    {
      (*((void (__fastcall **)(struct DEVICEINFO *))v19 + 5))(a1);
      goto LABEL_68;
    }
    v20 = *((_QWORD *)v19 + 4);
    v21 = *(_QWORD *)(v20 + 16);
    v7 = *(_QWORD *)(v21 + 376);
    if ( v7 == v2 )
      goto LABEL_68;
    v9 = grpdeskRitInput;
    if ( *(_QWORD *)(v20 + 24) != grpdeskRitInput || *(char *)(v20 + 60) < 0 || *(char *)(v20 + 59) < 0 )
      goto LABEL_68;
    v22 = *((_QWORD *)a1 + 58);
    v23 = *(_WORD *)(v22 + 16);
    v24 = *(unsigned __int16 *)(v22 + 18);
    if ( v23 == 12 )
    {
      v25 = (_WORD)v24 == 1;
      goto LABEL_41;
    }
    if ( v23 == 1 )
    {
      v25 = (_WORD)v24 == 9;
LABEL_41:
      if ( v25 )
        goto LABEL_66;
      goto LABEL_46;
    }
    if ( v23 >= 0xFF00u )
      goto LABEL_66;
LABEL_46:
    if ( gpqForeground )
    {
      v24 = *(_QWORD *)(gpqForeground + 380LL);
      v26 = *(_QWORD *)(*(_QWORD *)(v21 + 384) + 380LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v26 <= (unsigned int)v24 )
        {
          if ( (_DWORD)v26 != (_DWORD)v24
            || (v27 = HIDWORD(v26), v24 >>= 32, (_DWORD)v27 != (_DWORD)v24) && (_DWORD)v27 != -1 && (_DWORD)v24 != -1 )
          {
            if ( *(int *)(v7 + 12) >= 0 )
            {
              EtwTraceUIPIInputError(*(_QWORD *)(v20 + 16), 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 5);
              goto LABEL_68;
            }
          }
        }
      }
    }
    if ( (*((_BYTE *)a1 + 64) & 0x40) == 0 )
      goto LABEL_66;
    v28 = *(unsigned int *)(*((_QWORD *)a1 + 59) + 260LL);
    if ( (v28 & 0x40) != 0 )
      goto LABEL_66;
    v29 = (unsigned int)IsDwmInputThread(v28, v24, gpqForeground, v7)
        ? *(_QWORD *)(*((_QWORD *)a1 + 59) + 1520LL)
        : *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    v21 = *(_QWORD *)(v20 + 16);
    v5 = gbEnforceUIPI;
    v9 = *(_QWORD *)(*(_QWORD *)(v21 + 384) + 380LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v29 > (unsigned int)v9
      || (_DWORD)v29 == (_DWORD)v9
      && ((v30 = HIDWORD(v29), v9 >>= 32, (_DWORD)v30 == (_DWORD)v9)
       || (v5 = 0xFFFFFFFFLL, (_DWORD)v30 == -1)
       || (_DWORD)v9 == -1) )
    {
LABEL_66:
      result = PostHidInput(a1, *(struct tagQ **)(v21 + 384), (struct tagWND *)v20, 1uLL);
      if ( !(_DWORD)result )
        break;
      v3 = 1;
    }
LABEL_68:
    v18 = *(int **)v18;
    result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
  }
  if ( v3 )
  {
    result = *((unsigned int *)a1 + 50);
    if ( (result & 0x40) == 0 )
      result = CInputGlobals::UpdateInputGlobals(
                 gpInputGlobals,
                 (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                 3LL,
                 0LL);
  }
  if ( !v31 )
    return UserSessionSwitchLeaveCrit(v9, v5, v6, v7);
  return result;
}
