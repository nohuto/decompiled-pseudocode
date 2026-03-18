/*
 * XREFs of ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00EBBCC
 * Callers:
 *     INC_SHARE_REF_CNT @ 0x1C002F3B0 (INC_SHARE_REF_CNT.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003F540 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall RECALTLOCKSTACKBACKTRACE(unsigned int a1, struct _BASEOBJECT *a2)
{
  struct GdiHandleManager *v2; // rsi
  __int64 v4; // rdi
  void *v5; // rcx
  _DWORD *v6; // rax
  unsigned __int64 v7; // rbx

  v2 = gpentHmgrAltStacks;
  v4 = a1;
  if ( !*((_QWORD *)gpentHmgrAltStacks + a1) )
    *((_QWORD *)v2 + a1) = PALLOCMEM2(0x2008uLL, 1651729991LL, 1);
  v5 = (void *)*((_QWORD *)v2 + v4);
  if ( v5 )
  {
    if ( *((_DWORD *)a2 + 2) == 1 )
      memset(v5, 0, 0x2008uLL);
    v6 = (_DWORD *)*((_QWORD *)v2 + v4);
    v7 = (unsigned __int64)(*v6 & 0xF) << 8;
    memset((char *)v6 + v7 + 8, 0, 0x100uLL);
    RtlWalkFrameChain((PVOID *)(v7 + *((_QWORD *)v2 + v4) + 8LL), 0x20u, 0);
    ++**((_DWORD **)gpentHmgrAltStacks + v4);
  }
}
