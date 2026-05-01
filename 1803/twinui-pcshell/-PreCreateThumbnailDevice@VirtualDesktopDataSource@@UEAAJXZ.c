/*
 * XREFs of ?PreCreateThumbnailDevice@VirtualDesktopDataSource@@UEAAJXZ @ 0x18025E6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopDataSource::PreCreateThumbnailDevice(VirtualDesktopDataSource *this)
{
  const char *v1; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 24LL))(*((_QWORD *)this + 29));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7E,
                           (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                           v1);
  }
  return result;
}
