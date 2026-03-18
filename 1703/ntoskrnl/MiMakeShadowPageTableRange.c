/*
 * XREFs of MiMakeShadowPageTableRange @ 0x14041D6E8
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14041D6E8 (MiMakeShadowPageTableRange.c)
 *     MmCreateShadowMapping @ 0x14041D7C8 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReadWriteAnyLevelShadowPte @ 0x14017CABC (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeShadowPageTable @ 0x14041D49C (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x14041D6E8 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MiMakeShadowPageTableRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        __int64 **a5)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 *v9; // rdx
  __int64 *v10; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  int v12; // [rsp+50h] [rbp+18h]

  result = (__int64)&retaddr;
  v12 = a3;
  v7 = a1;
  v8 = a2;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a4) )
    v7 = *(_QWORD *)(a3 + 16LL * a4);
  if ( a2 > *(_QWORD *)(a3 + 16LL * a4 + 8) )
    v8 = *(_QWORD *)(a3 + 16LL * a4 + 8);
  for ( ; v7 <= v8; v7 += 8LL )
  {
    result = MiReadWriteAnyLevelShadowPte(v7, a4, 0, ZeroPte);
    if ( (result & 1) == 0 )
    {
      if ( a4 )
      {
        v9 = *a5;
        v10 = (__int64 *)**a5;
        a5[3] = (__int64 *)((char *)a5[3] + 1);
        *a5 = v10;
      }
      else
      {
        v9 = 0LL;
      }
      result = MiInitializeShadowPageTable(v7, (__int64)v9, a4);
    }
    if ( (unsigned int)a4 > *((_DWORD *)a5 + 10) )
      result = MiMakeShadowPageTableRange(
                 (__int64)(v7 << 25) >> 16,
                 (unsigned int)((__int64)(v7 << 25) >> 16) + 4088,
                 v12,
                 a4 - 1,
                 (__int64)a5);
  }
  return result;
}
