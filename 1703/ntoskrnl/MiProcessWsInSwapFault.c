/*
 * XREFs of MiProcessWsInSwapFault @ 0x140011F40
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     MiReleaseWsSwapReservationPfn @ 0x140012054 (MiReleaseWsSwapReservationPfn.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiProcessWsInSwapFault(_QWORD *a1)
{
  __int64 result; // rax
  int v3; // r9d
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  while ( 1 )
  {
    result = MI_READ_PTE_LOCK_FREE(*a1);
    v12 = result;
    if ( (result & 1) == 0 || v3 != 3 && (result & 0x80u) != 0LL )
      break;
    a1 = (_QWORD *)(v4 + 8);
    if ( (unsigned int)(v3 + 1) >= 4 )
    {
      v5 = MI_READ_PTE_LOCK_FREE(&v12);
      result = MiIsPfnInline((v5 >> 12) & 0xFFFFFFFFFLL, v6, v7, (v5 >> 12) & 0xFFFFFFFFFLL);
      if ( (_DWORD)result )
      {
        v9 = 48 * v8 - 0x58000000000LL;
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v11);
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        result = MiReleaseWsSwapReservationPfn(v9);
        v10 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL));
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( result )
          return MiReleasePageFileInfo(v10, result, 1LL);
      }
      return result;
    }
  }
  return result;
}
