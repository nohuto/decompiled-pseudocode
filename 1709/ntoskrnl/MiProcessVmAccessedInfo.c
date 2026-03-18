/*
 * XREFs of MiProcessVmAccessedInfo @ 0x14021DCA4
 * Callers:
 *     MiTrimWorkingSetTail @ 0x140010B30 (MiTrimWorkingSetTail.c)
 *     MiAgeWorkingSetTail @ 0x14009EF90 (MiAgeWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14021E1E0 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14021E4C0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14021EA70 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MiRecheckEPTAccessedVa @ 0x14021DDC0 (MiRecheckEPTAccessedVa.c)
 */

__int64 __fastcall MiProcessVmAccessedInfo(
        __int64 a1,
        _DWORD *a2,
        __int64 (__fastcall *a3)(_QWORD *, __int64, __int64, unsigned __int64, __int64),
        __int64 a4)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  result = (unsigned int)*a2;
  v5 = a2 + 2;
  v12 = 0LL;
  v10 = (unsigned __int64)&a2[2 * result + 2];
  while ( (unsigned __int64)v5 < v10 )
  {
    v11 = *v5 & 0xFFFFFFFFFFFFF000uLL;
    result = MiRecheckEPTAccessedVa(a1, v11, &v12);
    if ( result )
    {
      result = a3(v5, a1, result, v11, a4);
      if ( (_DWORD)result )
        break;
    }
    ++v5;
  }
  *a2 = 0;
  return result;
}
