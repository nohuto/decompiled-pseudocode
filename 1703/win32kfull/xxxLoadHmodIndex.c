/*
 * XREFs of xxxLoadHmodIndex @ 0x1C003ACEC
 * Callers:
 *     xxxLoadUserApiHook @ 0x1C003C330 (xxxLoadUserApiHook.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C005C32C (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ClientLoadLibrary @ 0x1C003A350 (ClientLoadLibrary.c)
 *     ClientFreeLibrary @ 0x1C00F4A00 (ClientFreeLibrary.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxLoadHmodIndex(int a1)
{
  int v1; // ebx
  __int64 v2; // rsi
  __int64 Library; // rdi
  __int64 v4; // r8
  const WCHAR *v6; // rdx
  int AtomNameFromAtomTable; // ebx
  struct _UNICODE_STRING v8; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v12[264]; // [rsp+260h] [rbp+160h] BYREF

  v1 = 1;
  v2 = a1;
  if ( a1 < 0 || a1 >= catomSysTableEntries )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  UserGetAtomNameFromAtomTable(
    UserLibmgmtAtomTableHandle,
    *((unsigned __int16 *)&aatomSysLoaded + a1),
    SourceString,
    260LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( (_DWORD)v2 == gihmodUserApiHook )
  {
    v6 = &gszFunctionUserApiHook;
LABEL_12:
    RtlInitUnicodeString(&v8, v6);
    goto LABEL_6;
  }
  if ( (_DWORD)v2 == gihmodUserApiHookWOW )
  {
    v6 = &gszFunctionUserApiHookWOW;
    goto LABEL_12;
  }
  RtlInitUnicodeString(&v8, 0LL);
  v1 = 0;
LABEL_6:
  Library = ClientLoadLibrary((void **)&DestinationString, (void **)&v8);
  if ( Library )
  {
    if ( v1
      && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                     UserLibmgmtAtomTableHandle,
                                     *((unsigned __int16 *)&aatomSysLoaded + v2),
                                     v12,
                                     260LL),
           RtlInitUnicodeString(&String1, v12),
           !AtomNameFromAtomTable)
       || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
    {
      ClientFreeLibrary(Library);
      return 0LL;
    }
    else
    {
      v4 = *(_QWORD *)(gptiCurrent + 376LL);
      if ( ((1 << v2) & *(_DWORD *)(v4 + 372)) != 0 )
      {
        ClientFreeLibrary(*(_QWORD *)(v4 + 8 * v2 + 376));
      }
      else
      {
        ++*((_DWORD *)&acatomSysUse + v2);
        *(_QWORD *)(v4 + 8 * v2 + 376) = Library;
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 372LL) |= 1 << v2;
      }
    }
  }
  return Library;
}
