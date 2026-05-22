/*
 * XREFs of ??_EMPCManagerConnection@@UEAAPEAXI@Z @ 0x180052C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18001A5B4 (--1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

MPCManagerConnection *__fastcall MPCManagerConnection::`vector deleting destructor'(
        MPCManagerConnection *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 19);
  if ( v4 )
    (**(void (__fastcall ***)(__int64))(v4 + 16))(v4 + 16);
  Microsoft::BamoImpl::BamoConnectionImpl::~BamoConnectionImpl((MPCManagerConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
