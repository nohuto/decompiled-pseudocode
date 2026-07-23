/*
 * XREFs of sub_1801060F4 @ 0x1801060F4
 * Callers:
 *     sub_1801061C4 @ 0x1801061C4 (sub_1801061C4.c)
 * Callees:
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     RtlDuplicateUnicodeString @ 0x18007DE00 (RtlDuplicateUnicodeString.c)
 */

void __fastcall sub_1801060F4(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  int v5; // r8d
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edx

  for ( i = a2; ; i = *(_QWORD *)(i + 96) - 96LL )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(i + 120);
      if ( (v5 & 2) == 0 )
      {
        v6 = *(_QWORD *)(i + 104);
        v7 = v5 | 2;
        goto LABEL_6;
      }
      if ( (v5 & 4) != 0 )
        break;
      v6 = *(_QWORD *)(i + 112);
      v7 = v5 | 4;
LABEL_6:
      *(_DWORD *)(i + 120) = v7;
      v8 = v6 - 96;
      if ( !v6 )
        v8 = i;
      i = v8;
    }
    if ( *(_QWORD *)(a1 + 24) <= *(_QWORD *)i
      && *(_QWORD *)i < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v9 = *(_QWORD *)(i + 80);
      v10 = -*(_DWORD *)(i + 88);
      *(_DWORD *)(i + 120) = v5 | 1;
      sub_1800142F8(v9, v10);
      *(_QWORD *)(i + 64) = 0LL;
      *(_QWORD *)(i + 144) = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(i + 152) = *(_DWORD *)(a1 + 32);
      RtlDuplicateUnicodeString(1u, *(PUNICODE_STRING *)(a1 + 8), (PUNICODE_STRING)(i + 128));
    }
    *(_DWORD *)(i + 120) &= 0xFFFFFFF9;
    if ( i == a2 )
      break;
  }
}
