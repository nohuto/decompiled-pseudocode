/*
 * XREFs of RtlNtStatusToDosError @ 0x18005D5F0
 * Callers:
 *     sub_18000359C @ 0x18000359C (sub_18000359C.c)
 *     EtwReplyNotification @ 0x180004150 (EtwReplyNotification.c)
 *     sub_180019E6C @ 0x180019E6C (sub_180019E6C.c)
 *     sub_18001B270 @ 0x18001B270 (sub_18001B270.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_180051190 @ 0x180051190 (sub_180051190.c)
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 *     sub_180052EDC @ 0x180052EDC (sub_180052EDC.c)
 *     sub_18005D0E0 @ 0x18005D0E0 (sub_18005D0E0.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18005D560 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 *     sub_18005E120 @ 0x18005E120 (sub_18005E120.c)
 *     EtwTraceMessageVa @ 0x18005EA30 (EtwTraceMessageVa.c)
 *     EtwLogTraceEvent @ 0x18005EE20 (EtwLogTraceEvent.c)
 *     EtwEventWriteTransfer @ 0x18005F4F0 (EtwEventWriteTransfer.c)
 *     EtwSendNotification @ 0x18005F750 (EtwSendNotification.c)
 *     EtwEventActivityIdControl @ 0x180070C40 (EtwEventActivityIdControl.c)
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180077230 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     sub_18007A8C0 @ 0x18007A8C0 (sub_18007A8C0.c)
 *     sub_18008354C @ 0x18008354C (sub_18008354C.c)
 *     EtwWriteUMSecurityEvent @ 0x1800861D0 (EtwWriteUMSecurityEvent.c)
 *     EtwEventWriteNoRegistration @ 0x180088240 (EtwEventWriteNoRegistration.c)
 *     sub_18008A97C @ 0x18008A97C (sub_18008A97C.c)
 *     EtwRegisterSecurityProvider @ 0x18008F730 (EtwRegisterSecurityProvider.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     RtlCompactHeap @ 0x1800EF180 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF7D0 (RtlSetUserFlagsHeap.c)
 *     sub_180100E1C @ 0x180100E1C (sub_180100E1C.c)
 *     sub_180101254 @ 0x180101254 (sub_180101254.c)
 *     sub_18010144C @ 0x18010144C (sub_18010144C.c)
 *     sub_1801015EC @ 0x1801015EC (sub_1801015EC.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 *     sub_180101C9C @ 0x180101C9C (sub_180101C9C.c)
 *     sub_180101E60 @ 0x180101E60 (sub_180101E60.c)
 *     sub_180101FF0 @ 0x180101FF0 (sub_180101FF0.c)
 *     sub_18010216C @ 0x18010216C (sub_18010216C.c)
 *     EtwEventWriteString @ 0x180104440 (EtwEventWriteString.c)
 *     sub_180104668 @ 0x180104668 (sub_180104668.c)
 *     EtwSetMark @ 0x180104760 (EtwSetMark.c)
 *     EtwTraceEventInstance @ 0x180104790 (EtwTraceEventInstance.c)
 *     sub_18010492C @ 0x18010492C (sub_18010492C.c)
 *     sub_180104D80 @ 0x180104D80 (sub_180104D80.c)
 *     sub_1801050C4 @ 0x1801050C4 (sub_1801050C4.c)
 *     sub_18010BD24 @ 0x18010BD24 (sub_18010BD24.c)
 *     sub_18010BE1C @ 0x18010BE1C (sub_18010BE1C.c)
 *     sub_18010C198 @ 0x18010C198 (sub_18010C198.c)
 *     sub_18010C390 @ 0x18010C390 (sub_18010C390.c)
 *     sub_18010C428 @ 0x18010C428 (sub_18010C428.c)
 *     sub_18010C634 @ 0x18010C634 (sub_18010C634.c)
 *     sub_18010C758 @ 0x18010C758 (sub_18010C758.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 *     sub_18010D1BC @ 0x18010D1BC (sub_18010D1BC.c)
 *     sub_18010D3AC @ 0x18010D3AC (sub_18010D3AC.c)
 *     sub_18010D418 @ 0x18010D418 (sub_18010D418.c)
 *     sub_18010D4D4 @ 0x18010D4D4 (sub_18010D4D4.c)
 *     sub_18010D57C @ 0x18010D57C (sub_18010D57C.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 *     sub_18010D69C @ 0x18010D69C (sub_18010D69C.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  unsigned __int32 v1; // edx
  struct _TEB *v2; // rax
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  __int64 v9; // rcx
  int v10; // eax

  v1 = Status;
  v2 = NtCurrentTeb();
  if ( v2 )
    v2->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  if ( (Status & 0x20000000) != 0 )
    return Status;
  if ( (Status & 0xFF0000) == 0x70000 && ((HIBYTE(Status) - 128) & 0xFFFFFFBF) == 0 )
    return (unsigned __int16)v1;
  if ( (Status & 0xF0000000) == 0xD0000000 )
    v1 = Status & 0xCFFFFFFF;
  v3 = 0;
  v4 = 283;
  do
  {
    v5 = (v4 + v3) >> 1;
    v6 = dword_180122C30[2 * v5];
    v7 = v1 - v6;
    if ( v1 >= v6 )
    {
      if ( v7 < (unsigned __int8)byte_180122C34[8 * v5] )
      {
        v9 = 8 * v5;
        v10 = (unsigned __int16)word_180122C36[4 * v5];
        if ( byte_180122C35[v9] == 1 )
          return (unsigned __int16)word_180121020[v7 + v10];
        else
          return (unsigned __int16)word_180121020[2 * v7 + v10] | ((unsigned __int16)word_180121020[2 * v7 + 1 + v10] << 16);
      }
      v3 = v5 + 1;
    }
    else
    {
      v4 = v5 - 1;
    }
  }
  while ( v3 <= v4 );
  if ( (v1 & 0xFFFF0000) == 0xC0010000 )
    return (unsigned __int16)v1;
  DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v1);
  DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
  DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
  return 317;
}
