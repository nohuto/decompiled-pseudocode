/*
 * XREFs of VfZwNotifyChangeKey @ 0x1407853C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwNotifyChangeKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        int a9,
        char a10)
{
  __int64 v14; // r8
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    if ( v14 )
    {
      ViZwCheckVirtualAddress(v14, retaddr);
      if ( (unsigned int)a4 > 6 && (unsigned int)(a4 - 32) > 0x1F )
        VerifierBugCheckIfAppropriate(0xC4u, 0xFCuLL, retaddr, a4, 0LL);
    }
    ViZwCheckVirtualAddress(a5, retaddr);
    ViZwCheckVirtualAddress(a8, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, ULONG_PTR, __int64, int, char, __int64, int, char))pXdvZwNotifyChangeKey)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
