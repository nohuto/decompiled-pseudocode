/*
 * XREFs of ?Dispose@PropertyVector@Input@@UEAAXXZ @ 0x1800321D0
 * Callers:
 *     ??_EPropertyVector@Input@@UEAAPEAXI@Z @ 0x180022E80 (--_EPropertyVector@Input@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z @ 0x180022F90 (-RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z.c)
 *     ??1?$PropertyVectorModifiedAdapter@V?$ModifiedNotifier@VPropertyVector@Input@@@Input@@@Input@@UEAA@XZ @ 0x180023194 (--1-$PropertyVectorModifiedAdapter@V-$ModifiedNotifier@VPropertyVector@Input@@@Input@@@Input@@UE.c)
 *     ??_G?$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAPEAXI@Z @ 0x180023F50 (--_G-$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Input::PropertyVector::Dispose(Input::PropertyVector *this)
{
  __int64 i; // rax
  _QWORD *v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rdi

  for ( i = *((_QWORD *)this + 5) - *((_QWORD *)this + 4); i >> 3; i = *((_QWORD *)this + 5) - *((_QWORD *)this + 4) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 4);
    v4 = (void (__fastcall ***)(_QWORD, __int64))*v3;
    memmove(v3, v3 + 1, *((_QWORD *)this + 5) - (_QWORD)(v3 + 1));
    *((_QWORD *)this + 5) -= 8LL;
    if ( v4 )
      (**v4)(v4, 1LL);
  }
}
