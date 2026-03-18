/*
 * XREFs of DisplayBootBitmap @ 0x140183118
 * Callers:
 *     DisplayFilter @ 0x14021F4F0 (DisplayFilter.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     InbvReleaseResources @ 0x140183170 (InbvReleaseResources.c)
 *     InbvIsBootDriverInstalled @ 0x140183210 (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     InbvAcquireLock @ 0x140230D1C (InbvAcquireLock.c)
 *     InbvBitBlt @ 0x140230D48 (InbvBitBlt.c)
 *     InbvGetResourceAddress @ 0x140230E28 (InbvGetResourceAddress.c)
 *     InbvReleaseLock @ 0x140230E98 (InbvReleaseLock.c)
 *     InbvSetScrollRegion @ 0x140230F00 (InbvSetScrollRegion.c)
 *     InbvSetTextColor @ 0x140230F30 (InbvSetTextColor.c)
 *     InbvSolidColorFill @ 0x140230F60 (InbvSolidColorFill.c)
 *     RotBarInit @ 0x1402310DC (RotBarInit.c)
 *     PsCreateSystemThread @ 0x14052ABF0 (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall DisplayBootBitmap(char a1)
{
  int v1; // ebx
  NTSTATUS result; // eax
  __int64 ResourceAddress; // rdi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdi
  HANDLE ThreadHandle; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( byte_1403E9940 )
  {
    InbvAcquireLock();
    RotBarSelection = 0;
    InbvReleaseLock();
  }
  ShowProgressBar = 0;
  if ( a1 )
  {
    InbvSetTextColor(15LL);
    InbvSolidColorFill(0, 0, 639, 479, 0);
    InbvSolidColorFill(0, 421, 639, 479, 0);
    ResourceAddress = InbvGetResourceAddress(6LL);
    v1 = 0;
    v5 = InbvGetResourceAddress(7LL);
    result = InbvSetScrollRegion(32LL, 80LL, 631LL, 400LL);
    if ( v5 )
      result = InbvBitBlt(v5, 0LL, 419LL);
    if ( ResourceAddress )
      result = InbvBitBlt(ResourceAddress, 0LL, 0LL);
LABEL_18:
    if ( !byte_1403E9940 )
      return result;
    goto LABEL_19;
  }
  if ( !(unsigned __int8)InbvIsBootDriverInstalled() )
    return InbvReleaseResources();
  qword_1403CAD38 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
  v6 = InbvGetResourceAddress(1LL);
  v7 = InbvGetResourceAddress(4LL);
  if ( v6 )
  {
    v1 = 1;
    InbvBitBlt(v6, 0LL, 0LL);
  }
  if ( v7 )
    InbvBitBlt(v7, 0LL, 0LL);
  if ( !byte_1403E9940 )
  {
    result = PsCreateSystemThread(&ThreadHandle, 0, 0LL, 0LL, 0LL, InbvRotateGuiBootDisplay, 0LL);
    if ( result >= 0 )
    {
      result = ZwClose(ThreadHandle);
      byte_1403E9940 = 1;
    }
    goto LABEL_18;
  }
LABEL_19:
  InbvAcquireLock();
  RotBarSelection = v1;
  if ( v1 == 1 )
    RotBarInit();
  return InbvReleaseLock();
}
