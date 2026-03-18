/*
 * XREFs of ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1C026E370
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C2120 (XLATEOBJ_iXlate.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?StartPixel@@YAPEAEPEAEKK@Z @ 0x1C026E314 (-StartPixel@@YAPEAEPEAEKK@Z.c)
 */

void __fastcall vTransparentCopy(struct BLTINFO *a1)
{
  int v1; // r15d
  XLATEOBJ *v2; // r11
  __int64 v4; // rax
  char v5; // r14
  int v6; // edi
  __int64 v7; // rcx
  int v8; // r12d
  unsigned __int8 *started; // rax
  int v10; // r8d
  unsigned __int8 *v11; // rcx
  unsigned int v12; // edx
  unsigned __int8 v13; // r10
  XLATEOBJ *v14; // r11
  unsigned __int8 *v15; // r8
  unsigned __int8 *v16; // rdx
  int v17; // r13d
  bool v18; // zf
  int v19; // ecx
  int v20; // r15d
  unsigned __int8 *v21; // rsi
  unsigned __int8 *v22; // rdi
  int v23; // eax
  char v24; // r14
  ULONG v25; // edx
  unsigned int v26; // edx
  ULONG v27; // eax
  char v28; // al
  unsigned __int8 v29; // al
  char v30; // al
  unsigned __int8 v31; // al
  int v32; // eax
  char v33; // cl
  unsigned __int8 v34; // [rsp+20h] [rbp-40h]
  _WORD v35[2]; // [rsp+24h] [rbp-3Ch]
  int v36; // [rsp+28h] [rbp-38h]
  int v37; // [rsp+2Ch] [rbp-34h]
  int v38; // [rsp+30h] [rbp-30h]
  unsigned __int8 *v39; // [rsp+38h] [rbp-28h]
  unsigned __int8 *v40; // [rsp+40h] [rbp-20h]
  XLATEOBJ *v41; // [rsp+48h] [rbp-18h]
  _DWORD v42[2]; // [rsp+50h] [rbp-10h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATEOBJ **)a1;
  v4 = *((_QWORD *)a1 + 9);
  v5 = 0;
  v6 = *((_DWORD *)a1 + 8);
  v37 = v1;
  v41 = v2;
  v7 = *(_QWORD *)(v4 + 128);
  v34 = 0;
  v42[0] = -524255232;
  v42[1] = -16975632;
  v35[0] = -4096;
  if ( v7 )
    v8 = **(_DWORD **)(v7 + 120) | *(_DWORD *)(*(_QWORD *)(v7 + 120) + 4LL) | *(_DWORD *)(*(_QWORD *)(v7 + 120) + 8LL);
  else
    v8 = -1;
  started = StartPixel(*((unsigned __int8 **)a1 + 1), *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 35));
  v10 = *((_DWORD *)a1 + 36);
  v11 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  v12 = *((_DWORD *)a1 + 14);
  v39 = started;
  v40 = StartPixel(v11, v12, v10);
  v15 = v40;
  if ( !v6 )
    return;
  v16 = v39;
  do
  {
    v17 = *((_DWORD *)a1 + 12);
    v18 = *((_DWORD *)a1 + 35) == 1;
    v19 = v1;
    v20 = *((_DWORD *)a1 + 14);
    v21 = v16;
    v38 = v6 - 1;
    v22 = v15;
    v36 = v19;
    if ( v18 )
    {
      if ( (v17 & 7) != 0 )
      {
        v13 = *v16 << (v17 & 7);
        v34 = v13;
      }
      else
      {
        v21 = v16 - 1;
      }
      v19 = v36;
    }
    v23 = *((_DWORD *)a1 + 36);
    if ( v23 == 1 )
    {
      v24 = *((_BYTE *)v42 + (v20 & 7));
    }
    else
    {
      if ( v23 != 2 )
        goto LABEL_16;
      v24 = *((_BYTE *)v35 + (v20 & 1));
    }
    v5 = *v15 & v24;
LABEL_16:
    if ( !v37 )
      goto LABEL_70;
    do
    {
      v36 = v19 - 1;
      switch ( *((_DWORD *)a1 + 35) )
      {
        case 1:
          if ( (v17 & 7) == 0 )
            v13 = *++v21;
          v25 = v13 >> 7;
          v34 = 2 * v13;
          goto LABEL_33;
        case 2:
          v26 = *v21;
          if ( (v17 & 1) != 0 )
          {
            v25 = v26 & 0xF;
            ++v21;
          }
          else
          {
            v25 = v26 >> 4;
          }
LABEL_33:
          LOBYTE(v17) = v17 + 1;
          break;
        case 3:
          v25 = *v21++;
          break;
        case 4:
          v25 = (unsigned __int16)(v8 & *(_WORD *)v21);
          v21 += 2;
          break;
        case 5:
          v25 = *v21 | (*(unsigned __int16 *)(v21 + 1) << 8);
          v21 += 3;
          break;
        case 6:
          v25 = v8 & *(_DWORD *)v21;
          v21 += 4;
          break;
        default:
          return;
      }
      switch ( *((_DWORD *)a1 + 36) )
      {
        case 1:
          if ( v25 == *((_DWORD *)a1 + 37) )
            v30 = (*v22 << (v20 & 7)) & 0x80;
          else
            v30 = (unsigned __int8)XLATEOBJ_iXlate(v14, v25) << 7;
          v31 = v5 | v30;
          if ( (++v20 & 7) != 0 )
          {
            v5 = v31 >> 1;
          }
          else
          {
            *v22++ = v31;
            v5 = 0;
          }
          break;
        case 2:
          if ( (v20 & 1) != 0 )
          {
            if ( v25 == *((_DWORD *)a1 + 37) )
              v28 = *v22 & 0xF;
            else
              v28 = XLATEOBJ_iXlate(v14, v25);
            v29 = v5 | v28;
            *v22++ = v29;
LABEL_60:
            v5 = v29;
          }
          else
          {
            if ( v25 == *((_DWORD *)a1 + 37) )
            {
              v29 = *v22 & 0xF0;
              goto LABEL_60;
            }
            v5 = 16 * XLATEOBJ_iXlate(v14, v25);
          }
          ++v20;
          break;
        case 3:
          if ( v25 != *((_DWORD *)a1 + 37) )
            *v22 = XLATEOBJ_iXlate(v14, v25);
          ++v22;
          break;
        case 4:
          if ( v25 != *((_DWORD *)a1 + 37) )
            *(_WORD *)v22 = XLATEOBJ_iXlate(v14, v25);
          v22 += 2;
          break;
        case 5:
          if ( v25 != *((_DWORD *)a1 + 37) )
          {
            v27 = XLATEOBJ_iXlate(v14, v25);
            *v22 = v27;
            v22[2] = BYTE2(v27);
            v22[1] = BYTE1(v27);
          }
          v22 += 3;
          break;
        case 6:
          if ( v25 != *((_DWORD *)a1 + 37) )
            *(_DWORD *)v22 = XLATEOBJ_iXlate(v14, v25);
          v22 += 4;
          break;
        default:
          return;
      }
      v19 = v36;
      v13 = v34;
      v14 = v41;
    }
    while ( v36 );
    v16 = v39;
    v15 = v40;
LABEL_70:
    v32 = *((_DWORD *)a1 + 36);
    if ( v32 == 1 )
    {
      if ( (v20 & 7) != 0 )
      {
        v33 = *((_BYTE *)v42 + (v20 & 7));
        goto LABEL_76;
      }
    }
    else if ( v32 == 2 && (v20 & 1) != 0 )
    {
      v33 = *((_BYTE *)v35 + (v20 & 1));
LABEL_76:
      *v22 = v5 & v33 | *v22 & ~v33;
    }
    v6 = v38;
    v16 += *((int *)a1 + 10);
    v13 = v34;
    v15 += *((int *)a1 + 11);
    v1 = v37;
    v39 = v16;
    v40 = v15;
  }
  while ( v38 );
}
