/*
 * XREFs of xxxMetricsRecalc @ 0x1C01B5CD4
 * Callers:
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0009EC8 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B5434 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     IsNonImmersiveBand @ 0x1C00B79A8 (IsNonImmersiveBand.c)
 */

void __fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, unsigned int a6, unsigned int a7)
{
  struct tagBWL *v9; // rax
  struct tagBWL *v10; // rsi
  unsigned __int64 *v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  ULONG_PTR v14; // rbx
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  BOOL v21; // eax
  _DWORD *Prop; // rax
  char v23; // r10
  int v24; // r8d
  int v25; // r11d
  __int64 DesktopWindow; // rax
  int v27; // edx
  int v28; // r8d
  __int64 v29; // r9
  unsigned int v30; // r10d
  __int64 v31; // r11
  char v32; // al
  char v33; // cl
  int v34; // edx
  __int64 v35; // r9
  __int128 v36; // [rsp+50h] [rbp-30h]
  struct tagBWL *v37; // [rsp+60h] [rbp-20h]
  _QWORD v38[3]; // [rsp+68h] [rbp-18h] BYREF

  v9 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 16LL) + 112LL), 3, 0LL);
  v37 = v9;
  v10 = v9;
  if ( !v9 )
    return;
  v11 = (unsigned __int64 *)((char *)v9 + 32);
  v12 = (*((_QWORD *)v9 + 1) - (_QWORD)v9 - 32LL) >> 3;
  if ( (int)v12 <= 0 )
    goto LABEL_45;
  do
  {
    v13 = HMValidateHandleNoSecure(*v11, 1);
    v14 = v13;
    if ( !v13 )
      goto LABEL_43;
    if ( !IsNonImmersiveBand(v13) )
      goto LABEL_43;
    v16 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 376LL);
    if ( (v16[192] & 0x30) == 0x10 )
      goto LABEL_43;
    v17 = 0;
    v38[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v38;
    v38[1] = v14;
    ++*(_DWORD *)(v14 + 8);
    if ( (a1 & 4) != 0 && (*(_BYTE *)(v14 + 71) & 0x20) != 0 )
    {
LABEL_26:
      v17 = 1;
      DesktopWindow = GetDesktopWindow(v14);
      if ( v31 != DesktopWindow )
      {
        v27 -= *(_DWORD *)(v31 + 148);
        v30 -= *(_DWORD *)(v31 + 144);
        v28 -= *(_DWORD *)(v31 + 144);
        v29 = (unsigned int)(v29 - *(_DWORD *)(v31 + 148));
      }
      xxxSetWindowPos((struct tagWND *)v14, 0LL, v30, v29, v28 - v30, v27 - v29, 316);
      goto LABEL_29;
    }
    v18 = 12582912LL;
    LOBYTE(v18) = (*(_DWORD *)(v14 + 68) & 0xC00000) != 12582912;
    v21 = 0;
    if ( ((unsigned __int8)v18 & !_bittest((const signed __int32 *)(v14 + 68), 0x12u)) == 0 )
    {
      v19 = *(_QWORD *)(v14 + 16);
      v20 = *(_DWORD *)(v19 + 552) <= 0x9900u ? *(_DWORD *)(v19 + 568) : 0;
      if ( (v20 & 0x30000000) == 0 )
        v21 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_BYTE *)(v14 + 70) & 4) != 0 || v21) )
    {
      Prop = (_DWORD *)GetProp(v14, atomCheckpointProp, 1);
      v18 = a6;
      v16 = Prop;
      if ( !v23 )
        v18 = a7;
      v24 = v18 + a2;
      v25 = v18 + a3;
      if ( Prop )
      {
        v18 = (unsigned int)Prop[8];
        if ( (v18 & 0x10) != 0 )
        {
          Prop[6] -= v24;
          Prop[7] -= v25;
        }
      }
      if ( (*(_BYTE *)(v14 + 71) & 0x20) == 0 )
        goto LABEL_26;
      if ( Prop )
      {
        *Prop -= v24;
        Prop[2] += v24;
        Prop[1] -= v25;
        Prop[3] += v25;
      }
    }
LABEL_29:
    if ( (a1 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v14, 0x80u, 3uLL, 0LL, 0, 0, 0LL, 1, 1);
      }
      v32 = *(_BYTE *)(v14 + 71);
      if ( (v32 & 0x20) == 0 && !v17 )
      {
        v33 = *(_BYTE *)(v14 + 56);
        v36 = *(_OWORD *)(v14 + 128);
        if ( (v33 & 1) != 0 )
          v34 = a5 + HIDWORD(v36);
        else
          v34 = HIDWORD(*(_OWORD *)(v14 + 128));
        if ( (v33 & 8) != 0
          && (v34 += a4, (v32 & 0x41) == 0x41)
          && (v35 = *(_QWORD *)(v14 + 104), (*(_WORD *)(v35 + 82) & 0x3FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            (struct tagWND *)v14,
            0LL,
            (unsigned int)(v36 - *(_DWORD *)(v35 + 128)),
            (unsigned int)(DWORD1(v36) - *(_DWORD *)(v35 + 132) - a4),
            DWORD2(v36) - v36,
            v34 - DWORD1(v36),
            60);
        }
        else
        {
          xxxSetWindowPos((struct tagWND *)v14, 0LL, 0LL, 0LL, DWORD2(v36) - v36, v34 - DWORD1(v36), 318);
        }
      }
    }
    ThreadUnlock1(v18, v16);
LABEL_43:
    LODWORD(v12) = v12 - 1;
    ++v11;
  }
  while ( (int)v12 > 0 );
  v10 = v37;
LABEL_45:
  FreeHwndList(v10);
}
