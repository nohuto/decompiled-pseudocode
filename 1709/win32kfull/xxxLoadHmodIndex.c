/*
 * XREFs of xxxLoadHmodIndex @ 0x1C0059E80
 * Callers:
 *     xxxLoadUserApiHook @ 0x1C00586D0 (xxxLoadUserApiHook.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C006E334 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C005A10C (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     ClientLoadLibrary @ 0x1C005A140 (ClientLoadLibrary.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ClientFreeLibrary @ 0x1C0111D8C (ClientFreeLibrary.c)
 *     ??0?$CUnLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C011925C (--0-$CUnLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _lambda_7447beefc42d69fd1fb5049cd3e9ddc4_::operator() @ 0x1C0144454 (_lambda_7447beefc42d69fd1fb5049cd3e9ddc4_--operator().c)
 *     ??1?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C01A0A60 (--1-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 */

__int64 __fastcall xxxLoadHmodIndex(int a1)
{
  __int64 v1; // r14
  __int64 ThreadWin32Thread; // rsi
  int v3; // ebx
  const WCHAR *v4; // rdx
  __int64 v5; // r15
  __int64 v6; // r9
  int AtomNameFromAtomTable; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  tagObjLock *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-E0h] BYREF
  tagObjLock *v16; // [rsp+28h] [rbp-D8h] BYREF
  tagObjLock *v17; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v20; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v24[264]; // [rsp+290h] [rbp+190h] BYREF

  v1 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = 1;
  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(v15);
  if ( (int)v1 < 0 || (int)v1 >= catomSysTableEntries )
  {
    UserSetLastError(87LL);
  }
  else if ( *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 8 * v1 + 384) != -1LL )
  {
    UserGetAtomNameFromAtomTable(
      UserLibmgmtAtomTableHandle,
      *((unsigned __int16 *)&aatomSysLoaded + v1),
      SourceString,
      260LL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (_DWORD)v1 == gihmodUserApiHook )
    {
      v4 = &gszFunctionUserApiHook;
    }
    else
    {
      if ( (_DWORD)v1 != gihmodUserApiHookWOW )
      {
        RtlInitUnicodeString(&v20, 0LL);
        v3 = 0;
LABEL_10:
        CLockDomainExclusive<DLT_CLIENTLIB>::~CLockDomainExclusive<DLT_CLIENTLIB>(v15);
        v5 = ClientLoadLibrary(&DestinationString, &v20);
        if ( !v5 )
        {
          if ( !(unsigned __int8)lambda_7447beefc42d69fd1fb5049cd3e9ddc4_::operator()()
            || !*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 836LL) )
          {
            return v5;
          }
          CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(v19);
          v13 = v19;
          *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 8 * v1 + 384) = -1LL;
LABEL_23:
          CLockDomainExclusive<DLT_CLIENTLIB>::~CLockDomainExclusive<DLT_CLIENTLIB>(v13);
          return v5;
        }
        CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(v18);
        if ( v3
          && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                         UserLibmgmtAtomTableHandle,
                                         *((unsigned __int16 *)&aatomSysLoaded + v1),
                                         v24,
                                         260LL),
               RtlInitUnicodeString(&String1, v24),
               !AtomNameFromAtomTable)
           || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
        {
          CUnLockDomainExclusive<DLT_CLIENTLIB>::CUnLockDomainExclusive<DLT_CLIENTLIB>(&v16, v8, v9, v6);
          ClientFreeLibrary(v5);
          v10 = v16;
          v5 = 0LL;
        }
        else
        {
          v11 = *(_QWORD *)(ThreadWin32Thread + 400);
          v12 = (unsigned int)(1 << v1);
          if ( ((unsigned int)v12 & *(_DWORD *)(v11 + 380)) == 0 )
          {
            ++*((_DWORD *)&acatomSysUse + v1);
            *(_QWORD *)(v11 + 8 * v1 + 384) = v5;
            *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 380LL) |= v12;
LABEL_19:
            v13 = v18;
            goto LABEL_23;
          }
          CUnLockDomainExclusive<DLT_CLIENTLIB>::CUnLockDomainExclusive<DLT_CLIENTLIB>(&v17, v12, v11, v6);
          ClientFreeLibrary(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 8 * v1 + 384));
          v10 = v17;
        }
        tagObjLock::LockExclusive(v10);
        goto LABEL_19;
      }
      v4 = &gszFunctionUserApiHookWOW;
    }
    RtlInitUnicodeString(&v20, v4);
    goto LABEL_10;
  }
  CLockDomainExclusive<DLT_CLIENTLIB>::~CLockDomainExclusive<DLT_CLIENTLIB>(v15);
  return 0LL;
}
