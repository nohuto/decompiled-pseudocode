/*
 * XREFs of ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationToken@@@Z @ 0x180060CC4
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@KK@Z @ 0x18005F164 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@KK@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180070114 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F0F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180027398 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18002A028 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall MPCHeadUpdateListener::AddHeadEventOccurred(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        struct EventRegistrationToken *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r15
  int v7; // ebx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  RTL_SRWLOCK v9; // rcx
  __int64 v10; // rcx
  _QWORD *Ptr; // rax
  Microsoft::WRL::Details::EventTargetArray *v12; // rdi
  void **v13; // r12
  struct IUnknown **i; // rbx
  void *v15; // r8
  volatile signed __int32 *v16; // rcx
  volatile signed __int32 *v17; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  void *v22; // [rsp+78h] [rbp+20h]

  v3 = (struct _RTL_CRITICAL_SECTION *)&this[17];
  EnterCriticalSection((LPCRITICAL_SECTION)&this[17]);
  if ( !a2 )
  {
    v7 = -2147024809;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_29;
  }
  QueryInterface = a2->lpVtbl[1].QueryInterface;
  a3->value = 0LL;
  v22 = QueryInterface;
  AcquireSRWLockExclusive(this + 2);
  v9.Ptr = this->Ptr;
  v20 = 0LL;
  if ( v9.Ptr )
    v10 = ((__int64)(*((_QWORD *)v9.Ptr + 3) - *((_QWORD *)v9.Ptr + 2)) >> 3) + 1;
  else
    v10 = 1LL;
  v21 = v10;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v20,
         (unsigned __int64 *)&v21);
  if ( v7 >= 0 )
  {
    Ptr = this->Ptr;
    v12 = v20;
    if ( this->Ptr )
    {
      v13 = (void **)Ptr[4];
      for ( i = (struct IUnknown **)Ptr[2]; i != (struct IUnknown **)Ptr[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v12, *i, *v13);
        Ptr = this->Ptr;
        ++v13;
      }
    }
    v15 = v22;
    a3->value = (__int64)a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v12, a2, v15);
    AcquireSRWLockExclusive(this + 1);
    v16 = (volatile signed __int32 *)this->Ptr;
    v17 = 0LL;
    if ( &v20 != (Microsoft::WRL::Details::EventTargetArray **)this )
    {
      this->Ptr = 0LL;
      v17 = v16;
      v16 = 0LL;
    }
    this->Ptr = v12;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
    if ( this != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(this + 1);
    if ( this != (RTL_SRWLOCK *)-16LL )
      ReleaseSRWLockExclusive(this + 2);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
    v7 = 0;
  }
  else
  {
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v20);
    if ( this != (RTL_SRWLOCK *)-16LL )
      ReleaseSRWLockExclusive(this + 2);
  }
  if ( v7 < 0 )
    goto LABEL_27;
  v7 = 0;
LABEL_29:
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
