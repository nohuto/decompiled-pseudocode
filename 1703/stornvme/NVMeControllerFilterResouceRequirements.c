/*
 * XREFs of NVMeControllerFilterResouceRequirements @ 0x1C000480C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C10 (NVMeHwAdapterControl.c)
 * Callees:
 *     GetProcessorGroupInformation @ 0x1C000333C (GetProcessorGroupInformation.c)
 *     memmove @ 0x1C0012040 (memmove.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

char __fastcall NVMeControllerFilterResouceRequirements(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  int v6; // r14d
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // ecx
  int v15; // r10d
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // ecx
  unsigned int i; // edx
  __int64 v31; // r8
  __int64 v32; // rax
  const void *v33; // rdx
  unsigned int v34; // edx

  v5 = 0;
  v6 = 0;
  LOBYTE(v8) = GetProcessorGroupInformation(a1, a2, a3, a4);
  if ( (_BYTE)v8 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(_DWORD *)(v9 + 36);
    v11 = v10;
    if ( v10 )
    {
      v12 = v9 + 41;
      v13 = v10;
      do
      {
        if ( *(_BYTE *)v12 == 2
          && (*(_BYTE *)(v12 + 3) & 3) != 0
          && *(_DWORD *)(v12 + 7) == -2
          && *(_DWORD *)(v12 + 11) == -2 )
        {
          ++v5;
        }
        else if ( *(_BYTE *)v12 == 1 && (*(_BYTE *)(v12 + 3) & 1) != 0 )
        {
          ++v6;
        }
        v12 += 32LL;
        --v13;
      }
      while ( v13 );
    }
    v14 = *(unsigned __int16 *)(a1 + 162);
    if ( v5 > v14 + 1 )
    {
      v15 = 0;
      v11 = v14 - v5 + v10 + 1;
      v16 = 0;
      v17 = 0;
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
      if ( v10 )
      {
        do
        {
          v19 = 32LL * v16;
          if ( *(_BYTE *)(v19 + v9 + 41) == 2
            && (*(_BYTE *)(v19 + v9 + 44) & 3) != 0
            && *(_DWORD *)(v19 + v9 + 48) == -2
            && *(_DWORD *)(v19 + v9 + 52) == -2 )
          {
            if ( v18 )
            {
              while ( !_bittest64(&v18, v17) )
                ++v17;
            }
            *(_WORD *)(v19 + v9 + 44) |= 4u;
            *(_QWORD *)(v19 + v9 + 64) = 1LL << v17;
            v18 &= ~(1LL << v17);
            *(_DWORD *)(v19 + v9 + 48) = -2;
            *(_DWORD *)(v19 + v9 + 52) = -2;
            *(_WORD *)(v19 + v9 + 56) = 4;
            *(_WORD *)(v19 + v9 + 58) = v15;
            *(_DWORD *)(v19 + v9 + 60) = 3;
            if ( !v18 )
            {
              if ( v15 == *(unsigned __int16 *)(a1 + 160) - 1 )
              {
                ++v16;
                break;
              }
              v18 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL * (unsigned int)++v15 + 8);
              v17 = 0;
            }
          }
          ++v16;
        }
        while ( v16 < *(_DWORD *)(v9 + 36) );
      }
      v20 = 0;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
      while ( v16 < *(_DWORD *)(v9 + 36) )
      {
        v22 = 32LL * v16;
        if ( *(_BYTE *)(v22 + v9 + 41) == 2
          && (*(_BYTE *)(v22 + v9 + 44) & 3) != 0
          && *(_DWORD *)(v22 + v9 + 48) == -2
          && *(_DWORD *)(v22 + v9 + 52) == -2 )
        {
          if ( v21 )
          {
            while ( !_bittest64(&v21, v20) )
              ++v20;
          }
          v23 = 32LL * v16;
          *(_WORD *)(v23 + v9 + 44) |= 4u;
          ++v16;
          *(_DWORD *)(v23 + v9 + 48) = -2;
          *(_DWORD *)(v23 + v9 + 52) = -2;
          *(_DWORD *)(v23 + v9 + 56) = 4;
          *(_DWORD *)(v23 + v9 + 60) = 3;
          *(_QWORD *)(v23 + v9 + 64) = 1LL << v20;
          break;
        }
        ++v16;
      }
      v24 = *(_DWORD *)(v9 + 36);
      while ( v16 < v24 )
      {
        v25 = 32LL * v16;
        if ( *(_BYTE *)(v25 + v9 + 41) == 2
          && (*(_BYTE *)(v25 + v9 + 44) & 3) != 0
          && *(_DWORD *)(v25 + v9 + 48) == -2
          && *(_DWORD *)(v25 + v9 + 52) == -2 )
        {
          v26 = v16;
          if ( v16 < v24 )
          {
            do
            {
              v27 = 32LL * v16;
              if ( *(_BYTE *)(v27 + v9 + 41) != 2
                || (*(_BYTE *)(v27 + v9 + 44) & 3) == 0
                || *(_DWORD *)(v27 + v9 + 48) != -2
                || *(_DWORD *)(v27 + v9 + 52) != -2 )
              {
                if ( v16 != v26 )
                {
                  v28 = 32LL * v26;
                  *(_OWORD *)(v28 + v9 + 40) = *(_OWORD *)(v27 + v9 + 40);
                  *(_OWORD *)(v28 + v9 + 56) = *(_OWORD *)(v27 + v9 + 56);
                }
                ++v26;
              }
              ++v16;
            }
            while ( v16 < *(_DWORD *)(v9 + 36) );
          }
          break;
        }
        ++v16;
      }
    }
    if ( v6 )
    {
      v29 = 0;
      for ( i = 0; i < *(_DWORD *)(v9 + 36); ++i )
      {
        v31 = 32LL * i;
        if ( *(_BYTE *)(v31 + v9 + 41) != 1 || (*(_BYTE *)(v31 + v9 + 44) & 1) == 0 )
        {
          if ( i != v29 )
          {
            v32 = 32LL * v29;
            *(_OWORD *)(v32 + v9 + 40) = *(_OWORD *)(v31 + v9 + 40);
            *(_OWORD *)(v32 + v9 + 56) = *(_OWORD *)(v31 + v9 + 56);
          }
          ++v29;
        }
      }
      v11 += v29 - i;
    }
    v33 = (const void *)(32LL * *(unsigned int *)(v9 + 36) + v9 + 40);
    memmove(
      (void *)(32LL * v11 + v9 + 40),
      v33,
      (unsigned int)*(_QWORD *)(a2 + 8) + **(_DWORD **)(a2 + 8) - (_DWORD)v33);
    v8 = 32LL * (*(_DWORD *)(v9 + 36) - v11);
    v34 = (32 * (*(_DWORD *)(v9 + 36) - v11)) >> 2;
    if ( v34 )
      LOBYTE(v8) = (unsigned __int8)memset(
                                      (void *)(*(_QWORD *)(a2 + 8) + **(unsigned int **)(a2 + 8) - v8),
                                      0,
                                      4LL * v34);
    *(_DWORD *)(v9 + 36) = v11;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 9;
  }
  return v8;
}
