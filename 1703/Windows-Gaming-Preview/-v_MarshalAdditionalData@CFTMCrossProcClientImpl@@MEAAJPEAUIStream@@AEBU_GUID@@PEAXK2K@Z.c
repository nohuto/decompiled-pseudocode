/*
 * XREFs of ?v_MarshalAdditionalData@CFTMCrossProcClientImpl@@MEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18001F640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall CFTMCrossProcClientImpl::v_MarshalAdditionalData(
        CFTMCrossProcClientImpl *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void *a4)
{
  IStream *v6; // rcx
  HRESULT result; // eax

  v6 = (IStream *)*((_QWORD *)this + 8);
  result = v6 == 0LL ? 0x8000FFFF : 0;
  if ( v6 )
  {
    result = IStream_Reset(v6);
    if ( result >= 0 )
      return (*(__int64 (__fastcall **)(_QWORD, struct IStream *, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 8) + 56LL))(
               *((_QWORD *)this + 8),
               a2,
               *((unsigned int *)this + 6),
               0LL,
               0LL);
  }
  return result;
}
