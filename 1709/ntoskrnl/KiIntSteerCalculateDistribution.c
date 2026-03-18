/*
 * XREFs of KiIntSteerCalculateDistribution @ 0x140002B90
 * Callers:
 *     KeIntSteerPeriodic @ 0x140002920 (KeIntSteerPeriodic.c)
 * Callees:
 *     KiEnumerateNextProcessorNumber @ 0x14008FD70 (KiEnumerateNextProcessorNumber.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     KiIntSteerComputeCpuSet @ 0x14020B994 (KiIntSteerComputeCpuSet.c)
 */

__int64 __fastcall KiIntSteerCalculateDistribution(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  int v9; // r15d
  unsigned int v10; // r11d
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  ULONG_PTR *v16; // rcx
  __int64 v17; // rdx
  unsigned int i; // r8d
  __int64 v19; // rdi
  int j; // r12d
  __int64 v21; // rbx
  unsigned __int16 v22; // ax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edx
  unsigned __int16 Base; // [rsp+20h] [rbp+0h] BYREF
  unsigned __int8 v30; // [rsp+22h] [rbp+2h]
  unsigned __int16 *p_Base; // [rsp+28h] [rbp+8h]
  _QWORD v32[2]; // [rsp+30h] [rbp+10h] BYREF
  __int16 v33; // [rsp+40h] [rbp+20h]

  v3 = 4LL * a2;
  v5 = v3 + 15;
  if ( v3 + 15 < v3 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = alloca(v6);
  v8 = alloca(v6);
  v32[1] = *(_QWORD *)(a1 + 8);
  v9 = 0;
  v32[0] = a1;
  v33 = 0;
  p_Base = &Base;
  while ( (int)KiEnumerateNextProcessorNumber(&Base, v32) >= 0 )
    *((_DWORD *)&Base + v10) = KiProcessorNumberToIndexMappingTable[64 * Base + v30];
  v11 = 8LL * (unsigned int)KiIntTrackRootCount;
  v12 = v11 + 15;
  if ( v11 + 15 < v11 )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  v16 = (ULONG_PTR *)KiIntTrackRootList;
  v17 = (unsigned int)(KiIntTrackRootCount - 1);
  for ( i = 0; v16 != &KiIntTrackRootList; v16 = (ULONG_PTR *)*v16 )
  {
    if ( v16[24] )
    {
      v26 = i++;
      *((_QWORD *)&Base + v26) = v16;
    }
    else
    {
      *((_QWORD *)&Base + v17) = v16;
      v17 = (unsigned int)(v17 - 1);
    }
  }
  qsort(&Base, i, 8uLL, KiIntSteerLoadCompare);
  v19 = 0LL;
  for ( j = 1; (unsigned int)v19 < KiIntTrackRootCount; v19 = (unsigned int)(v19 + 1) )
  {
    v21 = *((_QWORD *)&Base + v19);
    if ( *(_BYTE *)(v21 + 132)
      && (!*(_QWORD *)(v21 + 136) || (int)KiIntSteerComputeCpuSet(*((_QWORD *)&Base + v19)) < 0) )
    {
      if ( *(_QWORD *)(v21 + 192)
        || ((v22 = *(_WORD *)(v21 + 168), *(_WORD *)a1 <= v22)
          ? (v23 = 0LL)
          : (v23 = *(_QWORD *)(v21 + 160) & *(_QWORD *)(a1 + 8LL * v22 + 8)),
            v24 = *(_QWORD *)(v21 + 160),
            v23 != v24) )
      {
        v27 = (unsigned int)v9;
        v9 += j;
        v28 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)&p_Base[2 * v27]];
        *(_DWORD *)(v21 + 186) = 0;
        *(_WORD *)(v21 + 190) = 0;
        *(_WORD *)(v21 + 184) = v28 >> 6;
        *(_QWORD *)(v21 + 176) = 1LL << (v28 & 0x3F);
        if ( v9 >= a2 )
        {
          j = -1;
          v9 = a2 - 1;
        }
        if ( v9 < 0 )
        {
          j = 1;
          v9 = 0;
        }
      }
      else
      {
        *(_QWORD *)(v21 + 176) = v24;
      }
    }
  }
  return 0LL;
}
