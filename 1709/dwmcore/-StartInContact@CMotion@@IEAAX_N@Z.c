/*
 * XREFs of ?StartInContact@CMotion@@IEAAX_N@Z @ 0x18018D1F8
 * Callers:
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x18018A050 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x18018A5B0 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180189154 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 */

void __fastcall CMotion::StartInContact(CMotion *this, char a2)
{
  int v3; // ecx
  const wchar_t *v4; // rax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  CMotion *v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  CMotion **v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  *((_BYTE *)this + 8) &= ~2u;
  *((_BYTE *)this + 8) |= 2 * a2;
  *((_DWORD *)this + 4) = 1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  if ( dword_18026D7B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
    {
      v3 = *((_DWORD *)this + 3);
      v11 = 0;
      v9 = &v7;
      v7 = this;
      v10 = 8;
      v4 = ScrollAxisToString(v3);
      TlgCreateWsz(&pDesc, v4);
      TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021493B, v5, v6, 4u, &pData);
    }
  }
}
