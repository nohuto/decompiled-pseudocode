/*
 * XREFs of ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x180004F40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180003B0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180004B08 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180007120 (__security_check_cookie.c)
 */

__int64 __fastcall CPortClient::ConnectWithNameNative(CPortClient *this, const unsigned __int16 *a2, char *a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  DWORD v7; // r9d
  struct _PORT_VIEW *v8; // r9
  _DWORD *v9; // rax
  NTSTATUS v10; // eax
  DWORD v12; // [rsp+20h] [rbp-E0h]
  ULONG ConnectionInformationLength; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+58h] [rbp-A8h] BYREF
  char v16[192]; // [rsp+70h] [rbp-90h] BYREF

  v5 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  if ( !a3 )
  {
    ConnectionInformationLength = 0;
LABEL_6:
    v8 = (struct _PORT_VIEW *)*((_QWORD *)this + 9);
    if ( !v8 )
    {
      if ( !*((_DWORD *)this + 15) )
        goto LABEL_13;
      v9 = HeapAlloc(*((HANDLE *)this + 10), 8u, 0x30uLL);
      *((_QWORD *)this + 9) = v9;
      if ( !v9 )
      {
        v5 = -2147024882;
        v12 = 258;
LABEL_10:
        v7 = v5;
        goto LABEL_4;
      }
      *v9 = 48;
      *(_DWORD *)(*((_QWORD *)this + 9) + 16LL) = 0;
      *(_QWORD *)(*((_QWORD *)this + 9) + 24LL) = *((unsigned int *)this + 15);
      *(_QWORD *)(*((_QWORD *)this + 9) + 8LL) = *((_QWORD *)this + 8);
      v8 = (struct _PORT_VIEW *)*((_QWORD *)this + 9);
      if ( !v8 )
        goto LABEL_13;
    }
    if ( !v8->SectionHandle )
LABEL_13:
      v8 = 0LL;
    v10 = NtConnectPort(
            (PHANDLE)this + 6,
            &DestinationString,
            &SecurityQos,
            v8,
            0LL,
            0LL,
            (PVOID)((unsigned __int64)v16 & -(__int64)(a3 != 0LL)),
            &ConnectionInformationLength);
    if ( v10 >= 0 )
    {
      *((_BYTE *)this + 56) = 1;
      return v5;
    }
    v12 = 275;
    v5 = v10 | 0x10000000;
    goto LABEL_10;
  }
  ConnectionInformationLength = 188;
  v6 = StringCchCopyW(v16, 94LL, a3);
  v5 = v6;
  if ( v6 >= 0 )
    goto LABEL_6;
  v12 = 245;
  v7 = v6;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v7, v12);
  return v5;
}
