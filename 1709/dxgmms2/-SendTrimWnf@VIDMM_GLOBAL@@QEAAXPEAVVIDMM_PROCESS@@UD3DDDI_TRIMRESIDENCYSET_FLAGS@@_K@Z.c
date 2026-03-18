/*
 * XREFs of ?SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x1C0059300
 * Callers:
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00593A0 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     ?SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C0072170 (-SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SendTrimWnf(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct D3DDDI_TRIMRESIDENCYSET_FLAGS a3,
        __int64 a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  const struct _WNF_STATE_NAME *v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = *(_QWORD *)a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v13 = *(const struct _WNF_STATE_NAME **)(*((_QWORD *)this + 3) + 268LL);
  LODWORD(v15) = a3;
  v14 = a4;
  v8 = VIDMM_GLOBAL::SendWnfNotificationToProcess(a2, v13, &v13, a4);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdAssertion(v12);
  }
}
