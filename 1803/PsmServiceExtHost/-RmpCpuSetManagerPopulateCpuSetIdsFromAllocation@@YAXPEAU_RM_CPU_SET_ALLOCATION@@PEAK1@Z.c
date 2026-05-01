/*
 * XREFs of ?RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z @ 0x180055E00
 * Callers:
 *     ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800561F8 (-RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(
        struct _RM_CPU_SET_ALLOCATION *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  __int128 v3; // xmm1
  __int64 v4; // rbx
  unsigned int v7; // r10d
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax
  _OWORD v19[10]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = *(_OWORD *)((char *)a1 + 120);
  v4 = 0LL;
  v19[0] = *(_OWORD *)((char *)a1 + 104);
  v7 = 0;
  v8 = *(_OWORD *)((char *)a1 + 136);
  v19[1] = v3;
  v9 = *(_OWORD *)((char *)a1 + 152);
  v19[2] = v8;
  v10 = *(_OWORD *)((char *)a1 + 168);
  v19[3] = v9;
  v11 = *(_OWORD *)((char *)a1 + 184);
  v19[4] = v10;
  v12 = *(_OWORD *)((char *)a1 + 200);
  v19[5] = v11;
  v19[6] = v12;
  v13 = *(_OWORD *)((char *)a1 + 232);
  v19[7] = *(_OWORD *)((char *)a1 + 216);
  v14 = *(_OWORD *)((char *)a1 + 248);
  v19[8] = v13;
  v19[9] = v14;
  v15 = (unsigned __int64 *)v19;
  do
  {
    v16 = *v15;
    if ( *v15 )
    {
      do
      {
        _BitScanForward64(&v17, v16);
        v16 &= ~(1LL << v17);
        a3[v4] = v17 | (v7 << 16) | 0x100;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( v16 );
      *v15 = 0LL;
    }
    v18 = *((_DWORD *)a1 + 66);
    if ( (_DWORD)v4 == v18 )
      break;
    ++v7;
    ++v15;
  }
  while ( v7 < 0x14 );
  *a2 = v18;
}
