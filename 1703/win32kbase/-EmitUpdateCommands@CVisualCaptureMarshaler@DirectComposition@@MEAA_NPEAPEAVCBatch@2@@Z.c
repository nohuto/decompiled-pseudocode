/*
 * XREFs of ?EmitUpdateCommands@CVisualCaptureMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00036A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E3D0 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CVisualCaptureMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualCaptureMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // ebx
  char *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    || !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v12) )
  {
    return 0;
  }
  v5 = (char *)v12;
  *(_DWORD *)v12 = 32;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 1) = 370;
  *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 24);
  else
    v7 = 0;
  *((_DWORD *)v5 + 3) = v7;
  v8 = *((_QWORD *)this + 8);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 24);
  else
    v9 = 0;
  *((_DWORD *)v5 + 4) = v9;
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
    v4 = *(_DWORD *)(v10 + 24);
  *((_DWORD *)v5 + 5) = v4;
  *((_DWORD *)v5 + 6) = *((_DWORD *)this + 20);
  *((_DWORD *)v5 + 7) = *((_DWORD *)this + 21);
  return 1;
}
