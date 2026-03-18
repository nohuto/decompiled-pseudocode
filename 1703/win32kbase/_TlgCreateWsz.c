/*
 * XREFs of _TlgCreateWsz @ 0x1C00073E8
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0007C54 (RIMDeliverConfigRequest.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C00522F8 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0055910 (xxxUserChangeDisplaySettings.c)
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C00695F8 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C00697BC (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 *     ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C0069A20 (-OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z.c)
 *     CoreMsgCreatePort @ 0x1C0069DD8 (CoreMsgCreatePort.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C006A198 (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C006A274 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C006A5D0 (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     RIMOpenDev @ 0x1C0094D18 (RIMOpenDev.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0095144 (RIMStartDeviceSpecificRead.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C009B01C (RIMLogDeviceHealthTelemetry.c)
 *     NtUserWin32kSysCallFilterStub @ 0x1C00E5D80 (NtUserWin32kSysCallFilterStub.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104474 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010490C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = &word_1C0163008;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
