/*
 * XREFs of CcGetNumberOfMappedPages @ 0x1401E16B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CcGetVacbLargeOffset @ 0x1400A5E18 (CcGetVacbLargeOffset.c)
 */

char __fastcall CcGetNumberOfMappedPages(__int64 a1, __int64 *a2, __int64 *a3)
{
  _QWORD *v3; // rbp
  char result; // al
  __int64 *v5; // r15
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  signed __int64 v11; // r14
  __int64 v12; // r15
  __int64 VacbLargeOffset; // rax

  v3 = *(_QWORD **)(a1 + 8);
  result = 0;
  *a2 = 0LL;
  v5 = a3;
  *a3 = 0LL;
  if ( v3 )
  {
    v7 = v3[1] + 0x3FFFFLL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v3 + 13), 0LL);
    v11 = v7 & 0xFFFFFFFFFFFC0000uLL;
    if ( v11 >= 0 )
    {
      v12 = v3[4];
      do
      {
        if ( v12 <= 0x2000000 )
          VacbLargeOffset = *(_QWORD *)(v3[11] + 8 * ((unsigned __int64)(unsigned int)v8 >> 18));
        else
          VacbLargeOffset = CcGetVacbLargeOffset((__int64)v3, v8);
        if ( VacbLargeOffset )
        {
          ++v9;
          if ( *(_WORD *)(VacbLargeOffset + 16) )
            ++v10;
        }
        v8 += 0x40000LL;
      }
      while ( v8 <= v11 );
      v5 = a3;
    }
    *a2 = v9 << 18 >> 12;
    *v5 = v10 << 18 >> 12;
    return ExReleasePushLockEx((ULONG_PTR)(v3 + 13), 0LL);
  }
  return result;
}
