/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C0137030
 * Callers:
 *     <none>
 * Callees:
 *     _ScreenToClient @ 0x1C0018E14 (_ScreenToClient.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     InternalBeginDeferWindowPos @ 0x1C006323C (InternalBeginDeferWindowPos.c)
 *     _DeferWindowPos @ 0x1C00632C8 (_DeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     InternalGetRealClientRect @ 0x1C00EF82C (InternalGetRealClientRect.c)
 */

struct tagBWL *__fastcall xxxArrangeIconicWindows(__int64 a1)
{
  unsigned __int16 v2; // di
  struct tagBWL *result; // rax
  struct tagBWL *v4; // rbx
  int v5; // esi
  int v6; // r15d
  unsigned __int64 *v7; // rbx
  int v8; // r13d
  int v9; // r12d
  __int64 v10; // r11
  char v11; // di
  __int64 v12; // r11
  unsigned int v13; // edi
  _DWORD *Prop; // rax
  __int64 v15; // r11
  bool v16; // zf
  _DWORD *v17; // r9
  __int64 v18; // r10
  signed int v19; // eax
  int v20; // ecx
  int v21; // r12d
  int v22; // edi
  int v23; // r14d
  __int64 v24; // r15
  _DWORD *v25; // rcx
  int v26; // r8d
  int v27; // r8d
  int v28; // eax
  unsigned __int64 *v29; // rsi
  unsigned __int64 *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r10
  unsigned __int64 *v34; // r11
  int v35; // r12d
  unsigned __int64 *v36; // r15
  __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  bool v40; // cc
  bool v41; // cc
  bool v42; // cc
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // rdx
  unsigned __int64 *v47; // r9
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 *v50; // rsi
  unsigned __int64 *v51; // rbx
  unsigned __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r8
  struct tagSMWP *v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // [rsp+50h] [rbp-49h]
  int v66; // [rsp+58h] [rbp-41h]
  int v67; // [rsp+5Ch] [rbp-3Dh]
  int v68; // [rsp+60h] [rbp-39h]
  int v69; // [rsp+64h] [rbp-35h]
  unsigned __int64 *v70; // [rsp+68h] [rbp-31h]
  __int64 v71; // [rsp+70h] [rbp-29h]
  __int64 v72; // [rsp+78h] [rbp-21h] BYREF
  int v73; // [rsp+80h] [rbp-19h]
  int v74; // [rsp+84h] [rbp-15h]
  unsigned __int64 *v75; // [rsp+88h] [rbp-11h]
  struct tagBWL *v76; // [rsp+90h] [rbp-9h]
  _QWORD v77[11]; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int16 v78; // [rsp+100h] [rbp+67h]
  int v79; // [rsp+108h] [rbp+6Fh]
  int v80; // [rsp+110h] [rbp+77h]
  int v81; // [rsp+118h] [rbp+7Fh]

  v2 = 0;
  v78 = 0;
  v67 = 0;
  v68 = 0;
  v79 = 0;
  v80 = 0;
  v69 = 0;
  result = BuildHwndList(*(_QWORD *)(a1 + 112), 2, 0LL);
  v76 = result;
  v4 = result;
  if ( !result )
    return result;
  v66 = IsTrayWindow(*(_QWORD *)(a1 + 112));
  v5 = *(_DWORD *)(gpsi + 2068LL);
  v6 = *(_DWORD *)(gpsi + 2072LL);
  InternalGetRealClientRect(a1, (int *)&v72, 1, 0LL, 1);
  v71 = HMValidateHandleNoSecure(ghwndSwitch, 1);
  v7 = (unsigned __int64 *)((char *)v4 + 32);
  v70 = v7;
  if ( *v7 == 1 )
  {
LABEL_10:
    v13 = 0;
    goto LABEL_11;
  }
  v8 = v74;
  v9 = v73;
  do
  {
    v10 = HMValidateHandleNoSecure(*v7, 1);
    if ( !v10 )
      goto LABEL_7;
    v11 = *(_BYTE *)(v10 + 71);
    if ( (v11 & 0x10) == 0 || v10 == v71 || (Prop = (_DWORD *)GetProp(v10, atomCheckpointProp, 1)) == 0LL )
    {
      v2 = v78;
LABEL_7:
      v12 = gpsi;
      *v7 = 0LL;
      goto LABEL_8;
    }
    v16 = (v11 & 0x20) == 0;
    v2 = v78;
    if ( v16 )
    {
      Prop[8] &= ~8u;
      Prop[5] = -1;
      Prop[4] = -1;
      goto LABEL_7;
    }
    Prop[8] &= ~1u;
    v2 = v78 + 1;
    Prop[4] = *(_DWORD *)(v15 + 128);
    Prop[5] = *(_DWORD *)(v15 + 132);
    ++v78;
    ScreenToClient(a1, Prop + 4);
    v12 = gpsi;
    v19 = *(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2104LL) >= 0 )
    {
      if ( v19 <= 1 )
      {
        *(_DWORD *)(v18 + 20) = (v6 / 2 - *(_DWORD *)(v18 + 20) + v8) % v6 - (v6 / 2 - *(_DWORD *)(v18 + 20));
      }
      else if ( v19 <= 3 )
      {
        *(_DWORD *)(v18 + 20) = *(_DWORD *)(v18 + 20) + v6 / 2 - (*(_DWORD *)(v18 + 20) + v6 / 2) % v6;
      }
      else
      {
        switch ( v19 )
        {
          case 4:
            goto LABEL_27;
          case 5:
            goto LABEL_26;
          case 6:
LABEL_27:
            *v17 = *v17 + v5 / 2 - (*v17 + v5 / 2) % v5;
            break;
          case 7:
LABEL_26:
            *v17 = (v5 / 2 - *v17 + v9) % v5 - (v5 / 2 - *v17);
            break;
        }
      }
    }
LABEL_8:
    ++v7;
  }
  while ( *v7 != 1 );
  if ( !v2 )
    goto LABEL_10;
  v20 = v66;
  if ( v66 )
  {
    v21 = 0;
    v22 = -32000;
    v65 = 0xFFFF8300FFFF8300uLL;
    v23 = -32000;
    v24 = 0LL;
    goto LABEL_106;
  }
  v25 = *(_DWORD **)v12;
  v26 = *(_DWORD *)(*(_QWORD *)v12 + 2104LL);
  if ( (v26 & 1) != 0 )
  {
    v67 = v9 - v5;
    v22 = v9 - v5;
    LODWORD(v65) = v9 - v5;
    v79 = -v5;
  }
  else
  {
    v67 = v72 + v25[517] - v25[527];
    v22 = v67;
    LODWORD(v65) = v67;
    v79 = v5;
  }
  if ( (v26 & 2) != 0 )
  {
    v80 = v6;
    v68 = HIDWORD(v72) + v25[518] - v25[528];
    v23 = v68;
    HIDWORD(v65) = v68;
  }
  else
  {
    v68 = v8 - v6;
    v23 = v8 - v6;
    HIDWORD(v65) = v8 - v6;
    v80 = -v6;
  }
  v27 = *(_DWORD *)(*(_QWORD *)v12 + 2104LL) & 4;
  if ( v27 )
    v28 = v8 / v6;
  else
    v28 = v9 / v5;
  v29 = v70;
  v21 = v28;
  v24 = 0LL;
  if ( v28 < 1 )
    v21 = 1;
  v30 = v70;
  v81 = v21;
  v69 = v21;
  LOBYTE(v24) = v27 == 0;
  if ( *v70 != 1 )
  {
    v72 = v24;
    while ( 1 )
    {
      if ( !*v30 )
        goto LABEL_103;
      v31 = HMValidateHandleNoSecure(*v30, 1);
      v75 = (unsigned __int64 *)v31;
      if ( !v31 )
        goto LABEL_103;
      v32 = GetProp(v31, atomCheckpointProp, 1);
      v35 = v33;
      v36 = v29;
      v37 = *(_QWORD *)(v32 + 16);
      if ( v29 >= v30 )
        goto LABEL_93;
      while ( 1 )
      {
        if ( *v36 )
        {
          v38 = HMValidateHandleNoSecure(*v36, 1);
          v33 = 0LL;
          if ( v38 )
            break;
        }
LABEL_91:
        if ( ++v36 >= v30 )
          goto LABEL_92;
      }
      v39 = *(_QWORD *)(GetProp(v38, atomCheckpointProp, 1) + 16);
      if ( (*(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7) == 0 )
        break;
      switch ( *(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7 )
      {
        case 1u:
          v44 = HIDWORD(v39);
          v42 = SHIDWORD(v39) < SHIDWORD(v37);
          if ( HIDWORD(v39) != HIDWORD(v37) )
            goto LABEL_88;
          if ( (int)v39 < (int)v37 )
            goto LABEL_89;
LABEL_87:
          v42 = (int)v44 < SHIDWORD(v37);
          goto LABEL_88;
        case 2u:
          v43 = HIDWORD(v39);
          v41 = SHIDWORD(v39) <= SHIDWORD(v37);
          if ( HIDWORD(v39) != HIDWORD(v37) )
            goto LABEL_68;
          if ( (int)v39 > (int)v37 )
            goto LABEL_89;
LABEL_67:
          v41 = (int)v43 <= SHIDWORD(v37);
          goto LABEL_68;
        case 3u:
          v43 = HIDWORD(v39);
          v41 = SHIDWORD(v39) <= SHIDWORD(v37);
          if ( HIDWORD(v39) != HIDWORD(v37) )
            goto LABEL_68;
          if ( (int)v39 < (int)v37 )
            goto LABEL_89;
          goto LABEL_67;
        case 4u:
          v41 = (int)v39 <= (int)v37;
          if ( (_DWORD)v39 == (_DWORD)v37 )
          {
            if ( SHIDWORD(v39) < SHIDWORD(v37) )
              goto LABEL_89;
LABEL_66:
            v41 = (int)v39 <= (int)v37;
          }
          goto LABEL_68;
        case 5u:
          v42 = (int)v39 < (int)v37;
          if ( (_DWORD)v39 == (_DWORD)v37 )
          {
            if ( SHIDWORD(v39) < SHIDWORD(v37) )
              goto LABEL_89;
            v42 = (int)v39 < (int)v37;
          }
LABEL_88:
          if ( v42 )
            goto LABEL_89;
          goto LABEL_90;
        case 6u:
          v41 = (int)v39 <= (int)v37;
          if ( (_DWORD)v39 == (_DWORD)v37 )
          {
            if ( SHIDWORD(v39) <= SHIDWORD(v37) )
              goto LABEL_66;
LABEL_89:
            v35 = 1;
LABEL_90:
            if ( v35 )
              goto LABEL_92;
            goto LABEL_91;
          }
LABEL_68:
          if ( !v41 )
            goto LABEL_89;
          goto LABEL_90;
      }
      if ( (*(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7) != 7 )
        goto LABEL_90;
      v40 = (int)v39 < (int)v37;
      if ( (_DWORD)v39 == (_DWORD)v37 )
      {
        if ( SHIDWORD(v39) > SHIDWORD(v37) )
          goto LABEL_92;
        v40 = (int)v39 < (int)v37;
      }
      if ( !v40 )
        goto LABEL_90;
LABEL_92:
      v34 = v75;
      v29 = v70;
LABEL_93:
      v45 = v33;
      v46 = (unsigned __int64)((char *)v30 - (char *)v36 + 7) >> 3;
      if ( v36 > v30 )
        v46 = v33;
      if ( v46 )
      {
        do
        {
          v47 = *(unsigned __int64 **)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)v36);
          v48 = 0LL;
          if ( v34 )
            v48 = *v34;
          *v36 = v48;
          ++v45;
          ++v36;
          v34 = v47;
        }
        while ( v45 < v46 );
        v29 = v70;
        v33 = 0LL;
      }
      v49 = v33;
      if ( v34 )
        v49 = *v34;
      *v30 = v49;
LABEL_103:
      if ( *++v30 == 1 )
      {
        v22 = v65;
        v24 = v72;
        v21 = v81;
        goto LABEL_105;
      }
    }
    v44 = HIDWORD(v39);
    v42 = SHIDWORD(v39) < SHIDWORD(v37);
    if ( HIDWORD(v39) != HIDWORD(v37) )
      goto LABEL_88;
    if ( (int)v39 > (int)v37 )
      goto LABEL_89;
    goto LABEL_87;
  }
LABEL_105:
  v20 = 0;
LABEL_106:
  v50 = v70;
  v51 = v70;
  v52 = *v70;
  if ( *v70 != 1 )
  {
    v53 = v20;
    v54 = 1LL;
    while ( !v52 )
    {
LABEL_122:
      v52 = *++v51;
      if ( *v51 == v54 )
      {
        v50 = v70;
        goto LABEL_124;
      }
    }
    v55 = HMValidateHandleNoSecure(v52, v54);
    if ( !v55 )
    {
      v54 = 1LL;
      goto LABEL_122;
    }
    v56 = GetProp(v55, atomCheckpointProp, 1);
    if ( v56 )
    {
      *(_DWORD *)(v56 + 32) |= 8u;
      *(_QWORD *)(v56 + 16) = v65;
    }
    v54 = v57;
    if ( v53 )
      goto LABEL_122;
    if ( --v21 > 0 )
    {
      if ( v24 )
      {
        v22 += v79;
        LODWORD(v65) = v22;
        goto LABEL_122;
      }
LABEL_116:
      v23 += v80;
    }
    else
    {
      v21 = v69;
      if ( v24 )
      {
        v22 = v67;
        LODWORD(v65) = v67;
        goto LABEL_116;
      }
      v22 += v79;
      v23 = v68;
      LODWORD(v65) = v22;
    }
    HIDWORD(v65) = v23;
    goto LABEL_122;
  }
LABEL_124:
  v13 = v78;
  v58 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v78);
  if ( v58 )
  {
    while ( 1 )
    {
      v64 = *v50;
      if ( *v50 == 1 )
        break;
      if ( v64 )
      {
        v59 = HMValidateHandleNoSecure(v64, 1);
        if ( v59 )
        {
          v60 = GetProp(v59, atomCheckpointProp, 1);
          v77[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v77;
          v77[1] = v61;
          ++*(_DWORD *)(v61 + 8);
          v58 = (struct tagSMWP *)DeferWindowPos(
                                    (__int64)v58,
                                    v61,
                                    0LL,
                                    *(_DWORD *)(v60 + 16),
                                    *(_DWORD *)(v60 + 20),
                                    *(_DWORD *)(gpsi + 2108LL),
                                    *(_DWORD *)(gpsi + 2112LL),
                                    276,
                                    0);
          ThreadUnlock1(v63, v62);
          if ( !v58 )
            goto LABEL_11;
        }
      }
      ++v50;
    }
    xxxEndDeferWindowPosEx(v58, 1);
  }
LABEL_11:
  FreeHwndList(v76);
  return (struct tagBWL *)v13;
}
