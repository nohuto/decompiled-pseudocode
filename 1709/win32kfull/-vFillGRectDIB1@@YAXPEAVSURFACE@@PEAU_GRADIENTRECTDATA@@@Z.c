/*
 * XREFs of ?vFillGRectDIB1@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A8BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C012923C (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
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
  unsigned int v12; // r11d
  __int64 v13; // rbx
  int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rax
  _BYTE *v19; // r13
  int v20; // edi
  char v21; // si
  __int64 v22; // r12
  int v23; // r11d
  char v24; // bl
  int v25; // [rsp+24h] [rbp-C4h]
  char v26; // [rsp+28h] [rbp-C0h]
  __int64 v27; // [rsp+30h] [rbp-B8h]
  __int64 v28; // [rsp+38h] [rbp-B0h]
  __int64 v29; // [rsp+40h] [rbp-A8h]
  __int64 v30; // [rsp+48h] [rbp-A0h]
  __int64 v31; // [rsp+50h] [rbp-98h]
  __int64 v32; // [rsp+58h] [rbp-90h]
  __int64 v33; // [rsp+60h] [rbp-88h]
  __int64 v34; // [rsp+68h] [rbp-80h]
  __int64 v35; // [rsp+70h] [rbp-78h]
  __int64 v36; // [rsp+78h] [rbp-70h]
  char *v37; // [rsp+80h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+88h] [rbp-60h]
  __int64 v39; // [rsp+90h] [rbp-58h]
  unsigned int v40; // [rsp+F0h] [rbp+8h]
  int v42; // [rsp+100h] [rbp+18h]
  int v43; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((int *)a1 + 22);
  v40 = *((_DWORD *)a2 + 10);
  v5 = v3 + *((_DWORD *)a2 + 11);
  v42 = v3;
  v25 = v5;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v3;
  v27 = *((_QWORD *)a2 + 14);
  v31 = *((_QWORD *)a2 + 15);
  v32 = *((_QWORD *)a2 + 16);
  v34 = *((_QWORD *)a2 + 10);
  v35 = *((_QWORD *)a2 + 11);
  v36 = *((_QWORD *)a2 + 12);
  v33 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)a2 + 20));
  if ( Xlate555 )
  {
    v7 = *((int *)v2 + 45);
    v8 = *((_QWORD *)v2 + 6);
    v9 = *((_QWORD *)v2 + 7);
    v10 = *((_QWORD *)v2 + 8);
    v28 = v8;
    v29 = v9;
    v30 = v10;
    if ( (_DWORD)v7 )
    {
      v9 += v35 * v7;
      v8 += v34 * v7;
      v28 = v8;
      v29 = v9;
      v10 += v36 * v7;
      v30 = v10;
    }
    v11 = *((_DWORD *)v2 + 37);
    v26 = v11;
    v43 = *((_DWORD *)v2 + 36);
    if ( v3 < v5 )
    {
      v12 = v40;
      v39 = v4;
      v13 = v27;
      do
      {
        v14 = *((_DWORD *)v2 + 8);
        v15 = v8;
        v16 = v9;
        v17 = v10;
        v18 = *((int *)v2 + 44);
        v37 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)v3 + (_BYTE)v11) & 0xFu);
        if ( (_DWORD)v18 )
        {
          v16 = v9 + v31 * v18;
          v15 = v8 + v13 * v18;
          v17 = v10 + v32 * v18;
        }
        v19 = (_BYTE *)(v6 + v14 / 8);
        if ( v14 < (int)(v14 + v12) )
        {
          v20 = *((_DWORD *)v2 + 8) & 7;
          v21 = v14 + v43;
          v22 = v12;
          do
          {
            v23 = (unsigned __int8)(2 * v37[v21 & 0xF]);
            v24 = 7 - v20++;
            *v19 = *v19 & ~(1 << v24) | (vTranslateIdentity[Xlate555[((unsigned __int64)(unsigned __int8)-(v23 + (unsigned int)BYTE6(v17) >= 0xFF) >> 3) | (4 * ((v23 + (unsigned int)BYTE6(v16) >= 0xFF ? 0xF8 : 0) | (32 * (unsigned int)(v23 + (unsigned int)BYTE6(v15) >= 0xFF ? 0xF8 : 0))))]] << v24);
            if ( v20 == 8 )
            {
              v20 = 0;
              ++v19;
            }
            v17 += v32;
            v15 += v27;
            v16 += v31;
            ++v21;
            --v22;
          }
          while ( v22 );
          v2 = a2;
          v3 = v42;
          v8 = v28;
          v9 = v29;
          v10 = v30;
          v6 = v33;
          v12 = v40;
          v13 = v27;
        }
        v6 += v39;
        ++v3;
        v8 += v34;
        v9 += v35;
        v10 += v36;
        LOBYTE(v11) = v26;
        v33 = v6;
        v28 = v8;
        v29 = v9;
        v30 = v10;
        v42 = v3;
      }
      while ( v3 < v25 );
    }
  }
}
