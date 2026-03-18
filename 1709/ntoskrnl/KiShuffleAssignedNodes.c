/*
 * XREFs of KiShuffleAssignedNodes @ 0x14086B91C
 * Callers:
 *     KiPerformGroupConfiguration @ 0x14082F088 (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiShuffleAssignedNodes(__int64 *a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned __int16 v8; // bx
  char v9; // r10
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // rax
  unsigned __int16 v13; // dx
  unsigned __int16 i; // r11
  __int64 v15; // r13
  unsigned __int16 v16; // r10
  unsigned __int16 v17; // si
  int v18; // ecx
  unsigned __int16 v19; // dx
  int v20; // eax
  unsigned int v21; // ebp
  unsigned __int16 v22; // r9
  __int64 v23; // rdx
  unsigned __int16 v24; // r9
  __int64 v25; // rdx
  unsigned int v26; // r10d
  unsigned __int16 v27; // r9
  __int64 v28; // rdx
  unsigned __int16 v29; // r9
  __int64 v30; // rdx
  unsigned int v31; // ebp
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // r9d
  __int16 v36; // [rsp+0h] [rbp-68h]
  unsigned __int16 v37; // [rsp+2h] [rbp-66h]
  unsigned int v38; // [rsp+4h] [rbp-64h]
  int v39; // [rsp+8h] [rbp-60h]
  __int64 v40; // [rsp+10h] [rbp-58h]
  __int64 *v41; // [rsp+18h] [rbp-50h]
  __int64 *v42; // [rsp+20h] [rbp-48h]
  __int64 v43; // [rsp+28h] [rbp-40h]
  char v44; // [rsp+78h] [rbp+10h]

  v4 = a3;
  LODWORD(result) = 0;
  v39 = 0;
  do
  {
    v44 = 0;
    v8 = 0;
    v37 = 0;
    v9 = 0;
    if ( a2 )
    {
      v10 = a1;
      v42 = a1;
      while ( 1 )
      {
        v11 = *v10;
        v40 = *v10;
        if ( (*(_BYTE *)(*v10 + 173) & 2) == 0 )
          goto LABEL_46;
        v12 = a1;
        v36 = 64;
        v41 = a1;
        v13 = 64;
        v38 = 0;
        for ( i = 0; i < a2; ++i )
        {
          v15 = *v12;
          v43 = *v12;
          if ( (*(_BYTE *)(*v12 + 173) & 2) != 0 && v8 != i )
          {
            v16 = *(_WORD *)(v11 + 144);
            v17 = *(_WORD *)(v15 + 144);
            if ( v16 != v17 )
            {
              if ( v8 >= i )
              {
                v20 = *(unsigned __int8 *)(v11 + 172);
                v19 = *(_WORD *)(v11 + 144);
                v18 = *(unsigned __int8 *)(v15 + 172);
              }
              else
              {
                v18 = *(unsigned __int8 *)(v11 + 172);
                v19 = *(_WORD *)(v15 + 144);
                v20 = *(unsigned __int8 *)(v15 + 172);
              }
              if ( *(_DWORD *)(v4 + 4LL * v19) >= (unsigned int)(v18 - v20) )
              {
                v21 = 0;
                v22 = 0;
                do
                {
                  if ( v22 != v8 )
                  {
                    v23 = a1[v22];
                    if ( *(_WORD *)(v23 + 144) == v16 && (*(_BYTE *)(v23 + 173) & 2) != 0 )
                      v21 += *((_DWORD *)KeNodeDistance
                             + *(unsigned __int16 *)(v23 + 146)
                             + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v11 + 146))
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v16) - 1);
                  }
                  ++v22;
                }
                while ( v22 < a2 );
                v24 = 0;
                do
                {
                  if ( v24 != i )
                  {
                    v25 = a1[v24];
                    if ( *(_WORD *)(v25 + 144) == v17 && (*(_BYTE *)(v25 + 173) & 2) != 0 )
                      v21 += *((_DWORD *)KeNodeDistance
                             + *(unsigned __int16 *)(v25 + 146)
                             + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v43 + 146))
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v17) - 1);
                  }
                  ++v24;
                }
                while ( v24 < a2 );
                v26 = 0;
                v27 = 0;
                do
                {
                  if ( v27 != i )
                  {
                    v28 = a1[v27];
                    if ( *(_WORD *)(v28 + 144) == v17 && (*(_BYTE *)(v28 + 173) & 2) != 0 )
                      v26 += *((_DWORD *)KeNodeDistance
                             + *(unsigned __int16 *)(v28 + 146)
                             + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v40 + 146))
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v17) - 1);
                  }
                  ++v27;
                }
                while ( v27 < a2 );
                v8 = v37;
                v29 = 0;
                do
                {
                  if ( v29 != v37 )
                  {
                    v30 = a1[v29];
                    if ( *(_WORD *)(v30 + 144) == *(_WORD *)(v40 + 144) && (*(_BYTE *)(v30 + 173) & 2) != 0 )
                      v26 += *((_DWORD *)KeNodeDistance
                             + *(unsigned __int16 *)(v30 + 146)
                             + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v43 + 146))
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * *(unsigned __int16 *)(v40 + 144)) - 1);
                  }
                  ++v29;
                }
                while ( v29 < a2 );
                v11 = v40;
                if ( v26 < v21 )
                {
                  v31 = v21 - v26;
                  if ( v38 < v31 )
                  {
                    v13 = i;
                    v38 = v31;
                    v4 = a3;
                    v36 = i;
                    goto LABEL_42;
                  }
                }
                v4 = a3;
              }
              v13 = v36;
            }
          }
LABEL_42:
          v12 = ++v41;
        }
        if ( v13 == 64 )
        {
          v9 = v44;
        }
        else
        {
          v32 = *(unsigned __int16 *)(v11 + 144);
          v33 = a1[v13];
          v9 = 1;
          v44 = 1;
          v34 = *(unsigned __int16 *)(v33 + 144);
          *(_WORD *)(v11 + 144) = v34;
          *(_WORD *)(v33 + 144) = v32;
          LODWORD(v33) = *(unsigned __int8 *)(v33 + 172);
          v35 = *(unsigned __int8 *)(v11 + 172);
          *(_DWORD *)(v4 + 4 * v32) += v33 - v35;
          *(_DWORD *)(v4 + 4 * v34) += v35 - v33;
        }
LABEL_46:
        ++v8;
        v10 = v42 + 1;
        v37 = v8;
        ++v42;
        if ( v8 >= a2 )
        {
          LODWORD(result) = v39;
          break;
        }
      }
    }
    result = (unsigned int)(result + 1);
    v39 = result;
  }
  while ( v9 && (unsigned int)result < 0xA );
  return result;
}
