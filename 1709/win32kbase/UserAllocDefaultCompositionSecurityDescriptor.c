/*
 * XREFs of UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0026BC0
 * Callers:
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x1C0024ED0 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     CreateSharedResourceObject @ 0x1C008A328 (CreateSharedResourceObject.c)
 *     CreateSharedSystemVisualObject @ 0x1C00913E0 (CreateSharedSystemVisualObject.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C009E6A4 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C013DEC0 (DCompositionCreateSynchronizationObject.c)
 * Callees:
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C0026174 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     AllocateWindowManagerSid @ 0x1C0026230 (AllocateWindowManagerSid.c)
 *     CreateSecurityDescriptor @ 0x1C0026A80 (CreateSecurityDescriptor.c)
 *     AllocAce @ 0x1C0026EA0 (AllocAce.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall UserAllocDefaultCompositionSecurityDescriptor(int a1, struct _ACL **a2)
{
  PSID v2; // rsi
  void *v4; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // r12
  NTSTATUS InformationToken; // ebx
  int v11; // eax
  __int64 v12; // rax
  PSID *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  PSID *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  struct _ACL *SecurityDescriptor; // rax
  int TokenInformation; // [rsp+30h] [rbp-20h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-1Ch] BYREF
  ULONG v25; // [rsp+38h] [rbp-18h] BYREF
  ULONG v26; // [rsp+3Ch] [rbp-14h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-10h] BYREF
  ULONG AceListLength; // [rsp+98h] [rbp+48h] BYREF
  PSID TokenInformationLength; // [rsp+A0h] [rbp+50h] BYREF
  void *v30; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  TokenHandle = 0LL;
  *a2 = 0LL;
  v4 = 0LL;
  AceListLength = 0;
  v30 = 0LL;
  TokenInformationLength = 0LL;
  v6 = AllocateLocalSystemSid(&v30);
  v9 = v30;
  InformationToken = v6;
  if ( v6 >= 0 )
  {
    v4 = (void *)AllocAce(0LL, v30, (__int64)&AceListLength);
    if ( !v4 )
      InformationToken = -1073741801;
    if ( InformationToken >= 0 )
    {
      v11 = AllocateWindowManagerSid(&TokenInformationLength);
      v2 = TokenInformationLength;
      InformationToken = v11;
      if ( v11 >= 0 )
      {
        v12 = AllocAce(v4, TokenInformationLength, (__int64)&AceListLength);
        if ( v12 )
          v4 = (void *)v12;
        else
          InformationToken = -1073741801;
        if ( InformationToken >= 0 )
        {
          if ( a1 )
          {
            TokenInformation = 0;
            InformationToken = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
            if ( InformationToken < 0 )
              goto LABEL_27;
            ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
            if ( TokenInformation )
            {
              LODWORD(TokenInformationLength) = 0;
              ZwQueryInformationToken(TokenHandle, TokenAppContainerSid, 0LL, 0, (PULONG)&TokenInformationLength);
              v13 = (PSID *)Win32AllocPoolWithQuota((unsigned int)TokenInformationLength, 1702064981LL);
              if ( v13 )
              {
                InformationToken = ZwQueryInformationToken(
                                     TokenHandle,
                                     TokenAppContainerSid,
                                     v13,
                                     (ULONG)TokenInformationLength,
                                     &v25);
                if ( InformationToken >= 0 )
                {
                  v16 = AllocAce(v4, *v13, (__int64)&AceListLength);
                  if ( v16 )
                    v4 = (void *)v16;
                  else
                    InformationToken = -1073741801;
                }
                Win32FreePool(v13, v14, v15);
              }
              else
              {
                InformationToken = -1073741801;
              }
            }
          }
          if ( InformationToken >= 0 )
          {
            if ( a1 )
            {
              LODWORD(v30) = 0;
              InformationToken = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, (PULONG)&v30);
              v17 = (PSID *)Win32AllocPoolWithQuota((unsigned int)v30, 1702064981LL);
              if ( v17 )
              {
                InformationToken = ZwQueryInformationToken(TokenHandle, TokenUser, v17, (ULONG)v30, &v26);
                if ( InformationToken >= 0 )
                {
                  v20 = AllocAce(v4, *v17, (__int64)&AceListLength);
                  if ( v20 )
                    v4 = (void *)v20;
                  else
                    InformationToken = -1073741801;
                }
                Win32FreePool(v17, v18, v19);
              }
            }
            if ( InformationToken >= 0 )
            {
              SecurityDescriptor = CreateSecurityDescriptor(v4, AceListLength, 0);
              *a2 = SecurityDescriptor;
              if ( !SecurityDescriptor )
                InformationToken = -1073741801;
            }
          }
        }
      }
    }
  }
LABEL_27:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v9 )
    Win32FreePool(v9, v7, v8);
  if ( v2 )
    Win32FreePool(v2, v7, v8);
  if ( v4 )
    Win32FreePool(v4, v7, v8);
  return (unsigned int)InformationToken;
}
