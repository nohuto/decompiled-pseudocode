/*
 * XREFs of ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x1800D096C
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18000FBE4 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsService::InitializePrivilegedOperationsForIam(
        PrivilegedOperationsService *this,
        struct IPrivilegedOperationsConsumer *a2)
{
  struct PrivilegedOperationsService *v2; // r14
  __int64 *v3; // rbx
  __int64 v5; // r8
  GUID *v6; // rdx
  int v7; // eax
  __int64 v8; // r9
  int v9; // edi
  unsigned int v11; // ebx
  char *v12; // [rsp+20h] [rbp-49h] BYREF
  _OWORD v13[6]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = PrivilegedOperationsService::s_this;
  v3 = (__int64 *)v13;
  *((_BYTE *)PrivilegedOperationsService::s_this + 216) = 1;
  v13[0] = GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8;
  v13[1] = GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
  v13[2] = GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v13[3] = GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v13[4] = GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v13[5] = GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  while ( 1 )
  {
    if ( *v3 == *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1
      && v3[1] == *(_QWORD *)GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data4 )
    {
      v5 = *((_QWORD *)v2 + 26);
      v6 = &GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8;
    }
    else if ( *v3 == *(_QWORD *)&GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data1
           && v3[1] == *(_QWORD *)GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data4 )
    {
      v5 = *((_QWORD *)v2 + 25);
      v6 = &GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
    }
    else if ( *v3 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1
           && v3[1] == *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4 )
    {
      v5 = *((_QWORD *)v2 + 24);
      v6 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
    }
    else if ( *v3 == *(_QWORD *)&GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data1
           && v3[1] == *(_QWORD *)GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data4 )
    {
      v5 = *((_QWORD *)v2 + 23);
      v6 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
    }
    else if ( *v3 == *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1
           && v3[1] == *(_QWORD *)GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data4 )
    {
      v5 = *((_QWORD *)v2 + 22);
      v6 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
    }
    else if ( *v3 == *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1
           && v3[1] == *(_QWORD *)GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data4 )
    {
      v5 = *((_QWORD *)v2 + 21);
      v6 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
    }
    else if ( *v3 == *(_QWORD *)&GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data1
           && v3[1] == *(_QWORD *)GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data4 )
    {
      v5 = *((_QWORD *)v2 + 20);
      v6 = &GUID_1258a377_0646_40fd_b5fc_b642b81befba;
    }
    else if ( *v3 == *(_QWORD *)&GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727.Data1
           && v3[1] == *(_QWORD *)GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727.Data4 )
    {
      v5 = *((_QWORD *)v2 + 19);
      v6 = &GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727;
    }
    else
    {
      if ( *v3 != *(_QWORD *)&GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data1
        || v3[1] != *(_QWORD *)GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data4 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x232,
          (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
          (const char *)0x80004001LL);
        v9 = -2147467263;
        goto LABEL_32;
      }
      v5 = *((_QWORD *)v2 + 18);
      v6 = &GUID_a993a76e_0909_48bb_b0e9_4d8236263896;
    }
    v7 = (*(__int64 (__fastcall **)(struct IPrivilegedOperationsConsumer *, GUID *, __int64))(*(_QWORD *)a2 + 24LL))(
           a2,
           v6,
           v5);
    v9 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25E,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v7);
LABEL_32:
    LODWORD(v12) = v9;
    if ( !CRVPrivate::VerifyCriticalResult(
            (unsigned __int64)&v12,
            L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
            (const unsigned __int16 *)0x31F,
            v8) )
      break;
    v3 += 2;
    if ( v3 == &v14 )
      return 0LL;
  }
  v11 = (unsigned int)v12;
  if ( (int)v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31F,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v12);
  return v11;
}
