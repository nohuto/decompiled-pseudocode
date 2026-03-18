/*
 * XREFs of PnprQuiesceProcessors @ 0x14042D168
 * Callers:
 *     PnprQuiesce @ 0x14020017C (PnprQuiesce.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14005B700 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeSuspendClockTimerSafe @ 0x140203310 (KeSuspendClockTimerSafe.c)
 *     PnprGetMillisecondCounter @ 0x14042C26C (PnprGetMillisecondCounter.c)
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
  _DWORD *v10; // rcx
  int v11; // edx
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
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int64 v53; // rax
  int i; // edx
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v57[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v58; // [rsp+40h] [rbp-C8h]
  struct _KDPC Dpc; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v60; // [rsp+88h] [rbp-80h] BYREF
  __int128 v61; // [rsp+98h] [rbp-70h]
  __int128 v62; // [rsp+A8h] [rbp-60h]
  __int128 v63; // [rsp+B8h] [rbp-50h]
  __int128 v64; // [rsp+C8h] [rbp-40h]
  __int128 v65; // [rsp+D8h] [rbp-30h]
  __int128 v66; // [rsp+E8h] [rbp-20h]
  __int128 v67; // [rsp+F8h] [rbp-10h]
  __int128 v68; // [rsp+108h] [rbp+0h]
  __int128 v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+128h] [rbp+20h]

  v0 = (void *)*(unsigned int *)(PnprContext + 176);
  KeGetCurrentIrql();
  __writecr8(2uLL);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, &DeferredContext);
  Dpc.Importance = 2;
  v1 = *(_OWORD *)&KeActiveProcessors[4];
  v2 = *(_QWORD *)&KeActiveProcessors[40];
  v60 = *(_OWORD *)KeActiveProcessors;
  v3 = *(_OWORD *)&KeActiveProcessors[8];
  v61 = v1;
  v4 = *(_OWORD *)&KeActiveProcessors[12];
  v62 = v3;
  v5 = *(_OWORD *)&KeActiveProcessors[16];
  v63 = v4;
  v6 = *(_OWORD *)&KeActiveProcessors[20];
  v64 = v5;
  v7 = *(_OWORD *)&KeActiveProcessors[24];
  v65 = v6;
  v8 = *(_OWORD *)&KeActiveProcessors[32];
  v66 = v7;
  v67 = *(_OWORD *)&KeActiveProcessors[28];
  v9 = *(_OWORD *)&KeActiveProcessors[36];
  v68 = v8;
  v69 = v9;
  v70 = v2;
  KeRemoveProcessorAffinityEx((unsigned __int16 *)&v60, *(_DWORD *)(PnprContext + 180));
  v57[1] = *((unsigned __int16 **)&v60 + 1);
  v57[0] = (unsigned __int16 *)&v60;
  v58 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v57) )
  {
    if ( !Dpc.DpcData )
      Dpc.Number = DeferredContext_4 + 1280;
    DeferredContext = 0;
    KeInsertQueueDpc(&Dpc, v0, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && (int)off_140353418[0]() < 0 )
  {
    v10 = (_DWORD *)PnprContext;
    v11 = 2430;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD))off_1403533C8[0])(0LL, *(_QWORD *)(PnprContext + 20872));
    KeSuspendClockTimerSafe();
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v24 = PnprContext;
    *(_QWORD *)(PnprContext + 20992) = MillisecondCounter;
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
      (*(void (__fastcall **)(_QWORD, __int64))(PnprContext + 20976))(*(_QWORD *)(PnprContext + 20880), v25);
      v26 = PnprGetMillisecondCounter(0);
      v25 = PnprContext;
      *(_DWORD *)(PnprContext + 21000) = v26;
    }
    v27 = *(_QWORD *)&KeActiveProcessors[40];
    v28 = *(_OWORD *)&KeActiveProcessors[4];
    v29 = 0;
    v60 = *(_OWORD *)KeActiveProcessors;
    v30 = *(_OWORD *)&KeActiveProcessors[8];
    v61 = v28;
    v31 = *(_OWORD *)&KeActiveProcessors[12];
    v62 = v30;
    v32 = *(_OWORD *)&KeActiveProcessors[16];
    v63 = v31;
    v33 = *(_OWORD *)&KeActiveProcessors[20];
    v64 = v32;
    v34 = *(_OWORD *)&KeActiveProcessors[24];
    v65 = v33;
    v35 = *(_OWORD *)&KeActiveProcessors[28];
    v66 = v34;
    v36 = *(_OWORD *)&KeActiveProcessors[32];
    v67 = v35;
    v37 = *(_OWORD *)&KeActiveProcessors[36];
    v68 = v36;
    v69 = v37;
    v70 = v27;
    v38 = *(_QWORD *)(v25 + 16);
    if ( *(_DWORD *)(v38 + 8) )
    {
      do
      {
        v39 = v29++;
        *(_QWORD *)&KeActiveProcessors[2 * v39 + 2] &= ~*(_QWORD *)(*(_QWORD *)v38 + 8 * v39);
      }
      while ( v29 < *(_DWORD *)(v38 + 8) );
    }
    v10 = (_DWORD *)PnprContext;
    v40 = *(_QWORD *)(PnprContext + 16);
    *(_QWORD *)(PnprContext + 200) = 1LL;
    if ( !*(_DWORD *)(v40 + 16)
      || (v41 = PnprGetMillisecondCounter(0),
          v42 = PnprContext,
          *(_DWORD *)(PnprContext + 21004) = v41,
          v43 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1403533C8[0])(1LL, *(_QWORD *)(v42 + 20872)),
          v44 = PnprGetMillisecondCounter(0),
          v10 = (_DWORD *)PnprContext,
          *(_DWORD *)(PnprContext + 21008) = v44,
          v43 >= 0) )
    {
      *(_OWORD *)KeActiveProcessors = v60;
      v45 = v62;
      *(_OWORD *)&KeActiveProcessors[4] = v61;
      v46 = v63;
      *(_OWORD *)&KeActiveProcessors[8] = v45;
      v47 = v64;
      *(_OWORD *)&KeActiveProcessors[12] = v46;
      v48 = v65;
      *(_OWORD *)&KeActiveProcessors[16] = v47;
      v49 = v66;
      *(_OWORD *)&KeActiveProcessors[20] = v48;
      v50 = v67;
      *(_OWORD *)&KeActiveProcessors[24] = v49;
      v51 = v68;
      *(_OWORD *)&KeActiveProcessors[28] = v50;
      v52 = v69;
      v53 = v70;
      *(_OWORD *)&KeActiveProcessors[32] = v51;
      *(_OWORD *)&KeActiveProcessors[36] = v52;
      *(_QWORD *)&KeActiveProcessors[40] = v53;
      for ( i = v10[51]; ; i = *(_DWORD *)(PnprContext + 204) )
      {
        result = PnprContext;
        if ( i >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
          break;
        _mm_pause();
      }
      return result;
    }
    v11 = 2515;
  }
  v12 = v10[5246];
  if ( !v12 )
    v12 = v11;
  v10[5246] = v12;
  v13 = v10[5247];
  if ( !v13 )
    v13 = 1;
  v10[5247] = v13;
  *(_OWORD *)KeActiveProcessors = v60;
  v14 = v62;
  *(_OWORD *)&KeActiveProcessors[4] = v61;
  v15 = v63;
  *(_OWORD *)&KeActiveProcessors[8] = v14;
  v16 = v64;
  *(_OWORD *)&KeActiveProcessors[12] = v15;
  v17 = v65;
  *(_OWORD *)&KeActiveProcessors[16] = v16;
  v18 = v66;
  *(_OWORD *)&KeActiveProcessors[20] = v17;
  v19 = v67;
  *(_OWORD *)&KeActiveProcessors[24] = v18;
  v20 = v68;
  *(_OWORD *)&KeActiveProcessors[28] = v19;
  v21 = v69;
  result = v70;
  *(_OWORD *)&KeActiveProcessors[32] = v20;
  *(_OWORD *)&KeActiveProcessors[36] = v21;
  *(_QWORD *)&KeActiveProcessors[40] = result;
  return result;
}
