/*
 * XREFs of ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001B100
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B480 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B684 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x1800179B4 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpEnforcementUpdateSwapState(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  int v4; // ecx
  const GUID *v5; // r9
  int v6; // ecx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  void *v10; // rcx
  const GUID *v11; // r8
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD JobInformation[2]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *v19; // [rsp+98h] [rbp-70h]
  int v20; // [rsp+A0h] [rbp-68h]
  int v21; // [rsp+A4h] [rbp-64h]
  __int64 *v22; // [rsp+A8h] [rbp-60h]
  int v23; // [rsp+B0h] [rbp-58h]
  int v24; // [rsp+B4h] [rbp-54h]
  __int64 *v25; // [rsp+B8h] [rbp-50h]
  int v26; // [rsp+C0h] [rbp-48h]
  int v27; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+D8h] [rbp-30h] BYREF
  int *v30; // [rsp+E8h] [rbp-20h]
  int v31; // [rsp+F0h] [rbp-18h]
  int v32; // [rsp+F4h] [rbp-14h]
  __int64 *v33; // [rsp+F8h] [rbp-10h]
  int v34; // [rsp+100h] [rbp-8h]
  int v35; // [rsp+104h] [rbp-4h]

  v4 = *((_DWORD *)a1 + 14);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      LODWORD(v5) = -1073741811;
      return (unsigned int)v5;
    }
    if ( a2 == ((*((_DWORD *)a1 + 253) >> 3) & 1) )
      goto LABEL_7;
    v10 = (void *)*((_QWORD *)a1 + 117);
    JobInformation[1] = 0LL;
    JobInformation[0] = 4LL;
    *(_WORD *)((char *)JobInformation + 5) = a2 != 0;
    LODWORD(v5) = NtSetInformationJobObject(v10, (JOBOBJECTINFOCLASS)18, JobInformation, 0x10u);
    v12 = (int)v5;
    if ( hProvider <= 4u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
      goto LABEL_6;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    pDesc.Reserved = 0;
    v19 = &v12;
    v15 = *((_QWORD *)a1 + 3);
    v22 = &v15;
    v25 = (__int64 *)&v13;
    LODWORD(v14) = *((_DWORD *)a1 + 22);
    pDesc.Ptr = (ULONGLONG)&v14;
    v20 = 4;
    v23 = 8;
    v13 = a2;
    v26 = 4;
    pDesc.Size = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AADE, v11, v5, 6u, &pData);
    goto LABEL_5;
  }
  v12 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, bool))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL)
                                                                                + 136LL))(
          (char *)a1 + 552,
          *((unsigned int *)a1 + 155),
          (char *)a1 + 88,
          *((unsigned int *)a1 + 156),
          *((_QWORD *)a1 + 3),
          a2 != 0);
  LODWORD(v5) = v12;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v12;
    v16 = *((_QWORD *)a1 + 3);
    v22 = &v16;
    v25 = &v14;
    v20 = 4;
    v23 = 8;
    LODWORD(v14) = a2;
    v26 = 4;
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 44);
    TlgCreateSid(&v29, (const SID *)a1 + 46);
    v32 = 0;
    v6 = *((_DWORD *)a1 + 155);
    v35 = 0;
    v30 = &v13;
    LODWORD(v15) = *((_DWORD *)a1 + 156);
    v33 = &v15;
    v13 = v6;
    v31 = 4;
    v34 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AB24, v7, v8, 9u, &pData);
LABEL_5:
    LODWORD(v5) = v12;
  }
LABEL_6:
  if ( (int)v5 >= 0 )
LABEL_7:
    LODWORD(v5) = 0;
  return (unsigned int)v5;
}
