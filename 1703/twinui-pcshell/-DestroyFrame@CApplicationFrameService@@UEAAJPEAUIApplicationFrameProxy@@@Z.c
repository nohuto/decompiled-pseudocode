/*
 * XREFs of ?DestroyFrame@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18004C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::DestroyFrame(
        CApplicationFrameService *this,
        struct IApplicationFrameProxy *a2)
{
  int v4; // ebp
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v16; // [rsp+60h] [rbp+18h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = -2147023728;
  v5 = 0LL;
  v16 = 0LL;
  v6 = 0LL;
  do
  {
    if ( v6 >= *((_QWORD *)this + 12) )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(struct IApplicationFrameProxy *, _QWORD))(*(_QWORD *)a2 + 232LL))(
           a2,
           *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v6)) )
    {
      v4 = 0;
      v7 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v6);
      if ( v5 != v7 )
      {
        if ( v7 )
        {
          do
            v8 = *(_DWORD *)(v7 + 36);
          while ( v8 != 0x7FFFFFFF
               && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 36), v8 + 1, v8) );
          v5 = v16;
        }
        v9 = v5;
        v5 = v7;
        v16 = v7;
        if ( v9 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
      }
      if ( v6 < *((_QWORD *)this + 12) )
      {
        v10 = *((_QWORD *)this + 11);
        v11 = *(_QWORD *)(v10 + 8 * v6);
        if ( v11 )
        {
          *(_QWORD *)(v10 + 8 * v6) = 0LL;
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
        }
        v12 = *((_QWORD *)this + 12);
        if ( v6 != v12 - 1 )
          memmove(
            (void *)(*((_QWORD *)this + 11) + 8 * v6),
            (const void *)(*((_QWORD *)this + 11) + 8 * v6 + 8),
            8 * (v12 - v6) - 8);
        --*((_QWORD *)this + 12);
      }
    }
    ++v6;
  }
  while ( v4 < 0 );
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    v13 = *(_QWORD *)(v5 + 80);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = *(_QWORD *)(v5 + 80);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 32LL))(*((_QWORD *)this + 16), v14);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  return (unsigned int)v4;
}
