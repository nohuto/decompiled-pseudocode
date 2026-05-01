/*
 * XREFs of ??_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z @ 0x1800CA850
 * Callers:
 *     <none>
 * Callees:
 *     ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x180005734 (--1OWNERSHIP_CHANGE_INFO@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180194C3C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CImmersiveShellCreationBehavior *__fastcall CImmersiveShellCreationBehavior::`scalar deleting destructor'(
        CImmersiveShellCreationBehavior *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CImmersiveShellCreationBehavior::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 3) = &CImmersiveShellCreationBehavior::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveShellCreationBehavior,Microsoft::WRL::Details::Nil>,1,0>'};
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v8 )
    (**v8)(v8, 1LL);
  *((_DWORD *)this + 9) = -1073741823;
  OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
