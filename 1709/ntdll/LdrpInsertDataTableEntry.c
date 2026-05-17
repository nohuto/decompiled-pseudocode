/*
 * XREFs of LdrpInsertDataTableEntry @ 0x180021DDC
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpHashUnicodeString @ 0x180053000 (LdrpHashUnicodeString.c)
 */

void __fastcall LdrpInsertDataTableEntry(__int64 a1)
{
  char *v2; // rcx
  char *v3; // rax
  char **v4; // rdx
  bool v5; // zf
  __int64 *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx

  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
  {
    if ( !*(_DWORD *)(a1 + 264) )
      *(_DWORD *)(a1 + 264) = LdrpHashUnicodeString(a1 + 88);
    v2 = (char *)(a1 + 112);
    v3 = (char *)&LdrpHashTable + 16 * (*(_DWORD *)(a1 + 264) & 0x1F);
    v4 = (char **)*((_QWORD *)v3 + 1);
    if ( *v4 != v3 )
      __fastfail(3u);
    v5 = a1 == LdrpImageEntry;
    *(_QWORD *)v2 = v3;
    *(_QWORD *)(a1 + 120) = v4;
    *v4 = v2;
    *((_QWORD *)v3 + 1) = v2;
    if ( v5 )
    {
      v9 = qword_18015F3B0;
      if ( *(__int64 **)(qword_18015F3B0 + 8) != &qword_18015F3B0 )
        __fastfail(3u);
      *(_QWORD *)a1 = qword_18015F3B0;
      *(_QWORD *)(a1 + 8) = &qword_18015F3B0;
      v10 = (_QWORD *)(a1 + 16);
      *(_QWORD *)(v9 + 8) = a1;
      v11 = qword_18015F3C0;
      qword_18015F3B0 = a1;
      if ( *(__int64 **)(qword_18015F3C0 + 8) != &qword_18015F3C0 )
        __fastfail(3u);
      *v10 = qword_18015F3C0;
      *(_QWORD *)(a1 + 24) = &qword_18015F3C0;
      *(_QWORD *)(v11 + 8) = v10;
      qword_18015F3C0 = a1 + 16;
    }
    else
    {
      v6 = (__int64 *)qword_18015F3B8;
      if ( *(__int64 **)qword_18015F3B8 != &qword_18015F3B0 )
        __fastfail(3u);
      *(_QWORD *)a1 = &qword_18015F3B0;
      v7 = (_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v6;
      *v6 = a1;
      v8 = (_QWORD *)qword_18015F3C8;
      qword_18015F3B8 = a1;
      if ( *(__int64 **)qword_18015F3C8 != &qword_18015F3C0 )
        __fastfail(3u);
      *v7 = &qword_18015F3C0;
      *(_QWORD *)(a1 + 24) = v8;
      *v8 = v7;
      qword_18015F3C8 = a1 + 16;
    }
    *(_DWORD *)(a1 + 104) |= 0x40u;
  }
}
