/*
 * XREFs of ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C00EAC9C
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x1C00EB820 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1C0061E0C (--4-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@.c)
 *     ??$MakeExtendedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@KKPEAK@Z @ 0x1C00EA79C (--$MakeExtendedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UN.c)
 */

__int64 __fastcall ndisLWMGetServiceKeyFromServiceName(PCUNICODE_STRING Source, void **a2)
{
  wchar_t *Buffer; // rdx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  int Length; // edi
  int v9; // edi
  PUNICODE_STRING v10; // rbx
  _UNICODE_STRING *v11; // rcx
  NTSTATUS appended; // eax
  unsigned __int16 v13; // cx
  PUNICODE_STRING v14; // rcx
  PUNICODE_STRING Destination; // [rsp+20h] [rbp-69h] BYREF
  UNICODE_STRING Sourcea; // [rsp+28h] [rbp-61h] BYREF
  _OWORD v18[6]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+17h]
  WCHAR v20; // [rsp+A8h] [rbp+1Fh]

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x76u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)Source);
  if ( (unsigned __int16)(Source->Length & 0xFFFE) < (unsigned __int16)(Source->MaximumLength & 0xFFFE) )
  {
    Buffer = Source->Buffer;
    if ( !Buffer[(unsigned __int64)Source->Length >> 1] )
    {
      v5 = RtlCheckRegistryKey(1u, (PWSTR)Buffer);
      v7 = v5;
      if ( v5 < 0 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_d(0x78u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, v5);
        goto LABEL_26;
      }
      Length = Source->Length;
      v18[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
      v9 = Length + 106;
      v18[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\";
      v18[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\";
      v18[4] = *(_OWORD *)L"ControlSet\\Services\\";
      v18[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\";
      v20 = aRegistryMachin_2[52];
      v19 = *(_QWORD *)L"ces\\";
      v18[5] = *(_OWORD *)L"et\\Services\\";
      *(_DWORD *)&Sourcea.Length = 6946920;
      Sourcea.Buffer = (wchar_t *)v18;
      MakeExtendedPoolPtr<_UNICODE_STRING>(&Destination, v6, v9);
      v10 = Destination;
      if ( !Destination )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_((_WORD)Destination + 121, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
        v7 = -1073741670;
        goto LABEL_26;
      }
      v11 = Destination;
      Destination->Buffer = &Destination[1].Length;
      v10->Length = 0;
      v10->MaximumLength = v9;
      appended = RtlAppendUnicodeStringToString(v11, &Sourcea);
      v7 = appended;
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(v10, Source);
        v7 = appended;
        if ( appended >= 0 )
        {
          wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::operator=(a2, (void **)&Destination);
          v14 = Destination;
          if ( !Destination )
            goto LABEL_26;
LABEL_17:
          ExFreePoolWithTag(v14, 0);
          goto LABEL_26;
        }
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        {
          v13 = 123;
          goto LABEL_15;
        }
      }
      else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      {
        v13 = 122;
LABEL_15:
        WPP_SF_d(v13, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, appended);
      }
      v14 = v10;
      goto LABEL_17;
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_(0x77u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
  v7 = -1073741811;
LABEL_26:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x7Cu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)Source, v7);
  return v7;
}
