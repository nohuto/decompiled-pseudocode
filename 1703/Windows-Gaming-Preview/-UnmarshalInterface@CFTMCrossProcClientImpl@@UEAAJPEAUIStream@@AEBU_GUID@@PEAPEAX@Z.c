/*
 * XREFs of ?UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x18001F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x18001F814 (-_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::UnmarshalInterface(
        CFTMCrossProcClientImpl *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax

  *a4 = 0LL;
  result = CFTMCrossProcClientImpl::_UnwrapStream(this, 0LL, a2);
  if ( (int)result >= 0 )
    return (**(__int64 (__fastcall ***)(CFTMCrossProcClientImpl *, const struct _GUID *, void **))this)(this, a3, a4);
  return result;
}
