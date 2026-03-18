/*
 * XREFs of ?AllocatePeer@dataproviderBamoConnectionImpl@BamoImpl@@EEAAJPEAPEAVBamoPeer@Bamo@Microsoft@@@Z @ 0x180153390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 */

__int64 __fastcall BamoImpl::dataproviderBamoConnectionImpl::AllocatePeer(
        BamoImpl::dataproviderBamoConnectionImpl *this,
        struct Microsoft::Bamo::BamoPeer **a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // esi
  struct Microsoft::Bamo::BamoPeer *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v9,
    this);
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct Microsoft::Bamo::BamoPeer **))(**((_QWORD **)this + 2) + 56LL))(
         *((_QWORD *)this + 2),
         &v8);
  v5 = v9;
  v6 = v4;
  *a2 = v8;
  if ( v5 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  return v6;
}
