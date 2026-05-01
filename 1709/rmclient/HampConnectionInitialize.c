/*
 * XREFs of HampConnectionInitialize @ 0x1800042F0
 * Callers:
 *     HampConnectionCreate @ 0x180003FA0 (HampConnectionCreate.c)
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 */

void *__fastcall HampConnectionInitialize(_OWORD *a1, void *a2, __int64 a3)
{
  void *result; // rax

  memset_0((void *)a3, 0, 0x78uLL);
  *(_OWORD *)(a3 + 96) = *a1;
  if ( a2 == &unk_180010960 )
  {
    *(_DWORD *)(a3 + 112) = 0;
    memset_0((void *)(a3 + 16), 0, 0x50uLL);
    *(_QWORD *)(a3 + 40) = 0LL;
    *(_QWORD *)(a3 + 48) = 0LL;
    RtlInitializeSRWLock(a3 + 24);
    result = (void *)(a3 + 56);
    *(_QWORD *)(a3 + 64) = a3 + 56;
    *(_QWORD *)(a3 + 56) = a3 + 56;
    *(_QWORD *)(a3 + 72) = &HampConnectionDeliverPayload;
    *(_QWORD *)(a3 + 80) = HampConnectionObjectCompareToObject;
    *(_QWORD *)(a3 + 88) = HampConnectionObjectCompareToMessage;
  }
  else if ( a2 == &unk_1800109F0 )
  {
    *(_DWORD *)(a3 + 112) = 1;
    return (void *)HamIpcChannelInitialize(
                     &HampConnectionDeliverPayload,
                     HampConnectionObjectCompareToObject,
                     HampConnectionObjectCompareToMessage,
                     a3 + 16);
  }
  else
  {
    result = &unk_180010A80;
    if ( a2 == &unk_180010A80 )
      *(_DWORD *)(a3 + 112) = 2;
    else
      *(_DWORD *)(a3 + 112) = 4;
  }
  return result;
}
