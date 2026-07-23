/*
 * XREFs of sub_1800ED0C0 @ 0x1800ED0C0
 * Callers:
 *     sub_1800EB750 @ 0x1800EB750 (sub_1800EB750.c)
 * Callees:
 *     sub_180059DC0 @ 0x180059DC0 (sub_180059DC0.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800FC34C @ 0x1800FC34C (sub_1800FC34C.c)
 *     sub_180102654 @ 0x180102654 (sub_180102654.c)
 */

__int64 __fastcall sub_1800ED0C0(_DWORD *HeapHandle, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  __int64 v7; // rcx

  v2 = 14LL;
  if ( HeapHandle[4] != -571548178 )
    v2 = 36LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v5 = HeapHandle[v2];
    if ( v5 )
      sub_1800EBFF8(v5, (__int64)HeapHandle, 0LL, 7u, 0LL);
    v6 = sub_1800FF100;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_9;
  }
  HeapHandle[v2] = (unsigned __int16)sub_1800FC34C(v6);
LABEL_9:
  if ( HeapHandle[4] != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v7 = *((_BYTE *)HeapHandle + 386) == 2 ? *((_QWORD *)HeapHandle + 47) : 0LL;
    if ( v7
      || ((sub_180059DC0((PRTL_CRITICAL_SECTION *)HeapHandle), *((_BYTE *)HeapHandle + 386) != 2)
        ? (v7 = 0LL)
        : (v7 = *((_QWORD *)HeapHandle + 47)),
          v7) )
    {
      sub_180102654(v7, a2);
    }
  }
  return 0LL;
}
