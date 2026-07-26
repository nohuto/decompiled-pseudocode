/*
 * XREFs of ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00B1388
 * Callers:
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00A929C (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00AD3E4 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00AD630 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00AFE40 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00BCB94 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00DF04C (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00F0B44 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00F1230 (-ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KRegKey::Open(KRegKey *this, ACCESS_MASK a2, const unsigned __int16 *a3, void *a4)
{
  __int64 v6; // r8
  const unsigned __int16 *v7; // rax
  __int64 result; // rax
  __int16 v9; // cx
  unsigned int v10; // ebx
  HANDLE v11; // rdi
  int v12; // [rsp+20h] [rbp-40h] BYREF
  const unsigned __int16 *v13; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v12 = 0;
  v13 = 0LL;
  if ( !a3 )
  {
LABEL_9:
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = a4;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    v10 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    v11 = KeyHandle;
    if ( this->m_ptr )
      ZwClose(this->m_ptr);
    this->m_ptr = v11;
    return v10;
  }
  v6 = 0x7FFFLL;
  v7 = a3;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  result = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
    v9 = 0x7FFF - v6;
  else
    v9 = 0;
  if ( v6 )
  {
    v13 = a3;
    LOWORD(v12) = 2 * v9;
    HIWORD(v12) = 2 * v9 + 2;
    goto LABEL_9;
  }
  return result;
}
