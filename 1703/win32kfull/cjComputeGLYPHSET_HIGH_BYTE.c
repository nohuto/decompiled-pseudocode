/*
 * XREFs of cjComputeGLYPHSET_HIGH_BYTE @ 0x1C02290E0
 * Callers:
 *     bLoadGlyphSet @ 0x1C0227A40 (bLoadGlyphSet.c)
 * Callees:
 *     CreateGlyphSetFromMITable @ 0x1C0225B9C (CreateGlyphSetFromMITable.c)
 */

__int64 __fastcall cjComputeGLYPHSET_HIGH_BYTE(_WORD *a1, ULONG **a2, __int64 a3)
{
  _WORD *v3; // rbx
  _WORD *v5; // r14
  _WORD *v6; // r10
  unsigned int v7; // r9d
  __int64 v8; // r11
  unsigned __int16 v9; // ax
  _BYTE *v10; // rdi
  unsigned __int16 v11; // r10
  unsigned __int16 v12; // r8
  _WORD *v13; // r9
  unsigned __int16 v14; // ax
  int v15; // ecx
  __int64 v16; // rax
  unsigned __int16 i; // dx
  unsigned __int16 v18; // ax
  _WORD *v19; // rcx
  char *v20; // r15
  unsigned __int16 v21; // r8
  int v22; // r11d
  unsigned __int16 v23; // bp
  unsigned int v24; // r12d
  int v25; // eax
  unsigned __int16 v26; // cx
  int v27; // r9d
  __int64 v28; // rcx
  unsigned int GlyphSetFromMITable; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1 + 3;
  v5 = a1 + 259;
  v6 = a1 + 3;
  v7 = (unsigned __int16)__ROR2__(a1[260], 8);
  v8 = 256LL;
  do
  {
    v9 = __ROR2__(*v6, 8);
    if ( v9 )
      v7 += (unsigned __int16)__ROR2__(*(_WORD *)((char *)v5 + v9 + 2), 8);
    ++v6;
    --v8;
  }
  while ( v8 );
  if ( v7 - 1 > 0xFFFE )
  {
    *a2 = 0LL;
    if ( v7 > 0xFFFF )
    {
      RtlInitUnicodeString(&DestinationString, L"CVE-2016-3393");
      SeEtwWriteKMCveEvent(&DestinationString, 0LL);
    }
    return 0LL;
  }
  v10 = EngAllocMem(0, 8 * v7, 0x64667454u);
  if ( !v10 )
  {
    *a2 = 0LL;
    return 0LL;
  }
  v11 = 0;
  v12 = 0;
  v13 = v3;
  do
  {
    if ( !__ROR2__(*v13, 8) )
    {
      v14 = __ROR2__(
              *(_WORD *)((char *)&v5[v12 - (unsigned __int16)__ROR2__(*v5, 8) + 3] + (unsigned __int16)__ROR2__(v5[3], 8)),
              8);
      v15 = v14;
      if ( v14 )
      {
        v16 = v11++;
        v10[8 * v16] = v12;
        v10[8 * v16 + 1] = 0;
        *(_DWORD *)&v10[8 * v16 + 4] = v15;
      }
    }
    ++v12;
    ++v13;
  }
  while ( v12 < 0x100u );
  for ( i = 0; i < 0x100u; ++i )
  {
    v18 = __ROR2__(*v3, 8);
    if ( v18 )
    {
      v19 = (_WORD *)((char *)v5 + v18);
      v20 = (char *)v19 + (unsigned __int16)__ROR2__(v19[3], 8);
      v21 = __ROR2__(*v19, 8);
      v22 = v21;
      v23 = __ROR2__(v19[2], 8);
      v24 = (unsigned __int16)__ROR2__(v19[1], 8) + v21;
      if ( v21 < v24 )
      {
        v25 = v21;
        do
        {
          v26 = __ROR2__(*(_WORD *)&v20[2 * (v25 - v22) + 6], 8);
          v27 = v26;
          if ( v26 )
          {
            v28 = v11++;
            v10[8 * v28] = i;
            v10[8 * v28 + 1] = v21;
            v10[8 * v28 + 2] = 0;
            *(_DWORD *)&v10[8 * v28 + 4] = v27 + v23;
          }
          v25 = ++v21;
        }
        while ( v21 < v24 );
      }
    }
    ++v3;
  }
  GlyphSetFromMITable = CreateGlyphSetFromMITable(a3, (__int64)v10, v11, a2);
  EngFreeMem(v10);
  return GlyphSetFromMITable;
}
