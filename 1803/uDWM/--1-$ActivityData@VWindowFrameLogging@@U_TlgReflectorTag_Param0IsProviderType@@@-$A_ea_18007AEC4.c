/*
 * XREFs of ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007AEC4
 * Callers:
 *     ??1?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007AE90 (--1-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18007F528 (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param_ea_18007F528.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180037A44 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18003920C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18007AD88 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax

  wil::details::shared_buffer::reset((LPVOID *)(a1 + 224));
  if ( *(_BYTE *)(a1 + 64) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 56));
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v4 = wil::details::static_lazy<WindowFrameLogging>::get(
           v2,
           (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
    _TlgWriteActivityAutoStop<35184372088832,5>((const struct _TlgProvider_t *)v4[1], (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
}
