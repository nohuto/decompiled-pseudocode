/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C013DA60
 * Callers:
 *     <none>
 * Callees:
 *     InternalGetRealClientRect @ 0x1C005D230 (InternalGetRealClientRect.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     InternalBeginDeferWindowPos @ 0x1C0066D34 (InternalBeginDeferWindowPos.c)
 *     _DeferWindowPos @ 0x1C0066DC0 (_DeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _ScreenToClient @ 0x1C00C8AF0 (_ScreenToClient.c)
 */

struct tagBWL *__fastcall xxxArrangeIconicWindows(__int64 a1)
{
  unsigned __int16 v2; // si
  struct tagBWL *result; // rax
  struct tagBWL *v4; // rbx
  int v5; // r15d
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 *v12; // rdi
  int v13; // r13d
  __int64 v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // rbx
  char v17; // si
  unsigned __int64 v18; // r9
  unsigned int v19; // esi
  _DWORD *Prop; // rax
  bool v21; // zf
  _DWORD *v22; // r9
  __int64 v23; // r11
  signed int v24; // ecx
  __int64 v25; // rdx
  int v26; // r12d
  int v27; // edi
  unsigned int v28; // ecx
  int v29; // r14d
  int v30; // edx
  int v31; // edx
  int v32; // eax
  __int64 v33; // rdx
  unsigned __int64 *v34; // rsi
  unsigned __int64 *v35; // r13
  __int64 v36; // rax
  unsigned __int64 *v37; // r15
  int v38; // r12d
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 *v42; // r11
  int v43; // esi
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  bool v46; // cc
  bool v47; // cc
  bool v48; // cc
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  unsigned __int64 *v52; // r10
  unsigned __int64 v53; // rax
  unsigned __int64 *v54; // r15
  unsigned __int64 *v55; // rbx
  unsigned __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  struct tagSMWP *v62; // rdi
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  __int64 v75; // [rsp+50h] [rbp-59h]
  unsigned __int64 v76; // [rsp+50h] [rbp-59h]
  unsigned int v77; // [rsp+58h] [rbp-51h]
  unsigned int v78; // [rsp+5Ch] [rbp-4Dh]
  int v79; // [rsp+60h] [rbp-49h]
  int v80; // [rsp+64h] [rbp-45h]
  int v81; // [rsp+68h] [rbp-41h]
  _DWORD v82[3]; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v83; // [rsp+7Ch] [rbp-2Dh]
  unsigned __int64 *v84; // [rsp+80h] [rbp-29h]
  __int64 v85; // [rsp+88h] [rbp-21h]
  unsigned __int64 *v86; // [rsp+90h] [rbp-19h]
  struct tagBWL *v87; // [rsp+98h] [rbp-11h]
  _QWORD v88[12]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int16 v89; // [rsp+110h] [rbp+67h]
  int v90; // [rsp+118h] [rbp+6Fh]
  int v91; // [rsp+120h] [rbp+77h]
  int v92; // [rsp+128h] [rbp+7Fh]

  v2 = 0;
  v89 = 0;
  v79 = 0;
  v80 = 0;
  v90 = 0;
  v91 = 0;
  v81 = 0;
  result = BuildHwndList(*(_QWORD *)(a1 + 112), (struct tagWND *)2, 0LL);
  v87 = result;
  v4 = result;
  if ( !result )
    return result;
  v78 = IsTrayWindow(*(_QWORD *)(a1 + 112));
  v5 = *(_DWORD *)(gpsi + 2068LL);
  v6 = *(_DWORD *)(gpsi + 2072LL);
  InternalGetRealClientRect(a1, (__int64)v82, 1, 0LL, 1);
  LOBYTE(v7) = 1;
  v75 = HMValidateHandleNoSecure(ghwndSwitch, v7, v8, v9);
  v12 = (unsigned __int64 *)((char *)v4 + 32);
  v84 = (unsigned __int64 *)((char *)v4 + 32);
  if ( *((_QWORD *)v4 + 4) == 1LL )
  {
    v15 = 0;
LABEL_11:
    v19 = v15;
    goto LABEL_12;
  }
  v13 = v82[2];
  do
  {
    LOBYTE(v10) = 1;
    v14 = HMValidateHandleNoSecure(*v12, v10, v11, 1LL);
    v15 = 0;
    v16 = v14;
    if ( !v14 )
      goto LABEL_7;
    v17 = *(_BYTE *)(v14 + 71);
    if ( (v17 & 0x10) == 0 || v14 == v75 || (Prop = (_DWORD *)GetProp(v14, atomCheckpointProp, 1), v15 = 0, !Prop) )
    {
      v2 = v89;
LABEL_7:
      *v12 = 0LL;
      goto LABEL_8;
    }
    v21 = (v17 & 0x20) == 0;
    v2 = v89;
    if ( v21 )
    {
      Prop[8] &= ~8u;
      Prop[5] = -1;
      Prop[4] = -1;
      goto LABEL_7;
    }
    Prop[8] &= ~1u;
    v2 = v89 + 1;
    Prop[4] = *(_DWORD *)(v16 + 128);
    Prop[5] = *(_DWORD *)(v16 + 132);
    ++v89;
    ScreenToClient(a1, Prop + 4);
    v24 = *(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2104LL) < 0 )
      goto LABEL_8;
    if ( v24 > 1 )
    {
      if ( v24 <= 3 )
      {
        v10 = (unsigned int)((*(_DWORD *)(v23 + 20) + v6 / 2) >> 31);
        LODWORD(v10) = (*(_DWORD *)(v23 + 20) + v6 / 2) % v6;
        *(_DWORD *)(v23 + 20) = *(_DWORD *)(v23 + 20) + v6 / 2 - v10;
      }
      else
      {
        switch ( v24 )
        {
          case 4:
            goto LABEL_27;
          case 5:
            goto LABEL_26;
          case 6:
LABEL_27:
            v10 = (unsigned int)((*v22 + v5 / 2) >> 31);
            LODWORD(v10) = (*v22 + v5 / 2) % v5;
            *v22 = *v22 + v5 / 2 - v10;
            break;
          case 7:
LABEL_26:
            v10 = (unsigned int)((v5 / 2 - *v22 + v13) % v5 - (v5 / 2 - *v22));
            *v22 = v10;
            break;
        }
      }
LABEL_8:
      v11 = v83;
      goto LABEL_9;
    }
    v11 = v83;
    v10 = (unsigned int)((int)(v6 / 2 - *(_DWORD *)(v23 + 20) + v83) % v6 - (v6 / 2 - *(_DWORD *)(v23 + 20)));
    *(_DWORD *)(v23 + 20) = v10;
LABEL_9:
    ++v12;
    v18 = 1LL;
  }
  while ( *v12 != 1 );
  if ( !v2 )
    goto LABEL_11;
  v25 = v78;
  if ( v78 )
  {
    v26 = 0;
    v27 = -32000;
    v28 = 0;
    v29 = -32000;
    v76 = 0xFFFF8300FFFF8300uLL;
    goto LABEL_105;
  }
  v30 = *(_DWORD *)(gpsi + 2104LL);
  if ( (v30 & 1) != 0 )
  {
    v79 = v13 - v5;
    v27 = v13 - v5;
    LODWORD(v76) = v13 - v5;
    v90 = -v5;
  }
  else
  {
    v79 = v82[0] + *(_DWORD *)(gpsi + 2068LL) - *(_DWORD *)(gpsi + 2108LL);
    v27 = v79;
    LODWORD(v76) = v79;
    v18 = 1LL;
    v90 = v5;
  }
  if ( (v30 & 2) != 0 )
  {
    v91 = v6;
    v80 = v82[1] + *(_DWORD *)(gpsi + 2072LL) - *(_DWORD *)(gpsi + 2112LL);
    v29 = v80;
    HIDWORD(v76) = v80;
  }
  else
  {
    v80 = v11 - v6;
    v29 = v11 - v6;
    HIDWORD(v76) = v11 - v6;
    v91 = -v6;
  }
  v31 = *(_DWORD *)(gpsi + 2104LL) & 4;
  v28 = v15;
  LOBYTE(v28) = v31 == 0;
  if ( v31 )
  {
    v33 = (unsigned int)((int)v11 >> 31);
    LODWORD(v33) = (int)v11 % v6;
    v32 = (int)v11 / v6;
  }
  else
  {
    v33 = (unsigned int)(v13 >> 31);
    LODWORD(v33) = v13 % v5;
    v32 = v13 / v5;
  }
  v34 = v84;
  v26 = v32;
  v35 = v84;
  if ( v32 < 1 )
    v26 = 1;
  v92 = v26;
  v81 = v26;
  if ( *v84 != 1 )
  {
    v77 = v28;
    while ( 1 )
    {
      if ( !*v35 )
        goto LABEL_102;
      LOBYTE(v33) = 1;
      v36 = HMValidateHandleNoSecure(*v35, v33, v11, v18);
      v86 = (unsigned __int64 *)v36;
      if ( !v36 )
        goto LABEL_102;
      v37 = v34;
      v38 = 0;
      v39 = *(_QWORD *)(GetProp(v36, atomCheckpointProp, 1) + 16);
      v85 = v39;
      if ( v34 >= v35 )
        goto LABEL_93;
      v43 = HIDWORD(v85);
      while ( 1 )
      {
        if ( *v37 )
        {
          LOBYTE(v33) = 1;
          v44 = HMValidateHandleNoSecure(*v37, v33, v40, v41);
          if ( v44 )
            break;
        }
LABEL_91:
        if ( ++v37 >= v35 )
          goto LABEL_92;
      }
      v45 = *(_QWORD *)(GetProp(v44, atomCheckpointProp, 1) + 16);
      v33 = gpsi;
      v40 = *(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7;
      if ( (*(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7) == 0 )
        break;
      v40 = (unsigned int)(v40 - 1);
      if ( !(_DWORD)v40 )
      {
        v50 = HIDWORD(v45);
        v48 = SHIDWORD(v45) < v43;
        if ( HIDWORD(v45) != v43 )
          goto LABEL_88;
        if ( (int)v45 < (int)v39 )
          goto LABEL_89;
LABEL_87:
        v48 = (int)v50 < v43;
        goto LABEL_88;
      }
      v40 = (unsigned int)(v40 - 1);
      if ( !(_DWORD)v40 )
      {
        v49 = HIDWORD(v45);
        v47 = SHIDWORD(v45) <= v43;
        if ( HIDWORD(v45) != v43 )
          goto LABEL_68;
        if ( (int)v45 > (int)v39 )
          goto LABEL_89;
LABEL_67:
        v47 = (int)v49 <= v43;
        goto LABEL_68;
      }
      v40 = (unsigned int)(v40 - 1);
      if ( !(_DWORD)v40 )
      {
        v49 = HIDWORD(v45);
        v47 = SHIDWORD(v45) <= v43;
        if ( HIDWORD(v45) != v43 )
          goto LABEL_68;
        if ( (int)v45 < (int)v39 )
          goto LABEL_89;
        goto LABEL_67;
      }
      v40 = (unsigned int)(v40 - 1);
      if ( !(_DWORD)v40 )
      {
        v47 = (int)v45 <= (int)v39;
        if ( (_DWORD)v45 == (_DWORD)v39 )
        {
          if ( SHIDWORD(v45) < v43 )
            goto LABEL_89;
LABEL_66:
          v47 = (int)v45 <= (int)v39;
        }
        goto LABEL_68;
      }
      v40 = (unsigned int)(v40 - 1);
      if ( !(_DWORD)v40 )
      {
        v48 = (int)v45 < (int)v39;
        if ( (_DWORD)v45 == (_DWORD)v39 )
        {
          if ( SHIDWORD(v45) < v43 )
            goto LABEL_89;
          v48 = (int)v45 < (int)v39;
        }
LABEL_88:
        if ( v48 )
          goto LABEL_89;
        goto LABEL_90;
      }
      v40 = (unsigned int)(v40 - 1);
      if ( !(_DWORD)v40 )
      {
        v47 = (int)v45 <= (int)v39;
        if ( (_DWORD)v45 == (_DWORD)v39 )
        {
          if ( SHIDWORD(v45) <= v43 )
            goto LABEL_66;
LABEL_89:
          v38 = 1;
LABEL_90:
          if ( v38 )
            goto LABEL_92;
          goto LABEL_91;
        }
LABEL_68:
        if ( !v47 )
          goto LABEL_89;
        goto LABEL_90;
      }
      if ( (_DWORD)v40 != 1 )
        goto LABEL_90;
      v46 = (int)v45 < (int)v39;
      if ( (_DWORD)v45 == (_DWORD)v39 )
      {
        if ( SHIDWORD(v45) > v43 )
          goto LABEL_92;
        v46 = (int)v45 < (int)v39;
      }
      if ( !v46 )
        goto LABEL_90;
LABEL_92:
      v42 = v86;
      v34 = v84;
LABEL_93:
      v18 = 0LL;
      v11 = (unsigned __int64)((char *)v35 - (char *)v37 + 7) >> 3;
      if ( v37 > v35 )
        v11 = 0LL;
      if ( v11 )
      {
        do
        {
          v33 = 3LL * (unsigned __int16)*(_DWORD *)v37;
          v51 = 0LL;
          v52 = *(unsigned __int64 **)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)v37);
          if ( v42 )
            v51 = *v42;
          *v37 = v51;
          ++v18;
          ++v37;
          v42 = v52;
        }
        while ( v18 < v11 );
      }
      v53 = 0LL;
      if ( v42 )
        v53 = *v42;
      *v35 = v53;
LABEL_102:
      if ( *++v35 == 1 )
      {
        v27 = v76;
        v26 = v92;
        v28 = v77;
        goto LABEL_104;
      }
    }
    v50 = HIDWORD(v45);
    v48 = SHIDWORD(v45) < v43;
    if ( HIDWORD(v45) != v43 )
      goto LABEL_88;
    if ( (int)v45 > (int)v39 )
      goto LABEL_89;
    goto LABEL_87;
  }
LABEL_104:
  v25 = 0LL;
LABEL_105:
  v54 = v84;
  v55 = v84;
  v56 = *v84;
  if ( *v84 != 1 )
  {
    v57 = (int)v25;
    v58 = v28;
    while ( 1 )
    {
      if ( !v56 )
        goto LABEL_117;
      LOBYTE(v25) = 1;
      v59 = HMValidateHandleNoSecure(v56, v25, v11, v18);
      if ( !v59 )
        goto LABEL_117;
      v60 = GetProp(v59, atomCheckpointProp, 1);
      if ( v60 )
      {
        *(_DWORD *)(v60 + 32) |= 8u;
        *(_QWORD *)(v60 + 16) = v76;
      }
      if ( v57 )
        goto LABEL_117;
      if ( --v26 > 0 )
      {
        if ( v58 )
        {
          v27 += v90;
          LODWORD(v76) = v27;
          goto LABEL_117;
        }
      }
      else
      {
        v26 = v81;
        if ( !v58 )
        {
          v27 += v90;
          v29 = v80;
          LODWORD(v76) = v27;
          goto LABEL_116;
        }
        v27 = v79;
        LODWORD(v76) = v79;
      }
      v29 += v91;
LABEL_116:
      HIDWORD(v76) = v29;
LABEL_117:
      v56 = *++v55;
      if ( *v55 == 1 )
      {
        v54 = v84;
        break;
      }
    }
  }
  v19 = v89;
  v62 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v89);
  if ( v62 )
  {
    while ( 1 )
    {
      v74 = *v54;
      if ( *v54 == 1 )
        break;
      if ( v74 )
      {
        LOBYTE(v61) = 1;
        v65 = HMValidateHandleNoSecure(v74, v61, v63, v64);
        v66 = v65;
        if ( v65 )
        {
          v67 = GetProp(v65, atomCheckpointProp, 1);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70);
          v88[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v88;
          v88[1] = v66;
          _InterlockedAdd((volatile signed __int32 *)(v66 + 8), 1u);
          v62 = (struct tagSMWP *)DeferWindowPos(
                                    (__int64)v62,
                                    v66,
                                    0LL,
                                    *(_DWORD *)(v67 + 16),
                                    *(_DWORD *)(v67 + 20),
                                    *(_DWORD *)(gpsi + 2108LL),
                                    *(_DWORD *)(gpsi + 2112LL),
                                    276,
                                    0);
          ThreadUnlock1(v73, v72);
          if ( !v62 )
            goto LABEL_12;
        }
      }
      ++v54;
    }
    xxxEndDeferWindowPosEx(v62, 1);
  }
LABEL_12:
  FreeHwndList(v87);
  return (struct tagBWL *)v19;
}
