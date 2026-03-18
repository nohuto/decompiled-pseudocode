/*
 * XREFs of ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0160B5C
 * Callers:
 *     CitProcessCallout @ 0x1C003BA50 (CitProcessCallout.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01603B0 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0160E98 (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0162248 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0162950 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0164958 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v5; // rax
  const char *v6; // rdx
  void *v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  int v10; // ecx
  NTSTATUS v11; // eax
  PSID v12; // r15
  size_t v13; // r12
  void *v14; // rax
  void *v15; // rbx
  __int64 v16; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-59h] BYREF
  struct _LUID AuthenticationId; // [rsp+38h] [rbp-51h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-49h] BYREF
  struct _CIT_IMPACT_CONTEXT *v21; // [rsp+48h] [rbp-41h] BYREF
  PSID TokenInformation[12]; // [rsp+50h] [rbp-39h] BYREF

  TokenHandle = 0LL;
  AuthenticationId = 0LL;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1);
  v5 = PsReferencePrimaryToken(CurrentProcess);
  v7 = v5;
  if ( !v5 )
  {
    v8 = -1073741700;
    v9 = 743;
LABEL_3:
    v10 = v8;
LABEL_4:
    CitpLogFailureWorker(v10, v6, v9);
    goto LABEL_20;
  }
  v11 = SeQueryAuthenticationIdToken(v5, &AuthenticationId);
  v8 = v11;
  if ( v11 < 0 )
  {
    v9 = 750;
LABEL_7:
    v10 = v11;
    goto LABEL_4;
  }
  if ( AuthenticationId.LowPart == a2->LowPart && AuthenticationId.HighPart == a2->HighPart )
  {
    CitpParametersCompute((struct _CIT_PARAMETERS *)&dword_1C01A1684);
    if ( (_BYTE)word_1C01A16A8 )
    {
      v11 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
      v8 = v11;
      if ( v11 < 0 )
      {
        v9 = 781;
        goto LABEL_7;
      }
      ReturnLength = 0;
      v11 = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
      v8 = v11;
      if ( v11 < 0 )
      {
        v9 = 797;
        goto LABEL_7;
      }
      v12 = TokenInformation[0];
      v13 = RtlLengthSid(TokenInformation[0]);
      v14 = (void *)Win32AllocPool(v13, 0x49637355u);
      v15 = v14;
      if ( !v14 )
      {
        v8 = -1073741670;
        v9 = 811;
        goto LABEL_3;
      }
      memmove(v14, v12, v13);
      v16 = (__int64)*a2;
      *((_QWORD *)a1 + 12) = v15;
      *((_QWORD *)a1 + 13) = v16;
      CitpPostUpdateUseInfoLoad(a1);
      CitpDPDataLoad(a1);
      CitpUpdateBootStats(a1);
      v8 = 0;
    }
    else
    {
      CitpCleanupGlobalImpactContext(&v21);
      v8 = -1073741637;
    }
  }
  else
  {
    v8 = -1073741587;
  }
LABEL_20:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v7 )
    PsDereferencePrimaryToken(v7);
  return v8;
}
