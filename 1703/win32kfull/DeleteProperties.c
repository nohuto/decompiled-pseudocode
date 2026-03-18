/*
 * XREFs of DeleteProperties @ 0x1C0019090
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall DeleteProperties(__int64 a1)
{
  __int64 v1; // rax
  int v3; // esi
  PVOID *i; // rbx
  BOOLEAN result; // al
  __int16 v6; // cx

  v1 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)(v1 + 4);
  for ( i = (PVOID *)(v1 + 8); v3; --v3 )
  {
    v6 = *((_WORD *)i + 5);
    if ( (v6 & 1) != 0 )
    {
      if ( (v6 & 0x8001) == 0x8001 )
      {
        (**(void (__fastcall ***)(PVOID))*i)(*i);
      }
      else if ( (v6 & 8) != 0 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *i);
      }
      else if ( (v6 & 4) == 0 )
      {
        Win32FreePool(*i);
      }
    }
    i += 2;
  }
  result = RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)(a1 + 184));
  *(_QWORD *)(a1 + 184) = 0LL;
  return result;
}
