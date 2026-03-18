/*
 * XREFs of ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180078B0C
 * Callers:
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180078B84 (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x180078C70 (-Render@CVisualCapture@@UEAAJPEA_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ @ 0x1801832D0 (-ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualCapture::SendCaptureCompleted(CVisualCapture *this)
{
  __int64 v2; // r10
  __int64 v3; // rax
  unsigned int v4; // ecx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1288LL) + 56LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 68);
    else
      v4 = 0;
    v5[0] = v4;
    v5[1] = *((unsigned int *)this + 14);
    ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, _WORD, void *))CoreUICallSend)(
      v2,
      v5,
      2LL,
      10LL,
      0,
      &unk_1801F0519);
  }
  *((_BYTE *)this + 385) = 1;
}
