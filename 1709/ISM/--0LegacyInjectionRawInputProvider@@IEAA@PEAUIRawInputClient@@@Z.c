/*
 * XREFs of ??0LegacyInjectionRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x180086184
 * Callers:
 *     ?Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800863E0 (-Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

LegacyInjectionRawInputProvider *__fastcall LegacyInjectionRawInputProvider::LegacyInjectionRawInputProvider(
        LegacyInjectionRawInputProvider *this,
        struct IRawInputClient *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  LegacyInjectionRawInputProvider *result; // rax

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &LegacyInjectionRawInputProvider::`vftable'{for `IRemoteInputInjection'};
  *((_QWORD *)this + 1) = &LegacyInjectionRawInputProvider::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 2) = &LegacyInjectionRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 3) = &LegacyInjectionRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  if ( *((struct IRawInputClient **)this + 5) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_BYTE *)this + 72) = 0;
  result = this;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_WORD *)this + 44) = 0;
  return result;
}
