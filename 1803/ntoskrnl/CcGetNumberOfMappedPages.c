/*
 * XREFs of CcGetNumberOfMappedPages @ 0x14015BED0
 * Callers:
 *     <none>
 * Callees:
 *     CcGetVacbLargeOffset @ 0x1400DD0C0 (CcGetVacbLargeOffset.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  signed __int64 v13; // r14
  __int64 v14; // r15
  unsigned int v15; // eax
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
    v13 = v7 & 0xFFFFFFFFFFFC0000uLL;
    if ( v13 >= 0 )
    {
      v14 = v3[4];
      v15 = 0;
      do
      {
        if ( v14 <= 0x2000000 )
          VacbLargeOffset = *(_QWORD *)(v3[11] + 8 * ((unsigned __int64)v15 >> 18));
        else
          VacbLargeOffset = CcGetVacbLargeOffset((__int64)v3, v8);
        if ( VacbLargeOffset )
        {
          ++v9;
          if ( *(_WORD *)(VacbLargeOffset + 16) )
            ++v10;
        }
        v8 += 0x40000LL;
        v15 = v8;
      }
      while ( v8 <= v13 );
      v5 = a3;
    }
    *a2 = v9 << 18 >> 12;
    *v5 = v10 << 18 >> 12;
    return ExReleasePushLockEx((ULONG_PTR)(v3 + 13), 0LL, v11, v12);
  }
  return result;
}
