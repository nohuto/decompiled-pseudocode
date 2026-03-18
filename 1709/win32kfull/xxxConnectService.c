/*
 * XREFs of xxxConnectService @ 0x1C00D8164
 * Callers:
 *     xxxResolveDesktop @ 0x1C00D92F0 (xxxResolveDesktop.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00DB1AC (xxxCreateWindowStation.c)
 */

__int64 __fastcall xxxConnectService(struct _UNICODE_STRING *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  __int64 v5; // r14
  __int64 SecurityDescriptor; // r15
  NTSTATUS WindowStation; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  HANDLE v20; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  HANDLE TokenHandle; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  int v32; // [rsp+60h] [rbp-E8h] BYREF
  HANDLE v33; // [rsp+68h] [rbp-E0h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-D8h]
  int v35; // [rsp+78h] [rbp-D0h]
  __int128 v36; // [rsp+80h] [rbp-C8h]
  __int64 v37; // [rsp+90h] [rbp-B8h]
  _QWORD *v38; // [rsp+98h] [rbp-B0h]
  __int64 v39; // [rsp+A0h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD v41[3]; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v42[3]; // [rsp+D8h] [rbp-70h] BYREF
  _QWORD v43[11]; // [rsp+F0h] [rbp-58h] BYREF
  ULONG TokenInformationLength; // [rsp+168h] [rbp+20h] BYREF

  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v4 = 0LL;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  WindowStation = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  if ( (int)(WindowStation + 0x80000000) >= 0 && WindowStation != -1073741789 )
  {
    ZwClose(TokenHandle);
    goto LABEL_15;
  }
  v4 = (_QWORD *)Win32AllocPool(TokenInformationLength, 1869902677LL);
  v38 = v4;
  if ( !v4 )
  {
    ZwClose(TokenHandle);
LABEL_26:
    WindowStation = -1073741801;
    goto LABEL_15;
  }
  WindowStation = ZwQueryInformationToken(TokenHandle, TokenUser, v4, TokenInformationLength, &TokenInformationLength);
  ZwClose(TokenHandle);
  if ( WindowStation >= 0 )
  {
    v10 = *v4;
    v5 = AllocAce(0LL, 0LL, 0LL, 983150LL, *v4, &TokenInformationLength);
    if ( v5 )
    {
      LOBYTE(v9) = 13;
      v11 = AllocAce(v5, 0LL, v9, 983247LL, v10, &TokenInformationLength);
      if ( v11 )
      {
        v5 = v11;
        v12 = AllocAce(v11, 0LL, 0LL, 256LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
        if ( v12 )
        {
          v5 = v12;
          LOBYTE(v9) = 13;
          v13 = AllocAce(v12, 0LL, v9, 193LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
          if ( v13 )
          {
            v5 = v13;
            v37 = v13;
            SecurityDescriptor = CreateSecurityDescriptor(v13, TokenInformationLength, 0LL);
            v39 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              PushW32ThreadLock((__int64)v4, v43, (__int64)Win32FreePool, v14);
              PushW32ThreadLock(v5, v42, (__int64)Win32FreePool, v15);
              PushW32ThreadLock(SecurityDescriptor, v41, (__int64)Win32FreePool, v16);
              v32 = 48;
              v33 = 0LL;
              v35 = 128;
              p_DestinationString = a1;
              v36 = (unsigned __int64)SecurityDescriptor;
              WindowStation = xxxCreateWindowStation(
                                (unsigned int)&v32,
                                0,
                                0x2000000,
                                0,
                                0,
                                0,
                                0LL,
                                0LL,
                                0,
                                (__int64)&Handle);
              v20 = Handle;
              if ( WindowStation < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, L"Default");
                v32 = 48;
                v33 = v20;
                v35 = 192;
                p_DestinationString = &DestinationString;
                v36 = 0LL;
                WindowStation = xxxCreateDesktopEx((unsigned int)&v32, 0, 0x2000000, 0, (__int64)a2, 1);
                if ( WindowStation < 0 )
                  ObCloseHandle(v20, 1);
                else
                  *a3 = v20;
              }
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
              *(_QWORD *)(ThreadWin32Thread + 16) = v41[0];
              v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
              *(_QWORD *)(v25 + 16) = v42[0];
              v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28);
              *(_QWORD *)(v29 + 16) = v43[0];
              goto LABEL_15;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
LABEL_15:
  if ( v4 )
    Win32FreePool(v4, v8, v9);
  if ( v5 )
    Win32FreePool(v5, v8, v9);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor, v8, v9);
  return (unsigned int)WindowStation;
}
