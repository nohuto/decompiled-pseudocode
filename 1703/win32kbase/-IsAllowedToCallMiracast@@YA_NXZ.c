/*
 * XREFs of ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C00F0600
 * Callers:
 *     NtGdiDdDDINetDispStartMiracastDisplayDevice @ 0x1C00F13A0 (NtGdiDdDDINetDispStartMiracastDisplayDevice.c)
 *     NtGdiDdDDINetDispStopMiracastDisplayDevice @ 0x1C00F13E0 (NtGdiDdDDINetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     GreOpenThreadToken @ 0x1C00EC3DC (GreOpenThreadToken.c)
 */

char IsAllowedToCallMiracast(void)
{
  signed int v0; // r12d
  PSID *v1; // rsi
  PSID *v2; // r14
  void *v3; // rbx
  char v4; // r13
  int v5; // eax
  HANDLE v6; // rdi
  PUCHAR v7; // rax
  ULONG v9; // eax
  void *v10; // rax
  ULONG *v11; // r15
  PULONG v12; // rax
  ULONG v13; // ecx
  HANDLE TokenHandle; // [rsp+80h] [rbp+48h] BYREF
  ULONG TokenInformationLength; // [rsp+88h] [rbp+50h] BYREF
  int TokenInformation; // [rsp+90h] [rbp+58h] BYREF
  ULONG ReturnLength; // [rsp+98h] [rbp+60h] BYREF

  v0 = 0;
  v1 = 0LL;
  TokenHandle = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = GreOpenThreadToken(&TokenHandle);
  v6 = TokenHandle;
  if ( v5 >= 0 && ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength) >= 0 )
  {
    if ( TokenInformation )
    {
      TokenInformationLength = 0;
      ZwQueryInformationToken(v6, TokenAppContainerSid, 0LL, 0, &TokenInformationLength);
      v1 = (PSID *)Win32AllocPoolWithQuota(TokenInformationLength, 0x65737355u);
      if ( v1 )
      {
        if ( ZwQueryInformationToken(v6, TokenAppContainerSid, v1, TokenInformationLength, &TokenInformationLength) >= 0 )
        {
          v9 = RtlLengthRequiredSid(8u);
          v10 = (void *)Win32AllocPoolWithQuota(v9, 0x65737355u);
          v3 = v10;
          if ( v10 )
          {
            if ( RtlInitializeSid(v10, &IdentifierAuthority, 8u) >= 0 )
            {
              LODWORD(TokenHandle) = 0;
              v11 = (ULONG *)&unk_1C016D770;
              do
              {
                do
                {
                  v12 = RtlSubAuthoritySid(v3, v0);
                  v13 = *v11;
                  ++v0;
                  ++v11;
                  *v12 = v13;
                }
                while ( v0 < 8 );
                v0 = 0;
                if ( RtlEqualSid(*v1, v3) )
                  goto LABEL_6;
                LODWORD(TokenHandle) = (_DWORD)TokenHandle + 1;
              }
              while ( (unsigned int)TokenHandle < 6 );
            }
          }
        }
      }
    }
    else
    {
      LODWORD(TokenHandle) = 0;
      ZwQueryInformationToken(v6, TokenIntegrityLevel, 0LL, 0, (PULONG)&TokenHandle);
      v2 = (PSID *)Win32AllocPoolWithQuota((unsigned int)TokenHandle, 0x65737355u);
      if ( ZwQueryInformationToken(v6, TokenIntegrityLevel, v2, (ULONG)TokenHandle, (PULONG)&TokenHandle) >= 0 )
      {
        v7 = RtlSubAuthorityCountSid(*v2);
        if ( *RtlSubAuthoritySid(*v2, (unsigned int)*v7 - 1) >= 0x1000 )
LABEL_6:
          v4 = 1;
      }
    }
  }
  if ( v6 )
    ZwClose(v6);
  if ( v1 )
    Win32FreePool((__int64)v1);
  if ( v3 )
    Win32FreePool((__int64)v3);
  if ( v2 )
    Win32FreePool((__int64)v2);
  return v4;
}
