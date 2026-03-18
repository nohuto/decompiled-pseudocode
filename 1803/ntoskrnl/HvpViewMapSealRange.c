/*
 * XREFs of HvpViewMapSealRange @ 0x1405140C0
 * Callers:
 *     HvpSetRangeProtection @ 0x140513D48 (HvpSetRangeProtection.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1400719A8 (CmSiProtectViewOfSection.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1404E366C (HvpViewMapFindViewForFileOffset.c)
 */

void __fastcall HvpViewMapSealRange(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rbx
  signed __int64 v4; // rbp
  _QWORD *ViewForFileOffset; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  signed __int64 v9; // rcx
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v3 = (unsigned int)(a2 + 4096);
  v4 = v3 + a3;
  if ( v3 < (unsigned __int64)v4 )
  {
    do
    {
      ViewForFileOffset = (_QWORD *)HvpViewMapFindViewForFileOffset(a1, v3);
      v7 = ViewForFileOffset;
      v8 = v4;
      v9 = ViewForFileOffset[6];
      if ( v4 >= v9 )
        v8 = ViewForFileOffset[6];
      CmSiProtectViewOfSection(
        v9,
        *(void ***)(a1 + 24),
        (void *)(v3 + ViewForFileOffset[7] - ViewForFileOffset[3]),
        v8 - v3,
        2u,
        (ULONG *)&v10);
      while ( v3 < v8 )
      {
        *((_BYTE *)v7 + ((unsigned __int64)(v3 - v7[3]) >> 12) + 64) &= ~8u;
        v3 += 4096LL;
      }
      v3 = v8;
    }
    while ( v8 < v4 );
  }
}
