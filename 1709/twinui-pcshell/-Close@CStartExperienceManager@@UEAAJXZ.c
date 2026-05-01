/*
 * XREFs of ?Close@CStartExperienceManager@@UEAAJXZ @ 0x1800B6730
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResources@CStartSizingFrame@@QEAAXXZ @ 0x1800CFFDC (-ReleaseResources@CStartSizingFrame@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Close(CStartExperienceManager *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 114) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 32LL))(*((_QWORD *)this + 59));
    *((_DWORD *)this + 114) = 0;
  }
  if ( *((_DWORD *)this + 115) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 32LL))(*((_QWORD *)this + 59));
    *((_DWORD *)this + 115) = 0;
  }
  if ( *((_DWORD *)this + 116) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 32LL))(*((_QWORD *)this + 59));
    *((_DWORD *)this + 116) = 0;
  }
  CStartSizingFrame::ReleaseResources((CStartExperienceManager *)((char *)this + 600));
  v2 = *((_QWORD *)this + 59);
  if ( v2 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return 0LL;
}
