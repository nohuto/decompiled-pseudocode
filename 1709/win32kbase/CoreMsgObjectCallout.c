/*
 * XREFs of CoreMsgObjectCallout @ 0x1C000EEC4
 * Callers:
 *     W32CalloutDispatch @ 0x1C0048FA0 (W32CalloutDispatch.c)
 * Callees:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0011D60 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreMsgObjectCallout(unsigned int a1, _QWORD *a2, __int64 a3, const GUID *a4)
{
  const GUID *v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  int ProcessSessionId; // eax
  _DWORD *v13; // rsi
  int v14; // eax
  char v15[8]; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  unsigned int *v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]

  v15[0] = 0;
  if ( dword_1C0188C40 > 5u )
  {
    v20 = 0;
    v18 = &v16;
    v16 = a1;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016BF17, 0LL, a4, 3u, &pData);
  }
  CoreMessagingK::EntryLock::Acquire(v15, 5LL);
  v7 = a1 - 33;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
LABEL_8:
        v10 = 0;
        goto LABEL_9;
      }
      if ( v9 == 1 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*a2 + 8LL) + 16LL))(*a2 + 8LL);
        goto LABEL_8;
      }
      v10 = -1073741585;
    }
    else
    {
      v10 = 0;
      if ( *((_BYTE *)a2 + 24) )
      {
        ProcessSessionId = PsGetProcessSessionIdEx(*a2);
        if ( ProcessSessionId == -1 )
          v10 = -1073741790;
      }
    }
  }
  else
  {
    v10 = 0;
    if ( !(unsigned __int8)PsIsSystemProcess(a2[1]) )
    {
      v13 = (_DWORD *)a2[2];
      v14 = PsGetProcessSessionIdEx(a2[1]);
      if ( v14 == -1 || v14 != *v13 )
        v10 = -1073741790;
    }
  }
LABEL_9:
  v16 = v10;
  if ( dword_1C0188C40 > 5u )
  {
    v20 = 0;
    v18 = &v16;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016BEE6, 0LL, v6, 3u, &pData);
  }
  if ( v15[0] )
    KeReleaseMutex(Mutex, 0);
  return v10;
}
