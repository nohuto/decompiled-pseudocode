/*
 * XREFs of ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180070114
 * Callers:
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x180070404 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x180070520 (-AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800606E4 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationToken@@@Z @ 0x180060CC4 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationTo.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z @ 0x180060E78 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollectionHeadEventHandler::SetOwner(
        SpatialRimDeviceCollectionHeadEventHandler *this,
        struct SpatialRimDeviceCollection *a2,
        struct IMessageSession *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  struct IMessageSession *v10; // rcx
  struct EventRegistrationToken *v11; // rdi
  RTL_SRWLOCK *v12; // rax
  int v13; // eax
  RTL_SRWLOCK *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 && *((_QWORD *)this + 3) )
  {
    v7 = -2147418113;
    v8 = 2147549183LL;
    v9 = 61LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)v8);
    goto LABEL_20;
  }
  v10 = (struct IMessageSession *)*((_QWORD *)this + 9);
  if ( v10 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a3 + 8LL))(a3);
      v10 = (struct IMessageSession *)*((_QWORD *)this + 9);
    }
    *((_QWORD *)this + 9) = a3;
    if ( v10 )
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_QWORD *)this + 3) = a2;
  v11 = (struct EventRegistrationToken *)((char *)this + 16);
  if ( a2 )
  {
    if ( !v11->value )
    {
      MPCHeadUpdateListener::GetInstance();
      v13 = MPCHeadUpdateListener::AddHeadEventOccurred(
              v12,
              (struct IUnknown *)this,
              (struct EventRegistrationToken *)this + 2);
      v7 = v13;
      if ( v13 < 0 )
      {
        v9 = 66LL;
LABEL_16:
        v8 = (unsigned int)v13;
        goto LABEL_17;
      }
    }
  }
  else if ( v11->value )
  {
    MPCHeadUpdateListener::GetInstance();
    v13 = MPCHeadUpdateListener::RemoveHeadEventOccurred(v14, (struct EventRegistrationToken)v11->value);
    v7 = v13;
    if ( v13 < 0 )
    {
      v9 = 70LL;
      goto LABEL_16;
    }
    v11->value = 0LL;
  }
  v7 = 0;
LABEL_20:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v7;
}
