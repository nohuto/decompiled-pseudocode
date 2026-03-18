/*
 * XREFs of MiCrashdumpRemovePte @ 0x140213020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCrashdumpRemovePte(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2 << 25 >> 16;
  if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v6 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v6 & 1) != 0 )
    {
      v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v6) >> 12) & 0xFFFFFFFFFLL;
      if ( (*(_QWORD *)(48 * v3 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(*(_QWORD *)(v4 + 136) + 8LL))(
          *(_QWORD *)(v4 + 136),
          v3,
          1LL);
    }
  }
  return 0LL;
}
