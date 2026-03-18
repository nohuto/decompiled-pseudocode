/*
 * XREFs of ?SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z @ 0x1801A0760
 * Callers:
 *     ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x1801A00C0 (-CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::SetStereoContext(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  if ( a2 < 0 )
    goto LABEL_7;
  if ( a2 <= 1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    goto LABEL_6;
  }
  if ( a2 != 2 )
  {
LABEL_7:
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x14Du);
    return v2;
  }
  v3 = *(_QWORD *)(a1 + 24);
LABEL_6:
  *(_QWORD *)(a1 - 200) = v3;
  *(_DWORD *)(a1 + 8) = a2;
  return v2;
}
