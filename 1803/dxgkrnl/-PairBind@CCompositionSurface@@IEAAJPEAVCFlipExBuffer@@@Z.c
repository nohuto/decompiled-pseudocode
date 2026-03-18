/*
 * XREFs of ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C004C728
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0012064 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C00123A4 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C004CE24 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C004CEBC (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::PairBind(CCompositionSurface *this, struct CFlipExBuffer *a2)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v7; // [rsp+30h] [rbp-438h] BYREF
  _BYTE v8[1040]; // [rsp+40h] [rbp-428h] BYREF

  v7 = 0LL;
  memset(v8, 0, sizeof(v8));
  v4 = CFlipExBuffer::EnableCascadedSignaling(a2, (struct CSM_BUFFER_INFO *)v8);
  if ( v4 < 0
    || (LOBYTE(v5) = 1,
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64 *))(**((_QWORD **)this + 13) + 16LL))(
               *((_QWORD *)this + 13),
               v8,
               v5,
               &v7),
        v4 < 0) )
  {
    CFlipExBuffer::DisableCascadedSignaling(a2);
  }
  else
  {
    *((_QWORD *)a2 + 79) = v7;
  }
  return (unsigned int)v4;
}
