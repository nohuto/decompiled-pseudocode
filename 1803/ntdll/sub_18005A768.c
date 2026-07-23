/*
 * XREFs of sub_18005A768 @ 0x18005A768
 * Callers:
 *     RtlSwitchedVVI @ 0x18005A320 (RtlSwitchedVVI.c)
 * Callees:
 *     SbSelectProcedure @ 0x18002D680 (SbSelectProcedure.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_1800377C0 @ 0x1800377C0 (sub_1800377C0.c)
 *     RtlGetNtProductType @ 0x18005A930 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18005A990 (RtlGetSuiteMask.c)
 *     ZwQueryLicenseValue @ 0x18009D410 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005A768(int *a1)
{
  int v2; // edi
  struct _PEB *v3; // rsi
  __int64 (*v4)(void); // rax
  int v5; // edi
  PWCH Buffer; // r8
  int v7; // edi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+70h] [rbp+30h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+78h] [rbp+38h] BYREF
  ULONG Type; // [rsp+80h] [rbp+40h] BYREF
  ULONG ResultDataSize; // [rsp+88h] [rbp+48h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = 0;
  Data = 0;
  v3 = NtCurrentPeb();
  a1[1] = v3->OSMajorVersion;
  a1[2] = v3->OSMinorVersion;
  a1[3] = v3->OSBuildNumber;
  a1[4] = v3->OSPlatformId;
  v4 = (__int64 (*)(void))qword_18015D038;
  if ( qword_18015D038
    || (v4 = (__int64 (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 0),
        (qword_18015D038 = (__int64)v4) != 0) )
  {
    v2 = v4();
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
    a1[2] = 2;
    a1[3] = 9200;
LABEL_19:
    a1[1] = 6;
    goto LABEL_5;
  }
  if ( v5 == 1 )
  {
    a1[2] = 3;
    a1[3] = 9600;
    goto LABEL_19;
  }
LABEL_5:
  Buffer = v3->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)sub_1800377C0((_WORD *)a1 + 10, 0x100uLL, (__int64)Buffer) < 0 )
    *((_WORD *)a1 + 10) = 0;
  v7 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v3->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v3->OSCSDVersion;
    *((_WORD *)a1 + 140) = RtlGetSuiteMask();
    if ( v7 == 292 )
      a1[71] = RtlGetSuiteMask() & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( RtlGetNtProductType(&NtProductType) )
      *((_BYTE *)a1 + 282) = NtProductType;
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && (Data != 1 || Type != 4 || ResultDataSize != 4) )
    {
      *((_WORD *)a1 + 140) &= ~0x10u;
      if ( *a1 == 292 )
        a1[71] &= 0x1FFEFu;
    }
  }
  return 0LL;
}
