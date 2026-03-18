/*
 * XREFs of MiMakeShadowPageTableRange @ 0x14062B8BC
 * Callers:
 *     MmCreateShadowMapping @ 0x14062B744 (MmCreateShadowMapping.c)
 *     MiMakeShadowPageTableRange @ 0x14062B8BC (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiGetPfnLink @ 0x1400D1210 (MiGetPfnLink.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x140176218 (MiReadWriteAnyLevelShadowPte.c)
 *     MiMakeShadowPageTableRange @ 0x14062B8BC (MiMakeShadowPageTableRange.c)
 *     MiInitializeShadowPageTable @ 0x14062B9A4 (MiInitializeShadowPageTable.c)
 */

unsigned __int64 __fastcall MiMakeShadowPageTableRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 PfnLink; // rax
  int v11; // [rsp+50h] [rbp+18h]

  v11 = a3;
  v6 = a1;
  v7 = a2;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a4) )
    v6 = *(_QWORD *)(a3 + 16LL * a4);
  result = *(_QWORD *)(a3 + 16LL * a4 + 8);
  if ( a2 > result )
    v7 = *(_QWORD *)(a3 + 16LL * a4 + 8);
  for ( ; v6 <= v7; v6 += 8LL )
  {
    result = MiReadWriteAnyLevelShadowPte(v6, a4, 0, ZeroPte);
    if ( (result & 1) == 0 )
    {
      if ( a4 )
      {
        PfnLink = MiGetPfnLink(*(_QWORD *)(a5 + 16));
        ++*(_QWORD *)(a5 + 40);
        *(_QWORD *)(a5 + 16) = PfnLink;
      }
      else
      {
        v9 = 0LL;
      }
      result = MiInitializeShadowPageTable(v6, v9, (unsigned int)a4);
    }
    if ( a4 > *(_DWORD *)(a5 + 56) )
      result = MiMakeShadowPageTableRange(
                 (__int64)(v6 << 25) >> 16,
                 (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
                 v11,
                 a4 - 1,
                 a5);
  }
  return result;
}
