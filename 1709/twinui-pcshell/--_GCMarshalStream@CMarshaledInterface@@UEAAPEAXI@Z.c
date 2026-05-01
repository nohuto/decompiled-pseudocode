/*
 * XREFs of ??_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z @ 0x180048230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CMarshaledInterface::CMarshalStream *__fastcall CMarshaledInterface::CMarshalStream::`scalar deleting destructor'(
        CMarshaledInterface::CMarshalStream *this,
        char a2)
{
  bool v2; // zf
  DWORD CurrentThreadId; // eax
  IStream *v6; // rcx
  LPVOID v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  LPVOID ppv; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &CMarshaledInterface::CMarshalStream::`vftable';
  if ( !v2 )
  {
    CurrentThreadId = GetCurrentThreadId();
    v6 = (IStream *)*((_QWORD *)this + 2);
    if ( *((_DWORD *)this + 10) == CurrentThreadId )
    {
      CoReleaseMarshalData(v6);
      v7 = (LPVOID)*((_QWORD *)this + 2);
      if ( !v7 )
        goto LABEL_8;
      *((_QWORD *)this + 2) = 0LL;
    }
    else
    {
      ppv = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      CoGetInterfaceAndReleaseStream(v6, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
      v7 = ppv;
      if ( !ppv )
        goto LABEL_8;
      ppv = 0LL;
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  }
LABEL_8:
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
