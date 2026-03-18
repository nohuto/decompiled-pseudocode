/*
 * XREFs of ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0157384
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0157194 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0150E84 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

__int64 __fastcall DISPLAY_SOURCE::Reset(DISPLAY_SOURCE *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx

  v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_QWORD *)this + 10) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  *((_DWORD *)this + 267) = -1;
  *((_DWORD *)this + 276) = -1;
  *((_DWORD *)this + 277) = -1;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_WORD *)this + 360) = 0;
  *((_BYTE *)this + 725) = 0;
  *((_DWORD *)this + 269) = 0;
  *((_BYTE *)this + 1092) = 0;
  *((_BYTE *)this + 668) = 0;
  *((_QWORD *)this + 84) = 0LL;
  *((_BYTE *)this + 723) = 1;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  v4 = (void *)*((_QWORD *)this + 95);
  if ( v4 )
    memset(v4, 0, *((unsigned int *)this + 194));
  v5 = (void *)*((_QWORD *)this + 101);
  if ( v5 )
    memset(v5, 0, 4 * *(unsigned int *)(v3 + 1792) * (unsigned __int64)*(unsigned int *)(v3 + 1796));
  v6 = (void *)*((_QWORD *)this + 106);
  if ( v6 )
    memset(v6, 0, 4 * *(unsigned int *)(v3 + 1792) * (unsigned __int64)*(unsigned int *)(v3 + 1796));
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2464LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(v7 + 520) + 8LL) + 528LL))(
      *(_QWORD *)(v7 + 528),
      *((unsigned int *)this + 4),
      0LL,
      (char *)this + 1012);
  DISPLAY_SOURCE::ClearAllDisplayState(this);
  return 0LL;
}
