/*
 * XREFs of CmpDoWritethroughReparse @ 0x140448B84
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x140026D10 (RtlUnicodeStringCat.c)
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     RtlUnicodeStringCopy @ 0x14007FB50 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpRecordParseFailure @ 0x140444E0C (CmpRecordParseFailure.c)
 *     CmpIsKeyStackDeleted @ 0x1404D4080 (CmpIsKeyStackDeleted.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x140501640 (CmpKeyFullNameLength.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int16 v22; // di
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  const UNICODE_STRING *v25; // rdx
  UNICODE_STRING *v26; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  PPRIVILEGE_SET v28[4]; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp+30h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(v28, 0, sizeof(v28));
  v11 = *(_DWORD *)(a1 + 32) == -1;
  WORD1(v28[0]) = -1;
  if ( !v11 || (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 5360LL) & 0x2000) == 0 )
    goto LABEL_3;
  if ( !a4 )
  {
LABEL_18:
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, (unsigned __int16)(*(_WORD *)(a1 + 58) - 1));
    v22 = CmpKeyFullNameLength(KcbAtLayerHeight, v20, v21, KcbAtLayerHeight);
    if ( a4 )
    {
      started = CmpConstructNameWithStatus(*(_QWORD *)(v23 + 64), &Privileges);
      v12 = started;
      if ( started < 0 )
      {
        v16 = 66048;
        goto LABEL_16;
      }
    }
    else
    {
      started = CmpConstructNameWithStatus(v23, &Privileges);
      v12 = started;
      if ( started < 0 )
      {
        v16 = 66304;
        goto LABEL_16;
      }
    }
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x36364D43u);
    if ( !DestinationString.Buffer )
    {
      v12 = -1073741670;
      CmpRecordParseFailure(a6, 66560, -1073741670);
      goto LABEL_6;
    }
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v22;
    RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)Privileges);
    if ( a4 )
    {
      v24 = (unsigned __int64)DestinationString.Length >> 1;
      DestinationString.Length += 2;
      v25 = SourceString;
      DestinationString.Buffer[v24] = 92;
      RtlUnicodeStringCat(&DestinationString, v25);
    }
    v26 = a7;
    ExFreePoolWithTag(a7->Buffer, 0);
    *v26 = DestinationString;
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
  v14 = CmpGetKcbAtLayerHeight(a3, (unsigned __int16)(*(_WORD *)(a1 + 58) - 1));
  started = CmpStartKcbStackForTopLayerKcb(v28, v14);
  v12 = started;
  if ( started >= 0 )
  {
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(v28, 0LL) )
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
  if ( v28[3] )
    MiDeleteSubsection(v28[3]);
  return v12;
}
