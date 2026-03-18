/*
 * XREFs of ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x1C0107010
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0007C70 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

DISPLAY_SOURCE *__fastcall DISPLAY_SOURCE::DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  int v2; // r9d
  _DWORD *v3; // rax
  __int64 v4; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = -1;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *((_BYTE *)this + 668) = 0;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 174) = 0;
  *((_QWORD *)this + 88) = 0LL;
  *((_DWORD *)this + 180) = 0;
  *((_WORD *)this + 362) = 0;
  *((_DWORD *)this + 194) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 864, -1, 14);
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_BYTE *)this + 952) = 0;
  *((_DWORD *)this + 267) = v2;
  *((_QWORD *)this + 134) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  *((_DWORD *)this + 272) = 0;
  *((_BYTE *)this + 1092) = 0;
  *((_DWORD *)this + 276) = -1;
  *((_DWORD *)this + 277) = -1;
  *((_WORD *)this + 556) = 0;
  *((_BYTE *)this + 3696) = 0;
  *((_QWORD *)this + 467) = 0LL;
  *((_BYTE *)this + 3744) = 0;
  *((_DWORD *)this + 937) = -1;
  *((_DWORD *)this + 938) = -1;
  memset((char *)this + 628, 0, 0x28uLL);
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  memset((char *)this + 968, 0, 0x2CuLL);
  memset((char *)this + 1012, 0, 0x38uLL);
  *((_QWORD *)this + 137) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  memset((char *)this + 736, 0, 0x28uLL);
  memset((char *)this + 784, 0, 0x50uLL);
  memset((char *)this + 1120, 0, 0x690uLL);
  memset((char *)this + 2800, 0, 0x50uLL);
  *((_QWORD *)this + 360) = 0LL;
  *((_WORD *)this + 1444) = 0;
  memset((char *)this + 2896, 0, 0x320uLL);
  memset((char *)this + 3700, 0, 0x24uLL);
  v3 = (_DWORD *)((char *)this + 1124);
  v4 = 10LL;
  do
  {
    *(v3 - 1) = -1;
    *v3 = -1;
    v3 += 42;
    --v4;
  }
  while ( v4 );
  *((_DWORD *)this + 700) = -1;
  *((_DWORD *)this + 701) = -1;
  *((_DWORD *)this + 175) = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 120);
  KeInitializeEvent((PRKEVENT)this + 38, NotificationEvent, 0);
  return this;
}
