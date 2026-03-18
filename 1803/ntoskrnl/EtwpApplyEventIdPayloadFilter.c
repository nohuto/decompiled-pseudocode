/*
 * XREFs of EtwpApplyEventIdPayloadFilter @ 0x1402B2828
 * Callers:
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1407B146C (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 * Callees:
 *     EtwpPerfectHashFunctionSearch @ 0x1402B3088 (EtwpPerfectHashFunctionSearch.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402B6498 (EtwpApplyPayloadFilterInternal.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpApplyEventIdPayloadFilter(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        unsigned __int8 a9)
{
  __int64 v9; // rsi
  __int64 v11; // r11
  volatile signed __int32 *v12; // rbx
  __int64 v13; // r10
  unsigned __int8 CurrentIrql; // di
  char v15; // al
  _BYTE *v16; // rdx
  char v17; // al
  _BYTE *v18; // rdx
  int v19; // eax
  char v20; // dl
  bool v22; // [rsp+20h] [rbp-48h]
  char v23[16]; // [rsp+40h] [rbp-28h] BYREF

  v23[0] = 1;
  v9 = a4;
  v11 = a1;
  v12 = 0LL;
  v13 = 96LL * a2;
  if ( a9 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( *(_QWORD *)(v13 + *(_QWORD *)(a1 + 368) + 64) )
    {
      v15 = EtwpPerfectHashFunctionSearch(a5);
      if ( *v16 != v15 )
      {
        v23[0] = 0;
LABEL_7:
        __writecr8(CurrentIrql);
        goto LABEL_13;
      }
      v23[0] = 1;
    }
    v12 = *(volatile signed __int32 **)(v13 + *(_QWORD *)(v11 + 368) + 72);
    if ( v12 )
      _InterlockedAdd(v12, 1u);
    goto LABEL_7;
  }
  if ( *(_QWORD *)(v13 + *(_QWORD *)(a1 + 368) + 64) )
  {
    v17 = EtwpPerfectHashFunctionSearch(a5);
    if ( *v18 != v17 )
    {
      v23[0] = 0;
      return v23[0];
    }
    v23[0] = 1;
  }
  v12 = *(volatile signed __int32 **)(v13 + *(_QWORD *)(v11 + 368) + 72);
LABEL_13:
  if ( v12 )
  {
    LOBYTE(a4) = a8;
    v22 = a3 == 0;
    v19 = EtwpApplyPayloadFilterInternal(v9, a6, a7, a4, v22, v12 + 2, v23);
    v20 = v23[0];
    if ( v19 < 0 )
      v20 = 1;
    v23[0] = v20;
    if ( a9 < 2u && _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v12, 0);
  }
  return v23[0];
}
