/*
 * XREFs of ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x18001EB90
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18001A5B4 (--1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

InputSystemServerConnection *__fastcall InputSystemServerConnection::`scalar deleting destructor'(
        InputSystemServerConnection *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  Microsoft::BamoImpl::BamoConnectionImpl::~BamoConnectionImpl((InputSystemServerConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
