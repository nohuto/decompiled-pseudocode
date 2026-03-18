/*
 * XREFs of SmHpBufferProtect @ 0x140059A00
 * Callers:
 *     SmHpChunkHeapProtect @ 0x14001EC34 (SmHpChunkHeapProtect.c)
 *     SmHpUnprotectListNeighbors @ 0x1400384C4 (SmHpUnprotectListNeighbors.c)
 *     SmHpChunkUnprotect @ 0x1400599CC (SmHpChunkUnprotect.c)
 *     SmHpBufferUpdateFullness @ 0x140059C7C (SmHpBufferUpdateFullness.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14001C160 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     ExProtectPoolEx @ 0x1400A5BE0 (ExProtectPoolEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall SmHpBufferProtect(ULONG_PTR a1, const unsigned __int8 **a2, char a3)
{
  ULONG_PTR result; // rax
  ULONG_PTR v4; // r14
  const unsigned __int8 *v7; // rbp
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  ULONG_PTR v9; // [rsp+50h] [rbp+8h] BYREF

  result = (ULONG_PTR)&retaddr;
  v9 = a1;
  v4 = *((unsigned int *)a2 + 3);
  if ( (_DWORD)v4 )
  {
    if ( (a3 & 3) != 0 )
    {
      v7 = *a2;
      MetroHash64::Hash(*a2, 0x1000uLL, (unsigned __int8 *const)&v9);
      result = v9;
      if ( !(_DWORD)v9 )
        result = 1LL;
      if ( (_DWORD)result != (_DWORD)v4 )
        KeBugCheckEx(0x1C7u, 0LL, (ULONG_PTR)v7, v4, result);
      if ( (a3 & 1) != 0 )
      {
        result = ExProtectPoolEx(v7, v7, 4096LL, 4LL);
        *((_DWORD *)a2 + 3) = 0;
      }
    }
  }
  else if ( (a3 & 1) == 0 )
  {
    ExProtectPoolEx(*a2, *a2, 4096LL, 2LL);
    MetroHash64::Hash(*a2, 0x1000uLL, (unsigned __int8 *const)&v9);
    result = v9;
    *((_DWORD *)a2 + 3) = v9;
    if ( !(_DWORD)result )
      *((_DWORD *)a2 + 3) = 1;
  }
  return result;
}
