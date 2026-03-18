/*
 * XREFs of DeleteProperties @ 0x1C005D700
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall DeleteProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // esi
  PVOID *i; // rbx
  BOOLEAN result; // al
  __int16 v8; // cx

  v3 = *(_QWORD *)(a1 + 184);
  v5 = *(_DWORD *)(v3 + 4);
  for ( i = (PVOID *)(v3 + 8); v5; --v5 )
  {
    v8 = *((_WORD *)i + 5);
    if ( (v8 & 1) != 0 )
    {
      if ( (v8 & 0x8001) == 0x8001 )
      {
        (**(void (__fastcall ***)(PVOID))*i)(*i);
      }
      else if ( (v8 & 8) != 0 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *i);
      }
      else if ( (v8 & 4) == 0 )
      {
        Win32FreePool(*i, a2, a3);
      }
    }
    i += 2;
  }
  result = RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)(a1 + 184));
  *(_QWORD *)(a1 + 184) = 0LL;
  return result;
}
