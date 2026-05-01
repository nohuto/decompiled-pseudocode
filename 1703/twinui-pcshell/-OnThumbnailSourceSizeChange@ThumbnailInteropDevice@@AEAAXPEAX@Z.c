/*
 * XREFs of ?OnThumbnailSourceSizeChange@ThumbnailInteropDevice@@AEAAXPEAX@Z @ 0x180166F0C
 * Callers:
 *     ?v_WndProc@ThumbnailInteropWindow@ThumbnailInteropDevice@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180166EC0 (-v_WndProc@ThumbnailInteropWindow@ThumbnailInteropDevice@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ThumbnailInteropDevice::OnThumbnailSourceSizeChange(
        ThumbnailInteropDevice *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v6 = (_QWORD *)*((_QWORD *)this + 4);
    v5 = (_QWORD *)*((_QWORD *)this + 5);
    while ( v6 != v5 )
    {
      (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)*v6 + 24LL))(*v6, a2);
      ++v6;
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xC8,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
      a4);
  }
}
