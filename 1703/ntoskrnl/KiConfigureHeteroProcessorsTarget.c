/*
 * XREFs of KiConfigureHeteroProcessorsTarget @ 0x1404189B0
 * Callers:
 *     <none>
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeSignalCallDpcSynchronize @ 0x1402013A0 (KeSignalCallDpcSynchronize.c)
 *     PoGetProcessorPerformanceClass @ 0x1402333DC (PoGetProcessorPerformanceClass.c)
 */

__int64 __fastcall KiConfigureHeteroProcessorsTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  volatile signed __int32 *v5; // r15
  __int64 v7; // rbx
  unsigned __int16 *v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int16 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int16 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rbx
  unsigned int v25; // r10d
  __int64 *v26; // rcx
  __int64 result; // rax
  _DWORD v29[44]; // [rsp+30h] [rbp-F8h] BYREF

  v5 = a3;
  KeSignalCallDpcSynchronize(a4);
  v7 = 0LL;
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_50;
  v8 = *(unsigned __int16 **)a2;
  v29[0] = 1310721;
  memset(&v29[1], 0, 0xA4uLL);
  if ( (unsigned int)KeIsEmptyAffinityEx(v8) )
  {
    v9 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        v10 = KiProcessorBlock[v9];
        v11 = *(unsigned __int8 *)(v10 + 208);
        *(_WORD *)(v10 + 23986) = 0;
        qword_1403E6548[2 * v11] &= ~*(_QWORD *)(v10 + 200);
        KeAddProcessorAffinityEx(v29, v9++);
      }
      while ( v9 < (unsigned int)KeNumberProcessors_0 );
LABEL_19:
      v5 = a3;
    }
    goto LABEL_20;
  }
  v12 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v13 = KiProcessorBlock[v12];
      if ( ((*(_QWORD *)&v8[4 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v12] >> 6) + 4] >> (KiProcessorIndexToNumberMappingTable[v12] & 0x3F)) & 1) == 0 )
        break;
      v14 = *(_QWORD *)(v13 + 200);
      v15 = 2LL * *(unsigned __int8 *)(v13 + 208);
      *(_WORD *)(v13 + 23986) = 0;
      qword_1403E6548[v15] |= v14;
LABEL_18:
      if ( ++v12 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_19;
    }
    if ( *(_DWORD *)(a2 + 8) )
    {
      *(_WORD *)(v13 + 23986) = 257;
    }
    else
    {
      if ( *(_DWORD *)(a2 + 12) )
        *(_BYTE *)(v13 + 23987) = 1;
      else
        *(_BYTE *)(v13 + 23987) = PoGetProcessorPerformanceClass(KiProcessorBlock[v12]);
      *(_BYTE *)(v13 + 23986) = 0;
      if ( *(_BYTE *)(v13 + 23987) != *(_BYTE *)(a2 + 16) )
        goto LABEL_17;
    }
    KeAddProcessorAffinityEx(v29, v12);
LABEL_17:
    qword_1403E6548[2 * *(unsigned __int8 *)(v13 + 208)] &= ~*(_QWORD *)(v13 + 200);
    goto LABEL_18;
  }
LABEL_20:
  v16 = 0LL;
  v17 = 0;
  if ( !KeNumberNodes )
    goto LABEL_27;
  while ( 1 )
  {
    v18 = *(_QWORD *)(KeNodeBlock[v17] + 136) - ((*(_QWORD *)(KeNodeBlock[v17] + 136) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v18 & 0x3333333333333333LL)
                         + ((v18 >> 2) & 0x3333333333333333LL)
                         + (((v18 & 0x3333333333333333LL) + ((v18 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
      break;
LABEL_24:
    if ( ++v17 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_27;
  }
  if ( !v16 )
  {
    v16 = KeNodeBlock[v17];
    goto LABEL_24;
  }
  v16 = 0LL;
LABEL_27:
  KeHeteroSystem = 0;
  if ( v16 )
  {
    v19 = *(_WORD *)(v16 + 144);
    if ( v19 >= *v8 )
      v20 = 0LL;
    else
      v20 = *(_QWORD *)&v8[4 * v19 + 4];
    v21 = *(_QWORD *)(v16 + 136);
    v22 = v21 & v20;
    if ( !v22 || v22 == v21 )
    {
      v22 = *(_QWORD *)(v16 + 136);
      v23 = v22;
      v24 = v22;
    }
    else
    {
      v23 = v21 & ~v22;
      if ( v19 < LOWORD(v29[0]) )
        v7 = *(_QWORD *)&v29[2 * v19 + 2];
      v24 = v21 & v7;
      if ( !v24 )
        v24 = v21 & ~v22;
      KeHeteroSystem = *(_DWORD *)(a2 + 12) != 0 ? 1 : 3;
    }
    v25 = 1;
    v26 = (__int64 *)(v16 + 216);
    while ( 1 )
    {
      if ( v25 == 1 )
      {
        *(v26 - 2) = v24;
        *(v26 - 1) = v23;
        *v26 = v23;
        goto LABEL_49;
      }
      if ( v25 == 2 )
        break;
      if ( v25 == 3 )
      {
        *(v26 - 2) = v22;
        *(v26 - 1) = v22;
        *v26 = v22;
      }
      else if ( v25 == 4 )
      {
        *(v26 - 2) = v22;
        *(v26 - 1) = v22;
LABEL_47:
        *v26 = *(_QWORD *)(v16 + 136);
      }
LABEL_49:
      ++v25;
      v26 += 3;
      if ( v25 >= 5 )
        goto LABEL_50;
    }
    *(v26 - 2) = v24;
    *(v26 - 1) = v23;
    goto LABEL_47;
  }
LABEL_50:
  result = KeSignalCallDpcSynchronize(a4);
  _InterlockedDecrement(v5);
  return result;
}
