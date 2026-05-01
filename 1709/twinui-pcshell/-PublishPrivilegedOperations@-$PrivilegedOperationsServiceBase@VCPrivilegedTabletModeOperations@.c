/*
 * XREFs of ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800F4F80
 * Callers:
 *     ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F35C0 (-SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations>::PublishPrivilegedOperations(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax
  GUID *v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a3 == *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1
    && a3[1] == *(_QWORD *)GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data4 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD))(*a2 + 24))(
           a2,
           &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
           a1[4]);
    if ( v4 < 0 )
    {
      v5 = 583LL;
LABEL_17:
      v10 = (unsigned int)v4;
      goto LABEL_18;
    }
  }
  else
  {
    if ( *a3 == *(_QWORD *)&GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data1
      && a3[1] == *(_QWORD *)GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data4 )
    {
      v6 = *a2;
      v7 = &GUID_1258a377_0646_40fd_b5fc_b642b81befba;
      v8 = a1[3];
    }
    else if ( *a3 == *(_QWORD *)&GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727.Data1
           && a3[1] == *(_QWORD *)GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727.Data4 )
    {
      v6 = *a2;
      v7 = &GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727;
      v8 = a1[2];
    }
    else
    {
      if ( *a3 != *(_QWORD *)&GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data1
        || a3[1] != *(_QWORD *)GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data4 )
      {
        v4 = -2147467263;
        v5 = 539LL;
        goto LABEL_17;
      }
      v6 = *a2;
      v7 = &GUID_a993a76e_0909_48bb_b0e9_4d8236263896;
      v8 = a1[1];
    }
    v9 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v6 + 24))(a2, v7, v8);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v5 = 583LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)v10);
    }
  }
  return (unsigned int)v4;
}
