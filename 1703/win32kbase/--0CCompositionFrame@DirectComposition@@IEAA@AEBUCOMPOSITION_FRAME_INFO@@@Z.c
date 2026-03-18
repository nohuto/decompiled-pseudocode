/*
 * XREFs of ??0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x1C001357C
 * Callers:
 *     ?Create@CCompositionFrame@DirectComposition@@SAJAEBUCOMPOSITION_FRAME_INFO@@PEAPEAV12@@Z @ 0x1C0013520 (-Create@CCompositionFrame@DirectComposition@@SAJAEBUCOMPOSITION_FRAME_INFO@@PEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompositionFrame *__fastcall DirectComposition::CCompositionFrame::CCompositionFrame(
        DirectComposition::CCompositionFrame *this,
        const struct COMPOSITION_FRAME_INFO *a2)
{
  unsigned __int64 v2; // rax
  bool v3; // zf
  unsigned __int64 v4; // rax
  __int128 v5; // xmm0

  v2 = DirectComposition::CCompositionFrame::s_frameIdCounter;
  *(_DWORD *)this = 1;
  v3 = v2 == -1LL;
  v4 = v2 + 1;
  v5 = *(_OWORD *)a2;
  DirectComposition::CCompositionFrame::s_frameIdCounter = v4;
  *(_OWORD *)((char *)this + 24) = v5;
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 2);
  if ( v3 )
  {
    v4 = 1LL;
    DirectComposition::CCompositionFrame::s_frameIdCounter = 1LL;
  }
  *((_QWORD *)this + 9) = v4;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  return this;
}
