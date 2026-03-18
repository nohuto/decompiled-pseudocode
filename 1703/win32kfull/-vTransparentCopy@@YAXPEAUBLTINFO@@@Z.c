/*
 * XREFs of ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1C0271C70
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00A3750 (XLATEOBJ_iXlate.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?StartPixel@@YAPEAEPEAEKK@Z @ 0x1C0271C10 (-StartPixel@@YAPEAEPEAEKK@Z.c)
 */

void __fastcall vTransparentCopy(struct BLTINFO *a1)
{
  int v1; // r15d
  unsigned __int8 v2; // r14
  int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // r12d
  unsigned __int8 *started; // rax
  int v9; // r8d
  unsigned __int8 *v10; // rcx
  unsigned int v11; // edx
  unsigned __int8 *v12; // rdx
  unsigned __int8 v13; // r10
  unsigned __int8 *v14; // r11
  int v15; // r13d
  bool v16; // zf
  int v17; // ecx
  int v18; // r15d
  unsigned __int8 *v19; // rsi
  unsigned __int8 *v20; // rdi
  int v21; // eax
  char v22; // r14
  ULONG v23; // edx
  unsigned int v24; // edx
  ULONG v25; // eax
  char v26; // al
  char v27; // al
  unsigned __int8 v28; // al
  int v29; // eax
  char v30; // cl
  unsigned __int8 v31; // [rsp+20h] [rbp-40h]
  _WORD v32[2]; // [rsp+24h] [rbp-3Ch]
  int v33; // [rsp+28h] [rbp-38h]
  XLATEOBJ *pxlo; // [rsp+30h] [rbp-30h]
  int v35; // [rsp+38h] [rbp-28h]
  int v36; // [rsp+3Ch] [rbp-24h]
  unsigned __int8 *v37; // [rsp+40h] [rbp-20h]
  unsigned __int8 *v38; // [rsp+48h] [rbp-18h]
  _DWORD v39[2]; // [rsp+50h] [rbp-10h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = 0;
  v3 = *((_DWORD *)a1 + 8);
  pxlo = *(XLATEOBJ **)a1;
  v5 = *((_QWORD *)a1 + 9);
  v35 = v1;
  v31 = 0;
  v39[0] = -524255232;
  v6 = *(_QWORD *)(v5 + 128);
  v39[1] = -16975632;
  v32[0] = -4096;
  if ( v6 )
    v7 = **(_DWORD **)(v6 + 120) | *(_DWORD *)(*(_QWORD *)(v6 + 120) + 4LL) | *(_DWORD *)(*(_QWORD *)(v6 + 120) + 8LL);
  else
    v7 = -1;
  started = StartPixel(*((unsigned __int8 **)a1 + 1), *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 35));
  v9 = *((_DWORD *)a1 + 36);
  v10 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  v11 = *((_DWORD *)a1 + 14);
  v37 = started;
  v12 = StartPixel(v10, v11, v9);
  v38 = v12;
  while ( v3 )
  {
    v15 = *((_DWORD *)a1 + 12);
    v16 = *((_DWORD *)a1 + 35) == 1;
    v17 = v1;
    v18 = *((_DWORD *)a1 + 14);
    v19 = v14;
    v36 = v3 - 1;
    v20 = v12;
    v33 = v17;
    if ( v16 )
    {
      if ( (v15 & 7) != 0 )
      {
        v13 = *v14 << (v15 & 7);
        v31 = v13;
      }
      else
      {
        v19 = v14 - 1;
      }
      v17 = v33;
    }
    v21 = *((_DWORD *)a1 + 36);
    if ( v21 == 1 )
    {
      v22 = *((_BYTE *)v39 + (v18 & 7));
    }
    else
    {
      if ( v21 != 2 )
        goto LABEL_15;
      v22 = *((_BYTE *)v32 + (v18 & 1));
    }
    v2 = *v12 & v22;
LABEL_15:
    if ( !v35 )
      goto LABEL_68;
    do
    {
      v33 = v17 - 1;
      switch ( *((_DWORD *)a1 + 35) )
      {
        case 1:
          if ( (v15 & 7) == 0 )
            v13 = *++v19;
          v23 = v13 >> 7;
          v31 = 2 * v13;
          goto LABEL_32;
        case 2:
          v24 = *v19;
          if ( (v15 & 1) != 0 )
          {
            v23 = v24 & 0xF;
            ++v19;
          }
          else
          {
            v23 = v24 >> 4;
          }
LABEL_32:
          LOBYTE(v15) = v15 + 1;
          break;
        case 3:
          v23 = *v19++;
          break;
        case 4:
          v23 = (unsigned __int16)(v7 & *(_WORD *)v19);
          v19 += 2;
          break;
        case 5:
          v23 = *v19 | (*(unsigned __int16 *)(v19 + 1) << 8);
          v19 += 3;
          break;
        case 6:
          v23 = v7 & *(_DWORD *)v19;
          v19 += 4;
          break;
        default:
          return;
      }
      switch ( *((_DWORD *)a1 + 36) )
      {
        case 1:
          if ( v23 == *((_DWORD *)a1 + 37) )
            v27 = (*v20 << (v18 & 7)) & 0x80;
          else
            v27 = (unsigned __int8)XLATEOBJ_iXlate(pxlo, v23) << 7;
          v28 = v2 | v27;
          if ( (++v18 & 7) != 0 )
          {
            v2 = v28 >> 1;
          }
          else
          {
            *v20++ = v28;
            v2 = 0;
          }
          break;
        case 2:
          if ( (v18 & 1) != 0 )
          {
            if ( v23 == *((_DWORD *)a1 + 37) )
              v26 = *v20 & 0xF;
            else
              v26 = XLATEOBJ_iXlate(pxlo, v23);
            v2 |= v26;
            *v20++ = v2;
          }
          else if ( v23 == *((_DWORD *)a1 + 37) )
          {
            v2 = *v20 & 0xF0;
          }
          else
          {
            v2 = 16 * XLATEOBJ_iXlate(pxlo, v23);
          }
          ++v18;
          break;
        case 3:
          if ( v23 != *((_DWORD *)a1 + 37) )
            *v20 = XLATEOBJ_iXlate(pxlo, v23);
          ++v20;
          break;
        case 4:
          if ( v23 != *((_DWORD *)a1 + 37) )
            *(_WORD *)v20 = XLATEOBJ_iXlate(pxlo, v23);
          v20 += 2;
          break;
        case 5:
          if ( v23 != *((_DWORD *)a1 + 37) )
          {
            v25 = XLATEOBJ_iXlate(pxlo, v23);
            *v20 = v25;
            v20[2] = BYTE2(v25);
            v20[1] = BYTE1(v25);
          }
          v20 += 3;
          break;
        case 6:
          if ( v23 != *((_DWORD *)a1 + 37) )
            *(_DWORD *)v20 = XLATEOBJ_iXlate(pxlo, v23);
          v20 += 4;
          break;
        default:
          return;
      }
      v17 = v33;
      v13 = v31;
    }
    while ( v33 );
    v14 = v37;
    v12 = v38;
LABEL_68:
    v29 = *((_DWORD *)a1 + 36);
    if ( v29 == 1 )
    {
      if ( (v18 & 7) != 0 )
      {
        v30 = *((_BYTE *)v39 + (v18 & 7));
        goto LABEL_74;
      }
    }
    else if ( v29 == 2 && (v18 & 1) != 0 )
    {
      v30 = *((_BYTE *)v32 + (v18 & 1));
LABEL_74:
      *v20 = v2 & v30 | *v20 & ~v30;
    }
    v3 = v36;
    v14 += *((int *)a1 + 10);
    v13 = v31;
    v12 += *((int *)a1 + 11);
    v1 = v35;
    v38 = v12;
    v37 = v14;
  }
}
