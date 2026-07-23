/*
 * XREFs of sub_180007A70 @ 0x180007A70
 * Callers:
 *     sub_180007B14 @ 0x180007B14 (sub_180007B14.c)
 * Callees:
 *     RtlSetAllBits @ 0x1800815D0 (RtlSetAllBits.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __fastcall sub_180007A70(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 16) = a2 + 24;
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  else
    memset(*(void **)(a2 + 16), 0, 4 * ((*(_DWORD *)(a2 + 8) >> 5) + (unsigned int)((*(_DWORD *)(a2 + 8) & 0x1F) != 0)));
  if ( *(_DWORD *)(a1 + 68) )
    memset((void *)(a2 + *(unsigned int *)(a1 + 64)), 0, (unsigned int)(*(_DWORD *)(a1 + 68) * *(_DWORD *)(a1 + 56)));
  *(_QWORD *)a2 = 0LL;
}
