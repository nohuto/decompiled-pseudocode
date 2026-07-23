/*
 * XREFs of sub_18010B930 @ 0x18010B930
 * Callers:
 *     sub_18010B8A0 @ 0x18010B8A0 (sub_18010B8A0.c)
 *     sub_18010D4D4 @ 0x18010D4D4 (sub_18010D4D4.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenThreadToken @ 0x1800A5780 (ZwOpenThreadToken.c)
 *     ZwOpenDirectoryObject @ 0x1800A5E00 (ZwOpenDirectoryObject.c)
 */

NTSTATUS __fastcall sub_18010B930(HANDLE *a1)
{
  __m128i *v2; // rbx
  NTSTATUS result; // eax
  NTSTATUS v4; // edi
  __m128i v5; // xmm0
  NTSTATUS v6; // ebx
  __int64 ThreadInformation; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+30h] [rbp-40h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE TokenHandle; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE DirectoryHandle; // [rsp+B8h] [rbp+48h] BYREF

  v2 = (__m128i *)((char *)NtCurrentPeb()->ReadOnlySharedMemoryBase
                 + *((_QWORD *)NtCurrentPeb()->ReadOnlyStaticServerData + 1)
                 - NtCurrentPeb()->CsrServerReadOnlySharedMemoryBase);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    result = ZwOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 4u, 1u, &TokenHandle);
    if ( result < 0 )
      return result;
    ThreadInformation = 0LL;
    v4 = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    if ( v4 < 0 )
    {
      ZwClose(TokenHandle);
      return v4;
    }
  }
  else
  {
    TokenHandle = 0LL;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  v5 = v2[2];
  v8 = v2[2].m128i_i64[0];
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( v9 )
    v9 += (unsigned __int64)NtCurrentPeb()->ReadOnlySharedMemoryBase
        + *((_QWORD *)NtCurrentPeb()->ReadOnlyStaticServerData + 1)
        - *(_QWORD *)((char *)NtCurrentPeb()->ReadOnlySharedMemoryBase
                    + *((_QWORD *)NtCurrentPeb()->ReadOnlyStaticServerData + 1)
                    - NtCurrentPeb()->CsrServerReadOnlySharedMemoryBase
                    + 2896)
        - NtCurrentPeb()->CsrServerReadOnlySharedMemoryBase;
  else
    v9 = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 0xFu, &ObjectAttributes);
  if ( v6 < 0 )
  {
    v6 = ZwOpenDirectoryObject(&Handle, 2u, &ObjectAttributes);
    if ( v6 >= 0 )
    {
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801115C0;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwOpenDirectoryObject(&DirectoryHandle, 0xFu, &ObjectAttributes);
      ZwClose(Handle);
    }
  }
  if ( TokenHandle )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &TokenHandle, 8u);
    ZwClose(TokenHandle);
  }
  *a1 = DirectoryHandle;
  return v6;
}
