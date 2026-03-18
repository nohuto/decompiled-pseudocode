/*
 * XREFs of ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00202CC
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001FBB0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v5; // rcx
  __int64 v6; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000) == 0 && *((_QWORD *)this + 29) )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v7) )
    {
      v5 = (char *)v7;
      *(_DWORD *)v7 = 32;
      *(_QWORD *)(v5 + 4) = 0LL;
      *(_QWORD *)(v5 + 12) = 0LL;
      *(_QWORD *)(v5 + 20) = 0LL;
      *((_DWORD *)v5 + 7) = 0;
      *((_DWORD *)v5 + 1) = 240;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
      *(_QWORD *)(v5 + 12) = *((_QWORD *)this + 29);
      v6 = *((_QWORD *)this + 30);
      *(_QWORD *)(v5 + 20) = v6;
      LOBYTE(v6) = ~*((_BYTE *)this + 248);
      *((_DWORD *)v5 + 7) = ((unsigned int)v6 >> 1) & 1;
      *((_DWORD *)this + 4) |= 0x1000u;
      *((_BYTE *)this + 248) |= 2u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
