/*
 * XREFs of ?GetMarshalSizeMax@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18010EA90
 * Callers:
 *     ?GetMarshalSizeMax@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18010EFC0 (-GetMarshalSizeMax@-$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windo_ea_18010EFC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::GetMarshalSizeMax(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  int BufferMarshaler; // ebx
  signed __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  BufferMarshaler = 0;
  if ( !*(_QWORD *)(a1 + 72) )
  {
    v13 = 0LL;
    BufferMarshaler = RoGetBufferMarshaler(&v13);
    if ( BufferMarshaler >= 0 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v13, 0LL) )
        (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v13 + 16LL))(v13);
      v13 = 0LL;
    }
  }
  if ( BufferMarshaler >= 0 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, __int64))(**(_QWORD **)(a1 + 72) + 32LL))(
                           *(_QWORD *)(a1 + 72),
                           a2,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7);
  return (unsigned int)BufferMarshaler;
}
