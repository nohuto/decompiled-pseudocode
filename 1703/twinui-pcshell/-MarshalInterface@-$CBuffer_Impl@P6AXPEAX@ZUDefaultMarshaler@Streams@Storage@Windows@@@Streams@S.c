/*
 * XREFs of ?MarshalInterface@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18010E9D0
 * Callers:
 *     ?MarshalInterface@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18010F020 (-MarshalInterface@-$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Window_ea_18010F020.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::MarshalInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
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
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64, int))(**(_QWORD **)(a1 + 72) + 40LL))(
                           *(_QWORD *)(a1 + 72),
                           a2,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7);
  return (unsigned int)BufferMarshaler;
}
