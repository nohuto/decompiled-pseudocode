/*
 * XREFs of ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C007F294
 * Callers:
 *     GreSubtractRgnRectList @ 0x1C00F02F4 (GreSubtractRgnRectList.c)
 * Callees:
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C007E154 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall RGNOBJAPI::bSubtract(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3, signed int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // edi
  LONG top; // r10d
  LONG v14; // r11d
  LONG left; // r15d
  LONG v16; // ecx
  LONG bottom; // edx
  LONG v18; // r12d
  LONG right; // r9d
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  _DWORD *v30; // rdx
  _DWORD *v31; // rdx
  LONG v32; // eax
  _DWORD *v33; // rdx
  LONG v34; // eax
  LONG v35; // eax
  char *v36; // rdx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  struct _RECTL *v40; // rdx
  unsigned int v41; // ecx
  _DWORD *v42; // rdx
  _DWORD *v43; // rdx
  unsigned int v44; // ecx
  _DWORD *v45; // rdx
  LONG v46; // eax
  LONG v47; // eax
  _DWORD *v48; // rdx
  LONG v49; // eax
  _DWORD *v50; // rdx
  LONG v51; // eax
  _DWORD *v52; // rdx
  _QWORD v53[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v54; // [rsp+30h] [rbp-28h] BYREF

  v11 = 0;
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)a2) )
    goto LABEL_24;
  if ( v10 == 1 )
  {
    top = a3->top;
    v14 = *(_DWORD *)(v8 + 12);
    if ( top >= v14
      || (left = a3->left, v16 = *(_DWORD *)(v8 + 8), a3->left >= v16)
      || (bottom = a3->bottom, v18 = a2->top, bottom <= v18)
      || (right = a3->right, right <= a2->left) )
    {
      v40 = a2;
      goto LABEL_43;
    }
    v20 = right >= v16;
    if ( left > a2->left )
      v20 += 2;
    if ( top > v18 )
    {
      v21 = 8;
      if ( bottom >= v14 )
        v21 = 12;
    }
    else
    {
      v21 = 0;
      if ( bottom >= v14 )
        v21 = 4;
    }
    v22 = v20 + v21;
    if ( v22 <= 8 )
    {
      if ( v22 == 8 )
      {
        *(_DWORD *)(v9 + 80) = 208;
        *(_DWORD *)(v9 + 84) = 5;
        *(struct _RECTL *)(v9 + 88) = *a2;
        *(_DWORD *)(v9 + 104) = 0;
        *(_DWORD *)(v9 + 108) = 0x80000000;
        *(_DWORD *)(v9 + 112) = a2->top;
        *(_DWORD *)(v9 + 116) = 0;
        v52 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
        *v52 = 2;
        v52[1] = a2->top;
        v52[2] = a3->top;
        v52[3] = a2->left;
        v52[4] = a2->right;
        v52[5] = 2;
        v31 = (_DWORD *)((char *)v52 + (unsigned int)(4 * *v52 + 16));
        *v31 = 2;
        v51 = a3->top;
      }
      else
      {
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( !v23 )
          {
            v54 = (__int128)*a2;
            DWORD1(v54) = bottom;
            goto LABEL_42;
          }
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( !v27 )
                {
LABEL_24:
                  RGNOBJ::vSet(this);
                  return 1LL;
                }
                v44 = v27 - 1;
                if ( v44 )
                {
                  if ( v44 != 1 )
                    return 1LL;
                  v54 = (__int128)*a2;
                  DWORD2(v54) = left;
                  goto LABEL_42;
                }
                *(_DWORD *)(v9 + 80) = 168;
                *(_DWORD *)(v9 + 84) = 3;
                *(struct _RECTL *)(v9 + 88) = *a2;
                *(_DWORD *)(v9 + 104) = 0;
                *(_DWORD *)(v9 + 108) = 0x80000000;
                *(_DWORD *)(v9 + 112) = a2->top;
                *(_DWORD *)(v9 + 116) = 0;
                v33 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
                *v33 = 4;
                v49 = a2->top;
                goto LABEL_56;
              }
              v54 = (__int128)*a2;
              LODWORD(v54) = right;
LABEL_42:
              v40 = (struct _RECTL *)&v54;
LABEL_43:
              RGNOBJ::vSet(this, v40);
              return 1LL;
            }
            *(_DWORD *)(v9 + 80) = 184;
            *(_DWORD *)(v9 + 84) = 4;
            *(struct _RECTL *)(v9 + 88) = *a2;
            *(_DWORD *)(v9 + 104) = 0;
            *(_DWORD *)(v9 + 108) = 0x80000000;
            *(_DWORD *)(v9 + 112) = a2->top;
            *(_DWORD *)(v9 + 116) = 0;
            v31 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
            *v31 = 2;
            v46 = a2->top;
LABEL_53:
            v31[1] = v46;
            v31[2] = a3->bottom;
            v31[3] = a2->left;
            v47 = a3->left;
LABEL_54:
            v31[4] = v47;
            v31[5] = 2;
            goto LABEL_33;
          }
          *(_DWORD *)(v9 + 80) = 192;
          *(_DWORD *)(v9 + 84) = 4;
          *(struct _RECTL *)(v9 + 88) = *a2;
          *(_DWORD *)(v9 + 104) = 0;
          *(_DWORD *)(v9 + 108) = 0x80000000;
          *(_DWORD *)(v9 + 112) = a2->top;
          *(_DWORD *)(v9 + 116) = 0;
          v31 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
          *v31 = 4;
          v32 = a2->top;
          goto LABEL_32;
        }
        *(_DWORD *)(v9 + 80) = 184;
        *(_DWORD *)(v9 + 84) = 4;
        *(struct _RECTL *)(v9 + 88) = *a2;
        *(_DWORD *)(v9 + 104) = 0;
        *(_DWORD *)(v9 + 108) = 0x80000000;
        *(_DWORD *)(v9 + 112) = a2->top;
        *(_DWORD *)(v9 + 116) = 0;
        v31 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
        *v31 = 2;
        v51 = a2->top;
      }
      v31[1] = v51;
      v31[2] = a3->bottom;
      v31[3] = a3->right;
      v47 = a2->right;
      goto LABEL_54;
    }
    v28 = v22 - 9;
    if ( !v28 )
    {
      *(_DWORD *)(v9 + 80) = 200;
      *(_DWORD *)(v9 + 84) = 5;
      *(struct _RECTL *)(v9 + 88) = *a2;
      *(_DWORD *)(v9 + 104) = 0;
      *(_DWORD *)(v9 + 108) = 0x80000000;
      *(_DWORD *)(v9 + 112) = a2->top;
      *(_DWORD *)(v9 + 116) = 0;
      v43 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
      *v43 = 2;
      v43[1] = a2->top;
      v43[2] = a3->top;
      v43[3] = a2->left;
      v43[4] = a2->right;
      v43[5] = 2;
      v31 = (_DWORD *)((char *)v43 + (unsigned int)(4 * *v43 + 16));
      *v31 = 0;
      v31[1] = a3->top;
      *((_QWORD *)v31 + 1) = (unsigned int)a3->bottom;
      goto LABEL_33;
    }
    v29 = v28 - 1;
    if ( v29 )
    {
      v37 = v29 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( !v39 )
          {
            v54 = (__int128)*a2;
            HIDWORD(v54) = top;
            goto LABEL_42;
          }
          v41 = v39 - 1;
          if ( !v41 )
          {
            *(_DWORD *)(v9 + 80) = 192;
            *(_DWORD *)(v9 + 84) = 4;
            *(struct _RECTL *)(v9 + 88) = *a2;
            *(_DWORD *)(v9 + 104) = 0;
            *(_DWORD *)(v9 + 108) = 0x80000000;
            *(_DWORD *)(v9 + 112) = a2->top;
            *(_DWORD *)(v9 + 116) = 0;
            v48 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
            *v48 = 2;
            v48[1] = a2->top;
            v48[2] = a3->top;
            v48[3] = a2->left;
            v48[4] = a2->right;
            v48[5] = 2;
            v33 = (_DWORD *)((char *)v48 + (unsigned int)(4 * *v48 + 16));
            *v33 = 4;
            v49 = a3->top;
LABEL_56:
            v33[1] = v49;
            v33[2] = a2->bottom;
            v33[3] = a2->left;
            v33[4] = a3->left;
            v33[5] = a3->right;
            v33[6] = a2->right;
            v33[7] = 4;
            goto LABEL_36;
          }
          if ( v41 != 1 )
            return 1LL;
          *(_DWORD *)(v9 + 80) = 184;
          *(_DWORD *)(v9 + 84) = 4;
          *(struct _RECTL *)(v9 + 88) = *a2;
          *(_DWORD *)(v9 + 104) = 0;
          *(_DWORD *)(v9 + 108) = 0x80000000;
          *(_DWORD *)(v9 + 112) = a2->top;
          *(_DWORD *)(v9 + 116) = 0;
          v42 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
          *v42 = 2;
          v42[1] = a2->top;
          v42[2] = a3->top;
          v42[3] = a2->left;
          v42[4] = a2->right;
          v42[5] = 2;
          v33 = (_DWORD *)((char *)v42 + (unsigned int)(4 * *v42 + 16));
          *v33 = 2;
          v33[1] = a3->top;
          v33[2] = a2->bottom;
          v33[3] = a2->left;
          v35 = a3->left;
LABEL_35:
          v33[5] = 2;
          v33[4] = v35;
LABEL_36:
          v36 = (char *)v33 + (unsigned int)(4 * *v33 + 16);
          *(_DWORD *)v36 = 0;
          *((_DWORD *)v36 + 1) = a2->bottom;
          *((_QWORD *)v36 + 1) = 0x7FFFFFFFLL;
          *(_QWORD *)(v9 + 40) = v36 + 16;
          return 1LL;
        }
        *(_DWORD *)(v9 + 80) = 184;
        *(_DWORD *)(v9 + 84) = 4;
        *(struct _RECTL *)(v9 + 88) = *a2;
        *(_DWORD *)(v9 + 104) = 0;
        *(_DWORD *)(v9 + 108) = 0x80000000;
        *(_DWORD *)(v9 + 112) = a2->top;
        *(_DWORD *)(v9 + 116) = 0;
        v50 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
        *v50 = 2;
        v50[1] = a2->top;
        v50[2] = a3->top;
        v50[3] = a2->left;
        v50[4] = a2->right;
        v50[5] = 2;
        v33 = (_DWORD *)((char *)v50 + (unsigned int)(4 * *v50 + 16));
        *v33 = 2;
        v33[1] = a3->top;
        v33[2] = a2->bottom;
        v34 = a3->right;
LABEL_34:
        v33[3] = v34;
        v35 = a2->right;
        goto LABEL_35;
      }
      *(_DWORD *)(v9 + 80) = 208;
      *(_DWORD *)(v9 + 84) = 5;
      *(struct _RECTL *)(v9 + 88) = *a2;
      *(_DWORD *)(v9 + 104) = 0;
      *(_DWORD *)(v9 + 108) = 0x80000000;
      *(_DWORD *)(v9 + 112) = a2->top;
      *(_DWORD *)(v9 + 116) = 0;
      v45 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
      *v45 = 2;
      v45[1] = a2->top;
      v45[2] = a3->top;
      v45[3] = a2->left;
      v45[4] = a2->right;
      v45[5] = 2;
      v31 = (_DWORD *)((char *)v45 + (unsigned int)(4 * *v45 + 16));
      *v31 = 2;
      v46 = a3->top;
      goto LABEL_53;
    }
    *(_DWORD *)(v9 + 80) = 216;
    *(_DWORD *)(v9 + 84) = 5;
    *(struct _RECTL *)(v9 + 88) = *a2;
    *(_DWORD *)(v9 + 104) = 0;
    *(_DWORD *)(v9 + 108) = 0x80000000;
    *(_DWORD *)(v9 + 112) = a2->top;
    *(_DWORD *)(v9 + 116) = 0;
    v30 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
    *v30 = 2;
    v30[1] = a2->top;
    v30[2] = a3->top;
    v30[3] = a2->left;
    v30[4] = a2->right;
    v30[5] = 2;
    v31 = (_DWORD *)((char *)v30 + (unsigned int)(4 * *v30 + 16));
    *v31 = 4;
    v32 = a3->top;
LABEL_32:
    v31[1] = v32;
    v31[2] = a3->bottom;
    v31[3] = a2->left;
    v31[4] = a3->left;
    v31[5] = a3->right;
    v31[6] = a2->right;
    v31[7] = 4;
LABEL_33:
    v33 = (_DWORD *)((char *)v31 + (unsigned int)(4 * *v31 + 16));
    *v33 = 2;
    v33[1] = a3->bottom;
    v33[2] = a2->bottom;
    v34 = a2->left;
    goto LABEL_34;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v53, *(_DWORD *)(v9 + 80));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v53);
  if ( v53[0] )
  {
    RGNOBJ::vCopy((RGNOBJ *)v53, this);
    if ( (unsigned int)RGNOBJ::bSubtractComplex((RGNOBJ *)v53, a2, a3, a4) )
      v11 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)v53);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v53);
  return v11;
}
