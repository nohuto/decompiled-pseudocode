/*
 * XREFs of ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x140018160
 * Callers:
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140019DDC (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140018BF0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     ?AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z @ 0x140030574 (-AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiCreatePort(HandleSendReceiveServer *this, PCWSTR *a2)
{
  int v4; // r12d
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rbx
  ULONG v7; // eax
  __int64 result; // rax
  int inited; // ebx
  PSECURITY_DESCRIPTOR v10; // rsi
  signed int DynamicPortName; // r14d
  int v12; // r15d
  int v13; // eax
  HandleSendReceiveServer *v14; // rcx
  unsigned int v15; // r8d
  signed int v16; // eax
  signed int LastError; // eax
  unsigned int v18; // ebx
  __int64 Seed; // [rsp+30h] [rbp-99h] BYREF
  int v20; // [rsp+38h] [rbp-91h] BYREF
  __int64 v21; // [rsp+40h] [rbp-89h]
  _UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-81h]
  int v23; // [rsp+50h] [rbp-79h]
  PSECURITY_DESCRIPTOR v24; // [rsp+58h] [rbp-71h]
  __int64 v25; // [rsp+60h] [rbp-69h]
  ULONG SecurityDescriptorSize; // [rsp+68h] [rbp-61h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-59h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v29[10]; // [rsp+90h] [rbp-39h] BYREF

  v4 = 0;
  if ( !a2 )
    return 2147942487LL;
  v5 = (unsigned __int16 *)CoTaskMemAlloc(0x80uLL);
  *a2 = v5;
  if ( !v5 )
    return 2147942414LL;
  *v5 = 0;
  v6 = (unsigned __int16 *)*a2;
  LODWORD(Seed) = MEMORY[0x7FFE0320];
  do
    v7 = RtlRandomEx((PULONG)&Seed);
  while ( !v7 );
  HIDWORD(Seed) = v7;
  result = StringCchPrintfW(
             v6,
             0x40uLL,
             L"%ws%ws%ld",
             L"\\BaseNamedObjects\\",
             L"AudioEngineDuplicateHandleApiPort",
             v7,
             Seed);
  if ( (int)result >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, *a2);
    if ( inited < 0 )
    {
LABEL_26:
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(inited);
      LastError = GetLastError();
      v18 = LastError;
      if ( LastError > 0 )
        v18 = (unsigned __int16)LastError | 0x80070000;
      CoTaskMemFree((LPVOID)*a2);
      result = v18;
      *a2 = 0LL;
      return result;
    }
    v10 = 0LL;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;0x1;;;WD)(A;;0x1;;;S-1-15-2-1)(A;;0x1;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-352659"
            "3181-1159816984-2199008581-497492991)",
           1u,
           &SecurityDescriptor,
           &SecurityDescriptorSize) )
    {
      v10 = SecurityDescriptor;
      DynamicPortName = 0;
    }
    else
    {
      v16 = GetLastError();
      DynamicPortName = v16;
      if ( v16 > 0 )
        DynamicPortName = (unsigned __int16)v16 | 0x80070000;
      if ( DynamicPortName < 0 )
      {
LABEL_13:
        if ( inited >= 0 )
          return (unsigned int)DynamicPortName;
        goto LABEL_26;
      }
    }
    v20 = 48;
    v21 = 0LL;
    v23 = 64;
    p_DestinationString = &DestinationString;
    v24 = v10;
    v25 = 0LL;
    memset(v29, 0, 0x48uLL);
    v29[2] = 48LL;
    v12 = 3;
    do
    {
      --v12;
      v13 = NtAlpcCreatePort((char *)this + 8, &v20, v29);
      inited = v13;
      if ( v13 != -1073741771 && v13 != 0x40000000 )
        break;
      DynamicPortName = HandleSendReceiveServer::AeServerApiCreateDynamicPortName(
                          v14,
                          (unsigned __int16 *)*a2,
                          v15,
                          ++v4,
                          (unsigned int *)&Seed + 1);
      if ( DynamicPortName < 0 )
        break;
      if ( RtlInitUnicodeStringEx(&DestinationString, *a2) < 0 )
        break;
      v20 = 48;
      p_DestinationString = &DestinationString;
      v21 = 0LL;
      v23 = 64;
      v24 = v10;
      v25 = 0LL;
    }
    while ( v12 > 0 );
    LocalFree(v10);
    goto LABEL_13;
  }
  return result;
}
