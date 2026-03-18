/*
 * XREFs of ?vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AED90
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002D078 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002D0F0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall vPlgWrite4(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  struct SURFACE *v8; // r14
  struct _PLGRUN *v9; // rdi
  int v10; // esi
  int v11; // r11d
  int v12; // eax
  __int64 k; // r9
  struct _PLGRUN *v14; // r12
  __int64 v15; // rax
  int v16; // ebx
  _BYTE *v17; // r8
  char v18; // r10
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r14
  char v21; // cl
  _BYTE *v22; // rax
  int v23; // eax
  int v24; // esi
  LONG v25; // r9d
  int v26; // r13d
  char v27; // si
  __int64 i; // r11
  struct _PLGRUN *v29; // r12
  __int64 v30; // r10
  int v31; // ebx
  _BYTE *v32; // rdx
  char v33; // r8
  unsigned __int64 v34; // rdi
  _BYTE *v35; // rax
  int v36; // eax
  int v37; // ecx
  LONG v38; // esi
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rcx
  bool j; // zf
  int v44; // edx
  LONG v45; // r14d
  __int64 v46; // rbx
  _BYTE *v47; // rbx
  char v48; // r13
  char v49; // di
  unsigned __int64 v50; // rsi
  _BYTE *v51; // rax
  int v52; // [rsp+30h] [rbp-50h]
  struct _RECTL rclBounds; // [rsp+38h] [rbp-48h] BYREF
  int v54; // [rsp+48h] [rbp-38h]
  LONG v55; // [rsp+4Ch] [rbp-34h]
  int v56; // [rsp+50h] [rbp-30h]
  unsigned __int64 v57; // [rsp+58h] [rbp-28h]
  unsigned __int64 v58; // [rsp+60h] [rbp-20h]
  __int64 v59; // [rsp+68h] [rbp-18h]
  struct _PLGRUN *v60; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v5 = *((_QWORD *)a3 + 9);
    v6 = v5 + *((unsigned int *)a3 + 16) - 1LL;
    v57 = v5;
    v58 = v6;
    v8 = a3;
    v9 = a2;
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        rclBounds = a4->rclBounds;
        while ( a1 < v9 )
        {
          v23 = *(_DWORD *)a1;
          v24 = *(_DWORD *)a1;
          v25 = *((_DWORD *)a1 + 1);
          v26 = *((_DWORD *)a1 + 2);
          a1 = (struct _PLGRUN *)((char *)a1 + 12);
          v27 = v23 | (16 * v24);
          for ( i = *((_QWORD *)v8 + 10) + v25 * *((_DWORD *)v8 + 22); v26; --v26 )
          {
            v29 = (struct _PLGRUN *)((char *)a1 + 8);
            if ( (struct _PLGRUN *)((char *)a1 + 8) > v9 )
              break;
            if ( v25 >= rclBounds.top && v25 < rclBounds.bottom )
            {
              v30 = *(int *)a1;
              v31 = *((_DWORD *)a1 + 1);
              v32 = (_BYTE *)(i + (v30 >> 1));
              v33 = (v30 & 1) != 0 ? 15 : -16;
              if ( v31 )
              {
                v34 = v58;
                do
                {
                  if ( (unsigned __int64)v32 < v5 || (unsigned __int64)v32 > v34 )
                    break;
                  if ( (int)v30 >= rclBounds.left && (int)v30 < rclBounds.right )
                  {
                    *v32 = v33 & v27 | *v32 & ~v33;
                    v5 = v57;
                  }
                  LODWORD(v30) = v30 + 1;
                  v35 = v32 + 1;
                  v33 = ~v33;
                  if ( v33 != -16 )
                    v35 = v32;
                  v32 = v35;
                  --v31;
                }
                while ( v31 );
                v9 = a2;
              }
            }
            ++v25;
            i += *((int *)v8 + 22);
            a1 = v29;
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        while ( a1 < v9 )
        {
          v36 = *(_DWORD *)a1;
          v37 = *(_DWORD *)a1;
          v38 = *((_DWORD *)a1 + 1);
          v39 = *((_DWORD *)a1 + 2);
          a1 = (struct _PLGRUN *)((char *)a1 + 12);
          v40 = v36 | (16 * v37);
          v41 = v38 * *((_DWORD *)v8 + 22);
          v56 = v40;
          v42 = *((_QWORD *)v8 + 10) + v41;
          for ( j = v39 == 0; ; j = v39 == 0 )
          {
            v59 = v42;
            v52 = v39;
            v55 = v38;
            if ( j )
              break;
            v60 = (struct _PLGRUN *)((char *)a1 + 8);
            if ( (struct _PLGRUN *)((char *)a1 + 8) > v9 )
              break;
            if ( v38 < rclBounds.top || v38 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v38);
              v42 = v59;
              v39 = v52;
            }
            if ( v38 >= rclBounds.top && v38 < rclBounds.bottom )
            {
              v44 = *((_DWORD *)a1 + 1);
              v45 = *(_DWORD *)a1;
              v46 = *(int *)a1;
              v54 = v44;
              v47 = (_BYTE *)(v42 + (v46 >> 1));
              v48 = (v45 & 1) != 0 ? 15 : -16;
              if ( v44 )
              {
                v49 = v56;
                v50 = v57;
                do
                {
                  if ( (unsigned __int64)v47 < v50 || (unsigned __int64)v47 > v58 )
                    break;
                  if ( v45 < rclBounds.left || v45 >= rclBounds.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v45);
                    v44 = v54;
                  }
                  if ( v45 >= rclBounds.left && v45 < rclBounds.right )
                    *v47 = v48 & v49 | *v47 & ~v48;
                  --v44;
                  v51 = v47 + 1;
                  ++v45;
                  v54 = v44;
                  v48 = ~v48;
                  if ( v48 != -16 )
                    v51 = v47;
                  v47 = v51;
                }
                while ( v44 );
                v9 = a2;
                v38 = v55;
                v42 = v59;
              }
              v39 = v52;
              v8 = a3;
            }
            ++v38;
            a1 = v60;
            v42 += *((int *)v8 + 22);
            --v39;
          }
        }
      }
    }
    else
    {
      while ( a1 < v9 )
      {
        v10 = *((_DWORD *)a1 + 2);
        v11 = *(_DWORD *)a1 | (16 * *(_DWORD *)a1);
        v12 = *((_DWORD *)v8 + 22) * *((_DWORD *)a1 + 1);
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        for ( k = *((_QWORD *)v8 + 10) + v12; v10; --v10 )
        {
          v14 = (struct _PLGRUN *)((char *)a1 + 8);
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v9 )
            break;
          v15 = *(int *)a1;
          v16 = *((_DWORD *)a1 + 1);
          v17 = (_BYTE *)(k + (v15 >> 1));
          v18 = (v15 & 1) != 0 ? 15 : -16;
          if ( v16 )
          {
            v19 = v57;
            v20 = v58;
            do
            {
              if ( (unsigned __int64)v17 < v19 || (unsigned __int64)v17 > v20 )
                break;
              v21 = v18 & v11 | ~v18 & *v17;
              v18 = ~v18;
              *v17 = v21;
              v22 = v17 + 1;
              if ( v18 != -16 )
                v22 = v17;
              v17 = v22;
              --v16;
            }
            while ( v16 );
            v9 = a2;
            v8 = a3;
          }
          a1 = v14;
          k += *((int *)v8 + 22);
        }
      }
    }
  }
}
