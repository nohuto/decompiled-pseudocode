/*
 * XREFs of HvpViewMapMakeViewRangeCOWByCaller @ 0x140513BA8
 * Callers:
 *     HvpViewMapCOWAndUnsealRange @ 0x140513B34 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapMigrateCOWData @ 0x140706D20 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1400719A8 (CmSiProtectViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x140512FBC (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeCOWByCaller(SIZE_T a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rdx
  SIZE_T v12; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  v8 = CmSiProtectViewOfSection(
         a1,
         *(void ***)(a1 + 24),
         (void *)(*(_QWORD *)(a2 + 56) + a3 - *(_QWORD *)(a2 + 24)),
         a4 - a3,
         8u,
         (ULONG *)&v13);
  if ( v8 >= 0 )
  {
    v9 = v4;
    if ( v4 >= a4 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(a2 + 24);
        if ( (*(_BYTE *)(((unsigned __int64)(v9 - v10) >> 12) + a2 + 64) & 2) == 0 )
        {
          v8 = HvpViewMapTouchPages((_BYTE *)(*(_QWORD *)(a2 + 56) + v9 - v10), 4096LL);
          if ( v8 < 0 )
            break;
        }
        v9 += 4096LL;
        if ( v9 >= a4 )
        {
          while ( v4 < a4 )
          {
            *(_BYTE *)(((unsigned __int64)(v4 - *(_QWORD *)(a2 + 24)) >> 12) + a2 + 64) |= 0xAu;
            v4 += 4096LL;
          }
          return 0;
        }
      }
      do
      {
        v12 = *(_QWORD *)(a2 + 24);
        if ( (*(_BYTE *)(((v4 - v12) >> 12) + a2 + 64) & 6) == 0 )
          CmSiProtectViewOfSection(
            v12,
            *(void ***)(a1 + 24),
            (void *)(*(_QWORD *)(a2 + 56) + v4 - v12),
            0x1000uLL,
            0x80000002,
            (ULONG *)&v13);
        v4 += 4096LL;
      }
      while ( v4 < a4 );
    }
  }
  return (unsigned int)v8;
}
