/*
 * XREFs of Controller_SetDeviceDescription @ 0x1C0055AB8
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C000C9B0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C000D628 (RtlStringCbPrintfW.c)
 *     RtlUnalignedStringCbLengthW @ 0x1C000D744 (RtlUnalignedStringCbLengthW.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     RootHub_GetHighestUsbVersionSupported @ 0x1C001A718 (RootHub_GetHighestUsbVersionSupported.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C0053DE8 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 */

void __fastcall Controller_SetDeviceDescription(_QWORD *a1)
{
  size_t v2; // r13
  BYTE *v3; // r15
  __int16 HighestUsbVersionSupported; // ax
  unsigned __int8 v5; // bl
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  char **v9; // rsi
  unsigned __int16 v10; // r9
  size_t v11; // rdx
  size_t v12; // rcx
  wchar_t *Text; // r12
  size_t v14; // rax
  size_t v15; // rsi
  wchar_t *PoolWithTag; // rax
  rsize_t v17; // rax
  PVOID v18; // r13
  unsigned __int16 v19; // r9
  size_t v20; // rbx
  size_t v21; // rdx
  BYTE *v22; // rax
  int v23; // r8d
  struct _DEVICE_OBJECT *v24; // rax
  NTSTATUS v25; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-99h]
  ULONG Size[2]; // [rsp+30h] [rbp-91h]
  PVOID Data; // [rsp+38h] [rbp-89h]
  int v29; // [rsp+40h] [rbp-81h]
  int v30; // [rsp+48h] [rbp-79h]
  int v31; // [rsp+50h] [rbp-71h]
  int v32; // [rsp+58h] [rbp-69h]
  unsigned __int8 v33; // [rsp+69h] [rbp-58h]
  size_t v34; // [rsp+70h] [rbp-51h] BYREF
  size_t pcbLength; // [rsp+78h] [rbp-49h] BYREF
  rsize_t MaxCount; // [rsp+80h] [rbp-41h]
  PMESSAGE_RESOURCE_ENTRY v37; // [rsp+88h] [rbp-39h] BYREF
  PMESSAGE_RESOURCE_ENTRY v38; // [rsp+90h] [rbp-31h] BYREF
  size_t v39; // [rsp+98h] [rbp-29h] BYREF
  rsize_t v40; // [rsp+A0h] [rbp-21h]
  _OWORD v41[3]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v42; // [rsp+D8h] [rbp+17h]
  int v43; // [rsp+E0h] [rbp+1Fh]

  v43 = *(_DWORD *)L"s";
  v41[0] = *(_OWORD *)L"@System32\\drivers\\usbxhci.sys";
  v2 = 0LL;
  v34 = 0LL;
  v3 = 0LL;
  v41[1] = *(_OWORD *)L"2\\drivers\\usbxhci.sys";
  v41[2] = *(_OWORD *)L"s\\usbxhci.sys";
  v42 = *(_QWORD *)L"i.sys";
  if ( Controller_DriverInstalledDueToCompatibleIdMatch(a1) )
  {
    HighestUsbVersionSupported = RootHub_GetHighestUsbVersionSupported(a1[19]);
    v5 = HighestUsbVersionSupported;
    v33 = HIBYTE(HighestUsbVersionSupported);
    if ( *((_DWORD *)a1 + 45) == 1 )
    {
      v6 = &PciVendorIdTable;
      v7 = 0;
      while ( *(_WORD *)v6 != *((_WORD *)a1 + 92) )
      {
        ++v7;
        v6 += 2;
        if ( v7 >= 0xB )
          goto LABEL_14;
      }
      v2 = v6[1];
    }
    else
    {
      v8 = 0;
      v9 = &AcpiVendorIdTable;
      while ( _stricmp(*v9, (const char *)a1 + 240) )
      {
        ++v8;
        v9 += 2;
        if ( v8 >= 5 )
          goto LABEL_14;
      }
      v2 = (size_t)v9[1];
    }
    v34 = v2;
LABEL_14:
    if ( RtlFindMessage(
           *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
           0xBu,
           0,
           0x40010001u,
           &v37) < 0 )
    {
      v10 = 141;
LABEL_16:
      WPP_RECORDER_SF_(a1[9], 2u, 4u, v10, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
      return;
    }
    v11 = v37->Length - 4LL;
    pcbLength = v11;
    if ( v11 > 0xFFFFFFFE )
    {
      v10 = 142;
      goto LABEL_16;
    }
    if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v37->Text, v11, &pcbLength) >= 0 )
    {
      v12 = pcbLength;
      Text = (wchar_t *)v37->Text;
      if ( pcbLength >= 4 )
      {
        v14 = pcbLength >> 1;
        if ( Text[(pcbLength >> 1) - 1] == 10 )
        {
          MaxCount = v14 - 2;
          if ( Text[v14 - 2] == 13 )
          {
            v15 = pcbLength - 2;
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pcbLength - 2, 0x49434858u);
            Text = PoolWithTag;
            if ( !PoolWithTag )
            {
              v10 = 143;
              goto LABEL_16;
            }
            memset(PoolWithTag, 0, v15);
            wcsncpy_s(Text, v15 >> 1, (const wchar_t *)v37->Text, MaxCount);
            v12 = pcbLength;
          }
        }
      }
      if ( v2 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( *(_WORD *)(v2 + 2 * v17) );
        MaxCount = v17;
        v39 = v12 + 2 * (v17 + 56);
        v18 = ExAllocatePoolWithTag(PagedPool, v39, 0x49434858u);
        if ( !v18 )
        {
          v19 = 144;
LABEL_31:
          WPP_RECORDER_SF_(a1[9], 2u, 4u, v19, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
          goto LABEL_52;
        }
        v32 = *((unsigned __int8 *)a1 + 257);
        v31 = *((unsigned __int8 *)a1 + 256);
        v30 = v33;
        v29 = v5;
        Data = (PVOID)v34;
        v20 = pcbLength + 2 * (MaxCount + 56);
      }
      else
      {
        WPP_RECORDER_SF_(a1[9], 4u, 4u, 0x91u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
        if ( RtlFindMessage(
               *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
               0xBu,
               0,
               0x40010002u,
               &v38) < 0 )
          goto LABEL_52;
        v21 = v38->Length - 4LL;
        v34 = v21;
        if ( v21 > 0xFFFFFFFE )
        {
          v19 = 146;
          goto LABEL_31;
        }
        if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v38->Text, v21, &v34) < 0 )
        {
LABEL_52:
          if ( Text )
            ExFreePoolWithTag(Text, 0x49434858u);
          return;
        }
        v39 = v34 + 108 + pcbLength;
        v18 = ExAllocatePoolWithTag(PagedPool, v39, 0x49434858u);
        if ( !v18 )
        {
          v19 = 147;
          goto LABEL_31;
        }
        v3 = v38->Text;
        if ( v34 >= 4 && *(_WORD *)&v3[2 * (v34 >> 1) - 2] == 10 )
        {
          v40 = (v34 >> 1) - 2;
          if ( *(_WORD *)&v3[2 * v40] == 13 )
          {
            MaxCount = v34 - 2;
            v22 = (BYTE *)ExAllocatePoolWithTag(PagedPool, v34 - 2, 0x49434858u);
            v3 = v22;
            if ( !v22 )
            {
              WPP_RECORDER_SF_(a1[9], 2u, 4u, 0x94u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
LABEL_50:
              ExFreePoolWithTag(v18, 0x49434858u);
              if ( v3 )
                ExFreePoolWithTag(v3, 0x49434858u);
              goto LABEL_52;
            }
            memset(v22, 0, MaxCount);
            wcsncpy_s((wchar_t *)v3, MaxCount >> 1, (const wchar_t *)v38->Text, v40);
          }
        }
        v32 = *((unsigned __int8 *)a1 + 257);
        v23 = v5;
        v31 = *((unsigned __int8 *)a1 + 256);
        v20 = pcbLength + 108 + v34;
        v30 = v33;
        v29 = v23;
        Data = v3;
      }
      LODWORD(MessageResourceEntry) = 1073807361;
      if ( RtlStringCbPrintfW(
             (NTSTRSAFE_PWSTR)v18,
             v20,
             L"%s,#%d;%s;(%s,%X.%X,%X.%X)",
             v41,
             MessageResourceEntry,
             Text,
             Data,
             v29,
             v30,
             v31,
             v32) >= 0
        && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v18, v20, &v39) >= 0 )
      {
        v24 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                                         WdfDriverGlobals,
                                         *a1);
        v25 = IoSetDevicePropertyData(v24, &DEVPKEY_Device_FriendlyName, 0, 1u, 0x19u, v39 + 2, v18);
        if ( v25 < 0 )
        {
          Size[0] = v25;
          WPP_RECORDER_SF_d(
            a1[9],
            3u,
            4u,
            0x95u,
            (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
            *(_QWORD *)Size);
        }
      }
      goto LABEL_50;
    }
  }
}
