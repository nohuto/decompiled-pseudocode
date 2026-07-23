/*
 * XREFs of sub_180038D24 @ 0x180038D24
 * Callers:
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001FC70 (RtlEqualUnicodeString.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x18007F6E0 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x180087710 (RtlReleasePrivilege.c)
 *     sub_18008D400 @ 0x18008D400 (sub_18008D400.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_180038D24(__int64 a1, void *a2)
{
  __int64 v3; // rsi
  char v5; // r14
  ULONG AllocationType; // r15d
  struct _TEB *v7; // rdi
  PVOID *v8; // r12
  PVOID ArbitraryUserPointer; // rbx
  NTSTATUS v10; // eax
  int v11; // esi
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rbp
  const WCHAR *v16; // rdx
  int Buffer; // [rsp+90h] [rbp+8h] BYREF
  PVOID ReturnedState; // [rsp+A0h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      539,
      (unsigned int)"LdrpMinimalMapModule",
      3,
      "DLL name: %wZ\n",
      v3 + 72);
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)&stru_180110260, 1u)
    || (v5 = 1, (*(_BYTE *)(qword_18015B278 + 22) & 0x20) == 0) )
  {
    v5 = 0;
  }
  ReturnedState = 0LL;
  AllocationType = 0x800000;
  if ( !v5 )
  {
    if ( qword_18015AEC0 )
    {
      v16 = *(const WCHAR **)(v3 + 96);
      Buffer = 0;
      LdrQueryImageFileKeyOption(qword_18015AEC0, v16, 4u, &Buffer, 4u, 0LL);
      if ( Buffer )
      {
        if ( RtlAcquirePrivilege((PULONG)&Privilege, 1u, 0, &ReturnedState) >= 0 )
          AllocationType = 0x20000000;
      }
    }
  }
  v7 = NtCurrentTeb();
  v8 = (PVOID *)(v3 + 48);
  *(_QWORD *)(a1 + 152) = 0LL;
  ArbitraryUserPointer = v7->NtTib.ArbitraryUserPointer;
  v7->NtTib.ArbitraryUserPointer = *(PVOID *)(v3 + 80);
  v10 = ZwMapViewOfSection(
          a2,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          (PVOID *)(v3 + 48),
          0LL,
          0LL,
          0LL,
          (PSIZE_T)(a1 + 152),
          ViewShare,
          AllocationType,
          4u);
  v7->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  v11 = v10;
  if ( AllocationType == 0x20000000 )
    RtlReleasePrivilege(ReturnedState);
  switch ( v11 )
  {
    case 1073741827:
      goto LABEL_20;
    case 1073741838:
      v11 = sub_18008D400(a1);
      break;
    case 1073741878:
LABEL_20:
      v13 = *(_DWORD *)(a1 + 24);
      if ( (v13 & 0x4100000) != 0 )
      {
        if ( v5 )
          v11 = -1073741800;
      }
      else
      {
        *(_DWORD *)(a1 + 24) = v13 | 0x100000;
        RtlEnterCriticalSection(&stru_18015B220);
        v14 = (_QWORD *)qword_18015B1F8;
        v15 = (_QWORD *)(a1 + 56);
        if ( *(__int64 **)qword_18015B1F8 != &qword_18015B1F0 )
          __fastfail(3u);
        *v15 = &qword_18015B1F0;
        v15[1] = v14;
        *v14 = v15;
        qword_18015B1F8 = (__int64)v15;
        RtlLeaveCriticalSection(&stru_18015B220);
        v11 = -1073741267;
      }
      break;
  }
  if ( *v8 && (v11 < 0 || v11 == 1073741838) )
  {
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v8);
    *v8 = 0LL;
  }
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      665,
      (unsigned int)"LdrpMinimalMapModule",
      4,
      "Status: 0x%08lx\n",
      v11);
  return (unsigned int)v11;
}
