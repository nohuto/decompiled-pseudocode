/*
 * XREFs of KiShuffleAssignedNodes @ 0x1408E03CC
 * Callers:
 *     KiPerformGroupConfiguration @ 0x1408AC1C8 (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiShuffleAssignedNodes(__int64 *a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  char v8; // r10
  unsigned __int16 v9; // r11
  __int64 *v10; // rax
  __int64 v11; // r14
  __int64 *v12; // rax
  unsigned __int16 v13; // dx
  unsigned __int16 i; // r10
  __int64 v15; // r13
  unsigned __int16 v16; // bx
  unsigned __int16 v17; // r15
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
  unsigned __int16 v21; // ax
  unsigned int v22; // esi
  unsigned __int16 v23; // r9
  __int64 v24; // rdx
  unsigned __int16 v25; // r9
  __int64 v26; // rdx
  unsigned int v27; // ebx
  unsigned __int16 v28; // r9
  __int64 v29; // rdx
  unsigned __int16 v30; // r9
  __int64 v31; // rdx
  unsigned int v32; // esi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // r9d
  __int16 v37; // [rsp+0h] [rbp-68h]
  unsigned __int16 v38; // [rsp+2h] [rbp-66h]
  unsigned int v39; // [rsp+4h] [rbp-64h]
  int v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+10h] [rbp-58h]
  __int64 *v42; // [rsp+18h] [rbp-50h]
  __int64 *v43; // [rsp+20h] [rbp-48h]
  __int64 v44; // [rsp+28h] [rbp-40h]
  char v45; // [rsp+78h] [rbp+10h]

  v4 = a3;
  LODWORD(result) = 0;
  v40 = 0;
  do
  {
    v45 = 0;
    v8 = 0;
    v38 = 0;
    v9 = 0;
    if ( a2 )
    {
      v10 = a1;
      v43 = a1;
      do
      {
        v11 = *v10;
        v41 = *v10;
        if ( (*(_BYTE *)(*v10 + 173) & 2) != 0 )
        {
          v12 = a1;
          v37 = 64;
          v42 = a1;
          v13 = 64;
          v39 = 0;
          for ( i = 0; i < a2; ++i )
          {
            v15 = *v12;
            v44 = *v12;
            if ( (*(_BYTE *)(*v12 + 173) & 2) != 0 && v9 != i )
            {
              v16 = *(_WORD *)(v11 + 144);
              v17 = *(_WORD *)(v15 + 144);
              if ( v16 != v17 )
              {
                v18 = *(unsigned __int8 *)(v15 + 172);
                v19 = *(unsigned __int8 *)(v11 + 172);
                if ( v9 >= i )
                  v20 = v18 - v19;
                else
                  v20 = v19 - v18;
                v21 = *(_WORD *)(v15 + 144);
                if ( v9 >= i )
                  v21 = *(_WORD *)(v11 + 144);
                if ( *(_DWORD *)(v4 + 4LL * v21) >= v20 )
                {
                  v22 = 0;
                  v23 = 0;
                  do
                  {
                    if ( v23 != v9 )
                    {
                      v24 = a1[v23];
                      if ( *(_WORD *)(v24 + 144) == v16 && (*(_BYTE *)(v24 + 173) & 2) != 0 )
                        v22 += *((_DWORD *)KeNodeDistance
                               + *(unsigned __int16 *)(v24 + 146)
                               + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v11 + 146))
                             / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v16) - 1);
                    }
                    ++v23;
                  }
                  while ( v23 < a2 );
                  v25 = 0;
                  do
                  {
                    if ( v25 != i )
                    {
                      v26 = a1[v25];
                      if ( *(_WORD *)(v26 + 144) == v17 && (*(_BYTE *)(v26 + 173) & 2) != 0 )
                        v22 += *((_DWORD *)KeNodeDistance
                               + *(unsigned __int16 *)(v26 + 146)
                               + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v44 + 146))
                             / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v17) - 1);
                    }
                    ++v25;
                  }
                  while ( v25 < a2 );
                  v27 = 0;
                  v28 = 0;
                  do
                  {
                    if ( v28 != i )
                    {
                      v29 = a1[v28];
                      if ( *(_WORD *)(v29 + 144) == v17 && (*(_BYTE *)(v29 + 173) & 2) != 0 )
                        v27 += *((_DWORD *)KeNodeDistance
                               + *(unsigned __int16 *)(v29 + 146)
                               + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v41 + 146))
                             / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v17) - 1);
                    }
                    ++v28;
                  }
                  while ( v28 < a2 );
                  v9 = v38;
                  v30 = 0;
                  do
                  {
                    if ( v30 != v38 )
                    {
                      v31 = a1[v30];
                      if ( *(_WORD *)(v31 + 144) == *(_WORD *)(v41 + 144) && (*(_BYTE *)(v31 + 173) & 2) != 0 )
                        v27 += *((_DWORD *)KeNodeDistance
                               + *(unsigned __int16 *)(v31 + 146)
                               + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v44 + 146))
                             / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * *(unsigned __int16 *)(v41 + 144)) - 1);
                    }
                    ++v30;
                  }
                  while ( v30 < a2 );
                  v11 = v41;
                  v4 = a3;
                  if ( v27 >= v22 || (v32 = v22 - v27, v39 >= v32) )
                  {
                    v13 = v37;
                  }
                  else
                  {
                    v13 = i;
                    v39 = v32;
                    v37 = i;
                  }
                }
              }
            }
            v12 = ++v42;
          }
          if ( v13 == 64 )
          {
            v8 = v45;
          }
          else
          {
            v33 = *(unsigned __int16 *)(v11 + 144);
            v8 = 1;
            v45 = 1;
            v34 = a1[v13];
            v35 = *(unsigned __int16 *)(v34 + 144);
            *(_WORD *)(v11 + 144) = v35;
            *(_WORD *)(v34 + 144) = v33;
            LODWORD(v34) = *(unsigned __int8 *)(v34 + 172);
            v36 = *(unsigned __int8 *)(v11 + 172);
            *(_DWORD *)(v4 + 4 * v33) += v34 - v36;
            *(_DWORD *)(v4 + 4 * v35) += v36 - v34;
          }
        }
        ++v9;
        v10 = v43 + 1;
        v38 = v9;
        ++v43;
      }
      while ( v9 < a2 );
      LODWORD(result) = v40;
    }
    result = (unsigned int)(result + 1);
    v40 = result;
  }
  while ( v8 && (unsigned int)result < 0xA );
  return result;
}
