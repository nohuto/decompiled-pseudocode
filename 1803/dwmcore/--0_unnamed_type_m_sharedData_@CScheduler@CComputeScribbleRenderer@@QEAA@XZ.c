/*
 * XREFs of ??0_unnamed_type_m_sharedData_@CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x18021D10C
 * Callers:
 *     ??0CScheduler@CComputeScribbleRenderer@@AEAA@PEAUID3D12CommandQueue@@@Z @ 0x18021D168 (--0CScheduler@CComputeScribbleRenderer@@AEAA@PEAUID3D12CommandQueue@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

CComputeScribbleRenderer::CScheduler::_unnamed_type_m_sharedData_ *__fastcall CComputeScribbleRenderer::CScheduler::_unnamed_type_m_sharedData_::_unnamed_type_m_sharedData_(
        CComputeScribbleRenderer::CScheduler::_unnamed_type_m_sharedData_ *this)
{
  _QWORD *v1; // rbx
  _OWORD *v3; // rax

  v1 = (_QWORD *)((char *)this + 24);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v3 = (_OWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x10uLL);
  *v1 = v3;
  *v3 = 0LL;
  *(_QWORD *)*v1 = v1;
  return this;
}
