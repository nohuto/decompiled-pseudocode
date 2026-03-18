/*
 * XREFs of ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800176F8
 * Callers:
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180016A94 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180016B34 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180016C54 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x180016EDC (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800172D0 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180017350 (-AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CFragmentIterator::MoveNext(CFragmentIterator *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)this != v1 )
    *((_QWORD *)this + 1) = v1 - 16;
  if ( (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4 )
  {
    ++*(_DWORD *)(*((_QWORD *)this + 1) - 8LL);
    CFragmentIterator::FindFirst(this);
  }
}
