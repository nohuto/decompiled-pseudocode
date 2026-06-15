/*
 * XREFs of ??0CWorkFifo@@QEAA@XZ @ 0x18005E930
 * Callers:
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x18005E5AC (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

// Hidden C++ exception states: #wind=1
CWorkFifo *__fastcall CWorkFifo::CWorkFifo(CWorkFifo *this)
{
  _QWORD *v2; // rbx
  _OWORD *v3; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = (_QWORD *)((char *)this + 96);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  v3 = (_OWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x10uLL);
  *v2 = v3;
  *v3 = 0LL;
  *(_QWORD *)*v2 = v2;
  *((_WORD *)this + 68) = 0;
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
