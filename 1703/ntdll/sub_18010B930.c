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

__int64 __fastcall sub_18010B930(_QWORD *a1)
{
  __m128i *v2; // rbx
  __int64 result; // rax
  int v4; // edi
  __m128i v5; // xmm0
  int v6; // ebx
  __int64 v7; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+30h] [rbp-40h]
  int v9; // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-30h]
  __int64 *v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+50h] [rbp-20h]
  __int128 v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+A8h] [rbp+38h]
  __int64 v15; // [rsp+B0h] [rbp+40h]
  __int64 v16; // [rsp+B8h] [rbp+48h]

  v2 = (__m128i *)((char *)NtCurrentPeb()->ReadOnlySharedMemoryBase
                 + *((_QWORD *)NtCurrentPeb()->ReadOnlyStaticServerData + 1)
                 - *(_QWORD *)&NtCurrentPeb()[1].InheritedAddressSpace);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    result = ZwOpenThreadToken();
    if ( (int)result < 0 )
      return result;
    v4 = ZwSetInformationThread();
    if ( v4 < 0 )
    {
      ZwClose();
      return (unsigned int)v4;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v10 = 0LL;
  v9 = 48;
  v12 = 64;
  v5 = v2[2];
  v7 = v2[2].m128i_i64[0];
  v8 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( v8 )
    v8 += (unsigned __int64)NtCurrentPeb()->ReadOnlySharedMemoryBase
        + *((_QWORD *)NtCurrentPeb()->ReadOnlyStaticServerData + 1)
        - *(_QWORD *)((char *)NtCurrentPeb()->ReadOnlySharedMemoryBase
                    + *((_QWORD *)NtCurrentPeb()->ReadOnlyStaticServerData + 1)
                    - *(_QWORD *)&NtCurrentPeb()[1].InheritedAddressSpace
                    + 2896)
        - *(_QWORD *)&NtCurrentPeb()[1].InheritedAddressSpace;
  else
    v8 = 0LL;
  v11 = &v7;
  v13 = 0LL;
  v6 = ZwOpenDirectoryObject();
  if ( v6 < 0 )
  {
    v6 = ZwOpenDirectoryObject();
    if ( v6 >= 0 )
    {
      v10 = v15;
      v9 = 48;
      v11 = (__int64 *)&unk_1801115C0;
      v12 = 64;
      v13 = 0LL;
      v6 = ZwOpenDirectoryObject();
      ZwClose();
    }
  }
  if ( v14 )
  {
    ZwSetInformationThread();
    ZwClose();
  }
  *a1 = v16;
  return (unsigned int)v6;
}
