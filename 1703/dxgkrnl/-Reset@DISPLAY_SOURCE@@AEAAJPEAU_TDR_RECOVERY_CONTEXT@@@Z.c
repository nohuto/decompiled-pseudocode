/*
 * XREFs of ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0172D30
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0172B78 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9148 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

__int64 __fastcall DISPLAY_SOURCE::Reset(DISPLAY_SOURCE *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx

  v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_QWORD *)this + 10) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  *((_DWORD *)this + 257) = -1;
  *((_DWORD *)this + 266) = -1;
  *((_DWORD *)this + 267) = -1;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_WORD *)this + 360) = 0;
  *(_WORD *)((char *)this + 723) = 1;
  *((_DWORD *)this + 259) = 0;
  *((_BYTE *)this + 1052) = 0;
  *((_BYTE *)this + 668) = 0;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  v7 = (void *)*((_QWORD *)this + 95);
  if ( v7 )
    memset(v7, 0, *((unsigned int *)this + 194));
  v8 = (void *)*((_QWORD *)this + 101);
  if ( v8 )
    memset(v8, 0, 4 * *(unsigned int *)(v3 + 1632) * (unsigned __int64)*(unsigned int *)(v3 + 1636));
  v9 = (void *)*((_QWORD *)this + 106);
  if ( v9 )
    memset(v9, 0, 4 * *(unsigned int *)(v3 + 1632) * (unsigned __int64)*(unsigned int *)(v3 + 1636));
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2288LL);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(v10 + 408) + 8LL) + 432LL))(
      *(_QWORD *)(v10 + 416),
      *((unsigned int *)this + 4),
      0LL,
      (char *)this + 972);
  DISPLAY_SOURCE::ClearAllDisplayState(this, v4, v5, v6);
  return 0LL;
}
