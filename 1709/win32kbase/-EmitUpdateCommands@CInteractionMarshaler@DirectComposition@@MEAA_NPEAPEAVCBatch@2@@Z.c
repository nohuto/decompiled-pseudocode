/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021EDC (-EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021F58 (-EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021FEC (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00221AC (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0022C00 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bp
  unsigned int v6; // esi
  char *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rdx
  char *v11; // r8
  __int64 v12; // rcx
  char *v13; // rcx
  __int64 v14; // rax
  char *v15; // rcx
  void *v16; // [rsp+50h] [rbp+18h] BYREF

  if ( !DirectComposition::CInteractionMarshaler::EmitInputSink(this, a2) )
    return 0;
  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    while ( *((_DWORD *)this + 60) )
    {
      v6 = *((_DWORD *)this + 60) - 1;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
        return 0;
      v7 = (char *)v16;
      *(_DWORD *)v16 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 180;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v7 + 3) = *(_DWORD *)(*((_QWORD *)this + 29) + 4LL * v6);
      if ( v6 < --*((_DWORD *)this + 60) )
      {
        do
        {
          v8 = v6++;
          *(_DWORD *)(*((_QWORD *)this + 29) + 4 * v8) = *(_DWORD *)(*((_QWORD *)this + 29) + 4LL * v6);
        }
        while ( v6 < *((_DWORD *)this + 60) );
      }
    }
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateFlags(this, a2) )
    return 0;
  while ( *((_DWORD *)this + 64) )
  {
    v9 = *((_DWORD *)this + 64) - 1;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v16) )
      return 0;
    v11 = (char *)v16;
    *(_DWORD *)v16 = 28;
    *(_QWORD *)(v11 + 4) = 0LL;
    *(_QWORD *)(v11 + 12) = 0LL;
    *(_QWORD *)(v11 + 20) = 0LL;
    *((_DWORD *)v11 + 1) = 179;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v11 + 3) = **(_DWORD **)(*((_QWORD *)this + 31) + 8LL * v9);
    *((_DWORD *)v11 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL * v9) + 4LL);
    *(_QWORD *)(v11 + 20) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL * v9) + 8LL);
    Win32FreePool(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL * v9), v10, v11);
    if ( v9 < --*((_DWORD *)this + 64) )
    {
      do
      {
        v12 = v9++;
        *(_QWORD *)(*((_QWORD *)this + 31) + 8 * v12) = *(_QWORD *)(*((_QWORD *)this + 31) + 8LL * v9);
      }
      while ( v9 < *((_DWORD *)this + 64) );
    }
  }
  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
      return 0;
    v13 = (char *)v16;
    *(_DWORD *)v16 = 16;
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 1) = 184;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
    v14 = *((_QWORD *)this + 33);
    if ( v14 )
      LODWORD(v14) = *(_DWORD *)(v14 + 24);
    *((_DWORD *)v13 + 3) = v14;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateRails(this, a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 40),
          a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 128),
          a2) )
  {
    return 0;
  }
  if ( (*((_DWORD *)this + 4) & 0x1000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
      return 0;
    v15 = (char *)v16;
    *(_DWORD *)v16 = 16;
    *(_QWORD *)(v15 + 4) = 0LL;
    *((_DWORD *)v15 + 3) = 0;
    *((_DWORD *)v15 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v15 + 1) = 181;
    *((_DWORD *)v15 + 3) = *((unsigned __int8 *)this + 280) >> 7;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitHoverPointerSource(this, a2) )
    return 0;
  return v4;
}
