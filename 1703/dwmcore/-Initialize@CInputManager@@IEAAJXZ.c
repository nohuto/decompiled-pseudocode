/*
 * XREFs of ?Initialize@CInputManager@@IEAAJXZ @ 0x1800B5AB8
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CA7F4 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CMit@@AEAAJXZ @ 0x1800B5D5C (-Initialize@CMit@@AEAAJXZ.c)
 *     ?Reset@CMit@@QEAAJXZ @ 0x1800B5E3C (-Reset@CMit@@QEAAJXZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800B66E4 (--0CMmcssTask@@QEAA@XZ.c)
 *     IsCreateSystemInputHostPresent @ 0x1800D4454 (IsCreateSystemInputHostPresent.c)
 *     ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180191D94 (-Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Start@CDWMInputThread@@QEAAJXZ @ 0x180192088 (-Start@CDWMInputThread@@QEAAJXZ.c)
 *     ?Start@CISMInputThread@@QEAAJXZ @ 0x1801922B8 (-Start@CISMInputThread@@QEAAJXZ.c)
 *     ?Stop@CISMInputThread@@QEAAXXZ @ 0x180192334 (-Stop@CISMInputThread@@QEAAXXZ.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  int v7; // ebp
  CMit *v8; // rcx
  int v9; // eax
  int v11; // r9d
  _QWORD *v12; // rax
  CDWMInputThread **v13; // r14
  int v14; // eax
  CISMInputThread *v15; // rsi
  int v16; // eax
  CDWMInputThread *v17; // rsi
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-28h]

  v2 = 0;
  if ( (dword_18023E9D0 & 4) != 0 )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = operator new(0x80uLL);
    v5 = v4;
    if ( v4 )
    {
      *v4 = v3;
      CMmcssTask::CMmcssTask((CMmcssTask *)(v4 + 4));
      v5[1] = 0LL;
      v5[2] = -1LL;
      v5[14] = -1LL;
      *((_WORD *)v5 + 12) = 0;
      v5[15] = 0LL;
      CMit::s_pMessageSession = 0LL;
      CMit::s_pMessageCallSendHost = 0LL;
      CMit::s_pSystemInputHost = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      v6 = CMit::Initialize((CMit *)v5);
      v7 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x51u);
      else
        *((_QWORD *)this + 29) = v5;
      v2 = v7;
      if ( v7 >= 0 )
      {
        v8 = (CMit *)*((_QWORD *)this + 29);
        if ( !v8 )
          return v2;
        v9 = CMit::Reset(v8);
        v2 = v9;
        if ( v9 >= 0 )
          return v2;
        v19 = 372;
        v11 = v9;
LABEL_45:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v19);
        return v2;
      }
    }
    else
    {
      v2 = -2147024882;
      v7 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Fu);
    }
    v19 = 368;
    v11 = v7;
    goto LABEL_45;
  }
  if ( !*((_QWORD *)this + 28) && (unsigned __int8)IsCreateSystemInputHostPresent() )
  {
    v12 = operator new(0x30uLL);
    if ( v12 )
    {
      v12[5] = 0LL;
      *v12 = 0LL;
      v12[2] = 0LL;
      v12[3] = 0LL;
      v12[4] = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    if ( !v12 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x29u);
      v19 = 383;
LABEL_44:
      v11 = v2;
      goto LABEL_45;
    }
    *((_QWORD *)this + 28) = v12;
  }
  v13 = (CDWMInputThread **)((char *)this + 216);
  if ( !*((_QWORD *)this + 27)
    && (!(unsigned __int8)IsCreateSystemInputHostPresent() || !(unsigned int)IsSystemInputHostStandalone()) )
  {
    v14 = CDWMInputThread::Create(*((struct CComposition **)this + 2), (struct CDWMInputThread **)this + 27);
    v2 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x188u);
      return v2;
    }
  }
  v15 = (CISMInputThread *)*((_QWORD *)this + 28);
  if ( v15 )
  {
    if ( *(_QWORD *)v15 )
      CISMInputThread::Stop(v15);
    v16 = CISMInputThread::Start(v15);
    v2 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x5Fu);
    if ( (v2 & 0x80000000) != 0 )
    {
      v19 = 397;
      goto LABEL_44;
    }
  }
  v17 = *v13;
  if ( *v13 )
  {
    v2 = 0;
    if ( *((_QWORD *)v17 + 1) || (v18 = CDWMInputThread::Start(*v13), v2 = v18, v18 >= 0) )
    {
      if ( !*((_BYTE *)v17 + 24) )
        SetEvent(*((HANDLE *)v17 + 2));
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x9Bu);
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      v19 = 402;
      goto LABEL_44;
    }
  }
  return v2;
}
