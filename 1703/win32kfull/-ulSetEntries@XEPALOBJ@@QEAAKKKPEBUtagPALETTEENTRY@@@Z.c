/*
 * XREFs of ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C0299400
 * Callers:
 *     NtGdiColorCorrectPalette @ 0x1C0294B20 (NtGdiColorCorrectPalette.c)
 *     GreSetPaletteEntries @ 0x1C0295DE0 (GreSetPaletteEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulSetEntries(
        struct PALETTE **this,
        unsigned int a2,
        unsigned int a3,
        const struct tagPALETTEENTRY *a4)
{
  struct PALETTE *v5; // r10
  unsigned int v6; // ecx
  _BYTE *v7; // rcx
  __int64 v8; // rbx
  _BYTE *v9; // rdx
  __int64 v10; // rdi
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  unsigned int v13; // r10d
  __int64 v14; // rdi
  signed __int32 v15; // edx
  __int64 v16; // r8

  v5 = *this;
  if ( *this == ppalDefault )
    return 0LL;
  if ( (*((_DWORD *)v5 + 6) & 0x100000) != 0 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v6 = *((_DWORD *)v5 + 7);
  if ( a2 >= v6 )
    return 0LL;
  if ( a2 + a3 > v6 )
    a3 = v6 - a2;
  if ( !a3 )
    return 0LL;
  v7 = 0LL;
  v8 = a2;
  v9 = 0LL;
  v10 = *((_QWORD *)v5 + 15) + 4 * v8;
  v11 = (_DWORD *)*((_QWORD *)v5 + 9);
  if ( v11 )
  {
    *v11 = 0;
    v5 = *this;
    v9 = (_BYTE *)(*((_QWORD *)*this + 9) + v8 + 4);
  }
  v12 = (_DWORD *)*((_QWORD *)v5 + 10);
  if ( v12 )
  {
    *v12 = 0;
    v7 = (_BYTE *)(v8 + *((_QWORD *)*this + 10) + 4LL);
  }
  v13 = a3;
  v14 = v10 - (_QWORD)a4;
  do
  {
    --a3;
    *(const struct tagPALETTEENTRY *)((char *)a4 + v14) = *a4;
    if ( v9 )
      *v9++ = 0;
    if ( v7 )
      *v7++ = 0;
    ++a4;
  }
  while ( a3 );
  v15 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  *((_DWORD *)*this + 8) = v15;
  v16 = *((_QWORD *)*this + 16);
  if ( (struct PALETTE *)v16 != *this )
    *(_DWORD *)(v16 + 32) = v15;
  return v13;
}
