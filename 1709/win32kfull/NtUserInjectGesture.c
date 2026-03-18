/*
 * XREFs of NtUserInjectGesture @ 0x1C01E83E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _PostMessageCheckIL @ 0x1C01C0F9C (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C01F958C (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C01F9B38 (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C01F9C0C (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C01F9C50 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, ULONG64 a4, volatile void *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG64 v14; // rcx
  SIZE_T v15; // xmm1_8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rax
  struct _LARGE_STRING *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  volatile void *v22; // [rsp+40h] [rbp-B8h]
  _BYTE v23[16]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v24[3]; // [rsp+60h] [rbp-98h] BYREF
  _OWORD v25[3]; // [rsp+78h] [rbp-80h] BYREF
  SIZE_T v26; // [rsp+A8h] [rbp-50h]
  __int128 v27; // [rsp+B0h] [rbp-48h]
  __int128 v28; // [rsp+C0h] [rbp-38h]
  __int128 v29; // [rsp+D0h] [rbp-28h]
  SIZE_T Length; // [rsp+E0h] [rbp-18h]

  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v24[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v24;
    v24[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a3 || !a4 || a2 )
    {
      v11 = 87LL;
    }
    else
    {
      if ( *(char *)(v10 + 60) >= 0 && *(char *)(v10 + 59) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(gptiCurrent, v10) )
        {
LABEL_9:
          LODWORD(v10) = 0;
LABEL_26:
          ThreadUnlock1(v13, v12);
          goto LABEL_27;
        }
        v14 = a4 + 56;
        if ( a4 + 56 < a4 || v14 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v27 = *(_OWORD *)a4;
        v28 = *(_OWORD *)(a4 + 16);
        v29 = *(_OWORD *)(a4 + 32);
        v15 = *(_QWORD *)(a4 + 48);
        Length = v15;
        v25[0] = v27;
        v25[1] = v28;
        v25[2] = v29;
        v26 = v15;
        if ( (_DWORD)v15 )
        {
          if ( Address )
            goto LABEL_18;
        }
        else if ( !Address )
        {
LABEL_18:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14);
            ProbeForRead(Address, (unsigned int)v15, CurrentProcessWow64Process != 0 ? 1 : 4);
            v22 = Address;
          }
          if ( (unsigned int)ValidateGestureInfo(v14, v12, v25) )
          {
            v17 = AllocGestureInfo(v10, 0LL, v25, v22);
            v18 = (struct _LARGE_STRING *)v17;
            if ( v17 )
            {
              EtwTracePostInjectedGestureMessage(v10, v17);
              LODWORD(v10) = PostMessageCheckIL(
                               (struct tagWND *)v10,
                               0x119u,
                               *(unsigned int *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v18) + 40LL),
                               v18);
              if ( !(_DWORD)v10 )
                FreeGestureInfo(v18, 1LL);
              goto LABEL_26;
            }
          }
          goto LABEL_9;
        }
        LODWORD(v10) = 0;
        UserSetLastError(87LL, v12);
        goto LABEL_26;
      }
      v11 = 1400LL;
    }
    LODWORD(v10) = 0;
    UserSetLastError(v11, v9);
    goto LABEL_26;
  }
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  UserSessionSwitchLeaveCrit(v20, v19);
  return (int)v10;
}
