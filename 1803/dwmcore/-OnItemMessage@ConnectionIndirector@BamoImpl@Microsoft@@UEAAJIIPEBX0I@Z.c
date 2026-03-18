/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x180153D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        struct Microsoft::BamoImpl::BamoConnectionImpl **this,
        int a2,
        __int64 a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  struct Microsoft::BamoImpl::BamoConnectionImpl *v9; // rbx
  __int64 v10; // r8
  const void *v11; // rdx
  unsigned int v12; // eax
  Microsoft::BamoImpl::BamoConnectionImpl *v13; // rcx
  unsigned int v14; // edi
  Microsoft::BamoImpl::BamoConnectionImpl *v16; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v16, this[1]);
  v9 = this[1];
  v10 = a6;
  v11 = a5;
  *((_DWORD *)v9 + 8) = a2;
  v12 = (*(__int64 (__fastcall **)(const void *, const void *, __int64))(*(_QWORD *)a4 + 24LL))(a4, v11, v10);
  v13 = v16;
  v14 = v12;
  *((_DWORD *)v9 + 8) = 0;
  if ( v13 )
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v13);
  return v14;
}
