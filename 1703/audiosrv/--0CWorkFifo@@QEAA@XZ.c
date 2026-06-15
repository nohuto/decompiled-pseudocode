/*
 * XREFs of ??0CWorkFifo@@QEAA@XZ @ 0x1800340D0
 * Callers:
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x180033DC0 (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180025A1C (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

// Hidden C++ exception states: #wind=30
CWorkFifo *__fastcall CWorkFifo::CWorkFifo(CWorkFifo *this)
{
  _OWORD **v2; // rdi

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = (_OWORD **)((char *)this + 96);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 12) = std::_Allocate(1uLL, 0x10uLL);
  if ( *v2 )
    **v2 = 0LL;
  *(_QWORD *)*v2 = v2;
  *((_BYTE *)this + 136) = 0;
  *((_BYTE *)this + 137) = 0;
  _Mtx_init_in_situ((CWorkFifo *)((char *)this + 144), 258);
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 6) = 3;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 1;
  *((_DWORD *)this + 22) = 72;
  return this;
}
