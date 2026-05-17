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

__int64 __fastcall sub_18002BDB8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  bool v5; // r12
  int v6; // r15d
  struct _TEB *v7; // rsi
  PVOID ArbitraryUserPointer; // rdi
  int v9; // eax
  int v10; // ebx
  _QWORD *v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  int v14; // ebp
  __int64 v16; // rdx
  int v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      635,
      (unsigned int)"LdrpMinimalMapModule",
      3,
      "DLL name: %wZ\n",
      v4 + 72);
  LOBYTE(a3) = 1;
  v5 = (unsigned __int8)RtlEqualUnicodeString(v4 + 88, &unk_1801101B0, a3)
    && (*(_BYTE *)(qword_18015C2A8 + 22) & 0x20) != 0;
  v18 = 0LL;
  v6 = 0x800000;
  if ( !v5 )
  {
    if ( qword_18015BEE0 )
    {
      v16 = *(_QWORD *)(v4 + 96);
      v17 = 0;
      LdrQueryImageFileKeyOption(qword_18015BEE0, v16, 4LL, &v17, 4, 0LL);
      if ( v17 )
      {
        if ( (int)RtlAcquirePrivilege(&unk_1801257DC, 1LL, 0LL, &v18) >= 0 )
          v6 = 0x20000000;
      }
    }
  }
  v7 = NtCurrentTeb();
  *(_QWORD *)(a1 + 160) = 0LL;
  ArbitraryUserPointer = v7->NtTib.ArbitraryUserPointer;
  v7->NtTib.ArbitraryUserPointer = *(PVOID *)(v4 + 80);
  v9 = *(_DWORD *)(a1 + 32) & 0x800000;
  v10 = v6 | 0x40000;
  if ( !v9 )
    v10 = v6;
  v11 = (_QWORD *)(v4 + 48);
  v12 = ZwMapViewOfSection(*(_QWORD *)(a1 + 24), -1LL, v4 + 48, 0LL, 0LL, 0LL, a1 + 160, 1, v10, v9 != 0 ? 2 : 4);
  v7->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  v14 = v12;
  if ( v10 == 0x20000000 )
    RtlReleasePrivilege(v18);
  switch ( v14 )
  {
    case 1073741827:
      goto LABEL_36;
    case 1073741838:
      v14 = sub_180085BEC(a1);
      break;
    case 1073741878:
LABEL_36:
      if ( !*(_QWORD *)(a1 + 168) )
      {
        LOBYTE(v13) = 1;
        if ( (unsigned __int8)sub_18004334C(a1, v13) )
        {
          v14 = -1073741267;
        }
        else if ( v5 )
        {
          v14 = -1073741800;
        }
      }
      break;
  }
  if ( *v11 && (v14 < 0 || v14 == 1073741838) )
  {
    ZwUnmapViewOfSection(-1LL);
    *v11 = 0LL;
  }
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      770,
      (unsigned int)"LdrpMinimalMapModule",
      4,
      "Status: 0x%08lx\n",
      v14);
  return (unsigned int)v14;
}
