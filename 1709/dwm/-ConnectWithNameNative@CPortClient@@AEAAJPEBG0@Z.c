/*
 * XREFs of ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x1400084B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001910 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x140003960 (__security_check_cookie.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140007A48 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CPortClient::ConnectWithNameNative(HANDLE *this, const unsigned __int16 *a2, char *a3)
{
  unsigned int v4; // edi
  int v6; // eax
  _DWORD *v7; // rax
  struct _PORT_VIEW *v9; // r9
  unsigned __int16 *ConnectionInformation; // rax
  NTSTATUS v11; // eax
  unsigned int v12; // esi
  ULONG ConnectionInformationLength; // [rsp+40h] [rbp-118h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-110h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+58h] [rbp-100h] BYREF
  char v16[192]; // [rsp+70h] [rbp-E8h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  if ( a3 )
  {
    ConnectionInformationLength = 188;
    v6 = StringCchCopyW(v16, 94LL, a3);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v6, 0xF5u);
      return v4;
    }
  }
  else
  {
    ConnectionInformationLength = 0;
  }
  if ( !this[9] && *((_DWORD *)this + 15) )
  {
    v7 = HeapAlloc(this[10], 8u, 0x30uLL);
    this[9] = v7;
    if ( !v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0x102u);
      return 2147942414LL;
    }
    *v7 = 48;
    *((_DWORD *)this[9] + 4) = 0;
    *((_QWORD *)this[9] + 3) = *((unsigned int *)this + 15);
    *((_QWORD *)this[9] + 1) = this[8];
  }
  v9 = (struct _PORT_VIEW *)this[9];
  ConnectionInformation = (unsigned __int16 *)v16;
  if ( !a3 )
    ConnectionInformation = 0LL;
  if ( !v9 || !v9->SectionHandle )
    v9 = 0LL;
  v11 = NtConnectPort(
          this + 6,
          &DestinationString,
          &SecurityQos,
          v9,
          0LL,
          0LL,
          ConnectionInformation,
          &ConnectionInformationLength);
  if ( v11 < 0 )
  {
    v12 = v11 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      1u,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      8u,
      v11 | 0x10000000,
      0x113u);
    return v12;
  }
  *((_BYTE *)this + 56) = 1;
  return v4;
}
