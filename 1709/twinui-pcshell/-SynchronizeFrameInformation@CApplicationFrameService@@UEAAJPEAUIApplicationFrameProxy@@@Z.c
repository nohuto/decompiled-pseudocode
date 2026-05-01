/*
 * XREFs of ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18004E650
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18004F330 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  __int64 v8; // rax
  unsigned __int64 i; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct IApplicationFrame *v13; // rdi
  __int64 v15; // [rsp+58h] [rbp+10h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0LL;
  v15 = 0LL;
  v5 = -2147023728;
  v6 = 0LL;
  do
  {
    if ( v6 >= *((_QWORD *)this + 14) )
      break;
    if ( (unsigned int)SHIsSameObject(
                         *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 13) + 8 * v6),
                         (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
    {
      v5 = 0;
      v7 = *((_QWORD *)this + 13);
      v8 = *(_QWORD *)(v7 + 8 * v6);
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 52));
      v4 = *(_QWORD *)(v7 + 8 * v6);
      v15 = v4;
    }
    else
    {
      v5 = -2147023728;
    }
    ++v6;
  }
  while ( v5 < 0 );
  for ( i = 0LL; v5 < 0 && i < *((_QWORD *)this + 10); ++i )
  {
    if ( (unsigned int)SHIsSameObject(
                         *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 9) + 8 * i),
                         (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
    {
      v5 = 0;
      v10 = *((_QWORD *)this + 9);
      v11 = *(_QWORD *)(v10 + 8 * i);
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 52));
      v4 = *(_QWORD *)(v10 + 8 * i);
      v15 = v4;
    }
    else
    {
      v5 = -2147023728;
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 >= 0 )
  {
    v12 = *(_QWORD *)(v4 + 96);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = *(struct IApplicationFrame **)(v4 + 96);
    v5 = CApplicationFrameService::OnChromeOffsetsChanged((CApplicationFrameService *)((char *)this + 8), v13);
    if ( v13 )
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 52), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 256LL))(v15, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v5;
}
