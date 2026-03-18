/*
 * XREFs of MiMarkMdlComplete @ 0x1402582B8
 * Callers:
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 */

int __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v3; // rsi
  __int64 **VadEvent; // rax
  unsigned int v5; // ebp
  __int64 *i; // rdi
  __int64 v7; // rbx
  char v8; // cl
  bool v9; // cc

  v2 = (_QWORD *)(a1 + 48);
  v3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  VadEvent = MiLocateVadEvent(a2, 8);
  v5 = 0;
  for ( i = VadEvent[1]; v5 < v3; LODWORD(VadEvent) = v5 )
  {
    v7 = 48LL * *v2 - 0x58000000000LL;
    LOBYTE(VadEvent) = MiLockPageInline(v7);
    v8 = *(_BYTE *)(v7 + 34) | 0x10;
    *(_BYTE *)(v7 + 34) = v8;
    *(_QWORD *)v7 = 0LL;
    *(_BYTE *)(v7 + 34) = v8 & 0xDF;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)VadEvent);
    ++v5;
    ++v2;
  }
  i[11] = 0LL;
  v9 = *((_DWORD *)i + 44) <= 1;
  *((_DWORD *)i + 20) = -1073741670;
  if ( !v9 )
    LODWORD(VadEvent) = KeSetEvent((PRKEVENT)(i + 7), 0, 0);
  return (int)VadEvent;
}
