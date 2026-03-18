/*
 * XREFs of CmpDoWritethroughReparse @ 0x140581B10
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCopy @ 0x1400AF93C (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x14011F290 (RtlUnicodeStringCat.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x140481360 (CmpKeyFullNameLength.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x140569C20 (CmpIsKeyStackDeleted.c)
 *     CmpRecordParseFailure @ 0x14057F118 (CmpRecordParseFailure.c)
 */

__int64 __fastcall CmpDoWritethroughReparse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        PCUNICODE_STRING SourceString,
        __int64 a6,
        UNICODE_STRING *a7)
{
  bool v11; // zf
  unsigned int v12; // ebx
  __int64 v14; // rax
  int started; // eax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  __int64 KcbAtLayerHeight; // rax
  unsigned __int16 v20; // di
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  const UNICODE_STRING *v23; // rdx
  UNICODE_STRING *v24; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  PPRIVILEGE_SET v26[4]; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp+30h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(v26, 0, sizeof(v26));
  v11 = *(_DWORD *)(a1 + 32) == -1;
  WORD1(v26[0]) = -1;
  if ( !v11 || (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 5360LL) & 0x2000) == 0 )
    goto LABEL_3;
  if ( !a4 )
  {
LABEL_18:
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, *(_WORD *)(a1 + 58) - 1);
    v20 = CmpKeyFullNameLength(KcbAtLayerHeight);
    if ( a4 )
    {
      started = CmpConstructNameWithStatus(*(_QWORD *)(v21 + 64), &Privileges);
      v12 = started;
      if ( started < 0 )
      {
        v16 = 66048;
        goto LABEL_16;
      }
    }
    else
    {
      started = CmpConstructNameWithStatus(v21, &Privileges);
      v12 = started;
      if ( started < 0 )
      {
        v16 = 66304;
        goto LABEL_16;
      }
    }
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v20, 0x36364D43u);
    if ( !DestinationString.Buffer )
    {
      v12 = -1073741670;
      CmpRecordParseFailure(a6, 66560, -1073741670);
      goto LABEL_6;
    }
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v20;
    RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)Privileges);
    if ( a4 )
    {
      v22 = (unsigned __int64)DestinationString.Length >> 1;
      DestinationString.Length += 2;
      v23 = SourceString;
      DestinationString.Buffer[v22] = 92;
      RtlUnicodeStringCat(&DestinationString, v23);
    }
    v24 = a7;
    ExFreePoolWithTag(a7->Buffer, 0);
    *v24 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v17 = a6;
    v12 = 872;
    v18 = 872;
    v16 = 66816;
    *(_DWORD *)(a6 + 24) |= 0x10u;
    goto LABEL_27;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 64) + 57LL) )
  {
LABEL_3:
    v12 = -1073741199;
    goto LABEL_4;
  }
  v14 = CmpGetKcbAtLayerHeight(a3, *(_WORD *)(a1 + 58) - 1);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v26, v14);
  v12 = started;
  if ( started >= 0 )
  {
    if ( !CmpIsKeyStackDeleted((__int64)v26, 0LL) )
      goto LABEL_18;
    goto LABEL_3;
  }
  v16 = 65792;
LABEL_16:
  v17 = a6;
  v18 = started;
LABEL_27:
  CmpRecordParseFailure(v17, v16, v18);
LABEL_4:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_6:
  if ( Privileges )
    MiDeleteSubsection(Privileges);
  if ( v26[3] )
    MiDeleteSubsection(v26[3]);
  return v12;
}
