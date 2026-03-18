/*
 * XREFs of xxxMetricsRecalc @ 0x1C01B8F64
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0121738 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B8680 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

void __fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, unsigned int a6, unsigned int a7)
{
  struct tagBWL *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagBWL *v13; // rsi
  unsigned __int64 *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  BOOL v24; // eax
  _DWORD *Prop; // rax
  char v26; // r11
  int v27; // r11d
  __int64 DesktopWindow; // rax
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r9
  unsigned int v32; // r10d
  __int64 v33; // r11
  char v34; // al
  char v35; // cl
  int v36; // edx
  __int64 v37; // r9
  __int128 v38; // [rsp+50h] [rbp-30h]
  struct tagBWL *v39; // [rsp+60h] [rbp-20h]
  _QWORD v40[3]; // [rsp+68h] [rbp-18h] BYREF

  v9 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 16LL) + 112LL), (struct tagWND *)3, 0LL);
  v39 = v9;
  v13 = v9;
  if ( !v9 )
    return;
  v14 = (unsigned __int64 *)((char *)v9 + 32);
  v15 = (*((_QWORD *)v9 + 1) - (_QWORD)v9 - 32LL) >> 3;
  if ( (int)v15 <= 0 )
    goto LABEL_45;
  do
  {
    LOBYTE(v10) = 1;
    v16 = HMValidateHandleNoSecure(*v14, v10, v11, v12);
    v17 = v16;
    if ( !v16 )
      goto LABEL_43;
    if ( !IsNonImmersiveBand(v16) )
      goto LABEL_43;
    v10 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 400LL);
    if ( (*(_DWORD *)(v10 + 776) & 0x30) == 0x10 )
      goto LABEL_43;
    v40[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v40;
    v40[1] = v17;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v19 = 0;
    if ( (a1 & 4) != 0 && (*(_BYTE *)(v17 + 71) & 0x20) != 0 )
    {
LABEL_26:
      v19 = 1;
      DesktopWindow = GetDesktopWindow(v17);
      if ( v33 != DesktopWindow )
      {
        v29 -= *(_DWORD *)(v33 + 148);
        v32 -= *(_DWORD *)(v33 + 144);
        v30 -= *(_DWORD *)(v33 + 144);
        v31 = (unsigned int)(v31 - *(_DWORD *)(v33 + 148));
      }
      xxxSetWindowPos((struct tagWND *)v17, 0LL, v32, v31, v30 - v32, v29 - v31, 316);
      goto LABEL_29;
    }
    v20 = *(unsigned int *)(v17 + 68);
    v21 = 12582912LL;
    LOBYTE(v21) = (*(_DWORD *)(v17 + 68) & 0xC00000) != 12582912;
    v24 = 0;
    if ( ((unsigned __int8)v21 & ((v20 & 0x40000) == 0)) == 0 )
    {
      v22 = *(_QWORD *)(v17 + 16);
      v23 = *(_DWORD *)(v22 + 608) <= 0x9900u ? *(_DWORD *)(v22 + 624) : 0;
      if ( (v23 & 0x30000000) == 0 )
        v24 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_BYTE *)(v17 + 70) & 4) != 0 || v24) )
    {
      Prop = (_DWORD *)GetProp(v17, atomCheckpointProp, 1);
      v21 = a6;
      if ( !v26 )
        v21 = a7;
      v20 = (unsigned int)(v21 + a2);
      v27 = v21 + a3;
      if ( Prop )
      {
        v21 = (unsigned int)Prop[8];
        if ( (v21 & 0x10) != 0 )
        {
          Prop[6] -= v20;
          Prop[7] -= v27;
        }
      }
      if ( (*(_BYTE *)(v17 + 71) & 0x20) == 0 )
        goto LABEL_26;
      if ( Prop )
      {
        *Prop -= v20;
        Prop[2] += v20;
        Prop[1] -= v27;
        Prop[3] += v27;
      }
    }
LABEL_29:
    if ( (a1 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((__int64 *)v17, 128LL, 3uLL, 0LL, 0, 0, 0LL, 1u, 1);
      }
      v34 = *(_BYTE *)(v17 + 71);
      if ( (v34 & 0x20) == 0 && !v19 )
      {
        v35 = *(_BYTE *)(v17 + 56);
        v38 = *(_OWORD *)(v17 + 128);
        if ( (v35 & 1) != 0 )
          v36 = a5 + HIDWORD(v38);
        else
          v36 = HIDWORD(*(_OWORD *)(v17 + 128));
        if ( (v35 & 8) != 0
          && (v36 += a4, (v34 & 0x41) == 0x41)
          && (v37 = *(_QWORD *)(v17 + 104), (*(_WORD *)(v37 + 82) & 0x3FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            (struct tagWND *)v17,
            0LL,
            (unsigned int)(v38 - *(_DWORD *)(v37 + 128)),
            (unsigned int)(DWORD1(v38) - *(_DWORD *)(v37 + 132) - a4),
            DWORD2(v38) - v38,
            v36 - DWORD1(v38),
            60);
        }
        else
        {
          xxxSetWindowPos((struct tagWND *)v17, 0LL, 0LL, 0LL, DWORD2(v38) - v38, v36 - DWORD1(v38), 318);
        }
      }
    }
    ThreadUnlock1(v21, v20);
LABEL_43:
    LODWORD(v15) = v15 - 1;
    ++v14;
  }
  while ( (int)v15 > 0 );
  v13 = v39;
LABEL_45:
  FreeHwndList(v13);
}
