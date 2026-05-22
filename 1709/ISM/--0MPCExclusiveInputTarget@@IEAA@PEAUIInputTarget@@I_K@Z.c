/*
 * XREFs of ??0MPCExclusiveInputTarget@@IEAA@PEAUIInputTarget@@I_K@Z @ 0x1800AB120
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x1800A9D30 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800355A4 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
MPCExclusiveInputTarget *__fastcall MPCExclusiveInputTarget::MPCExclusiveInputTarget(
        MPCExclusiveInputTarget *this,
        struct IInputTarget *a2,
        int a3,
        __int64 a4)
{
  struct IViewHierarchy *ViewHierarchy; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &MPCExclusiveInputTarget::`vftable'{for `IMPCInputTarget'};
  *((_QWORD *)this + 1) = &MPCExclusiveInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &MPCExclusiveInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 3) = &MPCExclusiveInputTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_DWORD *)this + 14) = a3;
  *((_QWORD *)this + 8) = a4;
  *((_QWORD *)this + 9) = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
         *((_QWORD *)this + 6),
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v10) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 48LL))(v10, &v11) >= 0
    && v11 )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    *((_QWORD *)this + 9) = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v11);
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return this;
}
