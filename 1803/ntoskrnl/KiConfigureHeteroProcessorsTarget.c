/*
 * XREFs of KiConfigureHeteroProcessorsTarget @ 0x14023F6F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall KiConfigureHeteroProcessorsTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  volatile signed __int32 *v5; // r13
  signed __int32 v7; // eax
  int v8; // esi
  unsigned int v9; // ebx
  unsigned __int16 *v10; // r12
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int8 v17; // r14
  unsigned int i; // edx
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int16 v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  int v31; // eax
  __int64 v32; // r9
  unsigned int v33; // r11d
  __int64 *v34; // rcx
  signed __int32 v35; // eax
  unsigned int v36; // ebx
  __int64 result; // rax
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
    goto LABEL_67;
  v10 = *(unsigned __int16 **)a2;
  v41[0] = 1310721;
  memset(&v41[1], 0, 0xA4uLL);
  if ( (unsigned int)KeIsEmptyAffinityEx(v10) )
  {
    v11 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        v12 = KiProcessorBlock[v11];
        v13 = *(unsigned __int8 *)(v12 + 208);
        *(_WORD *)(v12 + 23858) = 0;
        qword_14044D588[2 * v13] &= ~*(_QWORD *)(v12 + 200);
        KeAddProcessorAffinityEx(v41, v11++);
      }
      while ( v11 < (unsigned int)KeNumberProcessors_0 );
      v5 = v40;
    }
    goto LABEL_8;
  }
  v17 = 0;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      v19 = *(_QWORD *)(KiProcessorBlock[i] + 24176);
      if ( v19 )
        v20 = *(_BYTE *)(v19 + 206);
      else
        v20 = 0;
      if ( v17 <= v20 )
      {
        if ( v19 )
          v17 = *(_BYTE *)(v19 + 206);
        else
          v17 = 0;
      }
    }
  }
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v21 = KiProcessorBlock[v8];
      if ( ((*(_QWORD *)&v10[4 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v8] >> 6) + 4] >> (KiProcessorIndexToNumberMappingTable[v8] & 0x3F)) & 1) == 0 )
        break;
      v22 = *(unsigned __int8 *)(v21 + 208);
      *(_WORD *)(v21 + 23858) = 0;
      qword_14044D588[2 * v22] |= *(_QWORD *)(v21 + 200);
LABEL_38:
      if ( ++v8 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_8;
    }
    if ( *(_DWORD *)(a2 + 8) )
    {
      *(_WORD *)(v21 + 23858) = 257;
    }
    else
    {
      v23 = *(_QWORD *)(v21 + 24176);
      if ( v23 )
        LOBYTE(v23) = *(_BYTE *)(v23 + 206);
      *(_BYTE *)(v21 + 23859) = v23;
      *(_BYTE *)(v21 + 23858) = 0;
      if ( (_BYTE)v23 != v17 )
        goto LABEL_37;
    }
    KeAddProcessorAffinityEx(v41, v8);
LABEL_37:
    qword_14044D588[2 * *(unsigned __int8 *)(v21 + 208)] &= ~*(_QWORD *)(v21 + 200);
    goto LABEL_38;
  }
LABEL_8:
  v14 = 0LL;
  v15 = 0;
  if ( !KeNumberNodes )
    goto LABEL_41;
  while ( 1 )
  {
    v16 = *(_QWORD *)(KeNodeBlock[v15] + 136) - ((*(_QWORD *)(KeNodeBlock[v15] + 136) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v16 & 0x3333333333333333LL)
                         + ((v16 >> 2) & 0x3333333333333333LL)
                         + (((v16 & 0x3333333333333333LL) + ((v16 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
      break;
LABEL_12:
    if ( ++v15 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_41;
  }
  if ( !v14 )
  {
    v14 = KeNodeBlock[v15];
    goto LABEL_12;
  }
  v14 = 0LL;
LABEL_41:
  KeHeteroSystem = 0;
  KeHeteroSystemVirtual = 0;
  *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) = 0;
  if ( v14 )
  {
    if ( *(_DWORD *)(a2 + 12) )
    {
      KeHeteroSystem = 1;
      KeHeteroSystemVirtual = 1;
      *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) = 1;
      goto LABEL_67;
    }
    v24 = *(_WORD *)(v14 + 144);
    if ( v24 >= *v10 )
      v25 = 0LL;
    else
      v25 = *(_QWORD *)&v10[4 * v24 + 4];
    v26 = *(_QWORD *)(v14 + 136);
    v27 = v26 & v25;
    if ( !v27 || v27 == v26 )
    {
      v27 = *(_QWORD *)(v14 + 136);
      v29 = v27;
      v32 = v27;
    }
    else
    {
      v28 = ~v27;
      v29 = v26 & ~v27;
      if ( v24 >= LOWORD(v41[0]) )
        v30 = 0LL;
      else
        v30 = *(_QWORD *)&v41[2 * v24 + 2];
      v31 = *(_DWORD *)(a2 + 16);
      KeHeteroSystem = 1;
      if ( (v26 & v30) != 0 )
        v28 = v30;
      *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) = v31;
      v32 = v26 & v28;
    }
    v33 = 1;
    v34 = (__int64 *)(v14 + 216);
    while ( 2 )
    {
      switch ( v33 )
      {
        case 1u:
          *(v34 - 2) = v32;
          *(v34 - 1) = v29;
          *v34 = v29;
          break;
        case 2u:
          *(v34 - 2) = v32;
          *(v34 - 1) = v29;
LABEL_64:
          *v34 = *(_QWORD *)(v14 + 136);
          break;
        case 3u:
          *(v34 - 2) = v27;
          *(v34 - 1) = v27;
          *v34 = v27;
          break;
        case 4u:
          *(v34 - 2) = v27;
          *(v34 - 1) = v27;
          goto LABEL_64;
      }
      ++v33;
      v34 += 3;
      if ( v33 >= 5 )
        break;
      continue;
    }
  }
LABEL_67:
  v35 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v36 = ~v35 & 0x80000000;
  if ( (v35 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v36 )
        break;
    }
  }
  else
  {
    result = v36 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(v5);
  return result;
}
