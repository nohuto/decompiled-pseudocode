/*
 * XREFs of ?GetDataFlow@CAudioStream@@UEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@XZ @ 0x18002F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCaptureStream@CAudioStream@@UEAA_NXZ @ 0x18002DF10 (-IsCaptureStream@CAudioStream@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CAudioStream::GetDataFlow(CAudioStream *this)
{
  CAudioStream *v1; // rcx
  __int64 (*v2)(void); // rax
  char IsCaptureStream; // al

  v1 = (CAudioStream *)((char *)this - 8);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 64LL);
  if ( (char *)v2 == (char *)CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream(v1);
  else
    IsCaptureStream = v2();
  return IsCaptureStream != 0;
}
