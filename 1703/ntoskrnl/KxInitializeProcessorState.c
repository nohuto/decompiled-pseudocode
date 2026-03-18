/*
 * XREFs of KxInitializeProcessorState @ 0x1405A7C04
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x14015509C (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x140155268 (KiCommitNodeAssignment.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiEnableKvaShadowing @ 0x140403784 (KiEnableKvaShadowing.c)
 */

__int64 __fastcall KxInitializeProcessorState(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        size_t Size,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  KPCR *Pcr; // rbx
  unsigned __int64 v17; // r14
  unsigned __int16 Limit; // ax
  const void *v19; // rdx
  void *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  _OWORD *v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 result; // rax
  int v33; // ecx
  int v34; // eax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  char v37; // cl
  unsigned __int64 v38; // rcx

  Pcr = KeGetPcr();
  memset((void *)a3, 0, (unsigned int)Size);
  memset(a1, 0, 0x5C0uLL);
  *((_WORD *)a1 + 43) = Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit;
  v17 = a3 + a9;
  a1[11] = v17;
  memmove(
    (void *)v17,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Base,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit + 1);
  Limit = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit;
  v19 = KiBootProcessorIdt;
  v20 = (void *)(a3 + a10);
  a1[13] = (unsigned __int64)v20;
  *((_WORD *)a1 + 51) = Limit;
  memmove(v20, v19, (unsigned int)KiBootProcessorIdtSize);
  *(_BYTE *)(a3 + 82) = a7;
  v21 = 2LL;
  *(_DWORD *)(a3 + 420) = a7;
  v22 = 2LL;
  *(_DWORD *)(a3 + 452) = KeGetCurrentPrcb()->MHz;
  *(_QWORD *)(a3 + 11904) = KeGetCurrentPrcb()->MsrIa32TsxCtrl;
  v23 = v17 - 8112;
  *(_QWORD *)(v17 - 8000) = a3;
  *(_BYTE *)(v17 + 68) = (unsigned int)(v17 - 8112) >> 16;
  *(_BYTE *)(v17 + 71) = (unsigned int)(v17 - 8112) >> 24;
  *(_DWORD *)(v17 + 72) = (v17 - 8112) >> 32;
  v24 = ((((a8 - 1) << 6) + 32895) & 0xFFFFFFC0) + a3 + 0x2000;
  *(_WORD *)(v17 + 66) = v17 - 8112;
  v25 = (__int64 *)(v17 - 8112 + 36);
  do
  {
    *v25 = v24;
    v24 += 0x2000LL;
    ++v25;
    --v22;
  }
  while ( v22 );
  *(_QWORD *)(v23 + 60) = v24;
  v26 = v24 + 0x2000;
  *(_QWORD *)(v23 + 52) = v26;
  *(_QWORD *)(a3 + 26008) = a13;
  *(_QWORD *)(v23 + 4) = a11;
  v27 = KeNodeBlock[a6];
  v28 = (_OWORD *)((char *)&KiNodeInit + 320 * a6);
  if ( (_OWORD *)v27 == v28 )
  {
    v27 = v26 + 2112;
    v29 = (_OWORD *)(v26 + 2112);
    do
    {
      *v29 = *v28;
      v29[1] = v28[1];
      v29[2] = v28[2];
      v29[3] = v28[3];
      v29[4] = v28[4];
      v29[5] = v28[5];
      v29[6] = v28[6];
      v29 += 8;
      v30 = v28[7];
      v28 += 8;
      *(v29 - 1) = v30;
      --v21;
    }
    while ( v21 );
    v31 = *v28;
    KeNodeBlock[a6] = v27;
    *v29 = v31;
    v29[1] = v28[1];
    v29[2] = v28[2];
    v29[3] = v28[3];
  }
  if ( (*(_BYTE *)(v27 + 173) & 4) == 0 )
    KiCommitNodeAssignment(v27);
  if ( !(unsigned int)KiEnableKvaShadowing(a3 + 384) )
    return 0LL;
  *(_QWORD *)(a3 + 576) = v27;
  KiAddProcessorToGroupDatabase(a3 + 384, a4);
  v33 = *(unsigned __int8 *)(a3 + 592) | (*(unsigned __int8 *)(a3 + 593) << 14) | 0x3C00;
  v34 = *(_DWORD *)(v17 + 84);
  *(_WORD *)(v17 + 80) = v33;
  *(_DWORD *)(v17 + 84) ^= (v33 ^ v34) & 0xF0000;
  *(_QWORD *)(a11 - 8) = 0LL;
  a1[46] = (unsigned __int64)a2;
  a1[61] = (unsigned __int64)KiSystemStartup;
  a1[49] = a11 - 8;
  *((_DWORD *)a1 + 74) = 2818064;
  *((_DWORD *)a1 + 75) = 5439531;
  a1[38] = 1572907LL;
  v35 = __readcr0();
  *a1 = v35;
  v36 = __readcr3();
  a1[2] = v36 & 0xFFFFFFFFFFFFF000uLL;
  *((_WORD *)a1 + 56) = 64;
  *(_BYTE *)(v17 + 69) = -119;
  v37 = *(_BYTE *)(v17 + 69);
  if ( VslVsmEnabled )
    v37 = -117;
  *(_BYTE *)(v17 + 69) = v37;
  v38 = __readcr4();
  a1[3] = v38;
  a2[18] = &KiInitialProcess;
  result = a3 + 384;
  a2[16] = a12;
  a2[19] = v26;
  a2[17] = a3 + 384;
  return result;
}
