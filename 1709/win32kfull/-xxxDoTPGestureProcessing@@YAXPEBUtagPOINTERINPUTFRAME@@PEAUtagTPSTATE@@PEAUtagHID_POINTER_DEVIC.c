/*
 * XREFs of ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01B14D8
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01AE7B0 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B3D44 (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     IsFirstActionAfterKey @ 0x1C01B40E4 (IsFirstActionAfterKey.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01CECD0 (xxxGeneratePointerInputMessages.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxDoTPGestureProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        void *a4,
        int a5,
        unsigned int a6,
        int *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD *v16; // r9
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // r10d
  _DWORD *v20; // r8
  unsigned __int16 v21; // ax
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // r10d
  _WORD *v26; // r8
  unsigned int i; // r8d
  __int64 v28; // r9
  char *v29; // rax
  __int64 v30; // rdx
  _OWORD *v31; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  _QWORD *v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  char v44; // [rsp+40h] [rbp-118h] BYREF
  int v45; // [rsp+148h] [rbp-10h]

  if ( *((_DWORD *)a2 + 416) == 3 )
    goto LABEL_33;
  *((_DWORD *)a2 + 416) = 3;
  zzzCancelInertiaState(a2, 1);
  if ( (unsigned int)IsFirstActionAfterKey(v12, v11, v13, v14) )
    *((_DWORD *)&gTPTelemTimings + 10) = 9;
  else
    *((_DWORD *)&gTPTelemTimings + 11) = 9;
  LODWORD(gTPTelemState) = (_DWORD)gTPTelemState + 1;
  ++*((_DWORD *)&gTPTelemState + 13);
  EtwTraceTouchpadGestureDetected();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v16 = (_DWORD *)((char *)a2 + 264);
  *((LARGE_INTEGER *)a2 + 233) = PerformanceCounter;
  v17 = (_DWORD *)((char *)a2 + 264);
  v18 = 6LL;
  do
  {
    if ( (*v17 & 1) != 0 )
      *v17 |= 0x400u;
    v17 += 68;
    --v18;
  }
  while ( v18 );
  v19 = 0;
  if ( *((_DWORD *)a1 + 10) )
  {
    v20 = (_DWORD *)(*((_QWORD *)a1 + 11) + 68LL);
    do
    {
      v21 = *((_WORD *)v20 - 10);
      if ( v21 )
      {
        v22 = 272LL * ((unsigned int)v21 % *((_DWORD *)a2 + 411));
        *(_DWORD *)((char *)a2 + v22 + 264) &= ~0x400u;
        v23 = *(_DWORD *)((char *)a2 + v22 + 264);
        if ( (v23 & 0x40) == 0 && (*v20 & 0x20000) != 0 )
          *(_DWORD *)((char *)a2 + v22 + 264) = v23 | 2;
      }
      v20 += 54;
      ++v19;
    }
    while ( v19 < *((_DWORD *)a1 + 10) );
  }
  v24 = *((_QWORD *)a2 + 239);
  v25 = 0;
  if ( *(_DWORD *)(v24 + 40) )
  {
    v26 = (_WORD *)(*(_QWORD *)(v24 + 88) + 48LL);
    do
    {
      if ( *v26 )
        *((_DWORD *)a2 + 68 * ((unsigned int)(unsigned __int16)*v26 % *((_DWORD *)a2 + 411)) + 66) &= ~0x400u;
      v26 += 108;
      ++v25;
    }
    while ( v25 < *(_DWORD *)(*((_QWORD *)a2 + 239) + 40LL) );
  }
  do
  {
    if ( (*v16 & 0x80u) != 0 )
      *v16 |= 0x400u;
    v16 += 68;
  }
  while ( v16 - 66 != (_DWORD *)((char *)a2 + 1632) );
  for ( i = 0; i < *(_DWORD *)(*((_QWORD *)a2 + 239) + 40LL); ++i )
  {
    v28 = *(_QWORD *)(*((_QWORD *)a2 + 239) + 88LL) + 216LL * i;
    v29 = &v44;
    v30 = 2LL;
    v31 = (_OWORD *)((char *)a2 + 272 * ((unsigned int)*(unsigned __int16 *)(v28 + 48) % *((_DWORD *)a2 + 411)));
    do
    {
      v32 = v31[1];
      *(_OWORD *)v29 = *v31;
      v33 = v31[2];
      *((_OWORD *)v29 + 1) = v32;
      v34 = v31[3];
      *((_OWORD *)v29 + 2) = v33;
      v35 = v31[4];
      *((_OWORD *)v29 + 3) = v34;
      v36 = v31[5];
      *((_OWORD *)v29 + 4) = v35;
      v37 = v31[6];
      *((_OWORD *)v29 + 5) = v36;
      v38 = v31[7];
      v31 += 8;
      *((_OWORD *)v29 + 6) = v37;
      v29 += 128;
      *((_OWORD *)v29 - 1) = v38;
      --v30;
    }
    while ( v30 );
    *(_OWORD *)v29 = *v31;
    if ( (v45 & 0x400) != 0 )
      *(_DWORD *)(v28 + 68) = 0;
  }
  v39 = (_QWORD *)qword_1C032FA88;
  v40 = (_QWORD *)*((_QWORD *)a2 + 239);
  if ( *(_UNKNOWN **)qword_1C032FA88 != &gFrameTPListHead )
    __fastfail(3u);
  *v40 = &gFrameTPListHead;
  v40[1] = v39;
  *v39 = v40;
  qword_1C032FA88 = (__int64)v40;
  *((_QWORD *)a2 + 239) = 0LL;
  xxxGeneratePointerInputMessages(a4);
  LOBYTE(v41) = 19;
  if ( HMValidateHandleNoSecure((unsigned __int64)a4, v41, v42, v43) )
  {
LABEL_33:
    if ( !a5 )
      GestureContactProcessing(a1, 0LL, a2, a3, 0, 0, a6, a7);
  }
}
