/*
 * XREFs of ?ReleaseReadPointer@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAJPEBUSharedBufferDataFlipChain@@@Z @ 0x180165BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::ReleaseReadPointer(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  DWORD v3; // ebx
  DWORD v4; // r9d
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  if ( !v2 )
  {
    v4 = -2003292404;
    v6 = 259;
    goto LABEL_7;
  }
  if ( !a2 )
  {
    v4 = -2147024809;
    v6 = 244;
LABEL_7:
    v3 = v4;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v6);
    return v3;
  }
  if ( a2 == v2 + 96LL * *(unsigned __int16 *)(v2 + 24) + 32 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 28));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8));
  }
  return v3;
}
