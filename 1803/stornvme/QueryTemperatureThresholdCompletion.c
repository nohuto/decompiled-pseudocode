/*
 * XREFs of QueryTemperatureThresholdCompletion @ 0x1C000BF50
 * Callers:
 *     <none>
 * Callees:
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 */

char __fastcall QueryTemperatureThresholdCompletion(__int64 a1, __int64 a2, __int16 *a3)
{
  char v5; // dl
  __int64 v6; // rbx
  __int64 v7; // rax
  char v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // r11d
  __int16 v11; // ax
  __int16 v12; // r8
  __int64 v13; // rax
  __int16 v14; // r8
  __int64 v15; // rcx
  unsigned __int8 v16; // si
  char v17; // bp
  char v18; // al
  int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v23; // [rsp+48h] [rbp+10h]

  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  v7 = v6 & 0xFFF;
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - v7 + 4096;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v8 = 1;
    if ( v5 == 40 )
      v9 = *(_QWORD *)(a2 + 64);
    else
      v9 = *(_QWORD *)(a2 + 24);
    v10 = *(_DWORD *)(v6 + 4232);
    v11 = *a3;
    v23 = v10;
    if ( BYTE2(v10) )
    {
      if ( v11 )
        v12 = v11 - 273;
      else
        v12 = 0x8000;
      v13 = 16LL * BYTE1(v10);
      *(_WORD *)(v13 + v9 + 58) = v12;
      *(_BYTE *)(v13 + v9 + 61) = 1;
    }
    else
    {
      if ( v11 )
        v14 = v11 - 273;
      else
        v14 = 0x8000;
      v15 = 2LL * BYTE1(v10);
      *(_WORD *)(v9 + 8 * v15 + 56) = v14;
      *(_BYTE *)(16 * (BYTE1(v10) + 2LL) + v9 + 28) = 1;
      *(_BYTE *)(v9 + 8 * v15 + 62) = 1;
    }
    if ( !BYTE2(v10) && (BYTE1(v10) || *(_WORD *)(*(_QWORD *)(a1 + 1112) + 266LL)) )
    {
      v16 = BYTE1(v10);
      v17 = 1;
      BYTE2(v23) = 1;
    }
    else
    {
      v16 = BYTE1(v10);
      if ( BYTE1(v10) >= (unsigned __int8)v10 )
      {
        v17 = BYTE2(v10);
        v8 = 0;
      }
      else
      {
        v16 = BYTE1(v10) + 1;
        v17 = 0;
        *(_WORD *)((char *)&v23 + 1) = (unsigned __int8)(BYTE1(v10) + 1);
      }
    }
    v18 = *(_BYTE *)(v6 + 4253);
    if ( v8 )
    {
      *(_BYTE *)(v6 + 4253) = v18 & 0xFC | 1;
      SrbAssignQueueId(a1, a2);
      v19 = (*(_DWORD *)(v6 + 4140) ^ (v16 << 16)) & 0xF0000;
      *(_BYTE *)(v6 + 4096) = 10;
      v20 = *(_DWORD *)(v6 + 4140) ^ v19;
      *(_BYTE *)(v6 + 4136) = 4;
      *(_DWORD *)(v6 + 4140) = v20;
      if ( v17 )
        v21 = v20 & 0xFFCFFFFF | 0x100000;
      else
        v21 = v20 & 0xFFCFFFFF;
      *(_DWORD *)(v6 + 4140) = v21;
      *(_BYTE *)(v6 + 4253) &= ~4u;
      *(_QWORD *)(v6 + 4224) = QueryTemperatureThresholdCompletion;
      *(_QWORD *)(v6 + 4232) = v23;
      LOBYTE(v7) = ProcessCommand(a1, a2);
    }
    else
    {
      LOBYTE(v7) = v18 | 8;
      *(_BYTE *)(v6 + 4253) = v7;
    }
  }
  else
  {
    *(_BYTE *)(v6 + 4253) |= 8u;
  }
  return v7;
}
