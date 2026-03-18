/*
 * XREFs of AdjustLinearity @ 0x1C01A23F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AdjustLinearity(__int64 a1, signed int *a2, signed int *a3, int *a4)
{
  int v8; // edx
  unsigned int v9; // r10d
  int v10; // ecx
  int v11; // r9d
  int v12; // r8d
  int v13; // r11d
  signed int v14; // r9d
  signed int v15; // r10d
  int v16; // r12d
  int v17; // esi
  int v18; // ebx
  int v19; // r13d
  int v20; // r8d
  int v21; // edx
  int v22; // edi
  int v23; // r11d
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int16 v26; // di
  unsigned __int16 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int16 v30; // r8
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // cx
  unsigned __int16 v33; // dx
  unsigned __int16 v34; // r11
  unsigned __int16 v35; // bx
  int v36; // r8d
  int v37; // r10d
  int v38; // r8d
  int v39; // r9d
  unsigned __int16 v40; // [rsp+0h] [rbp-78h]
  unsigned __int16 v41; // [rsp+6h] [rbp-72h]
  unsigned __int16 v42; // [rsp+8h] [rbp-70h]
  unsigned __int16 v43; // [rsp+Ch] [rbp-6Ch]
  signed int v44; // [rsp+14h] [rbp-64h]
  signed int v45; // [rsp+18h] [rbp-60h]
  int v46; // [rsp+1Ch] [rbp-5Ch]
  signed int v47; // [rsp+20h] [rbp-58h]
  __int64 v48; // [rsp+28h] [rbp-50h]
  __int64 v49; // [rsp+30h] [rbp-48h]
  __int64 v50; // [rsp+38h] [rbp-40h]

  if ( a2 )
  {
    if ( a3 )
    {
      if ( a1 )
      {
        v8 = *(_DWORD *)a1;
        v46 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 <= 0x8000u )
        {
          v9 = *(_DWORD *)(a1 + 4);
          v47 = v9;
          if ( v9 <= 0x8000 )
          {
            if ( a4 )
            {
              v10 = a4[2];
              v11 = *a4;
              if ( v11 == v10 + 1 )
                return;
              v12 = a4[3];
              v13 = a4[1];
              if ( v13 == v12 + 1 )
                return;
              v14 = v8 * (*a2 - v11) / (unsigned int)(v10 - v11 + 1);
              v15 = v9 * (*a3 - v13) / (v12 - v13 + 1);
            }
            else
            {
              v14 = *a2;
              v15 = *a3;
            }
            v16 = *(unsigned __int16 *)(a1 + 10);
            v17 = 0;
            v18 = *(unsigned __int16 *)(a1 + 12);
            v19 = *(unsigned __int16 *)(a1 + 8);
            v44 = v15;
            v45 = v14;
            v20 = v19 + v16 * v18;
            v21 = v19 + v18 * (v16 + 1);
            do
            {
              if ( v14 >= *(unsigned __int16 *)(a1 + 8LL * v20 + 20)
                || v14 >= *(unsigned __int16 *)(a1 + 8LL * v21 + 20) )
              {
                v22 = *(unsigned __int16 *)(a1 + 8LL * (v20 + 1) + 20) <= v14
                   && *(unsigned __int16 *)(a1 + 8LL * (v21 + 1) + 20) <= v14
                   && v19 + 2 < v18;
              }
              else
              {
                v22 = -(v19 != 0);
              }
              if ( v15 >= *(unsigned __int16 *)(a1 + 8LL * v20 + 22)
                || v15 >= *(unsigned __int16 *)(a1 + 8LL * (v20 + 1) + 22) )
              {
                v23 = *(unsigned __int16 *)(a1 + 8LL * v21 + 22) <= v15
                   && *(unsigned __int16 *)(a1 + 8LL * (v21 + 1) + 22) <= v15
                   && v16 + 2 < *(unsigned __int16 *)(a1 + 14);
              }
              else
              {
                v23 = -(v16 != 0);
              }
              if ( !v22 && !v23 )
                break;
              v16 += v23;
              v19 += v22;
              ++v17;
              v20 = v19 + v16 * v18;
              v21 = v19 + v18 * (v16 + 1);
            }
            while ( v17 <= v18 + *(unsigned __int16 *)(a1 + 14) );
            v24 = v21;
            v25 = v20;
            v50 = v21;
            v48 = v20;
            v26 = *(_WORD *)(a1 + 8LL * v21 + 22);
            v27 = *(_WORD *)(a1 + 8LL * v20 + 22);
            if ( v26 != v27 )
            {
              v28 = v21 + 1;
              v29 = v20 + 1;
              v49 = v29;
              v42 = *(_WORD *)(a1 + 8 * v28 + 22);
              v41 = *(_WORD *)(a1 + 8 * v29 + 22);
              if ( v42 != v41 )
              {
                v30 = *(_WORD *)(a1 + 8 * v29 + 20);
                v31 = *(_WORD *)(a1 + 8 * v25 + 20);
                if ( v30 != v31 )
                {
                  v32 = *(_WORD *)(a1 + 8 * v28 + 20);
                  v33 = *(_WORD *)(a1 + 8 * v24 + 20);
                  if ( v32 != v33 )
                  {
                    *(_WORD *)(a1 + 8) = v19;
                    *(_WORD *)(a1 + 10) = v16;
                    v40 = v31 + (v15 - v27) * (v33 - v31) / (v26 - v27);
                    v43 = v30 + (v15 - v41) * (v32 - v30) / (v42 - v41);
                    v34 = v27 + (v41 - v27) * (v45 - v31) / (v30 - v31);
                    v35 = v26 + (v42 - v26) * (v45 - v33) / (v32 - v33);
                    if ( v43 != v40 && v35 != v34 )
                    {
                      v36 = *(unsigned __int16 *)(a1 + 8 * v48 + 16);
                      v37 = v36 + (v45 - v40) * (*(unsigned __int16 *)(a1 + 8 * v49 + 16) - v36) / (v43 - v40);
                      v38 = *(unsigned __int16 *)(a1 + 8 * v48 + 18);
                      v39 = v38 + (v44 - v34) * (*(unsigned __int16 *)(a1 + 8 * v50 + 18) - v38) / (v35 - v34);
                      if ( v37 >= 0 )
                      {
                        if ( v46 <= v37 )
                          v37 = v46 - 1;
                      }
                      else
                      {
                        v37 = 0;
                      }
                      if ( v39 >= 0 )
                      {
                        if ( v47 <= v39 )
                          v39 = v47 - 1;
                      }
                      else
                      {
                        v39 = 0;
                      }
                      if ( v46 )
                      {
                        if ( v47 )
                        {
                          *a2 = *a4 + v37 * (a4[2] - *a4 + 1) / (unsigned int)v46;
                          *a3 = a4[1] + (unsigned int)(v39 * (a4[3] - a4[1] + 1)) / *(_DWORD *)(a1 + 4);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
