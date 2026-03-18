/*
 * XREFs of ?EmitUpdateCommands@CVisualCaptureMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0012110
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00196F8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CVisualCaptureMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualCaptureMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    || !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v12) )
  {
    return 0;
  }
  v5 = (char *)v12 + 4;
  *(_DWORD *)v12 = 36;
  memset(v5, 0, 0x20uLL);
  *v5 = 485;
  v5[1] = *((_DWORD *)this + 6);
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 24);
  else
    v7 = 0;
  v5[2] = v7;
  v8 = *((_QWORD *)this + 8);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 24);
  else
    v9 = 0;
  v5[3] = v9;
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
    v4 = *(_DWORD *)(v10 + 24);
  v5[4] = v4;
  v5[5] = *((_DWORD *)this + 20);
  v5[6] = *((_DWORD *)this + 21);
  v5[7] = *((_DWORD *)this + 22);
  return 1;
}
