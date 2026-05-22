/*
 * XREFs of ??_EDisplayBinding@@UEAAPEAXI@Z @ 0x180020090
 * Callers:
 *     <none>
 * Callees:
 *     ??1PropertyMap@Input@@UEAA@XZ @ 0x180016C64 (--1PropertyMap@Input@@UEAA@XZ.c)
 *     ?GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z @ 0x180031AEC (-GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
DisplayBinding *__fastcall DisplayBinding::`vector deleting destructor'(DisplayBinding *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct Input::PropertyNode *v7; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)this = &DisplayBinding::`vftable'{for `IDisplayBinding'};
  *((_QWORD *)this + 1) = &DisplayBinding::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDisplay,Input::IPropertyChangedListener,IInputDisplayOrientationListener>'};
  *((_QWORD *)this + 2) = &DisplayBinding::`vftable'{for `Input::IPropertyChangedListener'};
  *((_QWORD *)this + 3) = &DisplayBinding::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDisplayOrientationListener>'};
  if ( Input::PropertyMap::GetAt((DisplayBinding *)((char *)this + 64), &DISPLAYBINDING_MONITORS, &v7) >= 0
    && *((_QWORD *)v7 + 7) )
  {
    *((_QWORD *)v7 + 7) = 0LL;
  }
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Input::PropertyMap::~PropertyMap((void **)this + 8);
  *((_DWORD *)this + 9) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
