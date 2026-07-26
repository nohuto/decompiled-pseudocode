/*
 * XREFs of NdisOpenProtocolConfiguration @ 0x1C00B06E0
 * Callers:
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C00AB964 (ndisReadMiniportMediaSpecificPortAuthStates.c)
 *     NdisOpenConfigurationEx @ 0x1C00AF420 (NdisOpenConfigurationEx.c)
 *     ndisIfInitialize @ 0x1C011412C (ndisIfInitialize.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_Z @ 0x1C0044008 (WPP_SF_Z.c)
 */

void __fastcall NdisOpenProtocolConfiguration(NTSTATUS *a1, _QWORD *a2, _UNICODE_STRING *a3)
{
  SIZE_T v6; // rbx
  char *PoolWithTag; // rax
  char *v8; // rdi
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  int v11; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v12; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  v11 = 6815846;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_Z(0x28u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, &a3->Length);
  v6 = (unsigned int)a3->MaximumLength + 178;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6370444Eu);
  v8 = PoolWithTag;
  *a1 = PoolWithTag == 0LL ? 0xC000009A : 0;
  if ( (PoolWithTag == 0LL ? 0xC000009A : 0) != 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    memset(PoolWithTag, 0, (unsigned int)v6);
    memmove(v8 + 176, a3->Buffer, a3->Length);
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 2) = v8 + 40;
    v8[40] = 10;
    *(_BYTE *)(*((_QWORD *)v8 + 2) + 1LL) = 1;
    *(_WORD *)(*((_QWORD *)v8 + 2) + 2LL) = 40;
    *(_DWORD *)(*((_QWORD *)v8 + 2) + 16LL) |= 2u;
    *((_DWORD *)v8 + 24) = 0;
    *((_QWORD *)v8 + 15) = 0LL;
    *((_DWORD *)v8 + 32) = 0;
    *((_QWORD *)v8 + 17) = 0LL;
    *((_QWORD *)v8 + 8) = ndisSaveParameters;
    *((_DWORD *)v8 + 18) = 20;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    *a1 = v9;
    if ( v9 >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = a3;
      v10 = ZwOpenKey((PHANDLE)v8 + 4, 0xBu, &ObjectAttributes);
      *a1 = v10;
      if ( v10 < 0 )
        *((_QWORD *)v8 + 4) = 0LL;
      *a2 = v8;
      *a1 = 0;
    }
  }
  if ( *a1 < 0 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_(0x29u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids);
}
