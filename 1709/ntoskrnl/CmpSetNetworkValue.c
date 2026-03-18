/*
 * XREFs of CmpSetNetworkValue @ 0x140869144
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     NtCreateKey @ 0x1404E2C5C (NtCreateKey.c)
 */

__int64 __fastcall CmpSetNetworkValue(__int64 a1)
{
  NTSTATUS v2; // ebx
  OBJECT_ATTRIBUTES v4; // [rsp+40h] [rbp-38h] BYREF
  ULONG v5; // [rsp+88h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+18h] BYREF

  v4.Length = 48;
  v4.RootDirectory = 0LL;
  v4.Attributes = 64;
  v4.ObjectName = (PUNICODE_STRING)L"ln";
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  v2 = NtCreateKey(&KeyHandle, 0xF003Fu, &v4, 0, 0LL, 0, &v5);
  if ( v2 >= 0 )
  {
    v2 = NtSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpDhcpServerAckString, 0, 3u, *(PVOID *)a1, *(_DWORD *)(a1 + 8));
    if ( v2 >= 0 )
    {
      v2 = NtSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&CmpBootServerReplyString,
             0,
             3u,
             *(PVOID *)(a1 + 16),
             *(_DWORD *)(a1 + 24));
      if ( v2 >= 0 )
        v2 = 0;
    }
  }
  NtClose(KeyHandle);
  return (unsigned int)v2;
}
