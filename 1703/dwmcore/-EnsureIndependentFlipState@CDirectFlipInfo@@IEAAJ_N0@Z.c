/*
 * XREFs of ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180155050
 * Callers:
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180152000 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180154A50 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180154F60 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180150A14 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsureIndependentFlipState(CDirectFlipInfo *this, char a2, char a3)
{
  unsigned int v3; // edi
  COverlayContext *v7; // rcx
  int v8; // eax
  _BYTE v10[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h]
  __int64 v12; // [rsp+48h] [rbp-B8h]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  _BYTE v14[32]; // [rsp+D0h] [rbp-30h] BYREF
  char v15; // [rsp+F0h] [rbp-10h]
  char v16; // [rsp+F1h] [rbp-Fh]
  int v17; // [rsp+F4h] [rbp-Ch]
  int v18; // [rsp+F8h] [rbp-8h]
  int v19; // [rsp+FCh] [rbp-4h]

  v3 = 0;
  if ( *((_BYTE *)this + 85) )
  {
    memset_0(v10, 0, 0x90uLL);
    memset_0(v14, 0, 0x50uLL);
    v7 = (COverlayContext *)*((_QWORD *)this + 1);
    v12 = *((_QWORD *)this + 4);
    v11 = *((_QWORD *)this + 5);
    v13 = *((_QWORD *)this + 9);
    v15 = *((_BYTE *)this + 86);
    v16 = *((_BYTE *)this + 87);
    v17 = *((_DWORD *)this + 22);
    v18 = *((_DWORD *)this + 23);
    v19 = *((_DWORD *)this + 24);
    v14[10] = 1;
    v8 = COverlayContext::EnsureIndependentFlipState(v7, (struct COverlayContext::OverlayPlaneInfo *)v10, a2, a3);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x268u);
    }
    else
    {
      *((_QWORD *)this + 9) = v13;
      *((_BYTE *)this + 86) = v15;
      *((_BYTE *)this + 87) = v16;
      *((_DWORD *)this + 22) = v17;
      *((_DWORD *)this + 23) = v18;
      *((_DWORD *)this + 24) = v19;
    }
  }
  return v3;
}
