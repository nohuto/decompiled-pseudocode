/*
 * XREFs of ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C400
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000BCB0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180006950 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$_ea_180006950.c)
 *     ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@0@Z @ 0x180006C44 (-erase@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationStat.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall ModernResourceEnforcer::HandlePsmHostEmpty(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int8 v10; // cl
  int v11; // eax
  unsigned __int64 v12; // rbx
  ULONG v13; // eax
  __int64 v14; // rdx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  __int64 *v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v21; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Destination[232]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v23[68]; // [rsp+240h] [rbp+140h] BYREF
  int v24; // [rsp+284h] [rbp+184h]
  unsigned int v25; // [rsp+288h] [rbp+188h]
  unsigned __int64 v26; // [rsp+290h] [rbp+190h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *v28; // [rsp+2B0h] [rbp+1B0h]
  int v29; // [rsp+2B8h] [rbp+1B8h]
  int v30; // [rsp+2BCh] [rbp+1BCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2C0h] [rbp+1C0h] BYREF
  union _RM_SID *v32; // [rsp+2D0h] [rbp+1D0h]
  int v33; // [rsp+2D8h] [rbp+1D8h]
  int v34; // [rsp+2DCh] [rbp+1DCh]
  int *v35; // [rsp+2E0h] [rbp+1E0h]
  __int64 v36; // [rsp+2E8h] [rbp+1E8h]
  unsigned int *v37; // [rsp+2F0h] [rbp+1F0h]
  __int64 v38; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int64 *v39; // [rsp+300h] [rbp+200h]
  __int64 v40; // [rsp+308h] [rbp+208h]

  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    TlgCreateWsz(&pDesc, a2);
    v10 = *((_BYTE *)a3 + 1);
    if ( v10 > 0xFu )
      v11 = 15;
    else
      v11 = v10;
    v32 = a3;
    v33 = 4 * v11 + 8;
    v35 = &v15;
    v37 = &v16;
    v39 = &a6;
    v34 = 0;
    v15 = a4;
    v36 = 4LL;
    v16 = a5;
    v38 = 4LL;
    v40 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800557B6 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v28 = &unk_1800557C1;
    UserData.Reserved = 2;
    v29 = 77;
    v30 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  if ( a5 != 6 )
  {
    v12 = a6;
    memset_0(Destination, 0, 0x228uLL);
    wcscpy_s(Destination, 0xE8uLL, a2);
    memset_0(v23, 0, sizeof(v23));
    v13 = RtlLengthSid(a3);
    memcpy_0(v23, a3, v13);
    v24 = a4;
    v25 = a5;
    v26 = v12;
    v18 = 0LL;
    v17 = 0LL;
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
      (__int64)this + 304,
      v14,
      (unsigned __int64)Destination,
      &v18,
      &v17,
      &v20);
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::erase(
      (__int64)this + 304,
      &v21,
      v18,
      v17);
  }
}
