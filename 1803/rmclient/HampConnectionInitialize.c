/*
 * XREFs of HampConnectionInitialize @ 0x180004E1C
 * Callers:
 *     HampConnectionCreate @ 0x180004D74 (HampConnectionCreate.c)
 * Callees:
 *     HamIpcChannelInitialize @ 0x180004E94 (HamIpcChannelInitialize.c)
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

__int64 __fastcall HampConnectionInitialize(_OWORD *a1, void *a2, __int64 a3)
{
  __int64 result; // rax

  memset_0((void *)a3, 0, 0x78uLL);
  if ( a1 )
    *(_OWORD *)(a3 + 96) = *a1;
  if ( a2 == &unk_180010910 )
  {
    *(_DWORD *)(a3 + 112) = 0;
    return HamIpcChannelInitialize(
             &HampConnectionDeliverPayload,
             HampConnectionObjectCompareToObject,
             HampConnectionObjectCompareToMessage,
             a3 + 16);
  }
  if ( a2 == &unk_180011F00 )
  {
    *(_DWORD *)(a3 + 112) = 2;
    return HamIpcChannelInitialize(
             &HampConnectionDeliverPayload,
             HampConnectionObjectCompareToObject,
             HampConnectionObjectCompareToMessage,
             a3 + 16);
  }
  result = (__int64)&unk_180012740;
  if ( a2 == &unk_180012740 )
  {
    *(_DWORD *)(a3 + 112) = 5;
  }
  else
  {
    if ( a2 == &unk_180013810 )
    {
      *(_DWORD *)(a3 + 112) = 1;
      return HamIpcChannelInitialize(
               &HampConnectionDeliverPayload,
               HampConnectionObjectCompareToObject,
               HampConnectionObjectCompareToMessage,
               a3 + 16);
    }
    result = (__int64)&unk_1800123C0;
    if ( a2 == &unk_1800123C0 )
    {
      *(_DWORD *)(a3 + 112) = 3;
    }
    else
    {
      result = 6LL;
      if ( a2 == &unk_180013B20 )
        result = 4LL;
      *(_DWORD *)(a3 + 112) = result;
    }
  }
  return result;
}
