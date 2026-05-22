/*
 * XREFs of ?SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEAUIMessageSession@@@Z @ 0x180091ACC
 * Callers:
 *     ?EnableHeadEventHandler@SpatialInputControllerCollection@@AEAAJXZ @ 0x180091DAC (-EnableHeadEventHandler@SpatialInputControllerCollection@@AEAAJXZ.c)
 *     ?DisableHeadEventHandler@SpatialInputControllerCollection@@AEAAXXZ @ 0x180091E54 (-DisableHeadEventHandler@SpatialInputControllerCollection@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18006928C (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationToken@@@Z @ 0x180069880 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationTo.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z @ 0x180069918 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInputControllerHeadEventHandler::SetOwner(
        struct EventRegistrationToken *this,
        struct SpatialInputControllerCollection *a2,
        struct IMessageSession *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 value; // rcx
  MPCHeadUpdateListener *v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  MPCHeadUpdateListener *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)&this[4];
  EnterCriticalSection((LPCRITICAL_SECTION)&this[4]);
  if ( (struct IMessageSession *)this[9].value != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a3 + 8LL))(a3);
    value = this[9].value;
    this[9].value = (__int64)a3;
    if ( value )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)value + 16LL))(value);
  }
  this[3].value = (__int64)a2;
  if ( a2 )
  {
    if ( !this[2].value )
    {
      MPCHeadUpdateListener::GetInstance();
      v9 = MPCHeadUpdateListener::AddHeadEventOccurred(v8, (struct IHeadEventHandler *)this, this + 2);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 645LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v11,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_16;
      }
    }
  }
  else if ( this[2].value )
  {
    MPCHeadUpdateListener::GetInstance();
    v9 = MPCHeadUpdateListener::RemoveHeadEventOccurred(v12, this[2]);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 649LL;
      goto LABEL_13;
    }
    this[2].value = 0LL;
  }
  v10 = 0;
LABEL_16:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v10;
}
