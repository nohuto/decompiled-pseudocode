/*
 * XREFs of PnprQuiesceProcessors @ 0x140418140
 * Callers:
 *     PnprQuiesce @ 0x1401FA43C (PnprQuiesce.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400D9440 (KeRemoveProcessorAffinityEx.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeSuspendClockTimerSafe @ 0x1401FD374 (KeSuspendClockTimerSafe.c)
 *     PnprGetMillisecondCounter @ 0x14041723C (PnprGetMillisecondCounter.c)
 */

__int64 PnprQuiesceProcessors()
{
  void *v0; // rbx
  __int128 v1; // xmm1
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 result; // rax
  unsigned int MillisecondCounter; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int128 v28; // xmm1
  unsigned int v29; // r8d
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  int v43; // ebx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // rax
  int i; // edx
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v59[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v60; // [rsp+40h] [rbp-C8h]
  struct _KDPC Dpc; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v62; // [rsp+88h] [rbp-80h] BYREF
  __int128 v63; // [rsp+98h] [rbp-70h]
  __int128 v64; // [rsp+A8h] [rbp-60h]
  __int128 v65; // [rsp+B8h] [rbp-50h]
  __int128 v66; // [rsp+C8h] [rbp-40h]
  __int128 v67; // [rsp+D8h] [rbp-30h]
  __int128 v68; // [rsp+E8h] [rbp-20h]
  __int128 v69; // [rsp+F8h] [rbp-10h]
  __int128 v70; // [rsp+108h] [rbp+0h]
  __int128 v71; // [rsp+118h] [rbp+10h]
  __int64 v72; // [rsp+128h] [rbp+20h]

  v0 = (void *)*(unsigned int *)(PnprContext + 176);
  KeGetCurrentIrql();
  __writecr8(2uLL);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, &DeferredContext);
  Dpc.Importance = 2;
  v1 = *(_OWORD *)&KeActiveProcessors[4];
  v2 = *(_QWORD *)&KeActiveProcessors[40];
  v62 = *(_OWORD *)KeActiveProcessors;
  v3 = *(_OWORD *)&KeActiveProcessors[8];
  v63 = v1;
  v4 = *(_OWORD *)&KeActiveProcessors[12];
  v64 = v3;
  v5 = *(_OWORD *)&KeActiveProcessors[16];
  v65 = v4;
  v6 = *(_OWORD *)&KeActiveProcessors[20];
  v66 = v5;
  v7 = *(_OWORD *)&KeActiveProcessors[24];
  v67 = v6;
  v8 = *(_OWORD *)&KeActiveProcessors[32];
  v68 = v7;
  v69 = *(_OWORD *)&KeActiveProcessors[28];
  v9 = *(_OWORD *)&KeActiveProcessors[36];
  v70 = v8;
  v71 = v9;
  v72 = v2;
  KeRemoveProcessorAffinityEx((unsigned __int16 *)&v62, *(_DWORD *)(PnprContext + 180));
  v59[1] = *((unsigned __int16 **)&v62 + 1);
  v59[0] = (unsigned __int16 *)&v62;
  v60 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v59) )
  {
    if ( !Dpc.DpcData )
      Dpc.Number = DeferredContext_4 + 640;
    DeferredContext = 0;
    KeInsertQueueDpc(&Dpc, v0, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  v10 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    if ( (int)off_14033B3E8[0]() < 0 )
    {
      v11 = PnprContext;
      v12 = *(_DWORD *)(PnprContext + 10744);
      if ( !v12 )
        v12 = 2430;
      *(_DWORD *)(PnprContext + 10744) = v12;
      v13 = *(_DWORD *)(v11 + 10748);
      if ( !v13 )
        v13 = 1;
      *(_DWORD *)(v11 + 10748) = v13;
LABEL_16:
      *(_OWORD *)KeActiveProcessors = v62;
      v14 = v64;
      *(_OWORD *)&KeActiveProcessors[4] = v63;
      v15 = v65;
      *(_OWORD *)&KeActiveProcessors[8] = v14;
      v16 = v66;
      *(_OWORD *)&KeActiveProcessors[12] = v15;
      v17 = v67;
      *(_OWORD *)&KeActiveProcessors[16] = v16;
      v18 = v68;
      *(_OWORD *)&KeActiveProcessors[20] = v17;
      v19 = v69;
      *(_OWORD *)&KeActiveProcessors[24] = v18;
      v20 = v70;
      *(_OWORD *)&KeActiveProcessors[28] = v19;
      v21 = v71;
      result = v72;
      *(_OWORD *)&KeActiveProcessors[32] = v20;
      *(_OWORD *)&KeActiveProcessors[36] = v21;
      *(_QWORD *)&KeActiveProcessors[40] = result;
      return result;
    }
    v10 = PnprContext;
  }
  ((void (__fastcall *)(_QWORD, _QWORD))off_14033B398[0])(0LL, *(_QWORD *)(v10 + 10632));
  KeSuspendClockTimerSafe();
  MillisecondCounter = PnprGetMillisecondCounter(0);
  v24 = PnprContext;
  *(_QWORD *)(PnprContext + 10752) = MillisecondCounter;
  _InterlockedAdd((volatile signed __int32 *)(v24 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)v0 )
    _mm_pause();
  v25 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)v0 )
      _mm_pause();
    LOBYTE(v25) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(PnprContext + 10736))(*(_QWORD *)(PnprContext + 10640), v25);
    v26 = PnprGetMillisecondCounter(0);
    v25 = PnprContext;
    *(_DWORD *)(PnprContext + 10760) = v26;
  }
  v27 = *(_QWORD *)&KeActiveProcessors[40];
  v28 = *(_OWORD *)&KeActiveProcessors[4];
  v29 = 0;
  v62 = *(_OWORD *)KeActiveProcessors;
  v30 = *(_OWORD *)&KeActiveProcessors[8];
  v63 = v28;
  v31 = *(_OWORD *)&KeActiveProcessors[12];
  v64 = v30;
  v32 = *(_OWORD *)&KeActiveProcessors[16];
  v65 = v31;
  v33 = *(_OWORD *)&KeActiveProcessors[20];
  v66 = v32;
  v34 = *(_OWORD *)&KeActiveProcessors[24];
  v67 = v33;
  v35 = *(_OWORD *)&KeActiveProcessors[28];
  v68 = v34;
  v36 = *(_OWORD *)&KeActiveProcessors[32];
  v69 = v35;
  v37 = *(_OWORD *)&KeActiveProcessors[36];
  v70 = v36;
  v71 = v37;
  v72 = v27;
  v38 = *(_QWORD *)(v25 + 16);
  if ( *(_DWORD *)(v38 + 8) )
  {
    do
    {
      v39 = v29++;
      *(_QWORD *)&KeActiveProcessors[2 * v39 + 2] &= ~*(_QWORD *)(*(_QWORD *)v38 + 8 * v39);
    }
    while ( v29 < *(_DWORD *)(v38 + 8) );
    v25 = PnprContext;
  }
  v40 = *(_QWORD *)(v25 + 16);
  *(_QWORD *)(v25 + 200) = 1LL;
  if ( *(_DWORD *)(v40 + 16) )
  {
    v41 = PnprGetMillisecondCounter(0);
    v42 = PnprContext;
    *(_DWORD *)(PnprContext + 10764) = v41;
    v43 = ((__int64 (__fastcall *)(__int64, _QWORD))off_14033B398[0])(1LL, *(_QWORD *)(v42 + 10632));
    v44 = PnprGetMillisecondCounter(0);
    v25 = PnprContext;
    *(_DWORD *)(PnprContext + 10768) = v44;
    if ( v43 < 0 )
    {
      v45 = *(_DWORD *)(v25 + 10744);
      if ( !v45 )
        v45 = 2515;
      *(_DWORD *)(v25 + 10744) = v45;
      v46 = *(_DWORD *)(v25 + 10748);
      if ( !v46 )
        v46 = 1;
      *(_DWORD *)(v25 + 10748) = v46;
      goto LABEL_16;
    }
  }
  *(_OWORD *)KeActiveProcessors = v62;
  v47 = v64;
  *(_OWORD *)&KeActiveProcessors[4] = v63;
  v48 = v65;
  *(_OWORD *)&KeActiveProcessors[8] = v47;
  v49 = v66;
  *(_OWORD *)&KeActiveProcessors[12] = v48;
  v50 = v67;
  *(_OWORD *)&KeActiveProcessors[16] = v49;
  v51 = v68;
  *(_OWORD *)&KeActiveProcessors[20] = v50;
  v52 = v69;
  *(_OWORD *)&KeActiveProcessors[24] = v51;
  v53 = v70;
  *(_OWORD *)&KeActiveProcessors[28] = v52;
  v54 = v71;
  v55 = v72;
  *(_OWORD *)&KeActiveProcessors[32] = v53;
  *(_OWORD *)&KeActiveProcessors[36] = v54;
  *(_QWORD *)&KeActiveProcessors[40] = v55;
  for ( i = *(_DWORD *)(v25 + 204); ; i = *(_DWORD *)(PnprContext + 204) )
  {
    result = PnprContext;
    if ( i >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
      break;
    _mm_pause();
  }
  return result;
}
