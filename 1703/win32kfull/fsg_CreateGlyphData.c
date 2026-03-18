/*
 * XREFs of fsg_CreateGlyphData @ 0x1C02C6CA0
 * Callers:
 *     fsg_GridFit @ 0x1C02C7B38 (fsg_GridFit.c)
 * Callees:
 *     fsg_AllocateGlyphDataMemory @ 0x1C02C61C0 (fsg_AllocateGlyphDataMemory.c)
 *     fsg_ExecuteGlyph @ 0x1C02C7254 (fsg_ExecuteGlyph.c)
 *     fsg_InitializeGlyphData @ 0x1C02C7E0C (fsg_InitializeGlyphData.c)
 */

__int64 __fastcall fsg_CreateGlyphData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _WORD *a9,
        __int64 a10,
        _WORD *a11,
        int a12)
{
  _DWORD *v12; // r14
  unsigned __int16 v16; // ax
  unsigned int v17; // edi
  int v18; // ecx
  unsigned __int16 v19; // dx
  int v20; // eax
  __int64 v21; // rbx
  _DWORD *v22; // rdi
  unsigned int v23; // esi
  __int64 i; // rcx
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  _WORD *v28; // r15
  _WORD *v29; // r12
  __int64 v30; // r8
  __int16 v31; // ax
  _DWORD v32[18]; // [rsp+70h] [rbp-48h] BYREF
  int v34; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v35; // [rsp+D0h] [rbp+18h]

  v35 = a3;
  v12 = (_DWORD *)a10;
  v32[0] = 0;
  v34 = 0;
  LODWORD(a10) = 0;
  *v12 = 0;
  v16 = *(_WORD *)(a2 + 30);
  v17 = v16;
  if ( v16 <= 1u )
    v17 = 1;
  v18 = 20;
  if ( v17 < 0x14 )
  {
    v18 = v16;
    if ( v16 <= 1u )
      v18 = 1;
  }
  v19 = *(_WORD *)(a2 + 28);
  v20 = 3;
  if ( v19 > 3u )
    v20 = v19;
  v21 = a5;
  v22 = *(_DWORD **)(a5 + 24);
  v23 = v20 + v18 + 1;
  if ( v23 )
  {
    for ( i = v23; i; --i )
      *v22++ = 1;
  }
  result = fsg_AllocateGlyphDataMemory(v23, v21, &a5);
  if ( !(_DWORD)result )
  {
    v27 = a5;
    fsg_InitializeGlyphData(a5, v26, *(unsigned __int16 *)(a1 + 216), 0LL);
    *(_DWORD *)(a4 + 408) = 10000000;
    if ( v27 )
    {
      v28 = a11;
      v29 = a9;
      while ( 1 )
      {
        result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, int, __int64 *, _DWORD *, int *, int))fsg_ExecuteGlyph)(
                   a1,
                   a2,
                   v35,
                   v23,
                   a4,
                   v27,
                   v21,
                   a6,
                   a7,
                   a8,
                   &a10,
                   v32,
                   &v34,
                   a12);
        if ( (_DWORD)result )
          break;
        *v12 |= a10;
        *v29 = *(_WORD *)(v27 + 160);
        v30 = *(_QWORD *)(v27 + 16);
        if ( v30 )
        {
          *(_QWORD *)(v27 + 16) = 0LL;
        }
        else
        {
          v30 = *(_QWORD *)(v27 + 8);
          *(_WORD *)v27 = 0;
          *(_DWORD *)(*(_QWORD *)(v21 + 24) + 4 * ((v27 - *(_QWORD *)(v21 + 32)) / 224)) = 1;
        }
        v31 = *(_WORD *)(v27 + 70);
        v27 = v30;
        *v28 = v31;
        if ( !v30 )
          return 0LL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
