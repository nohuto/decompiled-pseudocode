/*
 * XREFs of MiDecrementHugeContext @ 0x14015578C
 * Callers:
 *     MiGetUltraHugeAlreadyActive @ 0x140134D14 (MiGetUltraHugeAlreadyActive.c)
 *     MiDeleteZeroThreadContext @ 0x1401556D4 (MiDeleteZeroThreadContext.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiReleaseLargeZeroingVa @ 0x14022B7D8 (MiReleaseLargeZeroingVa.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiDecrementHugeContext(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // r8

  v1 = *(_QWORD *)(a1 + 216);
  if ( (*(_DWORD *)(v1 + 188))-- == 1 )
  {
    v4 = *(_QWORD *)(v1 + 72);
    if ( *(_QWORD *)(v4 + 8) != v1 + 72 || (v5 = *(_QWORD **)(v1 + 80), *v5 != v1 + 72) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    if ( *(_DWORD *)(v1 + 192) != 512 )
    {
      if ( !*(_BYTE *)(v1 + 68) )
      {
        v6 = *(_QWORD *)(v1 + 24);
        if ( v6 )
        {
          MiLockPageInline(*(_QWORD *)(v1 + 24));
          *(_BYTE *)(v6 + 34) &= ~8u;
          v7 = *(_QWORD *)(v6 + 16);
          *(_QWORD *)(v7 + 24) = 0LL;
          *(_BYTE *)(v7 + 68) = 1;
          *(_QWORD *)(v6 + 16) = MiMakeDemandZeroPte(4LL);
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v8);
        }
      }
      MiReleaseLargeZeroingVa(a1, 1LL);
    }
    ExFreePoolWithTag((PVOID)v1, 0);
  }
}
