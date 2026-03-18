/*
 * XREFs of bSetXform @ 0x1C02321CC
 * Callers:
 *     bGrabXform @ 0x1C0231E2C (bGrabXform.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     vCalcXformVertical @ 0x1C0233898 (vCalcXformVertical.c)
 *     fs__NewTransformation @ 0x1C02B684C (fs__NewTransformation.c)
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 */

__int64 __fastcall bSetXform(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v8; // r15d
  bool v9; // cc
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // r8
  int fixed; // eax
  __int64 v21; // r8
  unsigned int v22; // r10d
  int v23; // ecx
  int v24; // edi
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // r8
  unsigned int v33; // r11d
  __int64 v34; // r8
  int v35; // eax
  unsigned int v36; // r11d
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // r11d
  __int64 v41; // r8
  unsigned int v42; // r11d
  __int64 v43; // r8
  int v44; // eax
  int v45; // r10d
  int v46; // eax
  __int128 v47; // xmm1
  __int64 v48; // rax
  __int16 v49; // cx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  __int128 v54; // [rsp+20h] [rbp-30h] BYREF
  __int128 v55; // [rsp+30h] [rbp-20h]
  int v56; // [rsp+40h] [rbp-10h]

  v5 = *(_OWORD *)(a1 + 80);
  v56 = *(_DWORD *)(a1 + 112);
  v6 = *(_OWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 32) = 1;
  v8 = a3;
  v9 = *(_DWORD *)(a1 + 52) <= 0x7FFFu;
  v54 = v5;
  v55 = v6;
  if ( !v9 )
    *(_DWORD *)(a1 + 52) = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 108LL) = *(_WORD *)(a1 + 44);
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 110LL) = *(_WORD *)(a1 + 48);
  v12 = *(_DWORD *)(a1 + 116);
  if ( (v12 & 8) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = 786432;
    *(_QWORD *)&v54 = 0x10000LL;
    HIDWORD(v54) = 0;
    LODWORD(v55) = 0x10000;
  }
  else if ( (v12 & 1) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 52);
    if ( v13 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = v13 << 16;
      v18 = CompDiv(
              (unsigned int)(*(_DWORD *)(a1 + 44) * *(_DWORD *)(a1 + 52)),
              72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
      fixed = FixMul((unsigned int)v54, v18, v19);
      v23 = *(_DWORD *)(a1 + 48);
      LODWORD(v54) = fixed;
      if ( v23 != *(_DWORD *)(a1 + 44) )
        v22 = CompDiv(
                (unsigned int)(*(_DWORD *)(a1 + 52) * v23),
                72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
      LODWORD(v55) = FixMul((unsigned int)v55, v22, v21);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = *(_DWORD *)(a1 + 128);
      v14 = -65536;
      v15 = *(_DWORD *)(a1 + 96);
      if ( v15 > 0 )
        v14 = 0x10000;
      LODWORD(v55) = v14;
      if ( v15 == *(_DWORD *)(a1 + 80) && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a1 + 44) )
      {
        LODWORD(v54) = v14;
      }
      else
      {
        v16 = CompDiv(
                (unsigned int)(*(_DWORD *)(a1 + 44) * *(_DWORD *)(a1 + 124)),
                *(int *)(a1 + 48) * (__int64)(*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
        LODWORD(v54) = FixMul((unsigned int)v54, v16, v17);
      }
    }
  }
  else
  {
    v24 = *(_DWORD *)(a1 + 52);
    if ( v24 )
    {
      v25 = v24 << 16;
    }
    else
    {
      v25 = *(_DWORD *)(a1 + 128);
      v24 = ((*(int *)(a1 + 128) >> 15) + 1) >> 1;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = v25;
    if ( (*(_DWORD *)(a1 + 116) & 2) != 0
      && (v26 = *(_DWORD *)(a1 + 84), *(_DWORD *)(a1 + 92) == -v26)
      && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a1 + 44) )
    {
      LODWORD(v54) = 0;
      LODWORD(v55) = 0;
      v27 = -65536;
      if ( v26 > 0 )
        v27 = 0x10000;
      DWORD1(v54) = v27;
      HIDWORD(v54) = -v27;
    }
    else
    {
      v28 = *(_DWORD *)(a1 + 44);
      if ( v28 * (v24 + 1) <= 0x8000 )
      {
        v30 = (unsigned int)(v28 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL));
        v29 = 4718592LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
      }
      else
      {
        v29 = 72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
        v30 = (unsigned int)(v24 * v28);
      }
      v31 = CompDiv(v30, v29);
      LODWORD(v54) = FixMul((unsigned int)v54, v31, v32);
      v35 = FixMul(HIDWORD(v54), v33, v34);
      v37 = *(unsigned int *)(a1 + 48);
      HIDWORD(v54) = v35;
      if ( (_DWORD)v37 != *(_DWORD *)(a1 + 44) )
      {
        if ( (int)v37 * (v24 + 1) <= 0x8000 )
        {
          v39 = (unsigned int)(v37 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL));
          v38 = 4718592LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
        }
        else
        {
          v38 = 72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
          v39 = (unsigned int)(v24 * v37);
        }
        v36 = CompDiv(v39, v38);
      }
      LODWORD(v55) = FixMul((unsigned int)v55, v36, v37);
      DWORD1(v54) = FixMul(DWORD1(v54), v40, v41);
    }
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    HIDWORD(v54) += FixMul((unsigned int)v54, 22272LL, a3);
    v44 = FixMul(DWORD1(v54), v42, v43);
    LODWORD(v55) = v44 + v45;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 120LL) = &v54;
  if ( *(_DWORD *)(a1 + 308) )
  {
    v46 = v56;
    v47 = v55;
    *(_OWORD *)(a1 + 356) = v54;
    *(_OWORD *)(a1 + 372) = v47;
    *(_DWORD *)(a1 + 388) = v46;
    *(_DWORD *)(a1 + 316) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL);
    vCalcXformVertical(a1);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 92682;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 136LL) = *(_WORD *)(a1 + 402);
  v48 = *(_QWORD *)(a1 + 176);
  if ( v8 == -1 )
  {
    v49 = a4 != 0 ? 17 : 1;
LABEL_42:
    *(_WORD *)(v48 + 152) = v49;
    goto LABEL_44;
  }
  if ( v8 == 1 )
  {
    v49 = a4 != 0 ? 19 : 3;
    goto LABEL_42;
  }
  *(_WORD *)(v48 + 152) = 0;
LABEL_44:
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 164LL) = a5;
  else
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 164LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 128LL) = 0LL;
  v50 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
  {
    *(_WORD *)(v50 + 138) = 20;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 20;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 148LL) = a2;
  }
  else
  {
    *(_WORD *)(v50 + 138) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 148LL) = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 156LL) = 0;
  v51 = *(_DWORD *)(a1 + 120);
  if ( (v51 & 4) != 0 )
  {
    if ( (v51 & 8) != 0 && (v52 = *(_QWORD *)(a1 + 176), (*(_BYTE *)(v52 + 152) & 1) != 0) && *(_DWORD *)(v52 + 148) )
      *(_DWORD *)(v52 + 160) = 1;
    else
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 160LL) = 0;
  }
  if ( (unsigned int)fs__NewTransformation(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184), 1LL)
    && (unsigned int)fs__NewTransformation(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184), 0LL) )
  {
    return 0LL;
  }
  if ( a2 && (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
    *(_DWORD *)(a1 + 116) |= 0x80u;
  else
    *(_DWORD *)(a1 + 116) &= ~0x80u;
  return 1LL;
}
