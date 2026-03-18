/*
 * XREFs of ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0027BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00282A8 (-EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028360 (-EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00283FC (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B550 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // ebp
  char v5; // r14
  __int64 v6; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  char *v10; // rcx
  unsigned int v11; // edx
  _DWORD *v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  void *v15; // [rsp+68h] [rbp+20h] BYREF

  if ( !DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2)
    || !DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(this, a2) )
  {
    return 0;
  }
  v4 = *((_DWORD *)this + 48);
  v5 = 1;
  v6 = *((_QWORD *)this + 23);
  while ( *((_DWORD *)this + 49) < v4 )
  {
    v8 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 15) + 40LL);
    v14 = v8;
    if ( v8 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v14) )
        break;
      v8 = v14;
    }
    v9 = v4 - *((_DWORD *)this + 49);
    if ( v9 >= (v8 - 16) >> 2 )
      LODWORD(v9) = (v8 - 16) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v9 + 16), &v15);
    v10 = (char *)v15;
    v11 = 0;
    *(_DWORD *)v15 = 4 * v9 + 16;
    v12 = v10 + 16;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 1) = 210;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v10 + 3) = v9; v11 < (unsigned int)v9; ++v12 )
    {
      v13 = v11 + *((_DWORD *)this + 49);
      ++v11;
      *v12 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v13) + 24LL);
    }
    *((_DWORD *)this + 49) += v9;
  }
  if ( *((_DWORD *)this + 49) != v4
    || !DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(this, a2)
    || !DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(this, a2) )
  {
    return 0;
  }
  return v5;
}
