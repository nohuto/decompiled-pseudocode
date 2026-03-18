/*
 * XREFs of NtUserInjectGesture @ 0x1C01DC1D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _PostMessageCheckIL @ 0x1C01BD084 (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C01EF110 (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C01EF6AC (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C01EF780 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C01EF7C0 (_FreeGestureInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, volatile void *Address)
{
  volatile void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  SIZE_T v21; // xmm1_8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v23; // rax
  struct _LARGE_STRING *v24; // rsi
  _BYTE v26[16]; // [rsp+40h] [rbp-B8h] BYREF
  volatile void *v27; // [rsp+50h] [rbp-A8h]
  _QWORD v28[3]; // [rsp+60h] [rbp-98h] BYREF
  _OWORD v29[3]; // [rsp+78h] [rbp-80h] BYREF
  SIZE_T v30; // [rsp+A8h] [rbp-50h]
  __int128 v31; // [rsp+B0h] [rbp-48h]
  __int128 v32; // [rsp+C0h] [rbp-38h]
  __int128 v33; // [rsp+D0h] [rbp-28h]
  SIZE_T Length; // [rsp+E0h] [rbp-18h]

  v9 = 0LL;
  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  v12 = ValidateHwnd(a1);
  if ( v12 )
  {
    v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v28;
    v28[1] = v12;
    ++*(_DWORD *)(v12 + 8);
    if ( a3 || !a4 || a2 )
    {
      v15 = 87LL;
    }
    else
    {
      if ( *(char *)(v12 + 60) >= 0 && *(char *)(v12 + 59) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(gptiCurrent, v12) )
        {
LABEL_9:
          LODWORD(v12) = 0;
LABEL_26:
          ThreadUnlock1(v17, v16);
          goto LABEL_27;
        }
        v20 = a4 + 56;
        if ( a4 + 56 < a4 || v20 > W32UserProbeAddress )
          a4 = W32UserProbeAddress;
        v31 = *(_OWORD *)a4;
        v32 = *(_OWORD *)(a4 + 16);
        v33 = *(_OWORD *)(a4 + 32);
        v21 = *(_QWORD *)(a4 + 48);
        Length = v21;
        v29[0] = v31;
        v29[1] = v32;
        v29[2] = v33;
        v30 = v21;
        if ( (_DWORD)v21 )
        {
          if ( Address )
            goto LABEL_18;
        }
        else if ( !Address )
        {
LABEL_18:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20, v16, v18, v19);
            ProbeForRead(Address, (unsigned int)v21, CurrentProcessWow64Process != 0 ? 1 : 4);
            v9 = Address;
            v27 = Address;
          }
          if ( (unsigned int)ValidateGestureInfo(v20, v16, v29) )
          {
            v23 = AllocGestureInfo(v12, 0LL, v29, v9);
            v24 = (struct _LARGE_STRING *)v23;
            if ( v23 )
            {
              EtwTracePostInjectedGestureMessage(v12, v23);
              LODWORD(v12) = PostMessageCheckIL(
                               (struct tagWND *)v12,
                               281LL,
                               *(unsigned int *)(*(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)v24) + 40LL),
                               v24);
              if ( !(_DWORD)v12 )
                FreeGestureInfo(v24, 1LL);
              goto LABEL_26;
            }
          }
          goto LABEL_9;
        }
        LODWORD(v12) = 0;
        UserSetLastError(87LL);
        goto LABEL_26;
      }
      v15 = 1400LL;
    }
    LODWORD(v12) = 0;
    UserSetLastError(v15);
    goto LABEL_26;
  }
LABEL_27:
  if ( !v26[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v26);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v13, v14);
  return (int)v12;
}
