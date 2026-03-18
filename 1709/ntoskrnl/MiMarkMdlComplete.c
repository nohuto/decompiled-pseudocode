/*
 * XREFs of MiMarkMdlComplete @ 0x14021C168
 * Callers:
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 */

int __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v3; // rsi
  __int64 **VadEvent; // rax
  unsigned int v5; // ebp
  __int64 *i; // rdi
  __int64 v7; // rbx
  bool v8; // cc

  v2 = (_QWORD *)(a1 + 48);
  v3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  VadEvent = MiLocateVadEvent(a2, 8);
  v5 = 0;
  for ( i = VadEvent[1]; v5 < v3; LODWORD(VadEvent) = v5 )
  {
    v7 = 48LL * *v2 - 0x58000000000LL;
    LOBYTE(VadEvent) = MiLockPageInline(v7);
    *(_BYTE *)(v7 + 34) |= 0x10u;
    *(_BYTE *)(v7 + 34) &= ~0x20u;
    *(_QWORD *)v7 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)VadEvent);
    ++v5;
    ++v2;
  }
  i[11] = 0LL;
  v8 = *((_DWORD *)i + 44) <= 1;
  *((_DWORD *)i + 20) = -1073741670;
  if ( !v8 )
    LODWORD(VadEvent) = KeSetEvent((PRKEVENT)(i + 7), 0, 0);
  return (int)VadEvent;
}
