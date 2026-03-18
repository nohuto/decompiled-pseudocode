/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x180055064
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x18005491C (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30 (-AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180073A20 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800B0910 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  unsigned int *v4; // r8
  int v5; // eax
  void *v6; // rdi
  int v7; // eax
  _BYTE v9[16]; // [rsp+30h] [rbp-40h] BYREF
  HGDIOBJ *p_ho; // [rsp+40h] [rbp-30h]
  int v11; // [rsp+90h] [rbp+20h] BYREF
  HGDIOBJ ho; // [rsp+98h] [rbp+28h] BYREF
  void *lpMem; // [rsp+A0h] [rbp+30h] BYREF

  v1 = 0;
  ho = 0LL;
  lpMem = 0LL;
  memset_0(v9, 0, 0x38uLL);
  v3 = *((_QWORD *)this + 14);
  p_ho = &ho;
  v11 = 56;
  if ( (int)CRedirectedGDISurface::GetInformation(v3, 0LL, &v11, v9) >= 0 )
  {
    if ( !ho )
      return v1;
    v5 = HrgnToRgnData((HRGN)ho, (struct _RGNDATA **)&lpMem, v4);
    v6 = lpMem;
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x34Fu);
    }
    else
    {
      v7 = CGdiSpriteBitmap::AddDirtyRects(this, (const struct tagRECT *)lpMem + 2, *((_DWORD *)lpMem + 2), 0LL);
      v1 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x355u);
    }
    if ( v6 )
      WPF::ProcessHeapImpl::Free(v6);
  }
  if ( ho )
    DeleteObject(ho);
  return v1;
}
