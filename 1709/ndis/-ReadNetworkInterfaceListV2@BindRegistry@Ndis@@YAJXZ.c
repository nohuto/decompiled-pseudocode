/*
 * XREFs of ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00C7300
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00213FC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0004324 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_Dd @ 0x1C00407D4 (WPP_SF_Dd.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_Z @ 0x1C0040B38 (WPP_SF_Z.c)
 *     WPP_SF_Zd @ 0x1C0040C38 (WPP_SF_Zd.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00B1D80 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C7114 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C7C70 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceListV2(Ndis::BindRegistry *this)
{
  int v1; // r14d
  HANDLE v2; // rbx
  __int64 v3; // rcx
  const wchar_t *v4; // rax
  NTSTATUS v5; // eax
  unsigned int i; // esi
  int SubkeyName; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  void *v14; // rcx
  int v16; // edi
  struct _GUID GuidString; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  GUID Guid; // [rsp+70h] [rbp-98h] BYREF
  wchar_t Dest[64]; // [rsp+88h] [rbp-80h] BYREF

  v1 = 0;
  GuidString.Data1 = 0;
  v2 = 0LL;
  *(_QWORD *)GuidString.Data4 = 0LL;
  v3 = 0x7FFFLL;
  v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces";
  while ( *v4 )
  {
    ++v4;
    if ( !--v3 )
    {
      v16 = -1073741811;
      goto LABEL_40;
    }
  }
  *(_QWORD *)GuidString.Data4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces";
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  LOWORD(GuidString.Data1) = 2 * (0x7FFF - v3);
  HIWORD(GuidString.Data1) = LOWORD(GuidString.Data1) + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&GuidString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  v2 = KeyHandle;
  v16 = v5;
  if ( v5 != -1073741772 )
  {
    if ( v5 >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        *(_QWORD *)&GuidString.Data1 = 0LL;
        SubkeyName = KRegKey::GetSubkeyName(&KeyHandle, i, &GuidString);
        v10 = SubkeyName;
        if ( SubkeyName == -2147483622 )
        {
          if ( *(_QWORD *)&GuidString.Data1 )
            ExFreePoolWithTag(*(PVOID *)&GuidString.Data1, 0x7274534Bu);
          v2 = KeyHandle;
          goto LABEL_21;
        }
        if ( SubkeyName < 0 )
        {
          if ( (unsigned __int8)byte_1C009875D >= 2u )
            WPP_SF_Dd(v9, v8, i, SubkeyName);
          if ( *(_QWORD *)&GuidString.Data1 )
            ExFreePoolWithTag(*(PVOID *)&GuidString.Data1, 0x7274534Bu);
          v2 = KeyHandle;
          goto LABEL_22;
        }
        v11 = *(_QWORD *)&GuidString.Data1;
        if ( RtlGUIDFromString(*(PCUNICODE_STRING *)&GuidString.Data1, &Guid) >= 0 )
          break;
        if ( (unsigned __int8)byte_1C009875D >= 3u )
          WPP_SF_Z(0x16u, &WPP_11812016a7ea377450fd589117a883cb_Traceguids, (const wchar_t *)v11);
        if ( v11 )
          goto LABEL_16;
LABEL_17:
        ;
      }
      if ( (int)RtlStringCchPrintfW(Dest, 60LL, L"%s\\Kernel", *(_QWORD *)(v11 + 8)) >= 0 )
      {
        *(_QWORD *)&GuidString.Data1 = 0LL;
        v12 = KRegKey::Open((KRegKey *)&GuidString, 1u, Dest, KeyHandle);
        if ( v12 < 0 )
        {
          if ( (unsigned __int8)byte_1C009875D >= 2u )
            WPP_SF_Zd(0x17u, &WPP_11812016a7ea377450fd589117a883cb_Traceguids, (const wchar_t *)v11, v12);
          v14 = *(void **)&GuidString.Data1;
          if ( !*(_QWORD *)&GuidString.Data1 )
            goto LABEL_16;
          goto LABEL_15;
        }
        v13 = ndisLoadNetworkInterfaceFromPersistedState(&Guid, &GuidString);
        v14 = *(void **)&GuidString.Data1;
        if ( v13 < 0 )
        {
          if ( !*(_QWORD *)&GuidString.Data1 )
            goto LABEL_16;
          goto LABEL_15;
        }
        if ( *(_QWORD *)&GuidString.Data1 )
LABEL_15:
          ZwClose(v14);
      }
LABEL_16:
      ExFreePoolWithTag((PVOID)v11, 0x7274534Bu);
      goto LABEL_17;
    }
LABEL_40:
    if ( (unsigned __int8)byte_1C009875D >= 2u )
      WPP_SF_d(0x14u, &WPP_11812016a7ea377450fd589117a883cb_Traceguids, v16);
    v1 = v16;
  }
LABEL_21:
  v10 = v1;
LABEL_22:
  if ( v2 )
    ZwClose(v2);
  return v10;
}
