/*
 * XREFs of CmpStartKeyNodeStack @ 0x140698294
 * Callers:
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140698350 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14069B2EC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall CmpStartKeyNodeStack(__int64 a1, __int16 a2)
{
  unsigned int v2; // edi
  __int16 v5; // bx
  PVOID TransientPoolWithTag; // rax
  __int64 v7; // r15
  __int64 v8; // rbp
  _DWORD *v9; // rbx

  v2 = 0;
  if ( a2 < 2 )
  {
LABEL_7:
    *(_WORD *)a1 = a2;
    return v2;
  }
  v5 = a2 - 1;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, 32LL * (__int16)(a2 - 1), 0x39364D43u);
  *(_QWORD *)(a1 + 72) = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    if ( v5 > 0 )
    {
      v7 = 0LL;
      v8 = (unsigned __int16)v5;
      do
      {
        v9 = (_DWORD *)(v7 + *(_QWORD *)(a1 + 72));
        memset(v9, 0, 0x20uLL);
        v9[2] = -1;
        HvpGetCellContextReinitialize((__int64)(v9 + 6));
        v7 += 32LL;
        --v8;
      }
      while ( v8 );
    }
    goto LABEL_7;
  }
  return (unsigned int)-1073741670;
}
