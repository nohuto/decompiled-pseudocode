/*
 * XREFs of ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x1C0118070
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
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
  *((_DWORD *)this + 194) = 0;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_BYTE *)this + 912) = 0;
  *((_DWORD *)this + 257) = -1;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_DWORD *)this + 262) = 0;
  *((_BYTE *)this + 1052) = 0;
  *((_DWORD *)this + 266) = -1;
  *((_DWORD *)this + 267) = -1;
  *((_WORD *)this + 536) = 0;
  *((_BYTE *)this + 3152) = 0;
  *((_QWORD *)this + 399) = 0LL;
  *((_BYTE *)this + 3200) = 0;
  memset((char *)this + 628, 0, 0x28uLL);
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  memset((char *)this + 928, 0, 0x2CuLL);
  memset((char *)this + 972, 0, 0x38uLL);
  *((_QWORD *)this + 132) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  memset((char *)this + 736, 0, 0x28uLL);
  memset((char *)this + 784, 0, 0x50uLL);
  memset((char *)this + 1080, 0, 0x540uLL);
  memset((char *)this + 2424, 0, 0x50uLL);
  memset((char *)this + 2504, 0, 0x288uLL);
  memset((char *)this + 3156, 0, 0x24uLL);
  v2 = (_DWORD *)((char *)this + 1084);
  v3 = 8LL;
  do
  {
    *(v2 - 1) = -1;
    *v2 = -1;
    v2 += 42;
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 606) = -1;
  *((_DWORD *)this + 607) = -1;
  *((_DWORD *)this + 175) = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 115);
  KeInitializeEvent((PRKEVENT)((char *)this + 872), NotificationEvent, 0);
  return this;
}
