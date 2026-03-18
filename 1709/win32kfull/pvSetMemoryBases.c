/*
 * XREFs of pvSetMemoryBases @ 0x1C022FA0C
 * Callers:
 *     lGGOBitmap @ 0x1C022E970 (lGGOBitmap.c)
 *     lGetGlyphBitmap @ 0x1C022EBD0 (lGetGlyphBitmap.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall pvSetMemoryBases(_DWORD *a1, _QWORD *a2, int a3)
{
  unsigned int v5; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  ULONG v13; // edx
  signed int v14; // r15d
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned __int64 result; // rax
  signed int v18; // [rsp+50h] [rbp+8h]

  v5 = a1[5];
  if ( v5 > 0x7FFFFFF8 )
    goto LABEL_27;
  v7 = a1[6];
  if ( v7 > 0x7FFFFFF8 )
    goto LABEL_27;
  v8 = a1[7];
  if ( v8 > 0x7FFFFFF8 )
    goto LABEL_27;
  v9 = (v5 + 7) & 0xFFFFFFF8;
  v10 = v9 + ((v7 + 7) & 0xFFFFFFF8);
  if ( v10 < v9 )
    goto LABEL_27;
  if ( v10 > 0x7FFFFFFF )
    goto LABEL_27;
  v11 = v9 + ((v7 + 7) & 0xFFFFFFF8);
  v12 = v10 + ((v8 + 7) & 0xFFFFFFF8);
  if ( v12 < v11 || v12 > 0x7FFFFFFF )
    goto LABEL_27;
  v13 = v12;
  if ( a3 )
  {
    v14 = v12;
    v15 = v12 + ((a1[8] + 7) & 0xFFFFFFF8);
    if ( v15 >= v13 && v15 <= 0x7FFFFFFF )
    {
      v13 = v15;
      goto LABEL_13;
    }
LABEL_27:
    a2[8] = 0LL;
    result = 0LL;
    a2[7] = 0LL;
    a2[6] = 0LL;
    return result;
  }
  v14 = v18;
LABEL_13:
  if ( !v13 )
    v13 = 4;
  v16 = (unsigned __int64)EngAllocMem(0, v13, 0x64667454u);
  if ( !v16 )
    goto LABEL_27;
  a2[6] = v16 & -(__int64)(a1[5] != 0);
  if ( a1[6] )
    a2[7] = v16 + (int)v9;
  else
    a2[7] = 0LL;
  if ( a1[7] )
    a2[8] = v16 + (int)v11;
  else
    a2[8] = 0LL;
  if ( a3 && a1[8] )
    a2[9] = v16 + v14;
  else
    a2[9] = 0LL;
  return v16;
}
