/*
 * XREFs of ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AF3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002D078 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002D0F0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall vPlgWriteAND(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r13
  XCLIPOBJ *v5; // rdi
  struct _PLGRUN *v7; // r12
  struct _PLGRUN *v8; // rbx
  unsigned __int64 v9; // r14
  int v10; // esi
  int v11; // r10d
  int v12; // eax
  char v13; // r10
  __int64 j; // r8
  int v15; // edi
  int v16; // r11d
  char *v17; // rcx
  unsigned __int8 v18; // r9
  char v19; // dl
  LONG v20; // ebp
  int v21; // ecx
  int v22; // eax
  __int64 v23; // r8
  bool i; // zf
  __int64 v25; // rdi
  int v26; // edx
  __int64 v27; // rax
  char *v28; // rbx
  unsigned __int8 v29; // cl
  char v30; // si
  int v31; // r14d
  unsigned __int64 v32; // rbp
  unsigned __int8 v33; // [rsp+30h] [rbp-78h]
  int v34; // [rsp+34h] [rbp-74h]
  int v35; // [rsp+38h] [rbp-70h]
  LONG v36; // [rsp+3Ch] [rbp-6Ch]
  struct _RECTL si128; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-58h]
  int v39; // [rsp+58h] [rbp-50h]
  __int64 v40; // [rsp+60h] [rbp-48h]
  struct _PLGRUN *v41; // [rsp+68h] [rbp-40h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v5 = (XCLIPOBJ *)a4;
    v7 = a2;
    v8 = a1;
    v9 = *((unsigned int *)a3 + 16) + v4 - 1;
    v38 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( v8 < v7 )
      {
        v20 = *((_DWORD *)v8 + 1);
        v21 = *((_DWORD *)v8 + 2);
        v22 = -(*(_DWORD *)v8 != 0);
        v8 = (struct _PLGRUN *)((char *)v8 + 12);
        v39 = ~v22;
        v23 = *((_QWORD *)a3 + 10) + v20 * *((_DWORD *)a3 + 22);
        for ( i = v21 == 0; ; i = v21 == 0 )
        {
          v40 = v23;
          v34 = v21;
          v36 = v20;
          if ( i )
            break;
          v41 = (struct _PLGRUN *)((char *)v8 + 8);
          if ( (struct _PLGRUN *)((char *)v8 + 8) > v7 )
            break;
          if ( v20 < si128.top || v20 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan(v5, &si128, v20);
            v21 = v34;
            v23 = v40;
          }
          if ( v20 >= si128.top && v20 < si128.bottom )
          {
            v25 = *(int *)v8;
            v26 = *((_DWORD *)v8 + 1);
            v27 = *(_DWORD *)v8 & 7;
            v35 = v26;
            v28 = (char *)(v23 + (v25 >> 3));
            v29 = *((_BYTE *)&glyphBits + v27);
            v33 = v29;
            if ( (int)v25 < 0
              || (int)v25 >= *((_DWORD *)a3 + 14)
              || (unsigned __int64)v28 < v4
              || (unsigned __int64)v28 > v9 )
            {
              v31 = 0;
              v30 = 0;
            }
            else
            {
              v30 = *v28;
              v31 = 1;
            }
            if ( v26 >= 0 )
            {
              v32 = v38;
              do
              {
                if ( (unsigned __int64)v28 < v4 || (unsigned __int64)v28 > v32 )
                  break;
                if ( (int)v25 < si128.left || (int)v25 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v25);
                  v29 = v33;
                  v26 = v35;
                }
                if ( (int)v25 >= si128.left && (int)v25 < si128.right )
                  v30 &= ~(v29 & v39);
                --v26;
                LODWORD(v25) = v25 + 1;
                v29 >>= 1;
                v33 = v29;
                v35 = v26;
                if ( !v29 )
                {
                  if ( v31 )
                    *v28 = v30;
                  ++v28;
                  v29 = *((_BYTE *)&glyphBits + (v25 & 7));
                  v33 = v29;
                  if ( (int)v25 < 0
                    || (int)v25 >= *((_DWORD *)a3 + 14)
                    || (unsigned __int64)v28 < v4
                    || (unsigned __int64)v28 > v32 )
                  {
                    v31 = 0;
                    v30 = 0;
                  }
                  else
                  {
                    v30 = *v28;
                    v31 = 1;
                  }
                }
              }
              while ( v26 >= 0 );
              v20 = v36;
              v7 = a2;
              v23 = v40;
            }
            i = v31 == 0;
            v9 = v38;
            if ( i || (unsigned __int64)v28 < v4 )
            {
              v21 = v34;
              v5 = (XCLIPOBJ *)a4;
            }
            else
            {
              v5 = (XCLIPOBJ *)a4;
              v21 = v34;
              if ( (unsigned __int64)v28 <= v38 )
                *v28 = v30;
            }
          }
          ++v20;
          v8 = v41;
          v23 += *((int *)a3 + 22);
          --v21;
        }
      }
    }
    else if ( a1 < a2 )
    {
      do
      {
        v10 = *((_DWORD *)v8 + 2);
        v11 = -(*(_DWORD *)v8 != 0);
        v12 = *((_DWORD *)a3 + 22) * *((_DWORD *)v8 + 1);
        v8 = (struct _PLGRUN *)((char *)v8 + 12);
        v13 = ~(_BYTE)v11;
        for ( j = *((_QWORD *)a3 + 10) + v12; v10; --v10 )
        {
          if ( (struct _PLGRUN *)((char *)v8 + 8) > v7 )
            break;
          v15 = *(_DWORD *)v8;
          v16 = *((_DWORD *)v8 + 1);
          v17 = (char *)(j + ((__int64)*(int *)v8 >> 3));
          v18 = *((_BYTE *)&glyphBits + (*(_DWORD *)v8 & 7));
          if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v9 )
            v19 = 0;
          else
            v19 = *v17;
          if ( v16 < 0 )
          {
LABEL_20:
            if ( (unsigned __int64)v17 >= v4 && (unsigned __int64)v17 <= v9 )
              *v17 = v19;
          }
          else
          {
            while ( (unsigned __int64)v17 >= v4 )
            {
              if ( (unsigned __int64)v17 <= v9 )
              {
                --v16;
                LOBYTE(v15) = v15 + 1;
                v19 &= ~(v18 & v13);
                v18 >>= 1;
                if ( !v18 )
                {
                  *v17++ = v19;
                  if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v9 )
                    v19 = 0;
                  else
                    v19 = *v17;
                  v18 = *((_BYTE *)&glyphBits + (v15 & 7));
                }
                if ( v16 >= 0 )
                  continue;
              }
              goto LABEL_20;
            }
          }
          j += *((int *)a3 + 22);
          v8 = (struct _PLGRUN *)((char *)v8 + 8);
        }
      }
      while ( v8 < v7 );
    }
  }
}
