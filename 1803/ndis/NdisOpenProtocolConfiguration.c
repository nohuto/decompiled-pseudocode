/*
 * XREFs of NdisOpenProtocolConfiguration @ 0x1C00BA6E0
 * Callers:
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C00B50C4 (ndisReadMiniportMediaSpecificPortAuthStates.c)
 *     NdisOpenConfigurationEx @ 0x1C00B9EE0 (NdisOpenConfigurationEx.c)
 *     ndisIfInitialize @ 0x1C011CAC0 (ndisIfInitialize.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_Z @ 0x1C0041C64 (WPP_SF_Z.c)
 */

void __fastcall NdisOpenProtocolConfiguration(int *a1, _QWORD *a2, _UNICODE_STRING *a3)
{
  SIZE_T v6; // rbx
  char *PoolWithTag; // rax
  char *v8; // rdi
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v13; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  v13 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  v12 = 6815846;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_Z(0x28u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, &a3->Length);
  v6 = (unsigned int)a3->MaximumLength + 178;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6370444Eu);
  v8 = PoolWithTag;
  *a1 = PoolWithTag == 0LL ? 0xC000009A : 0;
  if ( (PoolWithTag == 0LL ? 0xC000009A : 0) != 0 )
  {
    *a2 = 0LL;
    v11 = *a1;
    goto LABEL_8;
  }
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
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
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
    v11 = 0;
LABEL_8:
    if ( v11 >= 0 )
      goto LABEL_9;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_(0x29u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids);
}
