/*
 * XREFs of CmpDoWritethroughReparse @ 0x1405529F0
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCopy @ 0x140008980 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x1400C18B4 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyStackDeleted @ 0x1404A5D2C (CmpIsKeyStackDeleted.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x1404AC050 (CmpKeyFullNameLength.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpRecordParseFailure @ 0x14056D188 (CmpRecordParseFailure.c)
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
  __int64 KcbAtLayerHeight; // rax
  int started; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int16 v20; // ax
  __int64 v21; // rdi
  unsigned __int16 v22; // bp
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rcx
  const UNICODE_STRING *v26; // rdx
  UNICODE_STRING *v27; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  PPRIVILEGE_SET v29[7]; // [rsp+30h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp+8h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(v29, 0, 0x20uLL);
  v11 = *(_DWORD *)(a1 + 32) == -1;
  WORD1(v29[0]) = -1;
  if ( !v11 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4152LL) & 0x2000) == 0 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_19;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 64) + 57LL) )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a3, *(_WORD *)(a1 + 58) - 1);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v29, KcbAtLayerHeight);
  v12 = started;
  if ( started >= 0 )
  {
    if ( CmpIsKeyStackDeleted((__int64)v29, 0LL) )
    {
      v12 = -1073741199;
      goto LABEL_3;
    }
LABEL_19:
    v19 = CmpGetKcbAtLayerHeight(a2, *(_WORD *)(a1 + 58) - 1);
    v20 = CmpKeyFullNameLength(v19);
    v21 = a6;
    v22 = v20;
    if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess(a6 + 168);
      *(_DWORD *)(v21 + 160) |= 1u;
    }
    if ( a4 )
    {
      v23 = CmpConstructNameWithStatus(*(_QWORD *)(v19 + 64), &Privileges);
      v12 = v23;
      if ( v23 < 0 )
      {
        v17 = (unsigned int)v23;
        v18 = 66048LL;
LABEL_31:
        v16 = v21;
        goto LABEL_32;
      }
    }
    else
    {
      v24 = CmpConstructNameWithStatus(v19, &Privileges);
      v12 = v24;
      if ( v24 < 0 )
      {
        v17 = (unsigned int)v24;
        v18 = 66304LL;
        goto LABEL_31;
      }
    }
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x36364D43u);
    if ( !DestinationString.Buffer )
    {
      v12 = -1073741670;
      CmpRecordParseFailure(v21, 66560LL, 3221225626LL);
      goto LABEL_5;
    }
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v22;
    RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)Privileges);
    if ( a4 )
    {
      v25 = (unsigned __int64)DestinationString.Length >> 1;
      DestinationString.Length += 2;
      v26 = SourceString;
      DestinationString.Buffer[v25] = 92;
      RtlUnicodeStringCat(&DestinationString, v26);
    }
    v27 = a7;
    ExFreePoolWithTag(a7->Buffer, 0);
    *v27 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    *(_DWORD *)(v21 + 24) |= 0x10u;
    v12 = 872;
    v17 = 872LL;
    v18 = 66816LL;
    goto LABEL_31;
  }
  v16 = a6;
  v17 = (unsigned int)started;
  v18 = 65792LL;
LABEL_32:
  CmpRecordParseFailure(v16, v18, v17);
LABEL_3:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_5:
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v29[3] )
    CmSiFreeMemory(v29[3]);
  return v12;
}
