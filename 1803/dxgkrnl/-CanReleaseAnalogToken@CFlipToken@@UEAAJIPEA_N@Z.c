/*
 * XREFs of ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C004B700
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C000D554 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C0017B94 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0019EA0 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJIPEA_N@Z @ 0x1C0024FF0 (-CanReleaseToFrame@CFlipToken@@IEAAJIPEA_N@Z.c)
 */

__int64 __fastcall CFlipToken::CanReleaseAnalogToken(CompositionSurfaceObject **this, unsigned int a2, bool *a3)
{
  int CanReleaseToFrame; // edi
  int v7; // eax
  bool v9; // [rsp+48h] [rbp+20h] BYREF

  CanReleaseToFrame = CFlipToken::CanReleaseToFrame((CFlipToken *)this, a2, a3);
  if ( CanReleaseToFrame >= 0 && *a3 )
  {
    *((_DWORD *)this + 6) = 3;
    CFlipToken::TraceStateChanged((CFlipToken *)this);
    CanReleaseToFrame = CompositionSurfaceObject::NotifyTokenInFrame(this[4], (const struct CToken *)this, &v9);
    if ( CanReleaseToFrame >= 0 )
    {
      *((_BYTE *)this + 88) = v9;
      v7 = (*((__int64 (__fastcall **)(CompositionSurfaceObject **, _QWORD))*this + 16))(this, a2);
      if ( v7 )
        CompositionSurfaceObject::SetSyncRefreshCount(this[4], v7);
    }
  }
  else
  {
    ++*((_DWORD *)this + 7);
  }
  return (unsigned int)CanReleaseToFrame;
}
