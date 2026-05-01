/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x180004F70
 * Callers:
 *     RmActivityImportanceTakeMostImportant @ 0x180004F50 (RmActivityImportanceTakeMostImportant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  __int16 v3; // r9
  __int16 v4; // r10
  __int16 v5; // bx
  __int16 v6; // r11
  __int16 v7; // r9
  __int16 v8; // ax
  __int16 v9; // ax
  __int16 v10; // r8
  __int16 v11; // ax
  __int16 v12; // r8
  __int16 v13; // ax
  __int16 v14; // r8
  __int16 v15; // ax
  __int16 v16; // r10
  __int16 v17; // ax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // [rsp+10h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return a1;
  v3 = (unsigned __int16)a1 >> 1;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 1) & 7) <= (unsigned __int8)(((unsigned __int16)a2 >> 1) & 7) )
    v3 = (unsigned __int16)a2 >> 1;
  v4 = (unsigned __int16)a1 >> 4;
  v5 = ((unsigned __int8)(2 * v3) ^ 1) & 0xE ^ 1;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 4) & 3) <= (unsigned __int8)(((unsigned __int16)a2 >> 4) & 3) )
    v4 = (unsigned __int16)a2 >> 4;
  v6 = 0;
  v7 = a1 | a2;
  v8 = 0;
  if ( (((unsigned __int16)a1 | (unsigned __int16)a2) & 0x40) != 0 )
    v8 = 64;
  v9 = v5 & 0xFF0F | v8 & 0xFF7F;
  v10 = 0;
  if ( (v7 & 0x80) != 0 )
    v10 = 128;
  v11 = (v10 | v9) & 0xFEFF;
  v12 = 0;
  if ( (v7 & 0x100) != 0 )
    v12 = 256;
  v13 = (16 * (v4 & 3)) | v12 | v11;
  if ( (v7 & 0x200) != 0 )
    v14 = 512;
  else
    v14 = 0;
  v15 = v14 | v13 & 0xFDFF;
  if ( (v7 & 0x400) != 0 )
    v6 = 1024;
  v16 = (unsigned __int16)a1 >> 11;
  v17 = v6 | v15 & 0xFBFF;
  if ( (unsigned __int8)((a1 & 0x800) != 0) >= (unsigned __int8)((a2 & 0x800) != 0) )
    v16 = (unsigned __int16)a2 >> 11;
  LOWORD(v21) = (v17 ^ (v16 << 11)) & 0x800 ^ v17;
  v18 = HIBYTE(a1);
  if ( HIBYTE(a1) >= HIBYTE(a2) )
  {
    if ( HIBYTE(a1) > HIBYTE(a2) )
    {
      HIBYTE(v21) = HIBYTE(a1);
      v19 = HIWORD(a1);
    }
    else
    {
      v19 = HIWORD(a1);
      v20 = HIWORD(a2);
      HIBYTE(v21) = v18;
      if ( (unsigned __int8)v19 <= (unsigned __int8)v20 )
      {
        BYTE2(v21) = v20;
        return v21;
      }
    }
    BYTE2(v21) = v19;
    return v21;
  }
  BYTE2(v21) = BYTE2(a2);
  HIBYTE(v21) = HIBYTE(a2);
  return v21;
}
