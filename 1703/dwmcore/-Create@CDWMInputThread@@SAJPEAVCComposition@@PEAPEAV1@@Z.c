/*
 * XREFs of ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180191D94
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800B5AB8 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800B66E4 (--0CMmcssTask@@QEAA@XZ.c)
 *     ?Initialize@CDWMInputThread@@AEAAJXZ @ 0x180191E34 (-Initialize@CDWMInputThread@@AEAAJXZ.c)
 */

__int64 __fastcall CDWMInputThread::Create(struct CComposition *a1, struct CDWMInputThread **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax

  v4 = operator new(0x78uLL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = a1;
    CMmcssTask::CMmcssTask((CMmcssTask *)(v4 + 4));
    v5[1] = 0LL;
    *((_BYTE *)v5 + 24) = 0;
    v5[2] = -1LL;
    v5[14] = -1LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = CDWMInputThread::Initialize((CDWMInputThread *)v5);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x38u);
    else
      *a2 = (struct CDWMInputThread *)v5;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x36u);
  }
  return v6;
}
