/*
 * XREFs of ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800653B8
 * Callers:
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180031374 (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065204 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@@@Z @ 0x1800605D4 (-HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@.c)
 *     ?HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z @ 0x18006063C (-HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z.c)
 *     ?HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800606D0 (-HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostShouldDplPolicyApply(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // r14d
  char v3; // bl
  unsigned __int16 *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r8
  wchar_t *v7; // rdi
  __int64 v8; // r9
  unsigned __int8 v10; // [rsp+38h] [rbp-59h] BYREF
  char v11; // [rsp+39h] [rbp-58h] BYREF
  struct EDP_ENTERPRISE_CONTEXT *v12; // [rsp+40h] [rbp-51h] BYREF
  __int64 v13; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int16 *v14; // [rsp+50h] [rbp-41h] BYREF
  wchar_t *Context; // [rsp+58h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-9h] BYREF
  __int64 *v18; // [rsp+98h] [rbp+7h]
  __int64 v19; // [rsp+A0h] [rbp+Fh]
  unsigned __int8 *v20; // [rsp+A8h] [rbp+17h]
  __int64 v21; // [rsp+B0h] [rbp+1Fh]
  char *v22; // [rsp+B8h] [rbp+27h]
  __int64 v23; // [rsp+C0h] [rbp+2Fh]

  v12 = 0LL;
  v2 = 0;
  v14 = 0LL;
  if ( (int)HampSystemImpersonateUserForHost(a1) < 0 )
  {
    v3 = 0;
LABEL_23:
    v10 = 0;
    goto LABEL_24;
  }
  v2 = 1;
  if ( !EdpGetIsManaged )
  {
    v3 = 1;
    goto LABEL_23;
  }
  if ( (int)HampSystemEdpGetEnterpriseContext(a1, &v12) < 0 )
  {
    v3 = 2;
    goto LABEL_23;
  }
  if ( (int)EdpUtilIsAppEnlightened(v12, &v13) < 0 )
  {
    v3 = 3;
    goto LABEL_23;
  }
  if ( (_DWORD)v13 )
  {
    v3 = 4;
    goto LABEL_23;
  }
  if ( (int)HampSystemEdpQueryDplEnforcedPolicyOwnerIds((char *)a1 + 488, &v14) < 0 )
  {
    v3 = 5;
    goto LABEL_23;
  }
  v4 = v14;
  if ( !v14 || !*v14 )
  {
    v3 = 6;
    goto LABEL_23;
  }
  while ( 1 )
  {
    v7 = wcstok_s(v4, L"|", &Context);
    if ( !v7 )
    {
      v3 = 8;
      goto LABEL_23;
    }
    v5 = 0;
    v6 = *(_QWORD *)v12;
    if ( *(_DWORD *)(*(_QWORD *)v12 + 4LL) )
      break;
LABEL_17:
    v4 = 0LL;
  }
  while ( _wcsicmp(v7, *(const wchar_t **)(v6 + 16LL * v5 + 24)) )
  {
    ++v5;
    v6 = *(_QWORD *)v12;
    if ( v5 >= *(_DWORD *)(*(_QWORD *)v12 + 4LL) )
      goto LABEL_17;
  }
  v3 = 7;
  v10 = 1;
LABEL_24:
  if ( v14 )
    EdpFree();
  if ( v12 )
    EdpUtilFreeEnterpriseContext();
  if ( v2 )
    RevertToSelf();
  if ( _volatile_metadata > 5u )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
    v8 = *((_QWORD *)a1 - 4);
    v18 = &v13;
    v20 = &v10;
    v22 = &v11;
    v13 = v8;
    v19 = 8LL;
    v21 = 1LL;
    v11 = v3;
    v23 = 1LL;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082D59, 0LL, 0LL, 6u, &pData);
  }
  return v10;
}
