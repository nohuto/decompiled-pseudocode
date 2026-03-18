/*
 * XREFs of QueryTemperatureThresholdCompletion @ 0x1C000B410
 * Callers:
 *     <none>
 * Callees:
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 */

__int64 __fastcall QueryTemperatureThresholdCompletion(__int64 a1, __int64 a2, __int16 *a3)
{
  char v5; // dl
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // r8
  unsigned int v10; // eax
  __int16 v11; // cx
  unsigned int v12; // r11d
  __int16 v13; // r10
  __int64 v14; // rcx
  __int16 v15; // r10
  __int64 v16; // rdx
  unsigned __int8 v17; // di
  char v18; // si
  int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // [rsp+38h] [rbp+10h]

  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  result = v7 & 0xFFF;
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - result + 4096;
  if ( *(_BYTE *)(a2 + 3) != 1 )
    goto LABEL_29;
  if ( v5 == 40 )
    v9 = *(_QWORD *)(a2 + 64);
  else
    v9 = *(_QWORD *)(a2 + 24);
  v10 = *(_DWORD *)(v7 + 4224);
  v11 = *a3;
  v12 = HIWORD(v10);
  v22 = v10;
  if ( BYTE2(v10) )
  {
    if ( v11 )
      v13 = v11 - 273;
    else
      v13 = 0x8000;
    result = v10 >> 8;
    v14 = 2LL * (unsigned __int8)result;
    *(_WORD *)(v9 + 8 * v14 + 58) = v13;
    *(_BYTE *)(v9 + 8 * v14 + 61) = 1;
  }
  else
  {
    if ( v11 )
      v15 = v11 - 273;
    else
      v15 = 0x8000;
    result = v10 >> 8;
    v16 = 2LL * (unsigned __int8)result;
    *(_WORD *)(v9 + 8 * v16 + 56) = v15;
    *(_BYTE *)(v9 + 16 * ((unsigned __int8)result + 2LL) + 28) = 1;
    *(_BYTE *)(v9 + 8 * v16 + 62) = 1;
  }
  if ( (_BYTE)v12 || !(_BYTE)result && (result = *(_QWORD *)(a1 + 1080), !*(_WORD *)(result + 266)) )
  {
    if ( BYTE1(v22) < (unsigned __int8)v22 )
    {
      v17 = ++BYTE1(v22);
      v18 = 0;
      goto LABEL_25;
    }
LABEL_29:
    *(_BYTE *)(v7 + 4245) |= 8u;
    return result;
  }
  v17 = BYTE1(v22);
  v18 = 1;
LABEL_25:
  BYTE2(v22) = v18;
  *(_BYTE *)(v7 + 4245) = *(_BYTE *)(v7 + 4245) & 0xFC | 1;
  SrbAssignQueueId(a1, a2);
  v19 = (*(_DWORD *)(v7 + 4140) ^ (v17 << 16)) & 0xF0000;
  *(_BYTE *)(v7 + 4096) = 10;
  *(_DWORD *)(v7 + 4140) ^= v19;
  v20 = *(_DWORD *)(v7 + 4140);
  *(_BYTE *)(v7 + 4136) = 4;
  if ( v18 )
    v21 = v20 & 0xFFCFFFFF | 0x100000;
  else
    v21 = v20 & 0xFFCFFFFF;
  *(_DWORD *)(v7 + 4140) = v21;
  *(_BYTE *)(v7 + 4245) &= ~4u;
  *(_QWORD *)(v7 + 4216) = QueryTemperatureThresholdCompletion;
  result = v22;
  *(_QWORD *)(v7 + 4224) = v22;
  return result;
}
