/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x14029477C
 * Callers:
 *     RtlpHpAllocateHeap @ 0x1402945C8 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x1400ABD80 (RtlpHpVsContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x1402979E8 (RtlpHpSegAlloc.c)
 *     RtlpHpLfhContextAllocate @ 0x14029A44C (RtlpHpLfhContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x14029E2A0 (RtlpHpLargeAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int *a5)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  int v9; // r14d
  __int64 v10; // rcx
  char *v11; // rax
  int v12; // ecx

  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 > (unsigned int)(*(_DWORD *)(a1 + 592) - 16)
    || (v10 = RtlpHpLfhContextAllocate(a1 + 512), LODWORD(a3) = v6, LODWORD(a2) = v7, v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 > *(unsigned int *)(a1 + 128) )
      {
        if ( v6 > *(unsigned int *)(a1 + 248) )
        {
          v11 = (char *)RtlpHpLargeAlloc(a1, v7, v6, a4);
          goto LABEL_12;
        }
        v12 = a1 + 232;
      }
      else
      {
        v12 = a1 + 112;
      }
      v11 = (char *)RtlpHpSegAlloc(v12, v7, v6, v6, a4);
    }
    else
    {
      v11 = RtlpHpVsContextAllocate((volatile LONG *)(a1 + 392), a2, a3, a4);
    }
LABEL_12:
    v10 = (__int64)v11;
    goto LABEL_13;
  }
  v9 = 2;
LABEL_13:
  *a5 = v9;
  return v10;
}
