/*
 * XREFs of ??$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA?AV?$shared_ptr@USaDeviceReevaluationContext@@@0@XZ @ 0x1800986F8
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x18005AFA0 (-_Reset0@-$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base.c)
 */

_QWORD *__fastcall std::make_shared<SaDeviceReevaluationContext,>(_QWORD *a1)
{
  _DWORD *v2; // rax

  v2 = operator new(0x20uLL);
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<SaDeviceReevaluationContext>::`vftable';
    if ( v2 != (_DWORD *)-16LL )
    {
      *((_QWORD *)v2 + 3) = 0LL;
      *((_QWORD *)v2 + 2) = 0LL;
    }
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(a1, (__int64)(v2 + 4), (__int64)v2);
  return a1;
}
