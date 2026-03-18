/*
 * XREFs of MiFillGapPtes @ 0x14015A794
 * Callers:
 *     MiFillGapAddresses @ 0x14015A700 (MiFillGapAddresses.c)
 *     MiFillGapPtes @ 0x14015A794 (MiFillGapPtes.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiFillGapPtes @ 0x14015A794 (MiFillGapPtes.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFillGapPtes(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v9; // r9
  int v10; // r11d
  __int64 v11; // rdx
  int v12; // r8d
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v6 = (unsigned __int64)a1;
  v7 = a2;
  if ( (unsigned __int64)a1 < *(_QWORD *)(a3 + 16LL * a5) )
    v6 = *(_QWORD *)(a3 + 16LL * a5);
  if ( a2 > *(_QWORD *)(a3 + 16LL * a5 + 8) )
    v7 = *(_QWORD *)(a3 + 16LL * a5 + 8);
  while ( v6 <= v7 )
  {
    result = MI_READ_PTE_LOCK_FREE(v6);
    if ( (result & 1) != 0 )
    {
      if ( a5 && (result & 0x80u) == 0LL )
        result = MiFillGapPtes(
                   (__int64)(v6 << 25) >> 16,
                   (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
                   v10,
                   (_DWORD)a4,
                   a5 - 1);
    }
    else
    {
      if ( a5 )
      {
        v11 = a4[v9];
        v12 = -1476395004;
        v13 = 0LL;
      }
      else
      {
        v11 = *a4;
        v12 = 536870913;
        v13 = v6;
      }
      *(_QWORD *)v6 = MiMakeValidPte(v13, v11, v12);
      result = MiPteInShadowRange(v6);
      if ( (_DWORD)result )
        result = MiWritePteShadow(v14);
    }
    v6 += 8LL;
  }
  return result;
}
