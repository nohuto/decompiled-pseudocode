/*
 * XREFs of ?AddRef@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x180022E30
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x18001EF50 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::AddRef(HAM_ACTIVITY_RM_CONTEXT *this)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
  if ( (int)result <= 1 )
    __int2c();
  return result;
}
