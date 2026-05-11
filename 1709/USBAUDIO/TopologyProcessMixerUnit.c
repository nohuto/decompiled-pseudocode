/*
 * XREFs of TopologyProcessMixerUnit @ 0x1C0016550
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008440 (memset.c)
 *     PropertyInitializeMixerControlRange @ 0x1C0019A20 (PropertyInitializeMixerControlRange.c)
 */

__int64 __fastcall TopologyProcessMixerUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6)
{
  _DWORD *v6; // rsi
  NTSTATUS v7; // ebx
  int v9; // ecx
  __int64 v10; // r15
  unsigned int v11; // r8d
  _DWORD *v12; // r12
  int v13; // r10d
  __int64 v14; // r9
  int *v15; // rdx
  int v16; // eax
  SIZE_T v17; // rbp
  char *PoolWithTag; // r14
  char *v19; // r13
  unsigned int v20; // ebp
  int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // r10
  char *v24; // rdx
  int v25; // r12d
  unsigned int v26; // r14d
  unsigned int v27; // ebp
  __int64 v28; // r15
  unsigned int v29; // esi
  NTSTATUS v30; // eax
  int v31; // ecx
  unsigned int v32; // edx
  __int64 v33; // rcx
  _DWORD *v34; // rcx
  unsigned int v35; // eax
  int v37; // [rsp+20h] [rbp-88h]
  char *v38; // [rsp+28h] [rbp-80h]
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int64 v40; // [rsp+40h] [rbp-68h]
  __int64 v41; // [rsp+48h] [rbp-60h]
  _DWORD *v42; // [rsp+50h] [rbp-58h]
  int v44; // [rsp+B8h] [rbp+10h]
  unsigned int v45; // [rsp+C0h] [rbp+18h]
  int i; // [rsp+C8h] [rbp+20h]

  v6 = a5;
  v45 = 0;
  v7 = -1073741438;
  v44 = 7;
  v9 = 0;
  v10 = a3 + 152LL * *a5;
  v11 = *(_DWORD *)(a2 + 32);
  v41 = v10;
  v12 = (_DWORD *)(a4 + 16LL * (unsigned int)*a6);
  v39 = *(_QWORD *)(a2 + 72);
  if ( v11 )
  {
    v7 = 0;
    v13 = *(_DWORD *)(a2 + 24);
    v14 = v11;
    v15 = (int *)(*(_QWORD *)(a2 + 56) + 4LL);
    do
    {
      v16 = *v15;
      v15 += 3;
      v9 += v13 * v16;
      --v14;
    }
    while ( v14 );
    if ( !v9 )
      v7 = -1073741438;
  }
  if ( v7 >= 0 )
  {
    v17 = 32 * v9 + 24 * v11;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v17, 0x41627845u);
    v38 = PoolWithTag;
    if ( !PoolWithTag )
      v7 = -1073741670;
    if ( v7 >= 0 )
    {
      v19 = &PoolWithTag[24 * *(unsigned int *)(a2 + 32)];
      memset(PoolWithTag, 0, (unsigned int)v17);
      *(_DWORD *)(v10 + 88) = *(_DWORD *)(a2 + 28);
      v7 = 0;
      v20 = 0;
      v37 = 0;
      v21 = 0;
      for ( i = 0; v20 < *(_DWORD *)(a2 + 32); v37 = ++v20 )
      {
        if ( v7 < 0 )
          break;
        v22 = 3LL * v20;
        *v12 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20);
        v12[1] = 0;
        v12[2] = *v6;
        v12[3] = 1;
        v12 += 4;
        ++*v6;
        ++*a6;
        v40 = v22;
        v42 = v12;
        v23 = 152LL * v20 + v10;
        *(_DWORD *)(v23 + 76) = 4;
        *(_DWORD *)(v23 + 80) = *(_DWORD *)(a2 + 16);
        *(_QWORD *)(v23 + 8) = &KSNODETYPE_SUPERMIX;
        *(_QWORD *)(v23 + 16) = &KSNODETYPE_SUPERMIX;
        *(_QWORD *)(v23 + 136) = USBCntrlGetSetMixerLevels;
        v24 = &PoolWithTag[24 * v20];
        *(_QWORD *)(v23 + 128) = v24;
        *(_DWORD *)v24 = v20;
        *((_DWORD *)v24 + 1) = v21;
        *((_DWORD *)v24 + 2) = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20 + 4);
        *((_DWORD *)v24 + 3) = *(_DWORD *)(a2 + 24);
        *((_QWORD *)v24 + 2) = v19;
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20 + 4) )
        {
          v25 = v44;
          v26 = 0;
          v27 = v45;
          v28 = v23;
          do
          {
            if ( v7 < 0 )
              break;
            v29 = 0;
            if ( *(_DWORD *)(a2 + 24) )
            {
              do
              {
                if ( v7 < 0 )
                  break;
                *((_DWORD *)v19 + 1) = v26 + 1;
                *((_DWORD *)v19 + 2) = ++v29;
                v19[1] = (*(_BYTE *)(v27 + v39) & (unsigned __int8)(1 << v25)) != 0;
                v30 = PropertyInitializeMixerControlRange(a1, v28, v19);
                v31 = v25--;
                v7 = v30;
                if ( !v31 )
                {
                  ++v27;
                  v25 = 7;
                }
                v19 += 32;
              }
              while ( v29 < *(_DWORD *)(a2 + 24) );
              v21 = i;
              v22 = v40;
              v45 = v27;
              v44 = v25;
            }
            ++v21;
            ++v26;
            i = v21;
          }
          while ( v26 < *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4 * v22 + 4) );
          v6 = a5;
          PoolWithTag = v38;
          v20 = v37;
          v10 = v41;
          v12 = v42;
        }
      }
      v32 = 0;
      v33 = 152LL * v20;
      *(_DWORD *)(v33 + v10 + 76) = 6;
      *(_DWORD *)(v33 + v10 + 80) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(v33 + v10 + 8) = &KSNODETYPE_SUM;
      if ( *(_DWORD *)(a2 + 32) )
      {
        v34 = v12 + 2;
        do
        {
          v35 = *v6 - v32;
          *(v34 - 1) = 0;
          *(v34 - 2) = (v35 - 1) | 0x80000000;
          ++v32;
          *v34 = *v6;
          v34[1] = v32;
          v34 += 4;
          ++*a6;
        }
        while ( v32 < *(_DWORD *)(a2 + 32) );
        PoolWithTag = v38;
      }
      ++*v6;
      if ( v7 < 0 || (v7 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool), v7 < 0) )
        ExFreePool(PoolWithTag);
    }
  }
  return (unsigned int)v7;
}
