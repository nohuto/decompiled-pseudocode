/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C00F7810
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v9; // ebx
  __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned int v12; // r14d
  unsigned __int8 *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  unsigned __int16 v26; // r8
  int v27; // ecx
  __int64 v28; // [rsp+30h] [rbp-348h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-338h] BYREF
  _DWORD v30[8]; // [rsp+48h] [rbp-330h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-310h] BYREF
  __int64 v32; // [rsp+70h] [rbp-308h]
  __int128 v33; // [rsp+78h] [rbp-300h]
  __int64 v34; // [rsp+88h] [rbp-2F0h]
  _QWORD v35[3]; // [rsp+A8h] [rbp-2D0h] BYREF
  _QWORD v36[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v37[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v38[512]; // [rsp+140h] [rbp-238h] BYREF

  LODWORD(RegionSize) = a2;
  v28 = (unsigned __int16)a3 & 0x8000;
  v9 = 0;
  v32 = 0LL;
  if ( a1 )
    v10 = a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  if ( a1 )
    v11 = *(_QWORD *)a1;
  else
    v11 = 0LL;
  if ( !HMValidateHandleNoSecure(v11, 1) )
    return 0LL;
  if ( a3 <= 0x8013 )
  {
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 != 4 )
      {
        if ( (_DWORD)a3 == 2 )
        {
          if ( (*(_BYTE *)(a1 + 59) & 1) == 0 )
            return 0LL;
          v26 = 769;
        }
        else
        {
          if ( (unsigned int)a3 <= 5 )
            goto LABEL_14;
          if ( (unsigned int)a3 > 7 )
          {
            if ( (_DWORD)a3 == 32787 )
              v9 = 1;
            goto LABEL_14;
          }
          SetOrClrWF(0, (_DWORD *)a1, 0x301u, 1);
          v26 = 770;
        }
        v27 = 0;
LABEL_48:
        SetOrClrWF(v27, (_DWORD *)a1, v26, 1);
        goto LABEL_14;
      }
      SetOrClrWF(0, (_DWORD *)a1, 0x301u, 1);
      v26 = 770;
    }
    else
    {
      v26 = 769;
    }
    v27 = 1;
    goto LABEL_48;
  }
LABEL_14:
  v12 = 0;
  if ( v28 && a4 && a4 >= (unsigned __int64)MmSystemRangeStart )
  {
    if ( *(_DWORD *)(a4 + 16) >= 0xFFFFFFEC )
      return 0LL;
    v12 = *(_DWORD *)(a4 + 16) + 20;
  }
  if ( !v9 )
  {
    v13 = (unsigned __int8 *)v37;
    memset(v37, 0, 0x58uLL);
    v37[0] = 88;
    goto LABEL_21;
  }
  v13 = AllocCallbackMessage(88, v9, v12, v38, 1, 0x200uLL);
  if ( !v13 )
    return 0LL;
LABEL_21:
  if ( v13 != (unsigned __int8 *)v37 && v13 != v38 )
    PushW32ThreadLock((__int64)v13, v36, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 5) = v10;
  *((_DWORD *)v13 + 12) = RegionSize;
  *((_QWORD *)v13 + 7) = a3;
  if ( v12 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v13, (char *)a4, v12, (void **)v13 + 10) < 0 )
      goto LABEL_59;
  }
  else
  {
    *((_QWORD *)v13 + 10) = a4;
  }
  *((_QWORD *)v13 + 8) = a5;
  *((_QWORD *)v13 + 9) = a6;
  v35[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v35;
  v35[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  v16 = *(_QWORD *)(gptiCurrent + 432LL);
  v33 = *(_OWORD *)(v16 + 64);
  v34 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v10;
  if ( a1 )
    v17 = *(_QWORD *)a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1 + 280);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v18;
  if ( gdwInAtomicOperation )
  {
    v18 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v18, gdwInAtomicOperation, v14, v15);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v19 = KeUserModeCallback(29LL, v13, *(unsigned int *)v13, &v31, v30);
  EtwTraceEndCallback(29LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v22 + 64) = v33;
  *(_QWORD *)(v22 + 80) = v34;
  if ( v19 >= 0 && v30[0] == 24 )
  {
    v23 = (__int64 *)v31;
    if ( v31 + 8 < v31 || v31 + 8 > W32UserProbeAddress )
      v23 = (__int64 *)W32UserProbeAddress;
    v24 = *v23;
    v32 = *v23;
    goto LABEL_41;
  }
LABEL_59:
  v24 = 0LL;
LABEL_41:
  if ( v13 != (unsigned __int8 *)v37 && v13 != v38 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v36);
  }
  return v24;
}
