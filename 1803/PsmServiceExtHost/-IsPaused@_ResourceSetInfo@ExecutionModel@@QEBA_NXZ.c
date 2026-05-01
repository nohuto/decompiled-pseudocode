/*
 * XREFs of ?IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18001E5F8
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800214D0 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18004F56C (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::_ResourceSetInfo::IsPaused(ExecutionModel::_ResourceSetInfo *this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( (*((_BYTE *)this + 42) & 8) == 0 )
  {
    if ( *(_DWORD *)this > 0x27u )
      return 0;
    v1 = *(int *)this;
    v2 = 0x8800001000LL;
    if ( !_bittest64(&v2, v1) )
      return 0;
  }
  return result;
}
