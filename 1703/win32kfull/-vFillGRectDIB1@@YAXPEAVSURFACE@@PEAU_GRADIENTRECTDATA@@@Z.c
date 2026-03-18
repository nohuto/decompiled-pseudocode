/*
 * XREFs of ?vFillGRectDIB1@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02AC550
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C012BC70 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB1(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rdi
  int v3; // esi
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // edx
  __int64 v12; // rbx
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r8
  _BYTE *v18; // r13
  int v19; // edi
  __int64 v20; // r12
  char v21; // si
  int v22; // r11d
  char v23; // bl
  int v24; // [rsp+24h] [rbp-C4h]
  char v25; // [rsp+28h] [rbp-C0h]
  __int64 v26; // [rsp+30h] [rbp-B8h]
  __int64 v27; // [rsp+38h] [rbp-B0h]
  __int64 v28; // [rsp+40h] [rbp-A8h]
  __int64 v29; // [rsp+48h] [rbp-A0h]
  __int64 v30; // [rsp+50h] [rbp-98h]
  __int64 v31; // [rsp+58h] [rbp-90h]
  __int64 v32; // [rsp+60h] [rbp-88h]
  __int64 v33; // [rsp+68h] [rbp-80h]
  __int64 v34; // [rsp+70h] [rbp-78h]
  __int64 v35; // [rsp+78h] [rbp-70h]
  char *v36; // [rsp+80h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+88h] [rbp-60h]
  __int64 v38; // [rsp+90h] [rbp-58h]
  int v39; // [rsp+F0h] [rbp+8h]
  unsigned int v41; // [rsp+100h] [rbp+18h]
  int v42; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((int *)a1 + 22);
  v41 = *((_DWORD *)a2 + 10);
  v5 = v3 + *((_DWORD *)a2 + 11);
  v39 = v3;
  v24 = v5;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v3;
  v26 = *((_QWORD *)a2 + 14);
  v30 = *((_QWORD *)a2 + 15);
  v31 = *((_QWORD *)a2 + 16);
  v33 = *((_QWORD *)a2 + 10);
  v34 = *((_QWORD *)a2 + 11);
  v35 = *((_QWORD *)a2 + 12);
  v32 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)a2 + 20));
  if ( Xlate555 )
  {
    v7 = *((int *)v2 + 45);
    v8 = *((_QWORD *)v2 + 6);
    v9 = *((_QWORD *)v2 + 7);
    v10 = *((_QWORD *)v2 + 8);
    v27 = v8;
    v28 = v9;
    v29 = v10;
    if ( (_DWORD)v7 )
    {
      v9 += v34 * v7;
      v8 += v33 * v7;
      v27 = v8;
      v28 = v9;
      v10 += v35 * v7;
      v29 = v10;
    }
    v11 = *((_DWORD *)v2 + 37);
    v25 = v11;
    v42 = *((_DWORD *)v2 + 36);
    if ( v3 < v5 )
    {
      v38 = v4;
      v12 = v26;
      do
      {
        v13 = *((_DWORD *)v2 + 8);
        v14 = v8;
        v15 = v9;
        v16 = *((int *)v2 + 44);
        v17 = v10;
        v36 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)v3 + (_BYTE)v11) & 0xFu);
        if ( (_DWORD)v16 )
        {
          v15 = v9 + v30 * v16;
          v14 = v8 + v12 * v16;
          v17 = v10 + v31 * v16;
        }
        v18 = (_BYTE *)(v6 + v13 / 8);
        if ( v13 < (int)(v13 + v41) )
        {
          v19 = *((_DWORD *)v2 + 8) & 7;
          v20 = v41;
          v21 = v13 + v42;
          do
          {
            v22 = (unsigned __int8)(2 * v36[v21 & 0xF]);
            v23 = 7 - v19++;
            *v18 = *v18 & ~(1 << v23) | (vTranslateIdentity[Xlate555[((unsigned __int64)(unsigned __int8)-(v22 + (unsigned int)BYTE6(v17) >= 0xFF) >> 3) | (4 * ((unsigned __int8)-(v22 + (unsigned int)BYTE6(v15) >= 0xFF) & 0xF8 | (32LL * ((unsigned __int8)-(v22 + (unsigned int)BYTE6(v14) >= 0xFF) & 0xF8))))]] << v23);
            if ( v19 == 8 )
            {
              v19 = 0;
              ++v18;
            }
            v17 += v31;
            v14 += v26;
            v15 += v30;
            ++v21;
            --v20;
          }
          while ( v20 );
          v2 = a2;
          v3 = v39;
          v8 = v27;
          v9 = v28;
          v10 = v29;
          v6 = v32;
          v12 = v26;
        }
        v6 += v38;
        ++v3;
        v8 += v33;
        v9 += v34;
        v10 += v35;
        LOBYTE(v11) = v25;
        v32 = v6;
        v27 = v8;
        v28 = v9;
        v29 = v10;
        v39 = v3;
      }
      while ( v3 < v24 );
    }
  }
}
