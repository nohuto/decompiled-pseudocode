/*
 * XREFs of ?vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0003E80
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002D078 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002D0F0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall vPlgWrite32(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r11
  struct SURFACE *v6; // r14
  struct _PLGRUN *v7; // rbp
  unsigned __int64 v9; // rdi
  int v10; // r9d
  int v11; // eax
  LONG v12; // esi
  int v13; // ecx
  __int64 v14; // r13
  bool i; // zf
  int v16; // r15d
  __int64 v17; // rdi
  _DWORD *v18; // rbx
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // r8d
  int v22; // r10d
  __int64 j; // rdx
  _DWORD *v24; // rcx
  int k; // eax
  int v26; // [rsp+30h] [rbp-68h]
  int v27; // [rsp+34h] [rbp-64h]
  unsigned __int64 v28; // [rsp+38h] [rbp-60h]
  unsigned __int64 v29; // [rsp+40h] [rbp-58h]
  struct _PLGRUN *v30; // [rsp+48h] [rbp-50h]
  struct _RECTL si128; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = a3;
    v7 = a2;
    v28 = v4;
    v9 = *((unsigned int *)a3 + 16) + v4 - 4;
    v29 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( a1 < v7 )
      {
        v11 = *(_DWORD *)a1;
        v12 = *((_DWORD *)a1 + 1);
        v13 = *((_DWORD *)a1 + 2);
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        v27 = v11;
        v14 = *((_QWORD *)v6 + 10) + v12 * *((_DWORD *)v6 + 22);
        for ( i = v13 == 0; ; i = v13 == 0 )
        {
          v26 = v13;
          if ( i )
            break;
          v30 = (struct _PLGRUN *)((char *)a1 + 8);
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v7 )
            break;
          if ( v12 < si128.top || v12 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v12);
            v13 = v26;
          }
          if ( v12 >= si128.top && v12 < si128.bottom )
          {
            v16 = *((_DWORD *)a1 + 1);
            v17 = *(int *)a1;
            v18 = (_DWORD *)(v14 + 4 * v17);
            if ( v16 )
            {
              v19 = v28;
              do
              {
                if ( (unsigned __int64)v18 < v19 || (unsigned __int64)v18 > v29 )
                  break;
                if ( (int)v17 >= si128.right || (int)v17 < si128.left )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v17, v10);
                  v19 = v28;
                }
                if ( (int)v17 >= si128.left && (int)v17 < si128.right )
                  *v18 = v27;
                LODWORD(v17) = v17 + 1;
                ++v18;
                --v16;
              }
              while ( v16 );
              v7 = a2;
              v6 = a3;
              v13 = v26;
            }
          }
          ++v12;
          a1 = v30;
          v14 += *((int *)v6 + 22);
          --v13;
        }
      }
    }
    else
    {
      while ( a1 < v7 )
      {
        v20 = *((_DWORD *)v6 + 22) * *((_DWORD *)a1 + 1);
        v21 = *((_DWORD *)a1 + 2);
        v22 = *(_DWORD *)a1;
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        for ( j = *((_QWORD *)v6 + 10) + v20; v21; --v21 )
        {
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v7 )
            break;
          v24 = (_DWORD *)(j + 4LL * *(int *)a1);
          for ( k = *((_DWORD *)a1 + 1); k; --k )
          {
            if ( (unsigned __int64)v24 < v4 )
              break;
            if ( (unsigned __int64)v24 > v9 )
              break;
            *v24++ = v22;
          }
          a1 = (struct _PLGRUN *)((char *)a1 + 8);
          j += *((int *)v6 + 22);
        }
      }
    }
  }
}
