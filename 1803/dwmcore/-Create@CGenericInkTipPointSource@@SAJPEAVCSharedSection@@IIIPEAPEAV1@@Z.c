/*
 * XREFs of ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z @ 0x18018ED70
 * Callers:
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x18018F9E8 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C3D08 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18018F548 (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Create(
        struct CSharedSection *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct CGenericInkTipPointSource **a5)
{
  void *v9; // rax
  void *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  CMILRefCountBase *v14; // [rsp+30h] [rbp-18h] BYREF

  v9 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x20uLL);
    *(_QWORD *)v10 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v10 = &CGenericInkTipPointSource::`vftable';
    *((_DWORD *)v10 + 2) = 0;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v14 = (CMILRefCountBase *)v10;
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v11 = CGenericInkTipPointSource::Initialize((CGenericInkTipPointSource *)v10, a1, a2, a3, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x12u);
    }
    else
    {
      v14 = 0LL;
      *a5 = (struct CGenericInkTipPointSource *)v10;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x11u);
  }
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v14);
  return v12;
}
