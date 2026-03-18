/*
 * XREFs of scl_RoundCurrentSideBearingPnt @ 0x1C02BF124
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02C694C (fsg_CompositeInnerGridFit.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02C86C8 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 */

__int64 __fastcall scl_RoundCurrentSideBearingPnt(__int64 a1, __int64 a2, __int16 a3)
{
  int v5; // esi
  int v6; // eax
  unsigned int v7; // edx
  __int16 v8; // r9
  __int16 v9; // dx
  int v10; // r10d
  __int64 v11; // rdx
  __int16 v12; // r9
  __int64 result; // rax

  v5 = a3;
  v6 = (int)(CompDiv(
               a3,
               *(int *)(a2 + 376)
             * (__int64)(__int16)(*(_WORD *)(*(_QWORD *)(a1 + 32)
                                           + 4LL
                                           * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64)
                                                                         + 2LL * (*(__int16 *)(a1 + 80) - 1))
                                                              + 2))
                                - *(_WORD *)(*(_QWORD *)(a1 + 32)
                                           + 4LL
                                           * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64)
                                                                         + 2LL * (*(__int16 *)(a1 + 80) - 1))
                                                              + 1))))
           + 512) >> 10;
  if ( (*(_BYTE *)(a2 + 452) & 5) == 1 )
    v7 = (v6 + 2) & 0xFFFFFFFC;
  else
    v7 = (v6 + 32) & 0xFFFFFFC0;
  v8 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1));
  *(_DWORD *)(*(_QWORD *)a1 + 4LL * (unsigned __int16)(v8 + 2)) = *(_DWORD *)(*(_QWORD *)a1
                                                                            + 4LL * (unsigned __int16)(v8 + 1))
                                                                + v7;
  v9 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1));
  v10 = (int)(CompDiv(
                v5,
                *(int *)(a2 + 380)
              * (__int64)(__int16)(*(_WORD *)(*(_QWORD *)(a1 + 40) + 4LL * (unsigned __int16)(v9 + 4))
                                 - *(_WORD *)(*(_QWORD *)(a1 + 40) + 4LL * (unsigned __int16)(v9 + 3))))
            + 512) >> 10;
  v11 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 3);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v11) = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v11) + 32) & 0xFFFFFFC0;
  v12 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1));
  result = (unsigned __int16)(v12 + 4);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * result) = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL * (unsigned __int16)(v12 + 3))
                                                 + v10
                                                 + 32) & 0xFFFFFFC0;
  return result;
}
