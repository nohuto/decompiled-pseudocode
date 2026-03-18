/*
 * XREFs of MiClearVadBits @ 0x14007230C
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 * Callees:
 *     MiClearVadCellBits @ 0x1400723F0 (MiClearVadCellBits.c)
 */

__int64 __fastcall MiClearVadBits(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  unsigned int i; // edi
  __int64 result; // rax

  v4 = a2 >> 16;
  if ( !a4
    || ((a2 ^ ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) != 0
    || (result = (unsigned int)(v4 - 1), (_DWORD)v4) )
  {
    v6 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 48LL;
    for ( i = 0; i < 3; ++i )
    {
      result = MiClearVadCellBits((PRTL_BITMAP)(v6 + 56LL * i), a4);
      if ( (_DWORD)result )
        break;
    }
  }
  return result;
}
