/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004600
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003DA4 (-EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003E20 (-EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003EB4 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004068 (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00050D8 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  int v5; // eax
  char v6; // si
  int v8; // ecx
  __int64 v9; // rsi
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  char *v13; // r8
  __int64 v14; // rcx
  char *v15; // rcx
  __int64 v16; // rax
  char *v17; // rcx
  void *v18; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CInteractionMarshaler::EmitInputSink(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 0x80u) != 0 )
  {
    v8 = *((_DWORD *)this + 68);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = (unsigned int)(v8 - 1);
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v18) )
          return 0;
        v10 = (char *)v18;
        *(_DWORD *)v18 = 16;
        *(_QWORD *)(v10 + 4) = 0LL;
        *((_DWORD *)v10 + 3) = 0;
        *((_DWORD *)v10 + 1) = 207;
        *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
        *((_DWORD *)v10 + 3) = *(_DWORD *)(*((_QWORD *)this + 33) + 4 * v9);
        if ( (unsigned int)v9 < --*((_DWORD *)this + 68) )
        {
          do
          {
            v11 = (unsigned int)v9;
            LODWORD(v9) = v9 + 1;
            *(_DWORD *)(*((_QWORD *)this + 33) + 4 * v11) = *(_DWORD *)(*((_QWORD *)this + 33) + 4LL * (unsigned int)v9);
          }
          while ( (unsigned int)v9 < *((_DWORD *)this + 68) );
        }
        v8 = *((_DWORD *)this + 68);
        if ( !v8 )
        {
          v4 = *((_DWORD *)this + 4);
          break;
        }
      }
    }
    *((_DWORD *)this + 4) = v4 & 0xFFFFFF7F;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateFlags(this, a2) )
    return 0;
  while ( 1 )
  {
    v5 = *((_DWORD *)this + 72);
    if ( !v5 )
      break;
    v12 = (unsigned int)(v5 - 1);
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v18) )
      return 0;
    v13 = (char *)v18;
    *(_DWORD *)v18 = 28;
    *(_QWORD *)(v13 + 4) = 0LL;
    *(_QWORD *)(v13 + 12) = 0LL;
    *(_QWORD *)(v13 + 20) = 0LL;
    *((_DWORD *)v13 + 1) = 206;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v13 + 3) = **(_DWORD **)(*((_QWORD *)this + 35) + 8 * v12);
    *((_DWORD *)v13 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 35) + 8 * v12) + 4LL);
    *(_QWORD *)(v13 + 20) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 35) + 8 * v12) + 8LL);
    Win32FreePool(*(_QWORD *)(*((_QWORD *)this + 35) + 8 * v12));
    if ( (unsigned int)v12 < --*((_DWORD *)this + 72) )
    {
      do
      {
        v14 = (unsigned int)v12;
        LODWORD(v12) = v12 + 1;
        *(_QWORD *)(*((_QWORD *)this + 35) + 8 * v14) = *(_QWORD *)(*((_QWORD *)this + 35) + 8LL * (unsigned int)v12);
      }
      while ( (unsigned int)v12 < *((_DWORD *)this + 72) );
    }
  }
  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v18) )
      return 0;
    v15 = (char *)v18;
    *(_DWORD *)v18 = 16;
    *(_QWORD *)(v15 + 4) = 0LL;
    *((_DWORD *)v15 + 3) = 0;
    *((_DWORD *)v15 + 1) = 211;
    *((_DWORD *)v15 + 2) = *((_DWORD *)this + 6);
    v16 = *((_QWORD *)this + 37);
    if ( v16 )
      LODWORD(v16) = *(_DWORD *)(v16 + 24);
    *((_DWORD *)v15 + 3) = v16;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateRails(this, a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 40),
          a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 144),
          a2) )
  {
    return 0;
  }
  v6 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v18) )
      return 0;
    v17 = (char *)v18;
    *(_DWORD *)v18 = 16;
    *(_QWORD *)(v17 + 4) = 0LL;
    *((_DWORD *)v17 + 3) = 0;
    *((_DWORD *)v17 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v17 + 1) = 208;
    *((_DWORD *)v17 + 3) = (*((unsigned __int8 *)this + 316) >> 6) & 1;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitHoverPointerSource(this, a2) )
    return 0;
  return v6;
}
