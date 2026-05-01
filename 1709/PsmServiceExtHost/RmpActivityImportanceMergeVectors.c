/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x180014530
 * Callers:
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014000 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  __int16 v2; // r9
  __int16 v3; // r10
  __int16 v4; // r11
  __int16 v5; // r9
  __int16 v6; // bx
  __int16 v7; // ax
  __int16 v8; // ax
  __int16 v9; // r8
  __int16 v10; // ax
  __int16 v11; // r8
  __int16 v12; // ax
  __int16 v13; // r8
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // r10
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v20; // ecx
  unsigned int v21; // [rsp+10h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return a1;
  v2 = (unsigned __int16)a1 >> 1;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 1) & 7) <= (unsigned __int8)(((unsigned __int16)a2 >> 1) & 7) )
    v2 = (unsigned __int16)a2 >> 1;
  v3 = (unsigned __int16)a1 >> 4;
  v4 = ((unsigned __int8)(2 * v2) ^ 1) & 0xE ^ 1;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 4) & 3) <= (unsigned __int8)(((unsigned __int16)a2 >> 4) & 3) )
    v3 = (unsigned __int16)a2 >> 4;
  v5 = 0;
  v6 = a1 | a2;
  v7 = 0;
  if ( (((unsigned __int16)a1 | (unsigned __int16)a2) & 0x40) != 0 )
    v7 = 64;
  v8 = v4 & 0xFF0F | v7 & 0xFF7F;
  v9 = 0;
  if ( (v6 & 0x80) != 0 )
    v9 = 128;
  v10 = (v9 | v8) & 0xFEFF;
  v11 = 0;
  if ( (v6 & 0x100) != 0 )
    v11 = 256;
  v12 = (16 * (v3 & 3)) | v11 | v10;
  if ( (v6 & 0x200) != 0 )
    v13 = 512;
  else
    v13 = 0;
  v14 = v13 & 0xFBFF | v12 & 0xF9FF;
  if ( (v6 & 0x400) != 0 )
    v5 = 1024;
  v15 = v5 | v14;
  v16 = (unsigned __int16)a1 >> 11;
  if ( (unsigned __int8)((a1 & 0x800) != 0) >= (unsigned __int8)((a2 & 0x800) != 0) )
    v16 = (unsigned __int16)a2 >> 11;
  v17 = HIBYTE(a1);
  LOWORD(v21) = (v15 ^ (v16 << 11)) & 0x800 ^ v15;
  if ( HIBYTE(a1) > HIBYTE(a2) )
  {
    HIBYTE(v21) = HIBYTE(a1);
    v20 = HIWORD(a1);
  }
  else
  {
    if ( HIBYTE(a1) < HIBYTE(a2) )
    {
      HIBYTE(v21) = HIBYTE(a2);
      v18 = HIWORD(a2);
LABEL_22:
      BYTE2(v21) = v18;
      return v21;
    }
    v20 = HIWORD(a1);
    v18 = HIWORD(a2);
    HIBYTE(v21) = v17;
    if ( (unsigned __int8)v20 <= (unsigned __int8)v18 )
      goto LABEL_22;
  }
  BYTE2(v21) = v20;
  return v21;
}
