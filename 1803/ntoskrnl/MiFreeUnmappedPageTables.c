/*
 * XREFs of MiFreeUnmappedPageTables @ 0x140137914
 * Callers:
 *     MiDeleteSystemPageTableTail @ 0x140137870 (MiDeleteSystemPageTableTail.c)
 * Callees:
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

unsigned __int64 __fastcall MiFreeUnmappedPageTables(__int64 a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned __int8 v7; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = 0LL;
  v5 = a1;
  if ( a1 )
  {
    do
    {
      v6 = *(_QWORD *)v5;
      v7 = MiLockPageInline(v5);
      *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 6;
      if ( (unsigned int)MiDecrementShareCount(v5) == 3 )
        ++a2[1];
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v7;
      __writecr8(v7);
      ++v3;
      v5 = v6;
    }
    while ( v6 );
  }
  a2[3] += v3;
  *a2 += v3;
  return result;
}
