/*
 * XREFs of sub_18010C634 @ 0x18010C634
 * Callers:
 *     sub_18010BE7C @ 0x18010BE7C (sub_18010BE7C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     sub_18010B8A0 @ 0x18010B8A0 (sub_18010B8A0.c)
 */

HANDLE __fastcall sub_18010C634(
        HANDLE FileHandle,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        PCWSTR SourceString)
{
  ULONG AllocationAttributes; // esi
  ULONG SectionPageProtection; // ebx
  ACCESS_MASK v10; // edi
  _UNICODE_STRING *p_DestinationString; // r8
  LONG v12; // ecx
  NTSTATUS v14; // eax
  LARGE_INTEGER *p_MaximumSize; // r9
  POBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-29h] BYREF
  HANDLE SectionHandle; // [rsp+50h] [rbp-21h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+58h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v20[48]; // [rsp+78h] [rbp+7h] BYREF

  AllocationAttributes = a3 & 0x9D800000;
  SectionPageProtection = a3 & 0x9D800000 ^ a3;
  v10 = 983045;
  if ( (a3 & 0x9D800000) == 0 )
    AllocationAttributes = 0x8000000;
  switch ( SectionPageProtection )
  {
    case 4u:
      v10 = 983047;
      break;
    case 0x40u:
      v10 = 983055;
      break;
    case 0x20u:
      v10 = 983053;
      break;
    case 2u:
    case 8u:
      break;
    default:
      goto LABEL_13;
  }
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    p_DestinationString = &DestinationString;
  }
  else
  {
    p_DestinationString = 0LL;
  }
  v14 = sub_18010B8A0((__int64)v20, a2, (__int64)p_DestinationString, &ObjectAttributes);
  if ( v14 < 0 )
    goto LABEL_17;
  if ( a5 )
  {
    p_MaximumSize = &MaximumSize;
    MaximumSize.QuadPart = a5;
  }
  else
  {
    p_MaximumSize = 0LL;
  }
  if ( FileHandle == (HANDLE)-1LL )
  {
    FileHandle = 0LL;
    if ( !p_MaximumSize )
    {
LABEL_13:
      v12 = 87;
LABEL_14:
      RtlSetLastWin32Error(v12);
      return 0LL;
    }
  }
  v14 = ZwCreateSection(
          &SectionHandle,
          v10,
          ObjectAttributes,
          p_MaximumSize,
          SectionPageProtection,
          AllocationAttributes,
          FileHandle);
  if ( v14 < 0 )
  {
LABEL_17:
    v12 = RtlNtStatusToDosError(v14);
    goto LABEL_14;
  }
  RtlSetLastWin32Error(0);
  return SectionHandle;
}
