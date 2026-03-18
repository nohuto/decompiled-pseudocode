/*
 * XREFs of ?RegisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01BE608
 * Callers:
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01E79E4 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::RegisterCompositionSurfaceProxy(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 56LL))(
         *((_QWORD *)this + 1),
         0LL,
         17LL);
  if ( v2 )
  {
    MEMORY[0] = v2;
    return 0;
  }
  else
  {
    v6 = -1073741801;
    v7 = WdLogNewEntry5_WdWarning(v4, v3, v5);
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v7);
  }
  return v6;
}
