/*
 * XREFs of KiConfigureHeteroProcessorsTarget @ 0x14014E5A0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KiConfigureHeteroProcessorsTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  volatile signed __int32 *v5; // r13
  signed __int32 v7; // eax
  int v8; // esi
  unsigned int v9; // ebx
  signed __int32 v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  unsigned __int16 *v13; // r12
  unsigned __int8 v14; // r14
  unsigned int i; // edx
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int16 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int16 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // r11
  int v34; // eax
  __int64 v35; // r9
  unsigned int v36; // r11d
  __int64 *v37; // rcx
  int v38; // [rsp+20h] [rbp-A9h] BYREF
  int j; // [rsp+24h] [rbp-A5h] BYREF
  volatile signed __int32 *v40; // [rsp+28h] [rbp-A1h]
  _DWORD v41[44]; // [rsp+30h] [rbp-99h] BYREF

  v40 = a3;
  v5 = a3;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = 0;
  v9 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v38 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      KeYieldProcessorEx(&v38);
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
  }
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_7;
  v13 = *(unsigned __int16 **)a2;
  v41[0] = 1310721;
  memset(&v41[1], 0, 0xA4uLL);
  if ( (unsigned int)KeIsEmptyAffinityEx(v13) )
  {
    v23 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        v24 = KiProcessorBlock[v23];
        v25 = *(unsigned __int8 *)(v24 + 208);
        *(_WORD *)(v24 + 23858) = 0;
        qword_1404023C8[2 * v25] &= ~*(_QWORD *)(v24 + 200);
        KeAddProcessorAffinityEx(v41, v23++);
      }
      while ( v23 < (unsigned int)KeNumberProcessors_0 );
      v5 = v40;
    }
  }
  else
  {
    v14 = 0;
    if ( !*(_DWORD *)(a2 + 8) )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        v16 = *(_QWORD *)(KiProcessorBlock[i] + 24176);
        if ( v16 )
          v17 = *(_BYTE *)(v16 + 206);
        else
          v17 = 0;
        if ( v14 <= v17 )
        {
          if ( v16 )
            v14 = *(_BYTE *)(v16 + 206);
          else
            v14 = 0;
        }
      }
    }
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      while ( 1 )
      {
        v18 = KiProcessorBlock[v8];
        if ( ((*(_QWORD *)&v13[4 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v8] >> 6) + 4] >> (KiProcessorIndexToNumberMappingTable[v8] & 0x3F)) & 1) == 0 )
          break;
        v19 = *(unsigned __int8 *)(v18 + 208);
        *(_WORD *)(v18 + 23858) = 0;
        qword_1404023C8[2 * v19] |= *(_QWORD *)(v18 + 200);
LABEL_25:
        if ( ++v8 >= (unsigned int)KeNumberProcessors_0 )
          goto LABEL_26;
      }
      if ( *(_DWORD *)(a2 + 8) )
      {
        *(_WORD *)(v18 + 23858) = 257;
      }
      else
      {
        v26 = *(_QWORD *)(v18 + 24176);
        if ( v26 )
          LOBYTE(v26) = *(_BYTE *)(v26 + 206);
        *(_BYTE *)(v18 + 23859) = v26;
        *(_BYTE *)(v18 + 23858) = 0;
        if ( (_BYTE)v26 != v14 )
          goto LABEL_48;
      }
      KeAddProcessorAffinityEx(v41, v8);
LABEL_48:
      qword_1404023C8[2 * *(unsigned __int8 *)(v18 + 208)] &= ~*(_QWORD *)(v18 + 200);
      goto LABEL_25;
    }
  }
LABEL_26:
  v20 = 0LL;
  v21 = 0;
  if ( !KeNumberNodes )
    goto LABEL_33;
  while ( 1 )
  {
    v22 = *(_QWORD *)(KeNodeBlock[v21] + 136) - ((*(_QWORD *)(KeNodeBlock[v21] + 136) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v22 & 0x3333333333333333LL)
                         + ((v22 >> 2) & 0x3333333333333333LL)
                         + (((v22 & 0x3333333333333333LL) + ((v22 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
      break;
LABEL_30:
    if ( ++v21 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_33;
  }
  if ( !v20 )
  {
    v20 = KeNodeBlock[v21];
    goto LABEL_30;
  }
  v20 = 0LL;
LABEL_33:
  KeHeteroSystem = 0;
  KeHeteroSystemVirtual = 0;
  *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 0;
  if ( v20 )
  {
    if ( *(_DWORD *)(a2 + 12) )
    {
      KeHeteroSystem = 1;
      KeHeteroSystemVirtual = 1;
      *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 1;
      goto LABEL_7;
    }
    v27 = *(_WORD *)(v20 + 144);
    if ( v27 >= *v13 )
      v28 = 0LL;
    else
      v28 = *(_QWORD *)&v13[4 * v27 + 4];
    v29 = *(_QWORD *)(v20 + 136);
    v30 = v29 & v28;
    if ( !v30 || v30 == v29 )
    {
      v30 = *(_QWORD *)(v20 + 136);
      v32 = v30;
      v35 = v30;
    }
    else
    {
      v31 = ~v30;
      v32 = v29 & ~v30;
      if ( v27 >= LOWORD(v41[0]) )
        v33 = 0LL;
      else
        v33 = *(_QWORD *)&v41[2 * v27 + 2];
      v34 = *(_DWORD *)(a2 + 16);
      KeHeteroSystem = 1;
      if ( (v29 & v33) != 0 )
        v31 = v33;
      *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = v34;
      v35 = v29 & v31;
    }
    v36 = 1;
    v37 = (__int64 *)(v20 + 216);
    while ( 2 )
    {
      switch ( v36 )
      {
        case 1u:
          *(v37 - 2) = v35;
          *(v37 - 1) = v32;
          *v37 = v32;
          break;
        case 2u:
          *(v37 - 2) = v35;
          *(v37 - 1) = v32;
LABEL_71:
          *v37 = *(_QWORD *)(v20 + 136);
          break;
        case 3u:
          *(v37 - 2) = v30;
          *(v37 - 1) = v30;
          *v37 = v30;
          break;
        case 4u:
          *(v37 - 2) = v30;
          *(v37 - 1) = v30;
          goto LABEL_71;
      }
      ++v36;
      v37 += 3;
      if ( v36 >= 5 )
        break;
      continue;
    }
  }
LABEL_7:
  v10 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v11 = ~v10 & 0x80000000;
  if ( (v10 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v11 )
        break;
    }
  }
  else
  {
    result = v11 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(v5);
  return result;
}
