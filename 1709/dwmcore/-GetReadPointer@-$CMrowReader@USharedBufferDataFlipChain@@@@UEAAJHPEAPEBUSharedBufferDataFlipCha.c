/*
 * XREFs of ?GetReadPointer@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x1801654A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetReadPointerInternal@?$CMrowReader@USharedBufferDataFlipChain@@@@MEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x180165550 (-GetReadPointerInternal@-$CMrowReader@USharedBufferDataFlipChain@@@@MEAAJHPEAPEBUSharedBufferDat.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::GetReadPointer(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // esi
  signed int ReadPointerInternal; // eax
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = a2;
  ReadPointerInternal = CMrowReader<SharedBufferDataFlipChain>::GetReadPointerInternal(a1, a2, &v10);
  v7 = ReadPointerInternal;
  if ( ReadPointerInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20LL,
      &`CMrowReader<SharedBufferDataFlipChain>::GetReadPointer'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      ReadPointerInternal,
      0x8Bu);
  }
  else if ( v10 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) )
    {
      v8 = CMrowReader<SharedBufferDataFlipChain>::GetReadPointerInternal(a1, v4, &v10);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          20LL,
          &`CMrowReader<SharedBufferDataFlipChain>::GetReadPointer'::`2'::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v8,
          0x92u);
    }
  }
  *a3 = v10;
  return v7;
}
