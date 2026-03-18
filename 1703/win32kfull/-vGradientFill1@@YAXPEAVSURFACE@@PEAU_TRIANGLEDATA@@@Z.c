/*
 * XREFs of ?vGradientFill1@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02AE3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C012BC70 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill1(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // esi
  char *v3; // r14
  __int64 v4; // rbx
  struct _TRIANGLEDATA *v5; // rdi
  __int64 v6; // r15
  int v7; // ebp
  int v8; // r12d
  struct _TRIANGLEDATA *v9; // rax
  int v10; // r11d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  int v14; // ebx
  int v15; // ecx
  int v16; // r13d
  _BYTE *v17; // r12
  __int64 v18; // rdi
  char v19; // bp
  int v20; // r11d
  char v21; // bl
  int v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+24h] [rbp-94h]
  __int64 v24; // [rsp+28h] [rbp-90h]
  __int64 v25; // [rsp+30h] [rbp-88h]
  __int64 v26; // [rsp+38h] [rbp-80h]
  __int64 v27; // [rsp+40h] [rbp-78h]
  char *v28; // [rsp+48h] [rbp-70h]
  char *v29; // [rsp+50h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+58h] [rbp-60h]
  __int64 v31; // [rsp+60h] [rbp-58h]
  int v32; // [rsp+C0h] [rbp+8h]
  int v34; // [rsp+D8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v32 = v2;
  v28 = (char *)a2 + 168;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v24 = *((_QWORD *)a2 + 2);
  v25 = *((_QWORD *)a2 + 3);
  v26 = *((_QWORD *)a2 + 4);
  v27 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)a2 + 19));
  if ( Xlate555 )
  {
    v7 = *((_DWORD *)v5 + 29);
    v8 = *((_DWORD *)v5 + 33);
    if ( *((_DWORD *)v5 + 3) < v7 )
      v7 = *((_DWORD *)v5 + 3);
    v22 = v7;
    v23 = *((_DWORD *)v5 + 33);
    v34 = *((_DWORD *)v5 + 32);
    if ( v2 < v7 )
    {
      v31 = v4;
      do
      {
        v9 = v5;
        v10 = *((_DWORD *)v5 + 2);
        v11 = *((_QWORD *)v3 + 1);
        v12 = *((_QWORD *)v3 + 2);
        if ( *(_DWORD *)v3 > *(_DWORD *)v5 )
          v9 = (struct _TRIANGLEDATA *)v3;
        v13 = *((_QWORD *)v3 + 3);
        if ( *((_DWORD *)v3 + 1) < v10 )
          v10 = *((_DWORD *)v3 + 1);
        v14 = *(_DWORD *)v9;
        v29 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)v8 + (_BYTE)v2) & 0xFu);
        if ( *(_DWORD *)v9 < v10 )
        {
          v15 = *(_DWORD *)v5 - *(_DWORD *)v3;
          v16 = *(_DWORD *)v9 & 7;
          v17 = (_BYTE *)(v6 + v14 / 8);
          if ( v15 > 0 )
          {
            v11 += v24 * v15;
            v12 += v25 * v15;
            v13 += v26 * v15;
          }
          v18 = (unsigned int)(v10 - v14);
          v19 = v14 + v34;
          do
          {
            v20 = (unsigned __int8)(2 * v29[v19 & 0xF]);
            v21 = 7 - v16++;
            *v17 = *v17 & ~(1 << v21) | (vTranslateIdentity[Xlate555[((unsigned __int64)(unsigned __int8)-(v20 + HIBYTE(v13) >= 0xFFu) >> 3) | (4 * ((unsigned __int8)-(v20 + HIBYTE(v12) >= 0xFFu) & 0xF8 | (32LL * ((unsigned __int8)-(v20 + HIBYTE(v11) >= 0xFFu) & 0xF8))))]] << v21);
            if ( v16 == 8 )
            {
              v16 = 0;
              ++v17;
            }
            ++v19;
            v11 += v24;
            v12 += v25;
            v13 += v26;
            --v18;
          }
          while ( v18 );
          v5 = a2;
          v2 = v32;
          v3 = v28;
          v7 = v22;
          v6 = v27;
          LOBYTE(v8) = v23;
        }
        v6 += v31;
        v3 += 40;
        ++v2;
        v27 = v6;
        v28 = v3;
        v32 = v2;
      }
      while ( v2 < v7 );
    }
  }
}
