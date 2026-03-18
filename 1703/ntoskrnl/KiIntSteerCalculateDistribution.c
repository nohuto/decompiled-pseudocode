/*
 * XREFs of KiIntSteerCalculateDistribution @ 0x1400451A0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     KiIntSteerComputeCpuSet @ 0x1402057F4 (KiIntSteerComputeCpuSet.c)
 */

__int64 __fastcall KiIntSteerCalculateDistribution(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  unsigned __int64 v8; // r8
  void *v9; // rsp
  unsigned int v10; // edi
  unsigned int v11; // r9d
  unsigned __int16 v12; // dx
  unsigned __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  void *v20; // rsp
  ULONG_PTR *v21; // rcx
  __int64 v22; // rdx
  unsigned int i; // r8d
  int v24; // r15d
  int v25; // r12d
  __int64 v26; // rbx
  unsigned __int16 v27; // ax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 Base; // [rsp+20h] [rbp+0h] BYREF

  v3 = 4LL * a2;
  v5 = v3 + 15;
  if ( v3 + 15 < v3 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = alloca(v6);
  v8 = *((_QWORD *)a1 + 1);
  v9 = alloca(v6);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  Base = (__int64)&Base;
  while ( v8 )
  {
LABEL_5:
    _BitScanForward64(&v13, v8);
    v8 &= ~(1LL << v13);
    v14 = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int64)v12 + (unsigned __int8)v13];
    v15 = v11++;
    *((_DWORD *)&Base + v15) = v14;
  }
  while ( ++v12 < (unsigned int)*a1 )
  {
    v8 = *(_QWORD *)&a1[4 * v12 + 4];
    if ( v8 )
      goto LABEL_5;
  }
  v16 = 8LL * (unsigned int)KiIntTrackRootCount;
  v17 = v16 + 15;
  if ( v16 + 15 < v16 )
    v17 = 0xFFFFFFFFFFFFFF0LL;
  v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
  v19 = alloca(v18);
  v20 = alloca(v18);
  v21 = (ULONG_PTR *)KiIntTrackRootList;
  v22 = (unsigned int)(KiIntTrackRootCount - 1);
  for ( i = 0; v21 != &KiIntTrackRootList; v21 = (ULONG_PTR *)*v21 )
  {
    if ( v21[24] )
    {
      v31 = i++;
      *(&Base + v31) = (__int64)v21;
    }
    else
    {
      *(&Base + v22) = (__int64)v21;
      v22 = (unsigned int)(v22 - 1);
    }
  }
  qsort(&Base, i, 8uLL, (int (__cdecl *)(const void *, const void *))KiIntSteerLoadCompare);
  v24 = 0;
  v25 = 1;
  if ( KiIntTrackRootCount )
  {
    do
    {
      v26 = *(&Base + v10);
      if ( *(_BYTE *)(v26 + 132) && (!*(_QWORD *)(v26 + 136) || (int)KiIntSteerComputeCpuSet(*(&Base + v10)) < 0) )
      {
        if ( *(_QWORD *)(v26 + 192)
          || ((v27 = *(_WORD *)(v26 + 168), *a1 <= v27)
            ? (v28 = 0LL)
            : (v28 = *(_QWORD *)(v26 + 160) & *(_QWORD *)&a1[4 * v27 + 4]),
              v29 = *(_QWORD *)(v26 + 160),
              v28 != v29) )
        {
          v32 = (unsigned int)v24;
          v24 += v25;
          v33 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(Base + 4 * v32)];
          *(_DWORD *)(v26 + 186) = 0;
          *(_WORD *)(v26 + 190) = 0;
          *(_WORD *)(v26 + 184) = v33 >> 6;
          *(_QWORD *)(v26 + 176) = 1LL << (v33 & 0x3F);
          if ( v24 >= a2 )
          {
            v25 = -1;
            v24 = a2 - 1;
          }
          if ( v24 < 0 )
          {
            v25 = 1;
            v24 = 0;
          }
        }
        else
        {
          *(_QWORD *)(v26 + 176) = v29;
        }
      }
      ++v10;
    }
    while ( v10 < KiIntTrackRootCount );
  }
  return 0LL;
}
