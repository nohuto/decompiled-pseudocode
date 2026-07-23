/*
 * XREFs of HdlspProcessDumpCommand @ 0x140839A68
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140838CE0 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140838E10 (HdlspDispatch.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x1401457D0 (RtlTimeToTimeFields.c)
 *     sprintf_s @ 0x14018E540 (sprintf_s.c)
 *     RtlUnicodeStringToAnsiString @ 0x140518490 (RtlUnicodeStringToAnsiString.c)
 *     HdlspPutMore @ 0x140839CEC (HdlspPutMore.c)
 *     HdlspPutString @ 0x140839D8C (HdlspPutString.c)
 */

__int64 __fastcall HdlspProcessDumpCommand(char a1)
{
  KIRQL v2; // bl
  PKSPIN_LOCK v3; // rcx
  __int64 result; // rax
  unsigned __int16 v5; // dx
  char *v6; // rax
  unsigned int v7; // edi
  unsigned int i; // esi
  KSPIN_LOCK v9; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  const char *v13; // rcx
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  _STRING v15; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  char v17; // [rsp+A8h] [rbp+38h] BYREF

  if ( (HeadlessGlobals[6] & 2) != 0 )
    v2 = -1;
  else
    v2 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v3 = HeadlessGlobals;
  result = 0xFFFFLL;
  v5 = *((_WORD *)HeadlessGlobals + 49);
  if ( v5 == 0xFFFF )
  {
LABEL_5:
    if ( v2 == 0xFF )
      return result;
    goto LABEL_35;
  }
  *((_DWORD *)HeadlessGlobals + 12) &= ~4u;
  v6 = (char *)v3[3];
  v7 = 0;
  *(_DWORD *)&v15.Length = 5242880;
  v15.Buffer = v6;
  for ( i = v5; ; i = (unsigned __int8)(i + 1) )
  {
    v9 = v3[2];
    v10 = 56LL * i;
    if ( v2 != 0xFF )
    {
      KxReleaseSpinLock(v3);
      __writecr8(v2);
    }
    RtlTimeToTimeFields((PLARGE_INTEGER)(v10 + v9 + 8), &TimeFields);
    sprintf_s(
      (char *)HeadlessGlobals[3],
      0x50uLL,
      "%02d:%02d:%02d.%03d : ",
      TimeFields.Hour,
      TimeFields.Minute,
      TimeFields.Second,
      TimeFields.Milliseconds);
    HdlspPutString(HeadlessGlobals[3]);
    v11 = *(_QWORD *)(v10 + v9 + 48);
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v11 + 2 * v12) );
    if ( v12 >= 0x4F )
    {
      *(_WORD *)(v11 + 158) = 0;
      v11 = *(_QWORD *)(v10 + v9 + 48);
    }
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v11);
    RtlUnicodeStringToAnsiString(&v15, &DestinationString, 0);
    v2 = (HeadlessGlobals[6] & 2) != 0 ? -1 : KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    if ( (HeadlessGlobals[6] & 4) != 0 )
      break;
    HdlspPutString(HeadlessGlobals[3]);
    HdlspPutString("\r\n");
    v3 = HeadlessGlobals;
    ++v7;
    result = *((unsigned __int16 *)HeadlessGlobals + 48);
    if ( i == (_DWORD)result )
      goto LABEL_5;
    if ( a1 && v7 > 0x14 )
    {
      if ( v2 != 0xFF )
      {
        KxReleaseSpinLock(HeadlessGlobals);
        __writecr8(v2);
      }
      HdlspPutMore(&v17);
      if ( (HeadlessGlobals[6] & 2) != 0 )
        v2 = -1;
      else
        v2 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      if ( v17 )
      {
        v13 = "\r\n";
        goto LABEL_33;
      }
      v3 = HeadlessGlobals;
      if ( (HeadlessGlobals[6] & 4) != 0 )
      {
        v13 = "New log entries have been added while waiting, command aborted.\r\n";
        goto LABEL_33;
      }
      v7 = 0;
    }
  }
  v13 = "New log entries have been added during dump, command aborted.\r\n";
LABEL_33:
  result = HdlspPutString(v13);
  if ( v2 != 0xFF )
  {
    v3 = HeadlessGlobals;
LABEL_35:
    KxReleaseSpinLock(v3);
    result = v2;
    __writecr8(v2);
  }
  return result;
}
