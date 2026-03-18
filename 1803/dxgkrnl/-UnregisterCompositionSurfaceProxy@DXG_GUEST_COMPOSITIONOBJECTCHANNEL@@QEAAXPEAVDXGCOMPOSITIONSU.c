/*
 * XREFs of ?UnregisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAXPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01BF334
 * Callers:
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01E8938 (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::UnregisterCompositionSurfaceProxy(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  v3 = *(unsigned int *)a2;
  *(_DWORD *)a2 = 0;
  if ( (_DWORD)v3 )
  {
    if ( (struct DXGCOMPOSITIONSURFACEPROXY *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1)
                                                                                                  + 64LL))(
                                                *((_QWORD *)this + 1),
                                                v3,
                                                17LL) != a2 )
    {
      v5 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v5 + 24) = 683LL;
      WdLogEvent5_WdAssertion(v5);
    }
  }
}
