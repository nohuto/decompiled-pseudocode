/*
 * XREFs of ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x18008E8B8
 * Callers:
 *     ?s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x18008E860 (-s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x18008E8A0 (-s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z.c)
 * Callees:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18003B0A0 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(
        Windows::Internal::ComTaskPool::CThread *a1)
{
  volatile int *v2; // rdx
  __int64 v3; // rdi
  unsigned int (__fastcall *v4)(__int64, volatile int *); // rax

  Windows::Internal::ComTaskPool::CThread::_ThreadProc(a1);
  v3 = *((_QWORD *)a1 + 9);
  *((_QWORD *)a1 + 9) = 0LL;
  v4 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)a1 + 16LL);
  if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)a1,
      v2);
  else
    ((void (__fastcall *)(Windows::Internal::ComTaskPool::CThread *))v4)(a1);
  return v3;
}
