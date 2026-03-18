/*
 * XREFs of QueryTemperatureInfoHealthLogCompletion @ 0x1C000BD50
 * Callers:
 *     <none>
 * Callees:
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 */

__int64 __fastcall QueryTemperatureInfoHealthLogCompletion(__int64 a1, __int64 a2)
{
  char v4; // dl
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int *v8; // r11
  _WORD *v9; // r9
  __int16 v10; // cx
  __int16 v11; // cx
  _WORD *v12; // rax
  __int16 v13; // r8
  unsigned __int16 v14; // r8
  _WORD *v15; // rsi
  unsigned __int16 i; // r10
  __int64 v17; // r9
  __int16 v18; // ax
  __int64 v19; // r8
  unsigned int v20; // [rsp+68h] [rbp+10h]

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  result = v5 & 0xFFF;
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - result + 4096;
  if ( v4 == 40 )
  {
    v7 = *(_QWORD *)(a2 + 64);
    v8 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = (unsigned int *)(a2 + 16);
  }
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v9 = *(_WORD **)(v5 + 4200);
    HIBYTE(v20) = 0;
    v10 = *(_WORD *)((char *)v9 + 1);
    *(_WORD *)(v7 + 52) = 0;
    if ( v10 )
      v11 = v10 - 273;
    else
      v11 = 0x8000;
    *(_WORD *)(v7 + 54) = v11;
    v12 = v9 + 107;
    *(_DWORD *)(v7 + 56) = -2147450880;
    v13 = 8;
    do
    {
      if ( *v12 )
        break;
      --v12;
      --v13;
    }
    while ( v13 );
    v14 = v13 + 1;
    v15 = v9 + 100;
    *(_WORD *)(v7 + 40) = v14;
    for ( i = 1; i < v14; *(_DWORD *)(v17 + v7 + 56) = -2147450880 )
    {
      v17 = 16LL * i;
      if ( *v8 < (unsigned __int64)(v17 + 40) )
        break;
      *(_WORD *)(v17 + v7 + 52) = i;
      v18 = *v15 ? *v15 - 273 : 0x8000;
      ++v15;
      *(_WORD *)(v17 + v7 + 54) = v18;
      ++i;
    }
    LOBYTE(v20) = i - 1;
    *(_WORD *)((char *)&v20 + 1) = 0;
    *(_BYTE *)(v5 + 4245) = *(_BYTE *)(v5 + 4245) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    *(_DWORD *)(v5 + 4140) &= 0xFFC0FFFF;
    *(_BYTE *)(v5 + 4096) = 10;
    *(_BYTE *)(v5 + 4136) = 4;
    *(_BYTE *)(v5 + 4245) &= ~4u;
    *(_QWORD *)(v5 + 4216) = QueryTemperatureThresholdCompletion;
    *(_QWORD *)(v5 + 4224) = v20;
    result = ProcessCommand(a1, a2);
  }
  else
  {
    *(_BYTE *)(v5 + 4245) |= 8u;
  }
  v19 = *(_QWORD *)(v5 + 4200);
  if ( v19 )
    result = StorPortExtendedFunction(25LL, a1, v19, *(unsigned int *)(v5 + 4232));
  *(_QWORD *)(v5 + 4200) = 0LL;
  *(_DWORD *)(v5 + 4232) = 0;
  return result;
}
