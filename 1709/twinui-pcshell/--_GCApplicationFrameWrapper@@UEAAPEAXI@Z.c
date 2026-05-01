/*
 * XREFs of ??_GCApplicationFrameWrapper@@UEAAPEAXI@Z @ 0x18004CFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CApplicationFrameWrapper *__fastcall CApplicationFrameWrapper::`scalar deleting destructor'(
        CApplicationFrameWrapper *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = (void *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 16) = 0LL;
  }
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 13);
  if ( v7 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 12);
  if ( v8 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *((_DWORD *)this + 13) = -1073741823;
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
