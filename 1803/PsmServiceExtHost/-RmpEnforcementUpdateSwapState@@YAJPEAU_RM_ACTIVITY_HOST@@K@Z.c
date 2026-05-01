/*
 * XREFs of ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000BD0C
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180009D04 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpEnforcementUpdateSwapState(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  const SID *v2; // r14
  int v5; // edx
  int v6; // ecx
  __int64 v7; // r9
  bool UserData; // [rsp+30h] [rbp-D8h]
  int v10; // [rsp+48h] [rbp-C0h] BYREF
  int v11; // [rsp+4Ch] [rbp-BCh] BYREF
  int v12; // [rsp+50h] [rbp-B8h] BYREF
  int v13; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+78h] [rbp-90h] BYREF
  void *v17; // [rsp+88h] [rbp-80h]
  int v18; // [rsp+90h] [rbp-78h]
  int v19; // [rsp+94h] [rbp-74h]
  int *v20; // [rsp+98h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-68h]
  __int64 *v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  int *v24; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+D8h] [rbp-30h] BYREF
  int *v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-18h]
  int *v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp-8h]

  v2 = (const SID *)((char *)a1 + 552);
  UserData = a2 != 0;
  v10 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, bool))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                + 56LL))(
          (char *)a1 + 552,
          *((unsigned int *)a1 + 155),
          (char *)a1 + 88,
          *((unsigned int *)a1 + 156),
          *((_QWORD *)a1 + 4),
          UserData);
  v5 = v10;
  if ( hProvider > 4u && (qword_1800920C0 & 0x11) != 0 && (qword_1800920C8 & 0x11) == qword_1800920C8 )
  {
    v21 = 4LL;
    v20 = &v10;
    v14 = *((_QWORD *)a1 + 4);
    v22 = &v14;
    v24 = &v11;
    v23 = 8LL;
    v11 = a2;
    v25 = 4LL;
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 44);
    TlgCreateSid(&v27, v2);
    v6 = *((_DWORD *)a1 + 155);
    v28 = &v12;
    v13 = *((_DWORD *)a1 + 156);
    v30 = &v13;
    v12 = v6;
    v29 = v7;
    v31 = v7;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v16.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180080B25 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 17LL;
    v16.Size = *(unsigned __int16 *)off_1800920B8;
    v17 = &unk_180080B30;
    v16.Reserved = 2;
    v18 = 91;
    v19 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 9u, &v16);
    v5 = v10;
  }
  if ( v5 >= 0 )
    return 0;
  return (unsigned int)v5;
}
