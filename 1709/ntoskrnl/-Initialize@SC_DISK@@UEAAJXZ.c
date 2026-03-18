/*
 * XREFs of ?Initialize@SC_DISK@@UEAAJXZ @ 0x1401469D0
 * Callers:
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1405C9528 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x140146D00 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SC_DISK::Initialize(SC_DISK *this)
{
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rdi
  unsigned int v6; // eax

  v2 = SC_DEVICE::Initialize(this);
  if ( v2 >= 0 )
  {
    v3 = *((_QWORD *)this + 1) - *(_QWORD *)&GUID_DEVCLASS_SCMDISK.Data1;
    if ( !v3 )
      v3 = *((_QWORD *)this + 2) - *(_QWORD *)GUID_DEVCLASS_SCMDISK.Data4;
    if ( !v3 )
      goto LABEL_15;
    v4 = *((_QWORD *)this + 1) - *(_QWORD *)&GUID_DEVCLASS_SMRDISK.Data1;
    if ( !v4 )
      v4 = *((_QWORD *)this + 2) - *(_QWORD *)GUID_DEVCLASS_SMRDISK.Data4;
    if ( !v4 )
LABEL_15:
      *((_DWORD *)this + 32) |= 1u;
    v5 = (_QWORD *)((char *)this + 136);
    v2 = (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, char *, int))(*(_QWORD *)this + 16LL))(
           this,
           475228LL,
           0LL,
           0LL,
           (char *)this + 136,
           8);
    if ( v2 >= 0 )
    {
      if ( !*v5 )
        return (unsigned int)-1073741661;
      v2 = (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, char *, int))(*(_QWORD *)this + 16LL))(
             this,
             458752LL,
             0LL,
             0LL,
             (char *)this + 144,
             24);
      if ( v2 >= 0 )
      {
        v6 = *((_DWORD *)this + 41);
        if ( v6 )
        {
          *((_DWORD *)this + 42) = v6;
          _BitScanReverse(&v6, v6);
          *((_DWORD *)this + 43) = v6;
          *((_QWORD *)this + 22) = *v5 >> *((_DWORD *)this + 43);
          return (unsigned int)v2;
        }
        return (unsigned int)-1073741661;
      }
    }
  }
  return (unsigned int)v2;
}
