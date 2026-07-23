/*
 * XREFs of HdlspProcessDumpCommand @ 0x1407CCA70
 * Callers:
 *     HdlspBugCheckProcessing @ 0x1407CBCE0 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x1407CBE10 (HdlspDispatch.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1400134F0 (RtlTimeToTimeFields.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x140164670 (sprintf_s.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404DF110 (RtlUnicodeStringToAnsiString.c)
 *     HdlspPutMore @ 0x1407CCCF0 (HdlspPutMore.c)
 *     HdlspPutString @ 0x1407CCD90 (HdlspPutString.c)
 */

__int64 __fastcall HdlspProcessDumpCommand(char a1)
{
  KIRQL v2; // bl
  PKSPIN_LOCK v3; // rcx
  __int64 result; // rax
  unsigned __int16 v5; // dx
  char *v6; // rax
  unsigned int v7; // esi
  unsigned int i; // r14d
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  const char *v12; // rcx
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  _STRING v14; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  char v16; // [rsp+A8h] [rbp+38h] BYREF

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
  *(_DWORD *)&v14.Length = 5242880;
  v14.Buffer = v6;
  for ( i = v5; ; i = (unsigned __int8)(i + 1) )
  {
    v9 = v3[2] + 56LL * i;
    if ( v2 != 0xFF )
    {
      KxReleaseSpinLock(v3);
      __writecr8(v2);
    }
    RtlTimeToTimeFields((PLARGE_INTEGER)(v9 + 8), &TimeFields);
    sprintf_s(
      (char *)HeadlessGlobals[3],
      0x50uLL,
      "%02d:%02d:%02d.%03d : ",
      TimeFields.Hour,
      TimeFields.Minute,
      TimeFields.Second,
      TimeFields.Milliseconds);
    HdlspPutString(HeadlessGlobals[3]);
    v10 = *(_QWORD *)(v9 + 48);
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(v10 + 2 * v11) );
    if ( v11 >= 0x4F )
      *(_WORD *)(v10 + 158) = 0;
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v9 + 48));
    RtlUnicodeStringToAnsiString(&v14, &DestinationString, 0);
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
      HdlspPutMore(&v16);
      if ( (HeadlessGlobals[6] & 2) != 0 )
        v2 = -1;
      else
        v2 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      if ( v16 )
      {
        v12 = "\r\n";
        goto LABEL_33;
      }
      v3 = HeadlessGlobals;
      if ( (HeadlessGlobals[6] & 4) != 0 )
      {
        v12 = "New log entries have been added while waiting, command aborted.\r\n";
        goto LABEL_33;
      }
      v7 = 0;
    }
  }
  v12 = "New log entries have been added during dump, command aborted.\r\n";
LABEL_33:
  result = HdlspPutString(v12);
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
