/*
 * XREFs of xxxProcessHidInput @ 0x1C01B6F40
 * Callers:
 *     ProcessHidRawInput @ 0x1C01B6690 (ProcessHidRawInput.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01B5EB0 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01B5F24 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1)
{
  __int64 v2; // r14
  int v3; // ebp
  int v4; // r15d
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct tagPROCESS_HID_REQUEST *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int *v18; // rdi
  struct tagPROCESS_HID_REQUEST *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // rdx
  bool v26; // zf
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = 1;
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
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v32);
  if ( gpqForeground )
  {
    v8 = *(_QWORD *)(gpqForeground + 120LL);
    v9 = v8 ? *(_QWORD *)(v8 + 16) : *(_QWORD *)(gpqForeground + 96LL);
    v2 = *(_QWORD *)(v9 + 400);
    v10 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v2 + 784));
    if ( v10 )
    {
      v13 = gpqForeground;
      v14 = *((_QWORD *)v10 + 4);
      if ( !v14 || (v13 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL), *(char *)(v14 + 60) >= 0) )
      {
        if ( (*((_BYTE *)a1 + 64) & 0x40) == 0
          || (v15 = *(unsigned int *)(*((_QWORD *)a1 + 59) + 276LL), (v15 & 0x40) != 0)
          || (!(unsigned int)IsDwmInputThread(v15, v6, v11, v12)
            ? (v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL))
            : (v16 = *(_QWORD *)(*((_QWORD *)a1 + 59) + 856LL)),
              (v6 = gbEnforceUIPI, v7 = *(_QWORD *)(v13 + 420), !gbEnforceUIPI)
           || (unsigned int)v16 > (unsigned int)v7
           || (_DWORD)v16 == (_DWORD)v7
           && ((v17 = HIDWORD(v16), v7 >>= 32, (_DWORD)v17 == (_DWORD)v7)
            || (v6 = 0xFFFFFFFFLL, (_DWORD)v17 == -1)
            || (_DWORD)v7 == -1)) )
        {
          if ( (unsigned int)PostHidInput(a1, (struct tagQ *)v13, (struct tagWND *)v14, 0LL) )
          {
            v3 = 1;
            v4 = 0;
          }
        }
      }
    }
  }
  result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
  v18 = (int *)RawInputManagerObject::gHidRequestTable[4];
  while ( v18 != (int *)result )
  {
    if ( v18[20] <= 0 )
      goto LABEL_67;
    v19 = HidIsRequestedByThisProcess(a1, (struct tagPROCESS_HID_TABLE *)v18);
    if ( !v19 )
      goto LABEL_67;
    v7 = *((unsigned int *)v19 + 5);
    if ( (v7 & 1) == 0 || (v7 & 2) != 0 && !v4 )
      goto LABEL_67;
    v6 = *((_QWORD *)v19 + 5);
    if ( v6 )
    {
      (*((void (__fastcall **)(struct DEVICEINFO *))v19 + 5))(a1);
      goto LABEL_67;
    }
    v20 = *((_QWORD *)v19 + 4);
    v21 = *(_QWORD *)(v20 + 16);
    v22 = *(_QWORD *)(v21 + 400);
    if ( v22 == v2 )
      goto LABEL_67;
    v7 = grpdeskRitInput;
    if ( *(_QWORD *)(v20 + 24) != grpdeskRitInput || *(char *)(v20 + 60) < 0 || *(char *)(v20 + 59) < 0 )
      goto LABEL_67;
    v23 = *((_QWORD *)a1 + 58);
    v24 = *(_WORD *)(v23 + 16);
    v25 = *(unsigned __int16 *)(v23 + 18);
    if ( v24 == 12 )
    {
      v26 = (_WORD)v25 == 1;
      goto LABEL_40;
    }
    if ( v24 == 1 )
    {
      v26 = (_WORD)v25 == 9;
LABEL_40:
      if ( v26 )
        goto LABEL_65;
      goto LABEL_45;
    }
    if ( v24 >= 0xFF00u )
      goto LABEL_65;
LABEL_45:
    if ( gpqForeground )
    {
      v25 = *(_QWORD *)(gpqForeground + 420LL);
      v27 = *(_QWORD *)(*(_QWORD *)(v21 + 408) + 420LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v27 <= (unsigned int)v25 )
        {
          if ( (_DWORD)v27 != (_DWORD)v25
            || (v28 = HIDWORD(v27), v25 >>= 32, (_DWORD)v28 != (_DWORD)v25) && (_DWORD)v28 != -1 && (_DWORD)v25 != -1 )
          {
            if ( *(int *)(v22 + 12) >= 0 )
            {
              EtwTraceUIPIInputError(*(_QWORD *)(v20 + 16), 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 420LL), 5);
              goto LABEL_67;
            }
          }
        }
      }
    }
    if ( (*((_BYTE *)a1 + 64) & 0x40) == 0 )
      goto LABEL_65;
    v29 = *(unsigned int *)(*((_QWORD *)a1 + 59) + 276LL);
    if ( (v29 & 0x40) != 0 )
      goto LABEL_65;
    v30 = (unsigned int)IsDwmInputThread(v29, v25, gpqForeground, v22)
        ? *(_QWORD *)(*((_QWORD *)a1 + 59) + 856LL)
        : *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL);
    v21 = *(_QWORD *)(v20 + 16);
    v6 = gbEnforceUIPI;
    v7 = *(_QWORD *)(*(_QWORD *)(v21 + 408) + 420LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v30 > (unsigned int)v7
      || (_DWORD)v30 == (_DWORD)v7
      && ((v31 = HIDWORD(v30), v7 >>= 32, (_DWORD)v31 == (_DWORD)v7)
       || (v6 = 0xFFFFFFFFLL, (_DWORD)v31 == -1)
       || (_DWORD)v7 == -1) )
    {
LABEL_65:
      result = PostHidInput(a1, *(struct tagQ **)(v21 + 408), (struct tagWND *)v20, 1LL);
      if ( !(_DWORD)result )
        break;
      v3 = 1;
    }
LABEL_67:
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
                 0LL,
                 0,
                 0);
  }
  if ( !v32 )
    return UserSessionSwitchLeaveCrit(v7, v6);
  return result;
}
