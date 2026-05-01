/*
 * XREFs of ?UnregisterForViewEvents@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1801CF680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092008 (--4-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@.c)
 */

__int64 __fastcall ViewEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  RTL_SRWLOCK *v2; // r14
  PVOID Ptr; // rdx
  void *v6; // rsi
  char v7; // bp
  char *v8; // rcx
  _BYTE *v9; // rdx
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = this + 37;
  AcquireSRWLockExclusive(this + 37);
  Ptr = this[43].Ptr;
  v6 = 0LL;
  v7 = 1;
  if ( Ptr )
  {
    v8 = (char *)this[42].Ptr;
    while ( *(_QWORD *)(*(_QWORD *)v8 + 40LL) != a2.value )
    {
      v6 = (char *)v6 + 1;
      v8 += 8;
      if ( v6 >= Ptr )
        goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::operator=(
      &v11,
      (void **)this[42].Ptr + (_QWORD)v6);
    if ( v6 < this[43].Ptr )
    {
      Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)this[42].Ptr + (_QWORD)v6);
      v9 = this[43].Ptr;
      if ( v6 != v9 - 1 )
      {
        memmove(
          (char *)this[42].Ptr + 8 * (_QWORD)v6,
          (char *)this[42].Ptr + 8 * (_QWORD)v6 + 8,
          8 * (v9 - (_BYTE *)v6) - 8);
        v9 = this[43].Ptr;
      }
      this[43].Ptr = v9 - 1;
    }
    if ( v11 )
      v7 = 0;
  }
LABEL_12:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v11);
  return v7 != 0 ? 0x80070490 : 0;
}
