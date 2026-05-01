/*
 * XREFs of ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18004C150
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18004CD80 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::SynchronizeFrameInformation(
        CApplicationFrameService *this,
        struct IApplicationFrameProxy *a2)
{
  __int64 v4; // rbx
  int v5; // esi
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  bool i; // zf
  signed __int32 v10; // eax
  unsigned __int64 j; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  bool k; // zf
  signed __int32 v15; // eax
  __int64 v16; // rcx
  struct IApplicationFrame *v17; // rdi

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0LL;
  v5 = -2147023728;
  v6 = 0LL;
  do
  {
    if ( v6 >= *((_QWORD *)this + 12) )
      break;
    if ( (unsigned int)SHIsSameObject(
                         *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 11) + 8 * v6),
                         (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
    {
      v5 = 0;
      v7 = *((_QWORD *)this + 11);
      v8 = *(_QWORD *)(v7 + 8 * v6);
      for ( i = v8 == 0; !i; i = v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 36), v10 + 1, v10) )
      {
        v10 = *(_DWORD *)(v8 + 36);
        if ( v10 == 0x7FFFFFFF )
          break;
      }
      v4 = *(_QWORD *)(v7 + 8 * v6);
    }
    else
    {
      v5 = -2147023728;
    }
    ++v6;
  }
  while ( v5 < 0 );
  for ( j = 0LL; v5 < 0 && j < *((_QWORD *)this + 8); ++j )
  {
    if ( (unsigned int)SHIsSameObject(
                         *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 7) + 8 * j),
                         (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
    {
      v5 = 0;
      v12 = *((_QWORD *)this + 7);
      v13 = *(_QWORD *)(v12 + 8 * j);
      for ( k = v13 == 0; !k; k = v15 == _InterlockedCompareExchange(
                                           (volatile signed __int32 *)(v13 + 36),
                                           v15 + 1,
                                           v15) )
      {
        v15 = *(_DWORD *)(v13 + 36);
        if ( v15 == 0x7FFFFFFF )
          break;
      }
      v4 = *(_QWORD *)(v12 + 8 * j);
    }
    else
    {
      v5 = -2147023728;
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 >= 0 )
  {
    v16 = *(_QWORD *)(v4 + 80);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v17 = *(struct IApplicationFrame **)(v4 + 80);
    v5 = CApplicationFrameService::OnChromeOffsetsChanged((CApplicationFrameService *)((char *)this + 8), v17);
    if ( v17 )
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  return (unsigned int)v5;
}
