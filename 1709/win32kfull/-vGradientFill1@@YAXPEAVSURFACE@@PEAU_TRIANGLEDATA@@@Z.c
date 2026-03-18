/*
 * XREFs of ?vGradientFill1@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02AA9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C012923C (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill1(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // esi
  char *v3; // r14
  __int64 v4; // rbx
  struct _TRIANGLEDATA *v5; // rdi
  __int64 v6; // r15
  int v7; // ebp
  int v8; // edx
  int v9; // eax
  int v10; // ebx
  int v11; // r11d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r10
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
  unsigned __int8 *Xlate555; // [rsp+58h] [rbp-60h]
  __int64 v30; // [rsp+60h] [rbp-58h]
  int v31; // [rsp+C0h] [rbp+8h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v31 = v2;
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
    v9 = *((_DWORD *)v5 + 32);
    if ( *((_DWORD *)v5 + 3) < v7 )
      v7 = *((_DWORD *)v5 + 3);
    v22 = v7;
    v23 = *((_DWORD *)v5 + 33);
    if ( v2 < v7 )
    {
      v30 = v4;
      do
      {
        v10 = *(_DWORD *)v5;
        v11 = *((_DWORD *)v5 + 2);
        v12 = *((_QWORD *)v3 + 1);
        v13 = *((_QWORD *)v3 + 2);
        if ( *(_DWORD *)v3 > *(_DWORD *)v5 )
          v10 = *(_DWORD *)v3;
        v14 = *((_QWORD *)v3 + 3);
        if ( *((_DWORD *)v3 + 1) < v11 )
          v11 = *((_DWORD *)v3 + 1);
        if ( v10 < v11 )
        {
          v15 = *(_DWORD *)v5 - *(_DWORD *)v3;
          v16 = v10 & 7;
          v17 = (_BYTE *)(v6 + v10 / 8);
          if ( v15 > 0 )
          {
            v12 += v24 * v15;
            v13 += v25 * v15;
            v14 += v26 * v15;
          }
          v18 = (unsigned int)(v11 - v10);
          v19 = v10 + v9;
          do
          {
            v20 = (unsigned __int8)(2 * gDitherMatrix16x16Default[16 * (((_BYTE)v8 + (_BYTE)v2) & 0xF) + (v19 & 0xF)]);
            v21 = 7 - v16++;
            *v17 = *v17 & ~(1 << v21) | (vTranslateIdentity[Xlate555[((unsigned __int64)(unsigned __int8)-(v20 + HIBYTE(v14) >= 0xFFu) >> 3) | (4 * ((v20 + HIBYTE(v13) >= 0xFFu ? 0xF8 : 0) | (32 * (unsigned int)(v20 + HIBYTE(v12) >= 0xFFu ? 0xF8 : 0))))]] << v21);
            if ( v16 == 8 )
            {
              v16 = 0;
              ++v17;
            }
            ++v19;
            v12 += v24;
            v13 += v25;
            v14 += v26;
            --v18;
          }
          while ( v18 );
          v5 = a2;
          v2 = v31;
          v7 = v22;
          v3 = v28;
          v6 = v27;
          LOBYTE(v8) = v23;
        }
        v6 += v30;
        v3 += 40;
        ++v2;
        v27 = v6;
        v28 = v3;
        v31 = v2;
      }
      while ( v2 < v7 );
    }
  }
}
