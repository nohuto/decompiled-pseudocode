/*
 * XREFs of ??0BLTENTRY@@QEAA@XZ @ 0x1C0012510
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

BLTENTRY *__fastcall BLTENTRY::BLTENTRY(BLTENTRY *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = -1;
  *((_DWORD *)this + 17) = 0;
  memset((char *)this + 72, 0, 0x40uLL);
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 18) = -1;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  memset((char *)this + 528, 0, 0x20uLL);
  return this;
}
