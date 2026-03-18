/*
 * XREFs of ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBC80
 * Callers:
 *     ?RECALTUNLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C002F370 (-RECALTUNLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C0035DB0 (GreGetBounds.c)
 *     EngLockSurface @ 0x1C0036A00 (EngLockSurface.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall RECALTUNLOCKSTACKBACKTRACE(unsigned int a1)
{
  struct GdiHandleManager *v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rbx

  v1 = gpentHmgrAltStacks;
  v2 = a1;
  if ( !*((_QWORD *)gpentHmgrAltStacks + a1) )
    *((_QWORD *)v1 + a1) = PALLOCMEM2(0x2008uLL, 1651729991LL, 1);
  v3 = *((_QWORD *)v1 + v2);
  if ( v3 )
  {
    v4 = (unsigned __int64)(*(_DWORD *)(v3 + 4) & 0xF) << 8;
    memset((void *)(v4 + v3 + 4104), 0, 0x100uLL);
    RtlWalkFrameChain((PVOID *)(v4 + *((_QWORD *)v1 + v2) + 4104LL), 0x20u, 0);
    ++*(_DWORD *)(*((_QWORD *)gpentHmgrAltStacks + v2) + 4LL);
  }
}
