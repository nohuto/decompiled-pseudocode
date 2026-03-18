/*
 * XREFs of ?DrvDriverFailure@@YAJXZ @ 0x1C00B1884
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEBU0@@Z @ 0x1C00B1690 (--4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEBU0@@Z.c)
 *     CollectDriverFailureData @ 0x1C00D33B4 (CollectDriverFailureData.c)
 */

__int64 DrvDriverFailure(void)
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  wchar_t *i; // rax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v13[34]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  v0 = 0;
  memset(v13, 0, sizeof(v13));
  LOBYTE(v13[0]) = gbFullScreen;
  v13[1] = gpDispInfo;
  v13[2] = __PAIR64__(gbGDIOn, gbMDEVDisabled);
  LODWORD(v13[3]) = gnDCECount;
  v13[4] = gpvwplHungRedraw;
  v13[5] = ghrgnInvalidSum;
  v13[6] = ghrgnVisNew;
  v13[7] = ghrgnSWP1;
  v13[8] = ghrgnValid;
  v13[9] = ghrgnValidSum;
  v13[10] = ghrgnInvalid;
  v13[11] = ghrgnInv0;
  v13[12] = ghrgnInv1;
  v13[13] = ghrgnInv2;
  v13[14] = ghdcMem;
  v13[15] = ghdcMem2;
  v13[16] = ghrgnGDC;
  v13[17] = ghrgnSCR;
  v13[18] = ghrgnSPB1;
  v13[19] = ghrgnSPB2;
  v13[20] = ghrgnSW;
  v13[21] = ghrgnScrl1;
  v13[22] = ghrgnScrl2;
  v13[23] = ghrgnScrlVis;
  v13[24] = ghrgnScrlSrc;
  v13[25] = ghrgnScrlDst;
  v13[26] = ghrgnScrlValid;
  v13[27] = gpWin32kDriverObject;
  LODWORD(v13[28]) = gnRetryReadInput;
  if ( gbExitInProgress )
  {
    v0 = 1;
  }
  else
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) == -1073741431 )
    {
      v0 = 1;
      v4 = WdLogNewEntry5_WdError(v2, v1, v3);
      *(_QWORD *)(v4 + 24) = -1073741431LL;
      WdLogEvent5_WdError(v4);
    }
    else if ( gpLastFailedPhysDisp )
    {
      for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
      {
        if ( (wchar_t *)gpLastFailedPhysDisp == i )
        {
          v0 = 2;
          break;
        }
      }
    }
  }
  if ( gulDriverFailureReason )
    v0 = gulDriverFailureReason;
  if ( v0 != 1 )
  {
    BugCheckParameter1 = -1LL;
    BugCheckParameter2 = -1LL;
    BugCheckParameter3 = -1LL;
    if ( gpDispInfo )
      tagKERNELDISPLAYINFO::operator=((__int64)&v13[29]);
    CollectDriverFailureData(&BugCheckParameter1, v13);
    KeBugCheckEx(0xB4u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, v0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 3221225865LL;
}
