/*
 * XREFs of RaspScanConvert @ 0x14013CED0
 * Callers:
 *     RaspRasterize @ 0x14013CB58 (RaspRasterize.c)
 * Callees:
 *     RaspDestroySegmentList @ 0x14013CC54 (RaspDestroySegmentList.c)
 *     RaspFreeMemory @ 0x14013CD18 (RaspFreeMemory.c)
 *     RaspTestIntersection @ 0x14013D310 (RaspTestIntersection.c)
 *     BgpFmRoundUp @ 0x14013D6E0 (BgpFmRoundUp.c)
 *     RaspRectangleCreate @ 0x14013D700 (RaspRectangleCreate.c)
 *     BgpGxInitializeRectangle @ 0x14013D774 (BgpGxInitializeRectangle.c)
 *     RaspCreateSegmentList @ 0x14013DEDC (RaspCreateSegmentList.c)
 *     RaspAllocateMemory @ 0x14013E2C0 (RaspAllocateMemory.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall RaspScanConvert(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        __int64 **a6,
        int *a7,
        _QWORD *a8)
{
  bool v10; // bp
  _QWORD *v11; // r13
  int SegmentList; // eax
  __int64 v13; // rdx
  __int64 v14; // r15
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // r9d
  int v21; // r11d
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r10d
  int v26; // r9d
  int v27; // eax
  int v28; // ecx
  int v29; // esi
  int v30; // r12d
  int v31; // esi
  int v32; // r14d
  int v33; // eax
  __int64 *v34; // rdi
  __int64 *Memory; // rbp
  unsigned int v36; // edi
  __int64 v37; // rbx
  int v38; // r13d
  size_t v39; // rcx
  unsigned int v40; // r12d
  _BYTE *v41; // rsi
  signed int v42; // r10d
  int v43; // edx
  _BYTE *v44; // r8
  __int64 i; // rax
  __int64 v46; // rcx
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  int v51; // r9d
  int v52; // r8d
  __int64 v53; // rdx
  signed int v54; // r11d
  signed int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  signed int v59; // [rsp+30h] [rbp-68h] BYREF
  signed int v60; // [rsp+34h] [rbp-64h] BYREF
  int v61; // [rsp+38h] [rbp-60h]
  int v62; // [rsp+3Ch] [rbp-5Ch]
  __int64 v63; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v64; // [rsp+48h] [rbp-50h]
  _DWORD v65[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 *v66; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v67; // [rsp+B0h] [rbp+18h] BYREF
  int v68; // [rsp+B8h] [rbp+20h]

  v68 = a4;
  v67 = a3;
  v66 = 0LL;
  v63 = 0LL;
  v10 = (a5 & 1) != 0;
  v11 = a8;
  SegmentList = RaspCreateSegmentList(
                  a1,
                  a2,
                  *(unsigned __int16 *)(a1 + 24),
                  (unsigned int)&v63,
                  (__int64)&v67,
                  (__int64)a8);
  v14 = v67;
  v15 = SegmentList;
  if ( SegmentList >= 0 )
  {
    v16 = BgpFmRoundUp(*(unsigned int *)(a1 + 14), v13);
    v17 = *(unsigned int *)(a1 + 6);
    v68 = v16;
    v19 = BgpFmRoundUp(v17, v18);
    v22 = v21 - v19 + 1;
    if ( v21 == v19 )
    {
      v56 = *(_DWORD *)(17LL * (v20 + 1) + a2 + 4);
      v57 = v56 >> 6;
      if ( v56 < 0 )
        v57 |= 0xFC000000;
      v22 = v57 + 1;
      if ( (v56 & 0x20) == 0 )
        v22 = v57;
      v68 = v22;
    }
    v23 = 17LL * (v20 + 1);
    v24 = 17LL * v20;
    v25 = *(_DWORD *)(v24 + a2);
    v26 = *(_DWORD *)(v24 + a2 + 8);
    v27 = *(_DWORD *)(v23 + a2) + *(_DWORD *)(v23 + a2 + 8) - v25 - v26;
    v28 = v27 >> 6;
    if ( v27 < 0 )
      v28 |= 0xFC000000;
    v29 = v28 + 1;
    v30 = 4 * v22;
    if ( (v27 & 0x20) == 0 )
      v29 = v28;
    v62 = 4 * v22;
    v31 = 4 * v29;
    v32 = v25 + v26;
    v61 = v31;
    v65[1] = 4 * v22;
    v65[0] = v31;
    v65[2] = v31;
    if ( v10 )
    {
      v34 = qword_1408918C0;
      v64 = qword_1408918C0;
      v15 = BgpGxInitializeRectangle(v65, 1LL, qword_1408918C0, 3140LL);
      if ( v15 < 0 )
        goto LABEL_30;
    }
    else
    {
      v33 = RaspRectangleCreate(v65, 1LL, &v66, v11);
      v34 = v66;
      v15 = v33;
      v64 = v66;
    }
    if ( v15 >= 0 )
    {
      memset((void *)v34[3], 0, *((unsigned int *)v34 + 3));
      if ( !v63 )
      {
        v58 = v68;
        *a6 = v34;
        *a7 = v58;
        return 0LL;
      }
      if ( v10 )
      {
        if ( v31 <= 104 )
        {
          Memory = qword_140891720;
          goto LABEL_13;
        }
      }
      else
      {
        Memory = (__int64 *)RaspAllocateMemory(4LL * v31);
        if ( Memory )
        {
LABEL_13:
          v36 = 0;
          v37 = v31;
          v38 = 0;
          a5 = 0;
          if ( v30 > 0 )
          {
            v39 = 4LL * v31;
            LODWORD(v66) = v68 << 6;
            while ( 1 )
            {
              memset(Memory, 0, v39);
              v40 = (_DWORD)v66 + -16 * (v38 & 3) - ((unsigned int)v38 >> 2 << 6);
              if ( (_DWORD)v14 )
                break;
LABEL_20:
              v43 = 128 >> (v36 & 7);
              v44 = (_BYTE *)(v64[3] + ((unsigned __int64)v36 >> 3));
              for ( i = 0LL; i < v37; ++i )
              {
                if ( *((_DWORD *)Memory + i) )
                  *v44 |= v43;
                LOBYTE(v43) = (unsigned __int8)v43 >> 1;
                if ( !(_BYTE)v43 )
                {
                  LOBYTE(v43) = 0x80;
                  ++v44;
                }
              }
              v36 += v31;
              v39 = 4 * v37;
              ++v38;
              a5 = v36;
              if ( v38 >= v62 )
                goto LABEL_27;
            }
            v41 = (_BYTE *)(v63 + 24);
            while ( 1 )
            {
              RaspTestIntersection(v41 - 24, v40, &v59, &v60);
              v42 = v59;
              if ( v59 != 0x7FFFFFFF )
                break;
LABEL_18:
              v41 += 25;
              if ( !--v14 )
              {
                v36 = a5;
                v14 = v67;
                v31 = v61;
                goto LABEL_20;
              }
            }
            v48 = *((_QWORD *)v41 - 1);
            v49 = *(_DWORD *)(v48 + 12);
            v50 = v49
                + *(_DWORD *)(v48 + 4)
                - *(_DWORD *)(*((_QWORD *)v41 - 3) + 12LL)
                - *(_DWORD *)(*((_QWORD *)v41 - 3) + 4LL);
            if ( !v50 )
            {
              if ( *v41 == 1 )
                goto LABEL_57;
              v50 = v49
                  + *(_DWORD *)(v48 + 4)
                  - *(_DWORD *)(*((_QWORD *)v41 - 2) + 12LL)
                  - *(_DWORD *)(*((_QWORD *)v41 - 2) + 4LL);
            }
            if ( v50 > 0 )
            {
              v51 = 1;
LABEL_36:
              v52 = 0;
              v53 = 0LL;
              if ( v37 <= 0 )
                goto LABEL_18;
              v54 = v60;
              while ( 1 )
              {
                v55 = v32 + ((16 * v52) & 0xFFFFFFC0) + 16 * (v52 & 3);
                if ( *v41 == 1 )
                  break;
                if ( v54 != 0x7FFFFFFF )
                {
                  if ( v55 < v42 || v55 > v54 )
                    goto LABEL_42;
LABEL_41:
                  *((_DWORD *)Memory + v53) += v51;
                  goto LABEL_42;
                }
                if ( v55 <= v42 )
                  goto LABEL_41;
LABEL_42:
                ++v52;
                if ( ++v53 >= v37 )
                  goto LABEL_18;
              }
              if ( v55 > v42 )
                goto LABEL_42;
              goto LABEL_41;
            }
            if ( v50 < 0 )
            {
              v51 = -1;
              goto LABEL_36;
            }
LABEL_57:
            v51 = 0;
            goto LABEL_36;
          }
LABEL_27:
          v15 = 0;
          *a6 = v64;
          *a7 = v68;
          v11 = a8;
          if ( Memory == qword_140891720 )
            goto LABEL_30;
          v46 = (__int64)Memory;
LABEL_29:
          RaspFreeMemory(v46, v11);
          goto LABEL_30;
        }
      }
      v15 = -1073741670;
    }
    if ( !v34 )
      goto LABEL_30;
    v46 = (__int64)v34;
    goto LABEL_29;
  }
LABEL_30:
  if ( v63 )
    RaspDestroySegmentList(v63, v14, (__int64)v11);
  return (unsigned int)v15;
}
