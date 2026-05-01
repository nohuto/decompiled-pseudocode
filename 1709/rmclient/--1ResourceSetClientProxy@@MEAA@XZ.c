/*
 * XREFs of ??1ResourceSetClientProxy@@MEAA@XZ @ 0x18000DCC8
 * Callers:
 *     ??_GResourceSetClientProxy@@MEAAPEAXI@Z @ 0x18000DD50 (--_GResourceSetClientProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x18000F120 (-ReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 */

void __fastcall ResourceSetClientProxy::~ResourceSetClientProxy(ResourceSetClientProxy *this)
{
  bool v1; // zf
  __int64 v3; // rcx

  v1 = *((_DWORD *)this + 122) == 2;
  *(_QWORD *)this = &ResourceSetClientProxy::`vftable';
  if ( !v1 )
    ResourceSetClientProxy::ReleaseResources(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 448));
  v3 = *((_QWORD *)this + 54);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
