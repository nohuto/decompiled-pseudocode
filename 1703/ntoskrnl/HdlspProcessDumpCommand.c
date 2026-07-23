/*
 * XREFs of HdlspProcessDumpCommand @ 0x14078EF40
 * Callers:
 *     HdlspBugCheckProcessing @ 0x14078E20C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x14078E340 (HdlspDispatch.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x140144710 (RtlTimeToTimeFields.c)
 *     sprintf_s @ 0x14016FE70 (sprintf_s.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404C1180 (RtlUnicodeStringToAnsiString.c)
 *     HdlspPutMore @ 0x14078F1C0 (HdlspPutMore.c)
 *     HdlspPutString @ 0x14078F260 (HdlspPutString.c)
 */

__int64 __fastcall HdlspProcessDumpCommand(char a1)
{
  PKSPIN_LOCK v2; // rcx
  KIRQL v3; // al
  unsigned __int8 v4; // bl
  unsigned __int16 v5; // dx
  __int64 result; // rax
  char *v7; // rax
  unsigned int v8; // esi
  unsigned int i; // r14d
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  PKSPIN_LOCK v13; // rcx
  KIRQL v14; // al
  KIRQL v15; // al
  const char *v16; // rcx
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  _STRING v18; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  char v20; // [rsp+A8h] [rbp+38h] BYREF

  v2 = HeadlessGlobals;
  if ( (HeadlessGlobals[6] & 2) != 0 )
  {
    v4 = -1;
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v2 = HeadlessGlobals;
    v4 = v3;
  }
  v5 = *((_WORD *)v2 + 49);
  result = 0xFFFFLL;
  if ( v5 == 0xFFFF )
  {
LABEL_5:
    if ( v4 == 0xFF )
      return result;
    goto LABEL_35;
  }
  *((_DWORD *)v2 + 12) &= ~4u;
  v7 = (char *)v2[3];
  v8 = 0;
  *(_DWORD *)&v18.Length = 5242880;
  v18.Buffer = v7;
  for ( i = v5; ; i = (unsigned __int8)(i + 1) )
  {
    v10 = v2[2] + 56LL * i;
    if ( v4 != 0xFF )
    {
      KxReleaseSpinLock(v2);
      __writecr8(v4);
    }
    RtlTimeToTimeFields((PLARGE_INTEGER)(v10 + 8), &TimeFields);
    sprintf_s(
      (char *)HeadlessGlobals[3],
      0x50uLL,
      "%02d:%02d:%02d.%03d : ",
      TimeFields.Hour,
      TimeFields.Minute,
      TimeFields.Second,
      TimeFields.Milliseconds);
    HdlspPutString(HeadlessGlobals[3]);
    v11 = *(_QWORD *)(v10 + 48);
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v11 + 2 * v12) );
    if ( v12 >= 0x4F )
      *(_WORD *)(v11 + 158) = 0;
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v10 + 48));
    RtlUnicodeStringToAnsiString(&v18, &DestinationString, 0);
    v13 = HeadlessGlobals;
    if ( (HeadlessGlobals[6] & 2) != 0 )
    {
      v4 = -1;
    }
    else
    {
      v14 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      v13 = HeadlessGlobals;
      v4 = v14;
    }
    if ( (v13[6] & 4) != 0 )
      break;
    HdlspPutString(v13[3]);
    HdlspPutString("\r\n");
    v2 = HeadlessGlobals;
    ++v8;
    result = *((unsigned __int16 *)HeadlessGlobals + 48);
    if ( i == (_DWORD)result )
      goto LABEL_5;
    if ( a1 && v8 > 0x14 )
    {
      if ( v4 != 0xFF )
      {
        KxReleaseSpinLock(HeadlessGlobals);
        __writecr8(v4);
      }
      HdlspPutMore(&v20);
      v2 = HeadlessGlobals;
      if ( (HeadlessGlobals[6] & 2) != 0 )
      {
        v4 = -1;
      }
      else
      {
        v15 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
        v2 = HeadlessGlobals;
        v4 = v15;
      }
      if ( v20 )
      {
        v16 = "\r\n";
        goto LABEL_33;
      }
      if ( (v2[6] & 4) != 0 )
      {
        v16 = "New log entries have been added while waiting, command aborted.\r\n";
        goto LABEL_33;
      }
      v8 = 0;
    }
  }
  v16 = "New log entries have been added during dump, command aborted.\r\n";
LABEL_33:
  result = HdlspPutString(v16);
  if ( v4 != 0xFF )
  {
    v2 = HeadlessGlobals;
LABEL_35:
    KxReleaseSpinLock(v2);
    result = v4;
    __writecr8(v4);
  }
  return result;
}
