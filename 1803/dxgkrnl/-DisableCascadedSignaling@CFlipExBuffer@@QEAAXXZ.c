/*
 * XREFs of ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C004CE24
 * Callers:
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C00123A4 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C004C728 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C004CEBC (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z @ 0x1C004CDD8 (--$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z.c)
 */

void __fastcall CFlipExBuffer::DisableCascadedSignaling(CFlipExBuffer *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx

  *((_QWORD *)this + 80) = 0LL;
  v1 = (__int64 *)((char *)this + 616);
  *((_BYTE *)this + 576) = 0;
  v3 = *((_QWORD *)this + 77);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v3 + 40LL))(
      v3,
      *((_QWORD *)this + 73),
      *((unsigned int *)this + 148),
      *((_QWORD *)this + 75),
      *((_DWORD *)this + 152),
      *((_DWORD *)this + 149));
    *((_QWORD *)this + 73) = 0LL;
    *((_DWORD *)this + 148) = 0;
    *((_QWORD *)this + 75) = 0LL;
    *((_DWORD *)this + 149) = 0;
    ReleaseInterface<IAdapter>(v1);
  }
}
