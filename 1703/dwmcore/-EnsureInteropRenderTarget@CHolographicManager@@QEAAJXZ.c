/*
 * XREFs of ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801A601C
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801A5954 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18006B4C8 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801A66E4 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureInteropRenderTarget(CHolographicManager *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  struct CRenderTarget *v4; // rsi
  int v5; // eax
  struct CRenderTarget *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0LL;
  if ( *((_DWORD *)this + 15) || *((_DWORD *)this + 16) )
  {
    if ( !*((_QWORD *)this + 3) )
    {
      v3 = CHolographicInteropTarget::Create(
             *((struct CComposition **)this + 2),
             (struct _LUID *)((char *)this + 60),
             &v7);
      v4 = v7;
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2A2u);
      }
      else
      {
        v5 = CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), v7);
        v1 = v5;
        if ( v5 >= 0 )
        {
          *((_QWORD *)this + 3) = v4;
          return v1;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2A4u);
      }
      if ( v4 )
        CMILCOMBase::InternalRelease(v4);
    }
  }
  else
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x29Du);
  }
  return v1;
}
