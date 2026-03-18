/*
 * XREFs of ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01AE190
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01AB3F0 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B095C (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     IsFirstActionAfterKey @ 0x1C01B0CF4 (IsFirstActionAfterKey.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01CA88C (xxxGeneratePointerInputMessages.c)
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
  _DWORD *v16; // r8
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // r9d
  unsigned __int16 *v20; // rcx
  __int64 v21; // r10
  unsigned int v22; // edx
  __int64 v23; // rax
  unsigned int v24; // r10d
  _WORD *v25; // r9
  unsigned int i; // r8d
  __int64 v27; // r9
  char *v28; // rax
  __int64 v29; // rdx
  _OWORD *v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  char v40; // [rsp+40h] [rbp-118h] BYREF
  int v41; // [rsp+148h] [rbp-10h]

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
    v20 = (unsigned __int16 *)(*((_QWORD *)a1 + 11) + 48LL);
    do
    {
      if ( *v20 )
      {
        v21 = 272LL * ((unsigned int)*v20 % *((_DWORD *)a2 + 411));
        v22 = *(_DWORD *)((_BYTE *)a2 + v21 + 264) & 0xFFFFFBFF;
        *(_DWORD *)((char *)a2 + v21 + 264) = v22;
        if ( (v22 & 0x40) == 0 && (*((_DWORD *)v20 + 5) & 0x20000) != 0 )
          *(_DWORD *)((char *)a2 + v21 + 264) = v22 | 2;
      }
      v20 += 108;
      ++v19;
    }
    while ( v19 < *((_DWORD *)a1 + 10) );
  }
  v23 = *((_QWORD *)a2 + 239);
  v24 = 0;
  if ( *(_DWORD *)(v23 + 40) )
  {
    v25 = (_WORD *)(*(_QWORD *)(v23 + 88) + 48LL);
    do
    {
      if ( *v25 )
        *((_DWORD *)a2 + 68 * ((unsigned int)(unsigned __int16)*v25 % *((_DWORD *)a2 + 411)) + 66) &= ~0x400u;
      v25 += 108;
      ++v24;
    }
    while ( v24 < *(_DWORD *)(*((_QWORD *)a2 + 239) + 40LL) );
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
    v27 = *(_QWORD *)(*((_QWORD *)a2 + 239) + 88LL) + 216LL * i;
    v28 = &v40;
    v29 = 2LL;
    v30 = (_OWORD *)((char *)a2 + 272 * ((unsigned int)*(unsigned __int16 *)(v27 + 48) % *((_DWORD *)a2 + 411)));
    do
    {
      v31 = v30[1];
      *(_OWORD *)v28 = *v30;
      v32 = v30[2];
      *((_OWORD *)v28 + 1) = v31;
      v33 = v30[3];
      *((_OWORD *)v28 + 2) = v32;
      v34 = v30[4];
      *((_OWORD *)v28 + 3) = v33;
      v35 = v30[5];
      *((_OWORD *)v28 + 4) = v34;
      v36 = v30[6];
      *((_OWORD *)v28 + 5) = v35;
      v37 = v30[7];
      v30 += 8;
      *((_OWORD *)v28 + 6) = v36;
      v28 += 128;
      *((_OWORD *)v28 - 1) = v37;
      --v29;
    }
    while ( v29 );
    *(_OWORD *)v28 = *v30;
    if ( (v41 & 0x400) != 0 )
      *(_DWORD *)(v27 + 68) = 0;
  }
  v38 = (_QWORD *)qword_1C0334518;
  v39 = (_QWORD *)*((_QWORD *)a2 + 239);
  if ( *(_UNKNOWN **)qword_1C0334518 != &gFrameTPListHead )
    __fastfail(3u);
  *v39 = &gFrameTPListHead;
  v39[1] = v38;
  *v38 = v39;
  qword_1C0334518 = (__int64)v39;
  *((_QWORD *)a2 + 239) = 0LL;
  xxxGeneratePointerInputMessages(a4);
  if ( HMValidateHandleNoSecure((unsigned __int64)a4, 19) )
  {
LABEL_33:
    if ( !a5 )
      GestureContactProcessing(a1, 0LL, (unsigned __int64)a2, a3, 0, 0, a6, a7);
  }
}
