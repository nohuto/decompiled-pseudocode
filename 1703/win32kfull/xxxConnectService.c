/*
 * XREFs of xxxConnectService @ 0x1C000FE54
 * Callers:
 *     xxxResolveDesktop @ 0x1C0010FB0 (xxxResolveDesktop.c)
 * Callees:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C0012EC4 (xxxCreateWindowStation.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxConnectService(struct _UNICODE_STRING *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 SecurityDescriptor; // r14
  _QWORD *v7; // r15
  NTSTATUS WindowStation; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  HANDLE v17; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  HANDLE TokenHandle; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-E8h]
  int v30; // [rsp+68h] [rbp-E0h] BYREF
  HANDLE v31; // [rsp+70h] [rbp-D8h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp-D0h]
  int v33; // [rsp+80h] [rbp-C8h]
  __int128 v34; // [rsp+88h] [rbp-C0h]
  __int64 v35; // [rsp+98h] [rbp-B0h]
  _QWORD *v36; // [rsp+A0h] [rbp-A8h]
  __int64 v37; // [rsp+A8h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-90h] BYREF
  _QWORD v39[3]; // [rsp+C8h] [rbp-80h] BYREF
  _QWORD v40[3]; // [rsp+E0h] [rbp-68h] BYREF
  _QWORD v41[10]; // [rsp+F8h] [rbp-50h] BYREF
  ULONG TokenInformationLength; // [rsp+168h] [rbp+20h] BYREF

  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  v7 = (_QWORD *)Win32AllocPool(TokenInformationLength, 1869902677LL);
  v36 = v7;
  if ( !v7 )
  {
    ZwClose(TokenHandle);
LABEL_23:
    WindowStation = -1073741801;
    goto LABEL_14;
  }
  WindowStation = ZwQueryInformationToken(TokenHandle, TokenUser, v7, TokenInformationLength, &TokenInformationLength);
  ZwClose(TokenHandle);
  if ( WindowStation >= 0 )
  {
    v29 = *v7;
    v5 = AllocAce(0LL, 0LL, 0LL, 983150LL, v29, &TokenInformationLength);
    if ( v5 )
    {
      LOBYTE(v9) = 13;
      v10 = AllocAce(v5, 0LL, v9, 983247LL, v29, &TokenInformationLength);
      if ( v10 )
      {
        v5 = v10;
        v11 = AllocAce(v10, 0LL, 0LL, 256LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
        if ( v11 )
        {
          v5 = v11;
          LOBYTE(v12) = 13;
          v13 = AllocAce(v11, 0LL, v12, 193LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
          if ( v13 )
          {
            v5 = v13;
            v35 = v13;
            SecurityDescriptor = CreateSecurityDescriptor(v13, TokenInformationLength, 0LL);
            v37 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              PushW32ThreadLock(v7, v41, Win32FreePool);
              PushW32ThreadLock(v5, v40, Win32FreePool);
              PushW32ThreadLock(SecurityDescriptor, v39, Win32FreePool);
              v30 = 48;
              v31 = 0LL;
              v33 = 128;
              p_DestinationString = a1;
              v34 = (unsigned __int64)SecurityDescriptor;
              WindowStation = xxxCreateWindowStation(
                                (unsigned int)&v30,
                                0,
                                0x2000000,
                                0,
                                0,
                                0,
                                0LL,
                                0LL,
                                0,
                                (__int64)&Handle);
              v17 = Handle;
              if ( WindowStation < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, L"Default");
                v30 = 48;
                v31 = v17;
                v33 = 192;
                p_DestinationString = &DestinationString;
                v34 = 0LL;
                WindowStation = xxxCreateDesktopEx((unsigned int)&v30, 0, 0x2000000, 0, (__int64)a2, 1);
                if ( WindowStation < 0 )
                  ObCloseHandle(v17, 1);
                else
                  *a3 = v17;
              }
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v14, v15, v16);
              *(_QWORD *)(ThreadWin32Thread + 16) = v39[0];
              v22 = W32GetThreadWin32Thread(KeGetCurrentThread(), v19, v20, v21);
              *(_QWORD *)(v22 + 16) = v40[0];
              v26 = W32GetThreadWin32Thread(KeGetCurrentThread(), v23, v24, v25);
              *(_QWORD *)(v26 + 16) = v41[0];
              goto LABEL_14;
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
LABEL_14:
  if ( v7 )
    Win32FreePool(v7);
  if ( v5 )
    Win32FreePool(v5);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  return (unsigned int)WindowStation;
}
