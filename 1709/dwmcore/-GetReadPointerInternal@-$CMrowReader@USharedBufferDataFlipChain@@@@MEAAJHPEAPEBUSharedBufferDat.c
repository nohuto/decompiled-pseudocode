/*
 * XREFs of ?GetReadPointerInternal@?$CMrowReader@USharedBufferDataFlipChain@@@@MEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x180165550
 * Callers:
 *     ?GetReadPointer@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x1801654A0 (-GetReadPointer@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAAJHPEAPEBUSharedBufferDataFlipCha.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::GetReadPointerInternal(__int64 a1, int a2, __int64 *a3)
{
  DWORD v3; // ebx
  __int64 v7; // rdi
  DWORD v8; // r9d
  __int64 v9; // rdx
  signed __int32 v10; // ecx
  unsigned int v12; // [rsp+20h] [rbp-28h]

  v3 = 0;
  v7 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v8 = -2003292404;
    v12 = 180;
LABEL_3:
    v3 = v8;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v12);
    return v3;
  }
  if ( !a3 )
  {
    v8 = -2147024809;
    v12 = 183;
    goto LABEL_3;
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_DWORD *)(v9 + 28);
    if ( (v10 | (v10 + 1)) >= 0
      && v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), v10 + 1, v10) )
    {
      v7 = 96LL * *(unsigned __int16 *)(v9 + 24) + v9 + 32;
    }
    if ( !a2 )
      break;
    if ( v7 )
      goto LABEL_14;
    Sleep(0);
  }
  if ( !v7 )
  {
    v8 = -2003304297;
    v12 = 220;
    goto LABEL_3;
  }
LABEL_14:
  (***(void (__fastcall ****)(_QWORD))(a1 + 8))(*(_QWORD *)(a1 + 8));
  *a3 = v7;
  return v3;
}
