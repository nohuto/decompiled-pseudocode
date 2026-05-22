/*
 * XREFs of ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18006D864
 * Callers:
 *     ?OnFinalRelease@RIMDeviceCollection@@MEAAXXZ @ 0x18006CBB0 (-OnFinalRelease@RIMDeviceCollection@@MEAAXXZ.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18006D978 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18006DDB0 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180070FF0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180074E7C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 * Callees:
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18006E474 (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall RIMDeviceCollection::Close(RIMDeviceCollection *this)
{
  struct RIMDevice **v2; // rdi
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rdx
  void *v10; // rcx
  void *v11; // rcx

  v2 = (struct RIMDevice **)((char *)this + 624);
  v3 = 256LL;
  do
  {
    if ( *v2 )
      RIMDeviceCollection::DetachDevice(this, *v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 6) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    CloseHandle(v6);
    *((_QWORD *)this + 7) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    CloseHandle(v7);
    *((_QWORD *)this + 8) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 9);
  if ( v8 )
  {
    CloseHandle(v8);
    *((_QWORD *)this + 9) = 0LL;
  }
  v9 = *((_QWORD *)this + 337);
  if ( v9 && v9 != *((_QWORD *)this + 335) )
  {
    RIMFreeInputBuffer(*((_QWORD *)this + 10));
    *((_QWORD *)this + 337) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 335);
  if ( v10 )
  {
    operator delete(v10);
    *((_QWORD *)this + 335) = 0LL;
    *((_DWORD *)this + 672) = 0;
  }
  v11 = (void *)*((_QWORD *)this + 10);
  if ( v11 != (void *)-1LL )
  {
    CloseHandle(v11);
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
}
