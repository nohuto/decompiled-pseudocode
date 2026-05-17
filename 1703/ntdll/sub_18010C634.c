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

__int64 __fastcall sub_18010C634(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, PCWSTR SourceString)
{
  unsigned int v6; // ebx
  UNICODE_STRING *p_DestinationString; // r8
  ULONG v10; // ecx
  NTSTATUS Section; // eax
  _DWORD *v13; // r9
  _QWORD v14[2]; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v15[4]; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v17[48]; // [rsp+78h] [rbp+7h] BYREF

  v6 = a3 & 0x9D800000 ^ a3;
  if ( v6 != 4 && v6 != 64 && v6 != 32 && v6 != 2 && v6 != 8 )
  {
LABEL_8:
    v10 = 87;
LABEL_9:
    RtlSetLastWin32Error(v10);
    return 0LL;
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
  Section = sub_18010B8A0((__int64)v17, a2, (__int64)p_DestinationString, v14);
  if ( Section < 0 )
    goto LABEL_12;
  if ( a5 )
  {
    v15[1] = 0;
    v13 = v15;
    v15[0] = a5;
  }
  else
  {
    v13 = 0LL;
  }
  if ( a1 == -1 && !v13 )
    goto LABEL_8;
  Section = ZwCreateSection();
  if ( Section < 0 )
  {
LABEL_12:
    v10 = RtlNtStatusToDosError(Section);
    goto LABEL_9;
  }
  RtlSetLastWin32Error(0);
  return v14[1];
}
