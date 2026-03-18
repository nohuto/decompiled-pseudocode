/*
 * XREFs of ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x1C0150670
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

DISPLAY_SOURCE *__fastcall DISPLAY_SOURCE::DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx

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
  *((_BYTE *)this + 726) = 0;
  *((_DWORD *)this + 194) = 0;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  *((_DWORD *)this + 222) = 0;
  *((_DWORD *)this + 223) = -1;
  *((_DWORD *)this + 224) = 12;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_BYTE *)this + 952) = 0;
  *((_DWORD *)this + 267) = -1;
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
  *((_DWORD *)this + 939) = 0;
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
  v2 = (_DWORD *)((char *)this + 1124);
  v3 = 10LL;
  do
  {
    *(v2 - 1) = -1;
    *v2 = -1;
    v2 += 42;
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 700) = -1;
  *((_DWORD *)this + 701) = -1;
  *((_DWORD *)this + 175) = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 120);
  KeInitializeEvent((PRKEVENT)this + 38, NotificationEvent, 0);
  return this;
}
