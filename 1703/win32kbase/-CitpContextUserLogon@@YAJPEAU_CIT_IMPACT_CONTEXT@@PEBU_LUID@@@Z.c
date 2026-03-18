/*
 * XREFs of ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00852F0
 * Callers:
 *     CitProcessCallout @ 0x1C0050E98 (CitProcessCallout.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C00531CC (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084FD8 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00854DC (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00856D4 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z @ 0x1C0086200 (-CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0086A0C (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0087264 (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C0155130 (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C01554E4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 */

__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2, __int64 a3, __int64 a4)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v6; // rax
  const char *v7; // rdx
  void *v8; // rdi
  NTSTATUS v9; // eax
  unsigned int v10; // ebx
  PSID v11; // rbx
  ULONG v12; // r15d
  void *v13; // rax
  void *v14; // r14
  struct _CIT_IMPACT_CONTEXT *v15; // rbx
  __int64 v16; // rax
  unsigned int v18; // r8d
  int v19; // ecx
  void *v20; // rdx
  ULONG ReturnLength; // [rsp+38h] [rbp-59h] BYREF
  struct _LUID AuthenticationId; // [rsp+40h] [rbp-51h] BYREF
  void *TokenHandle; // [rsp+48h] [rbp-49h] BYREF
  struct _CIT_IMPACT_CONTEXT *v24; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v25[16]; // [rsp+58h] [rbp-39h] BYREF
  PSID TokenInformation[12]; // [rsp+68h] [rbp-29h] BYREF

  TokenHandle = 0LL;
  AuthenticationId = 0LL;
  v24 = a1;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  v6 = PsReferencePrimaryToken(CurrentProcess);
  v8 = v6;
  if ( !v6 )
  {
    v10 = -1073741700;
    v18 = 1258;
LABEL_20:
    v19 = v10;
LABEL_23:
    CitpLogFailureWorker(v19, v7, v18);
    goto LABEL_12;
  }
  v9 = SeQueryAuthenticationIdToken(v6, &AuthenticationId);
  v10 = v9;
  if ( v9 < 0 )
  {
    v18 = 1265;
LABEL_22:
    v19 = v9;
    goto LABEL_23;
  }
  if ( AuthenticationId.LowPart != a2->LowPart || AuthenticationId.HighPart != a2->HighPart )
  {
    v10 = -1073741587;
    goto LABEL_12;
  }
  CitpShellTrackingGetEnabledForUser(&byte_1C018E8B6);
  CitpParametersCompute((struct _CIT_PARAMETERS *)&unk_1C018E858);
  if ( !byte_1C018E8B4 )
  {
    CitpCleanupGlobalImpactContext(&v24);
    v10 = -1073741637;
    goto LABEL_12;
  }
  CitpTimeUpdate((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v9 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  v10 = v9;
  if ( v9 < 0 )
  {
    v18 = 1302;
    goto LABEL_22;
  }
  ReturnLength = 0;
  v9 = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  v10 = v9;
  if ( v9 < 0 )
  {
    v18 = 1318;
    goto LABEL_22;
  }
  v11 = TokenInformation[0];
  v12 = RtlLengthSid(TokenInformation[0]);
  v13 = (void *)Win32AllocPool(v12, 0x49637355u);
  v14 = v13;
  if ( !v13 )
  {
    v10 = -1073741670;
    v18 = 1332;
    goto LABEL_20;
  }
  memmove(v13, v11, v12);
  v15 = v24;
  v16 = (__int64)*a2;
  *((_QWORD *)v24 + 52) = v14;
  *((_QWORD *)v15 + 53) = v16;
  if ( byte_1C018E8B5 )
  {
    CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v25, v14);
    CitpSavedDataLoad(v15, v20, (const struct _CIT_SAVE_KEY *)v25);
  }
  CitpPostUpdateUseInfoLoad(v15);
  CitpDPDataLoad(v15);
  CitpUpdateBootStats(v15);
  v10 = 0;
LABEL_12:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v8 )
    PsDereferencePrimaryToken(v8);
  return v10;
}
