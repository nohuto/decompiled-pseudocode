/*
 * XREFs of ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C004A258
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000FF30 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C004A988 (-MarkCompleted@FlipManagerTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall CTokenManager::CompleteFlipManagerToken(CTokenManager *this, void *a2)
{
  int v3; // ebx
  PVOID v4; // rdi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = DxgkCompositionObject::ResolveHandle(a2, 2u, 1, 5, &Object);
  if ( v3 >= 0 )
  {
    v4 = Object;
    v3 = FlipManagerTokenObject::MarkCompleted((FlipManagerTokenObject *)Object);
    ObfDereferenceObject(v4);
    ObCloseHandle(a2, 1);
  }
  return (unsigned int)v3;
}
