/*
 * XREFs of ?vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AF740
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002D078 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002D0F0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall vPlgWriteOR(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r13
  XCLIPOBJ *v5; // rdi
  struct _PLGRUN *v7; // r12
  struct _PLGRUN *v8; // rbx
  unsigned __int64 v9; // r14
  int v10; // edi
  int v11; // ebp
  int v12; // eax
  __int64 j; // r8
  int v14; // r11d
  int v15; // r10d
  char *v16; // rcx
  unsigned __int8 v17; // r9
  char v18; // dl
  LONG v19; // ebp
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r8
  bool i; // zf
  __int64 v24; // rdi
  int v25; // edx
  __int64 v26; // rax
  char *v27; // rbx
  unsigned __int8 v28; // cl
  char v29; // si
  int v30; // r14d
  unsigned __int64 v31; // rbp
  unsigned __int8 v32; // [rsp+30h] [rbp-78h]
  int v33; // [rsp+34h] [rbp-74h]
  int v34; // [rsp+38h] [rbp-70h]
  LONG v35; // [rsp+3Ch] [rbp-6Ch]
  struct _RECTL si128; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+58h] [rbp-50h]
  __int64 v39; // [rsp+60h] [rbp-48h]
  struct _PLGRUN *v40; // [rsp+68h] [rbp-40h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v5 = (XCLIPOBJ *)a4;
    v7 = a2;
    v8 = a1;
    v9 = *((unsigned int *)a3 + 16) + v4 - 1;
    v37 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( v8 < v7 )
      {
        v19 = *((_DWORD *)v8 + 1);
        v20 = *((_DWORD *)v8 + 2);
        v21 = -(*(_DWORD *)v8 != 0);
        v8 = (struct _PLGRUN *)((char *)v8 + 12);
        v38 = v21;
        v22 = *((_QWORD *)a3 + 10) + v19 * *((_DWORD *)a3 + 22);
        for ( i = v20 == 0; ; i = v20 == 0 )
        {
          v39 = v22;
          v33 = v20;
          v35 = v19;
          if ( i )
            break;
          v40 = (struct _PLGRUN *)((char *)v8 + 8);
          if ( (struct _PLGRUN *)((char *)v8 + 8) > v7 )
            break;
          if ( v19 < si128.top || v19 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan(v5, &si128, v19);
            v20 = v33;
            v22 = v39;
          }
          if ( v19 >= si128.top && v19 < si128.bottom )
          {
            v24 = *(int *)v8;
            v25 = *((_DWORD *)v8 + 1);
            v26 = *(_DWORD *)v8 & 7;
            v34 = v25;
            v27 = (char *)(v22 + (v24 >> 3));
            v28 = *((_BYTE *)&glyphBits + v26);
            v32 = v28;
            if ( (int)v24 < 0
              || (int)v24 >= *((_DWORD *)a3 + 14)
              || (unsigned __int64)v27 < v4
              || (unsigned __int64)v27 > v9 )
            {
              v30 = 0;
              v29 = 0;
            }
            else
            {
              v29 = *v27;
              v30 = 1;
            }
            if ( v25 >= 0 )
            {
              v31 = v37;
              do
              {
                if ( (unsigned __int64)v27 < v4 || (unsigned __int64)v27 > v31 )
                  break;
                if ( (int)v24 < si128.left || (int)v24 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v24);
                  v28 = v32;
                  v25 = v34;
                }
                if ( (int)v24 >= si128.left && (int)v24 < si128.right )
                  v29 |= v28 & v38;
                --v25;
                LODWORD(v24) = v24 + 1;
                v28 >>= 1;
                v32 = v28;
                v34 = v25;
                if ( !v28 )
                {
                  if ( v30 )
                    *v27 = v29;
                  ++v27;
                  v28 = *((_BYTE *)&glyphBits + (v24 & 7));
                  v32 = v28;
                  if ( (int)v24 < 0
                    || (int)v24 >= *((_DWORD *)a3 + 14)
                    || (unsigned __int64)v27 < v4
                    || (unsigned __int64)v27 > v31 )
                  {
                    v30 = 0;
                    v29 = 0;
                  }
                  else
                  {
                    v29 = *v27;
                    v30 = 1;
                  }
                }
              }
              while ( v25 >= 0 );
              v19 = v35;
              v7 = a2;
              v22 = v39;
            }
            i = v30 == 0;
            v9 = v37;
            if ( i || (unsigned __int64)v27 < v4 )
            {
              v20 = v33;
              v5 = (XCLIPOBJ *)a4;
            }
            else
            {
              v5 = (XCLIPOBJ *)a4;
              v20 = v33;
              if ( (unsigned __int64)v27 <= v37 )
                *v27 = v29;
            }
          }
          ++v19;
          v8 = v40;
          v22 += *((int *)a3 + 22);
          --v20;
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
        for ( j = *((_QWORD *)a3 + 10) + v12; v10; --v10 )
        {
          if ( (struct _PLGRUN *)((char *)v8 + 8) > v7 )
            break;
          v14 = *(_DWORD *)v8;
          v15 = *((_DWORD *)v8 + 1);
          v16 = (char *)(j + ((__int64)*(int *)v8 >> 3));
          v17 = *((_BYTE *)&glyphBits + (*(_DWORD *)v8 & 7));
          if ( (unsigned __int64)v16 < v4 || (unsigned __int64)v16 > v9 )
            v18 = 0;
          else
            v18 = *v16;
          if ( v15 < 0 )
          {
LABEL_20:
            if ( (unsigned __int64)v16 >= v4 && (unsigned __int64)v16 <= v9 )
              *v16 = v18;
          }
          else
          {
            while ( (unsigned __int64)v16 >= v4 )
            {
              if ( (unsigned __int64)v16 <= v9 )
              {
                --v15;
                LOBYTE(v14) = v14 + 1;
                v18 |= v17 & v11;
                v17 >>= 1;
                if ( !v17 )
                {
                  *v16++ = v18;
                  if ( (unsigned __int64)v16 < v4 || (unsigned __int64)v16 > v9 )
                    v18 = 0;
                  else
                    v18 = *v16;
                  v17 = *((_BYTE *)&glyphBits + (v14 & 7));
                }
                if ( v15 >= 0 )
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
