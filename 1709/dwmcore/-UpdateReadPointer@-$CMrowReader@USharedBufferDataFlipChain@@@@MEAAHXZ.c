/*
 * XREFs of ?UpdateReadPointer@?$CMrowReader@USharedBufferDataFlipChain@@@@MEAAHXZ @ 0x180166700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::UpdateReadPointer(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  signed __int32 v4; // [rsp+30h] [rbp+8h]
  signed __int32 v5; // [rsp+38h] [rbp+10h]

  v1 = 0;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 26LL) != 0xFFFF )
  {
    v1 = 1;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 28LL), 0x80000000, 1) == 1 )
    {
      v2 = *(_QWORD *)(a1 + 8);
      v4 = *(_DWORD *)(v2 + 24);
      if ( HIWORD(v4) != 0xFFFF )
      {
        LOWORD(v5) = HIWORD(*(_DWORD *)(v2 + 24));
        HIWORD(v5) = -1;
        _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 24), v5, v4);
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 28LL), 0, 0x80000000) == 0x80000000 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8));
    }
    else
    {
      return 0;
    }
  }
  return v1;
}
