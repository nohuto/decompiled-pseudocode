/*
 * XREFs of RtlpHpHeapCompact @ 0x180012BF8
 * Callers:
 *     RtlpHpGCFlushCallback @ 0x180012A20 (RtlpHpGCFlushCallback.c)
 *     RtlpFlushHeapsCallback @ 0x1800138D0 (RtlpFlushHeapsCallback.c)
 *     RtlCompactHeap @ 0x180090370 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x180036078 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x18004954C (RtlpHpLfhContextCompact.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1, int a2)
{
  int v2; // r8d
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  unsigned int v7; // ebx

  v2 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 64);
  v5 = a2 | v2 & 0x13000003;
  v6 = 0;
  if ( v4 )
    LOBYTE(v6) = v4 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v7 = v5 | 1;
  if ( !v6 )
    v7 = v5;
  RtlpHpLfhContextCompact(a1 + 480, v7);
  RtlpHpSegContextCompact(a1 + 112, v7);
  RtlpHpSegContextCompact(a1 + 216, v7);
  return 0LL;
}
