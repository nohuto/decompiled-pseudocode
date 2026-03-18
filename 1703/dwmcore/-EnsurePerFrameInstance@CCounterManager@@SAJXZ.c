/*
 * XREFs of ?EnsurePerFrameInstance@CCounterManager@@SAJXZ @ 0x1800C8BFC
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180064C48 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CCounterManager@@AEAAJXZ @ 0x1800C8D04 (-Init@CCounterManager@@AEAAJXZ.c)
 *     ??_GCCounterManager@@QEAAPEAXI@Z @ 0x1801444F8 (--_GCCounterManager@@QEAAPEAXI@Z.c)
 */

__int64 CCounterManager::EnsurePerFrameInstance(void)
{
  unsigned int v0; // ebx
  CCounterManager *v1; // rax
  CCounterManager *v2; // rbx
  int v3; // eax
  int v4; // edi
  unsigned int v6; // edx

  v0 = 0;
  if ( CCounterManager::s_pGlobalPerFrameCounterManager )
    return v0;
  v1 = (CCounterManager *)operator new(0x1C8uLL);
  v2 = v1;
  if ( v1 )
  {
    *((_QWORD *)v1 + 53) = 0LL;
    *((_QWORD *)v1 + 54) = 0LL;
    *((_DWORD *)v1 + 110) = 0;
    *((_DWORD *)v1 + 111) = 0;
    *((_DWORD *)v1 + 112) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  if ( !v2 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Bu);
    v0 = -2147024882;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xCu);
    return v0;
  }
  v3 = CCounterManager::Init(v2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2Du);
    CCounterManager::`scalar deleting destructor'(v2, v6);
  }
  else
  {
    CCounterManager::s_pGlobalPerFrameCounterManager = v2;
  }
  v0 = v4;
  if ( v4 < 0 )
    goto LABEL_11;
  return v0;
}
