/*
 * XREFs of ??0?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@_K11@Z @ 0x180033FB0
 * Callers:
 *     ??0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ @ 0x180033EFC (--0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ.c)
 * Callees:
 *     ?Initialize@?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@UEAAXPEB_NPEB_K1@Z @ 0x18002F690 (-Initialize@-$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@UEAAXPEB_NPEB_K1@Z.c)
 *     ?Clear@?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x180033F70 (-Clear@-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  void (__fastcall *v7)(_QWORD *, __int64, __int64, __int64); // rax

  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = &CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::`vftable';
  v3 = a1 + 32;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 5000LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 5000LL;
  v4 = a1 + 64;
  *(_QWORD *)(a1 + 64) = 0LL;
  v5 = a1 + 72;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 30000LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::Clear(a1);
  v6 = *(_QWORD **)(a1 + 8);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*v6 + 40LL);
    if ( v7 == CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>::Initialize )
      CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>::Initialize(v6, v3, v4, v5);
    else
      v7(v6, v3, v4, v5);
  }
  return a1;
}
