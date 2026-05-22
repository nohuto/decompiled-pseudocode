/*
 * XREFs of ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x180041D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x180040704 (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800498D8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

MPCSixDofProcessor *__fastcall MPCSixDofProcessor::`vector deleting destructor'(MPCSixDofProcessor *this, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx

  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>((_QWORD **)this + 336);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>((_QWORD **)this + 335);
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 334);
  if ( v4 )
    (**v4)(v4, 1LL);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 333);
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 332);
  if ( v6 )
    (**v6)(v6, 1LL);
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 331);
  if ( v7 )
    (**v7)(v7, 1LL);
  v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 330);
  if ( v8 )
    (**v8)(v8, 1LL);
  v9 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 329);
  if ( v9 )
    (**v9)(v9, 1LL);
  *((_DWORD *)this + 573) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
