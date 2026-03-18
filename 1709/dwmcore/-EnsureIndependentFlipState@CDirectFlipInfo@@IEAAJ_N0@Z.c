/*
 * XREFs of ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180149268
 * Callers:
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x1801447A8 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180148C10 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180149170 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801428A8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsureIndependentFlipState(CDirectFlipInfo *this, char a2, char a3)
{
  unsigned int v3; // edi
  COverlayContext *v7; // rcx
  signed int v8; // eax
  _BYTE v10[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h]
  __int64 v12; // [rsp+48h] [rbp-B8h]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  _BYTE v14[32]; // [rsp+D8h] [rbp-28h] BYREF
  char v15; // [rsp+F8h] [rbp-8h]
  char v16; // [rsp+F9h] [rbp-7h]
  int v17; // [rsp+FCh] [rbp-4h]
  int v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+104h] [rbp+4h]

  v3 = 0;
  if ( *((_BYTE *)this + 77) )
  {
    memset_0(v10, 0, 0x98uLL);
    memset_0(v14, 0, 0x50uLL);
    v7 = (COverlayContext *)*((_QWORD *)this + 1);
    v12 = *((_QWORD *)this + 4);
    v11 = *((_QWORD *)this + 5);
    v13 = *((_QWORD *)this + 8);
    v15 = *((_BYTE *)this + 78);
    v16 = *((_BYTE *)this + 79);
    v17 = *((_DWORD *)this + 20);
    v18 = *((_DWORD *)this + 21);
    v19 = *((_DWORD *)this + 22);
    v14[10] = 1;
    v8 = COverlayContext::EnsureIndependentFlipState(v7, (struct COverlayContext::OverlayPlaneInfo *)v10, a2, a3);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x26Du);
    }
    else
    {
      *((_QWORD *)this + 8) = v13;
      *((_BYTE *)this + 78) = v15;
      *((_BYTE *)this + 79) = v16;
      *((_DWORD *)this + 20) = v17;
      *((_DWORD *)this + 21) = v18;
      *((_DWORD *)this + 22) = v19;
    }
  }
  return v3;
}
