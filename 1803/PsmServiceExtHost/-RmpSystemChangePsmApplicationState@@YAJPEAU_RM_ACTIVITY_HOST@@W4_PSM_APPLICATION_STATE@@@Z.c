/*
 * XREFs of ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z @ 0x180031204
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180009D04 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AB8 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpSystemChangePsmApplicationState(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  ULONGLONG v6; // r11
  unsigned int v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  __int64 v9; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  void *v12; // [rsp+60h] [rbp-9h]
  int v13; // [rsp+68h] [rbp-1h]
  int v14; // [rsp+6Ch] [rbp+3h]
  unsigned int *v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  __int64 *v18; // [rsp+90h] [rbp+27h]
  ULONGLONG v19; // [rsp+98h] [rbp+2Fh]
  int *v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) + 168LL))(*(_QWORD *)(a1 + 1104));
  v7 = result;
  if ( _volatile_metadata > 4u && (byte_180092100 & 8) != 0 && (qword_180092108 & 8) == qword_180092108 )
  {
    v16 = 4LL;
    v15 = &v7;
    TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 88));
    v5 = *(_QWORD *)(a1 + 32);
    v18 = &v9;
    v20 = &v8;
    v9 = v5;
    v19 = v6;
    v8 = a2;
    v21 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180080A9A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = v6;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v12 = &unk_180080AA5;
    UserData.Reserved = 2;
    v13 = 66;
    v14 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    return v7;
  }
  return result;
}
