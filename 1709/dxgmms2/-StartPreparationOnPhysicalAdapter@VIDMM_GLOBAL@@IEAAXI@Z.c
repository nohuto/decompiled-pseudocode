/*
 * XREFs of ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C005BA28
 * Callers:
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C005B984 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 * Callees:
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 */

void __fastcall VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v5; // eax
  _QWORD *v6; // rax

  v4 = (unsigned int)a2;
  if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0p((__int64)this, &EventPagingStartPreparation, a3, *((_QWORD *)this + (unsigned int)a2 + 143));
  if ( *((_DWORD *)this + v4 + 414) != *((_DWORD *)this + v4 + 478)
    || *((_DWORD *)this + v4 + 542) != *((_DWORD *)this + v4 + 606) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v6[3] = 270LL;
    v6[4] = 33LL;
    v6[5] = this;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  v5 = *((_DWORD *)this + v4 + 414);
  *((_DWORD *)this + v4 + 958) = 0;
  *((_DWORD *)this + v4 + 1022) = v5;
  *((_DWORD *)this + v4 + 1086) = *((_DWORD *)this + v4 + 542);
}
