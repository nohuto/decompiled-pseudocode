/*
 * XREFs of ?Close@CStartExperienceManager@@UEAAJXZ @ 0x1801734B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Close(CStartExperienceManager *this)
{
  __int64 *v1; // rdi

  v1 = (__int64 *)((char *)this + 472);
  if ( *((_DWORD *)this + 114) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 32LL))(*v1);
    *((_DWORD *)this + 114) = 0;
  }
  if ( *((_DWORD *)this + 115) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 32LL))(*v1);
    *((_DWORD *)this + 115) = 0;
  }
  if ( *((_DWORD *)this + 116) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 32LL))(*v1);
    *((_DWORD *)this + 116) = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  return 0LL;
}
