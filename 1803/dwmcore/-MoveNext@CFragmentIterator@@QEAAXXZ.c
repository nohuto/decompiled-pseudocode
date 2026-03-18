/*
 * XREFs of ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800BD344
 * Callers:
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180070C84 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180070D68 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180070E4C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800711B0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800717A8 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x180071974 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFragmentIterator::MoveNext(CFragmentIterator *this)
{
  *((_QWORD *)this + 1) -= 16LL;
  if ( (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4 )
  {
    ++*(_DWORD *)(*((_QWORD *)this + 1) - 8LL);
    CFragmentIterator::FindFirst(this);
  }
}
