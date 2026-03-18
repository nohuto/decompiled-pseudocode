/*
 * XREFs of HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140636AD4
 * Callers:
 *     HvpViewMapAdjustFlag @ 0x140636A68 (HvpViewMapAdjustFlag.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1400719A8 (CmSiProtectViewOfSection.c)
 */

void __fastcall HvpViewMapMakeViewRangeUnCOWByPolicy(SIZE_T a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  SIZE_T v7; // rbp
  unsigned __int64 v8; // rax
  char v9; // cl
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 < a4 )
  {
    v5 = a3;
    v7 = a1;
    do
    {
      v8 = (unsigned __int64)(v5 - *(_QWORD *)(a2 + 24)) >> 12;
      v9 = *(_BYTE *)(v8 + a2 + 64);
      if ( (v9 & 4) != 0 )
      {
        LOBYTE(a1) = v9 & 0xFB;
        *(_BYTE *)(v8 + a2 + 64) = a1;
        if ( (a1 & 2) == 0 )
          CmSiProtectViewOfSection(
            a1,
            *(void ***)(v7 + 24),
            (void *)(v5 + *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 24)),
            0x1000uLL,
            0x80000002,
            (ULONG *)&v10);
      }
      v5 += 4096LL;
    }
    while ( v5 < a4 );
  }
}
