/*
 * XREFs of MiProcessWsInSwapFault @ 0x140003660
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400AD9DC (MiReleaseWsSwapReservationPfn.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiProcessWsInSwapFault(__int64 **a1)
{
  __int64 **v1; // r10
  unsigned __int64 v2; // r11
  unsigned int v3; // r9d
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  v2 = 0xFFFFF6FB7DBED000uLL;
  v3 = 0;
  while ( 1 )
  {
    v4 = *v1;
    result = **v1;
    if ( (unsigned __int64)*v1 >= v2 && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      result = MiReadPteShadow(v4, **v1);
    v11 = result;
    if ( (result & 1) == 0 || v3 != 3 && (result & 0x80u) != 0LL )
      break;
    ++v3;
    ++v1;
    if ( v3 >= 4 )
    {
      v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v11);
      result = MiIsPfnInline(v6);
      if ( (_DWORD)result )
      {
        v8 = 48 * v7 - 0x58000000000LL;
        v10 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v10);
          while ( *(__int64 *)(v8 + 24) < 0 );
        }
        result = MiReleaseWsSwapReservationPfn(v8);
        v9 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL));
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( result )
          return MiReleasePageFileInfo(v9, result, 1LL);
      }
      return result;
    }
  }
  return result;
}
