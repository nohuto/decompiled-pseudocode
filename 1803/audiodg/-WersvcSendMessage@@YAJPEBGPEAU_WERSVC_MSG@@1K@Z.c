/*
 * XREFs of ?WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z @ 0x14003A4E0
 * Callers:
 *     ReportHangInternal2 @ 0x140039E24 (ReportHangInternal2.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     ?SignalStartWerSvc@@YAJXZ @ 0x14003A364 (-SignalStartWerSvc@@YAJXZ.c)
 *     ?WaitForWerSvc@@YAJK@Z @ 0x14003A438 (-WaitForWerSvc@@YAJK@Z.c)
 */

__int64 __fastcall WersvcSendMessage(const unsigned __int16 *a1, struct _WERSVC_MSG *a2, struct _WERSVC_MSG *a3)
{
  NTSTATUS started; // ebx
  NTSTATUS v6; // eax
  int v7; // ebx
  __int64 *v8; // rsi
  int v9; // eax
  HANDLE v10; // rcx
  int v11; // eax
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int SystemInformation; // [rsp+70h] [rbp-90h] BYREF
  int v16; // [rsp+74h] [rbp-8Ch]
  __int64 v17; // [rsp+78h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  int v20; // [rsp+98h] [rbp-68h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  int v23; // [rsp+B0h] [rbp-50h]
  __int128 v24; // [rsp+B8h] [rbp-48h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v26[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-20h]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Handle = 0LL;
  Sid = 0LL;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, &SystemInformation, 8u, 0LL);
    if ( started >= 0 )
    {
      v6 = WaitForWerSvc(SystemInformation);
      started = v6;
      if ( v6 >= 0 )
      {
        if ( v6 == 258 )
        {
LABEL_5:
          started = -1073740973;
          goto LABEL_16;
        }
        started = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &Sid);
        if ( started >= 0 )
        {
          v7 = v16;
          if ( v16 != -1 )
            v18 = -10000LL * v16;
          RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
          v20 = 48;
          v21 = 0LL;
          v23 = 0;
          v22 = 0LL;
          v24 = 0LL;
          memset_0(v26, 0, 0x48uLL);
          v8 = &v18;
          if ( v7 == -1 )
            v8 = 0LL;
          v27 = 1400LL;
          v9 = NtAlpcConnectPort(&Handle, &DestinationString, &v20, v26, 0x20000, Sid, 0LL, 0LL, 0LL, 0LL, v8);
          started = v9;
          if ( v9 >= 0 )
          {
            if ( v9 == 258 )
              goto LABEL_5;
            memset_0(a3, 0, 0x578uLL);
            v10 = Handle;
            *(_DWORD *)a3 = 91751760;
            v17 = 1400LL;
            v11 = NtAlpcSendWaitReceivePort(v10, 0x20000LL, a2, 0LL, a3, &v17, 0LL, v8);
            started = v11;
            if ( v11 >= 0 && v11 != 258 )
              started = v17 != 1400 ? 0xC000021F : 0;
          }
        }
      }
    }
  }
LABEL_16:
  if ( Sid )
    RtlFreeSid(Sid);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)started;
}
