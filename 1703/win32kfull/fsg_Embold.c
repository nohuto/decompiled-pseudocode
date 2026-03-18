/*
 * XREFs of fsg_Embold @ 0x1C02C6F38
 * Callers:
 *     fsg_GridFit @ 0x1C02C7B38 (fsg_GridFit.c)
 * Callees:
 *     EmboldPoint @ 0x1C02C55D8 (EmboldPoint.c)
 */

__int64 __fastcall fsg_Embold(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  unsigned __int16 v5; // ax
  int v6; // r15d
  __int64 v7; // r12
  __int64 v9; // r10
  __int16 v10; // dx
  __int64 v11; // r8
  int v12; // r11d
  __int16 v13; // dx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax
  int v17; // r11d
  int v18; // eax
  int v19; // r14d
  int v20; // r13d
  int v21; // r9d
  int v22; // r14d
  int v23; // r13d
  __int64 v24; // rcx
  __int64 v25; // r11
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // r8d
  __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // r9d
  int v34; // ecx
  int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // [rsp+70h] [rbp-21h]
  BOOL v39; // [rsp+78h] [rbp-19h]
  int v40; // [rsp+7Ch] [rbp-15h]
  unsigned int v41; // [rsp+80h] [rbp-11h]
  int v42; // [rsp+8Ch] [rbp-5h]
  __int64 v43; // [rsp+90h] [rbp-1h]
  __int64 v44; // [rsp+98h] [rbp+7h]
  __int64 v45; // [rsp+A0h] [rbp+Fh]
  int v46; // [rsp+A8h] [rbp+17h]
  int v47; // [rsp+F0h] [rbp+5Fh]
  int v49; // [rsp+108h] [rbp+77h]
  unsigned int v50; // [rsp+110h] [rbp+7Fh]

  v5 = *(_WORD *)(a2 + 446);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v46 = 0;
  v9 = a2;
  v39 = v5 == 1;
  if ( a5 )
    v39 = v5 <= 1u;
  v10 = *(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1));
  v11 = (unsigned __int16)(v10 + 2);
  v12 = *(_DWORD *)(*(_QWORD *)v7 + 4 * v11);
  if ( v12 != *(_DWORD *)(*(_QWORD *)v7 + 4LL * (unsigned __int16)(v10 + 1)) )
    *(_DWORD *)(*(_QWORD *)v7 + 4 * v11) = v12 + 64;
  v13 = *(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1));
  v14 = *(_QWORD *)(v7 + 8);
  v15 = (unsigned __int16)(v13 + 4);
  result = (unsigned __int16)(v13 + 3);
  v17 = *(_DWORD *)(v14 + 4 * v15);
  if ( v17 != *(_DWORD *)(v14 + 4 * result) )
  {
    result = (unsigned int)(v17 - 64);
    *(_DWORD *)(v14 + 4 * v15) = result;
  }
  if ( !a4 )
  {
    if ( a3 )
    {
      v18 = *(unsigned __int16 *)(v9 + 444) >> 1;
      v19 = *(unsigned __int16 *)(v9 + 446) >> 1;
      v20 = *(unsigned __int16 *)(v9 + 446) - v19;
      v21 = (*(unsigned __int16 *)(v9 + 444) - v18) << 6;
      v22 = v19 << 6;
      result = (unsigned int)(v18 << 6);
      v23 = v20 << 6;
    }
    else
    {
      v22 = 32 * *(unsigned __int16 *)(v9 + 446);
      result = 32 * (unsigned int)*(unsigned __int16 *)(v9 + 444);
      v23 = v22;
      v21 = 32 * *(unsigned __int16 *)(v9 + 444);
    }
    v49 = v21;
    v47 = result;
    if ( *(__int16 *)(v7 + 80) > 0 )
    {
      v24 = 0LL;
      v44 = 0LL;
      do
      {
        v25 = (unsigned int)*(__int16 *)(*(_QWORD *)(v7 + 56) + 2 * v24);
        v41 = *(__int16 *)(*(_QWORD *)(v7 + 64) + 2 * v24);
        v26 = v41;
        if ( v41 - (unsigned int)v25 >= 2 )
        {
          v27 = *(_QWORD *)(v7 + 8);
          v40 = *(_BYTE *)(*(_QWORD *)(v7 + 88) + v24) & 1;
          LODWORD(v45) = *(_DWORD *)(*(_QWORD *)v7 + 4 * v25);
          HIDWORD(v45) = *(_DWORD *)(v27 + 4 * v25);
          v28 = v45;
          v29 = (unsigned int)(v25 + 1);
          v42 = HIDWORD(v45);
          v30 = *(_DWORD *)(*(_QWORD *)v7 + 4 * v29);
          HIDWORD(v38) = *(_DWORD *)(v27 + 4 * v29);
          LODWORD(v38) = v30;
          if ( (unsigned int)v25 <= v41 )
          {
            HIDWORD(v43) = *(_DWORD *)(v27 + 4LL * v41);
            LODWORD(v43) = *(_DWORD *)(*(_QWORD *)v7 + 4LL * v41);
            v31 = v43;
            do
            {
              v32 = v25;
              v50 = v25;
              if ( v30 == (_DWORD)v28 )
              {
                v33 = v25;
                v34 = v42;
                do
                {
                  if ( HIDWORD(v38) != v34 || v33 >= v26 )
                    break;
                  if ( ++v33 < v26 )
                  {
                    v36 = v33 + 1;
                    v35 = *(_DWORD *)(*(_QWORD *)v7 + 4 * v36);
                    LODWORD(v38) = v35;
                    v34 = v42;
                    HIDWORD(v38) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v36);
                  }
                  else
                  {
                    v38 = v45;
                    v35 = v45;
                  }
                }
                while ( v35 == (_DWORD)v28 );
                v50 = v33;
                v32 = v33;
                v21 = v49;
              }
              EmboldPoint(v25, v32, v39, v40, v31, v28, v38, v23, v22, v47, v21, *(_DWORD *)(v9 + 448), (_QWORD *)v7);
              v31 = v28;
              LODWORD(v25) = v50 + 1;
              v42 = HIDWORD(v38);
              v28 = v38;
              v26 = v41;
              if ( v50 + 1 < v41 )
              {
                v37 = v50 + 2;
                v30 = *(_DWORD *)(*(_QWORD *)v7 + 4 * v37);
                LODWORD(v38) = v30;
                HIDWORD(v38) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v37);
              }
              else
              {
                v38 = v45;
                v30 = v45;
              }
              v21 = v49;
              v9 = a2;
            }
            while ( (unsigned int)v25 <= v41 );
            v6 = v46;
          }
          v24 = v44;
        }
        result = (unsigned int)*(__int16 *)(v7 + 80);
        ++v6;
        v21 = v49;
        ++v24;
        v46 = v6;
        v44 = v24;
      }
      while ( v6 < (int)result );
    }
  }
  return result;
}
