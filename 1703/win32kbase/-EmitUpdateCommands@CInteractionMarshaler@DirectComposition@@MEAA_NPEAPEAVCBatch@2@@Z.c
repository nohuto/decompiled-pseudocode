/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F19C (-EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F230 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F410 (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000FBE8 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // edi
  char v5; // r14
  unsigned int v7; // ebp
  char *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  char *v11; // r8
  __int64 v12; // rcx
  char *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  char *v16; // rcx
  char *v17; // rcx
  __int64 v18; // rax
  void *v19; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( !DirectComposition::CInteractionMarshaler::EmitInputSink(this, a2) )
    return 0;
  v5 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    while ( *((_DWORD *)this + 52) )
    {
      v7 = *((_DWORD *)this + 52) - 1;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v19) )
        return 0;
      v8 = (char *)v19;
      *(_DWORD *)v19 = 16;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 1) = 222;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v8 + 3) = *(_DWORD *)(*((_QWORD *)this + 25) + 4LL * v7);
      if ( v7 < --*((_DWORD *)this + 52) )
      {
        do
        {
          v9 = v7++;
          *(_DWORD *)(*((_QWORD *)this + 25) + 4 * v9) = *(_DWORD *)(*((_QWORD *)this + 25) + 4LL * v7);
        }
        while ( v7 < *((_DWORD *)this + 52) );
      }
    }
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateFlags(this, a2) )
    return 0;
  while ( *((_DWORD *)this + 56) )
  {
    v10 = *((_DWORD *)this + 56) - 1;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v19) )
      return 0;
    v11 = (char *)v19;
    *(_DWORD *)v19 = 28;
    *(_QWORD *)(v11 + 4) = 0LL;
    *(_QWORD *)(v11 + 12) = 0LL;
    *(_QWORD *)(v11 + 20) = 0LL;
    *((_DWORD *)v11 + 1) = 221;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v11 + 3) = **(_DWORD **)(*((_QWORD *)this + 27) + 8LL * v10);
    *((_DWORD *)v11 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 8LL * v10) + 4LL);
    *(_QWORD *)(v11 + 20) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 8LL * v10) + 8LL);
    Win32FreePool(*(_QWORD *)(*((_QWORD *)this + 27) + 8LL * v10));
    if ( v10 < --*((_DWORD *)this + 56) )
    {
      do
      {
        v12 = v10++;
        *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v12) = *(_QWORD *)(*((_QWORD *)this + 27) + 8LL * v10);
      }
      while ( v10 < *((_DWORD *)this + 56) );
    }
  }
  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v19) )
      return 0;
    v13 = (char *)v19;
    *(_DWORD *)v19 = 16;
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 1) = 219;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
    v14 = *((_QWORD *)this + 29);
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 24);
    else
      v15 = 0;
    *((_DWORD *)v13 + 3) = v15;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateRails(this, a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 40),
          a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 112),
          a2) )
  {
    return 0;
  }
  if ( (*((_DWORD *)this + 4) & 0x1000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v19) )
      return 0;
    v16 = (char *)v19;
    *(_DWORD *)v19 = 16;
    *(_QWORD *)(v16 + 4) = 0LL;
    *((_DWORD *)v16 + 3) = 0;
    *((_DWORD *)v16 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v16 + 1) = 225;
    *((_DWORD *)v16 + 3) = *((unsigned __int8 *)this + 248) >> 7;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  if ( (*((_DWORD *)this + 4) & 0x2000) == 0 )
    return v5;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v19) )
    return 0;
  v17 = (char *)v19;
  *(_DWORD *)v19 = 16;
  *(_QWORD *)(v17 + 4) = 0LL;
  *((_DWORD *)v17 + 3) = 0;
  *((_DWORD *)v17 + 1) = 226;
  *((_DWORD *)v17 + 2) = *((_DWORD *)this + 6);
  v18 = *((_QWORD *)this + 30);
  if ( v18 )
    v4 = *(_DWORD *)(v18 + 24);
  *((_DWORD *)v17 + 3) = v4;
  *((_DWORD *)this + 4) &= ~0x2000u;
  return v5;
}
