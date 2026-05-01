/*
 * XREFs of ?RuntimeClassInitialize@ThumbnailInteropDevice@@QEAAJXZ @ 0x180166980
 * Callers:
 *     ?ThumbnailInteropDevice_CreateInstance@@YAJPEAPEAUIThumbnailInteropDevice@@@Z @ 0x180166F60 (-ThumbnailInteropDevice_CreateInstance@@YAJPEAPEAUIThumbnailInteropDevice@@@Z.c)
 * Callees:
 *     ??$MakeAndInitializeOrThrow@VThumbnailInteropWindow@ThumbnailInteropDevice@@QEAV2@@wil@@YA?AV?$ComPtr@VThumbnailInteropWindow@ThumbnailInteropDevice@@@WRL@Microsoft@@$$QEBQEAVThumbnailInteropDevice@@@Z @ 0x1801674D4 (--$MakeAndInitializeOrThrow@VThumbnailInteropWindow@ThumbnailInteropDevice@@QEAV2@@wil@@YA-AV-$C.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ThumbnailInteropDevice::RuntimeClassInitialize(ThumbnailInteropDevice *this)
{
  __int64 *v2; // rax
  const char *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  ThumbnailInteropDevice *v10; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    v10 = this;
    v2 = (__int64 *)wil::MakeAndInitializeOrThrow<ThumbnailInteropDevice::ThumbnailInteropWindow,ThumbnailInteropDevice * const>(
                      &v9,
                      &v10);
    v4 = *v2;
    *v2 = 0LL;
    v5 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x48,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
                           v3);
  }
  return result;
}
