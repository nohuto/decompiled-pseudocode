/*
 * XREFs of ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032CD4
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180041E28 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemSetApplicationQuiesceCompleteEvents(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // r9
  __int64 v3; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+70h] [rbp-28h]
  int v7; // [rsp+78h] [rbp-20h]
  int v8; // [rsp+7Ch] [rbp-1Ch]

  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 176LL))(*((_QWORD *)a1 + 138));
  if ( _volatile_metadata > 5u )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 44);
    v2 = *((_QWORD *)a1 + 4);
    v8 = 0;
    v6 = &v3;
    v3 = v2;
    v7 = 8;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180080AE8, 0LL, 0LL, 4u, &pData);
  }
}
