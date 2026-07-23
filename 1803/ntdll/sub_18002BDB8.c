/*
 * XREFs of sub_18002BDB8 @ 0x18002BDB8
 * Callers:
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     sub_18004334C @ 0x18004334C (sub_18004334C.c)
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x180078BB0 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x180080630 (RtlReleasePrivilege.c)
 *     sub_180085BEC @ 0x180085BEC (sub_180085BEC.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_18002BDB8(__int64 a1)
{
  __int64 v2; // rbp
  bool v3; // r12
  int v4; // r15d
  struct _TEB *v5; // rsi
  PVOID ArbitraryUserPointer; // rdi
  int v7; // eax
  ULONG AllocationType; // ebx
  PVOID *v9; // r15
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  int v12; // ebp
  const WCHAR *v14; // rdx
  int Buffer; // [rsp+80h] [rbp+8h] BYREF
  PVOID ReturnedState; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      635,
      (unsigned int)"LdrpMinimalMapModule",
      3,
      "DLL name: %wZ\n",
      v2 + 72);
  v3 = RtlEqualUnicodeString((PUNICODE_STRING)(v2 + 88), (PUNICODE_STRING)&String2, 1u)
    && (*(_BYTE *)(qword_18015C2A8 + 22) & 0x20) != 0;
  ReturnedState = 0LL;
  v4 = 0x800000;
  if ( !v3 )
  {
    if ( qword_18015BEE0 )
    {
      v14 = *(const WCHAR **)(v2 + 96);
      Buffer = 0;
      LdrQueryImageFileKeyOption(qword_18015BEE0, v14, 4u, &Buffer, 4u, 0LL);
      if ( Buffer )
      {
        if ( RtlAcquirePrivilege((PULONG)&Privilege, 1u, 0, &ReturnedState) >= 0 )
          v4 = 0x20000000;
      }
    }
  }
  v5 = NtCurrentTeb();
  *(_QWORD *)(a1 + 160) = 0LL;
  ArbitraryUserPointer = v5->NtTib.ArbitraryUserPointer;
  v5->NtTib.ArbitraryUserPointer = *(PVOID *)(v2 + 80);
  v7 = *(_DWORD *)(a1 + 32) & 0x800000;
  AllocationType = v4 | 0x40000;
  if ( !v7 )
    AllocationType = v4;
  v9 = (PVOID *)(v2 + 48);
  v10 = ZwMapViewOfSection(
          *(HANDLE *)(a1 + 24),
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          (PVOID *)(v2 + 48),
          0LL,
          0LL,
          0LL,
          (PSIZE_T)(a1 + 160),
          ViewShare,
          AllocationType,
          v7 != 0 ? 2 : 4);
  v5->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  v12 = v10;
  if ( AllocationType == 0x20000000 )
    RtlReleasePrivilege(ReturnedState);
  switch ( v12 )
  {
    case 1073741827:
      goto LABEL_36;
    case 1073741838:
      v12 = sub_180085BEC(a1);
      break;
    case 1073741878:
LABEL_36:
      if ( !*(_QWORD *)(a1 + 168) )
      {
        LOBYTE(v11) = 1;
        if ( (unsigned __int8)sub_18004334C(a1, v11) )
        {
          v12 = -1073741267;
        }
        else if ( v3 )
        {
          v12 = -1073741800;
        }
      }
      break;
  }
  if ( *v9 && (v12 < 0 || v12 == 1073741838) )
  {
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v9);
    *v9 = 0LL;
  }
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      770,
      (unsigned int)"LdrpMinimalMapModule",
      4,
      "Status: 0x%08lx\n",
      v12);
  return (unsigned int)v12;
}
