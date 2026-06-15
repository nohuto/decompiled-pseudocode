/*
 * XREFs of ?ReacquireSaDeviceResource@CAudioResourceManager@@UEAAJKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18001FE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::ReacquireSaDeviceResource(__int64 a1)
{
  CConstraintModelResourceManager *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = *(CConstraintModelResourceManager **)(a1 + 40);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 72LL);
  if ( (char *)v2 == (char *)CConstraintModelResourceManager::ReacquireSaDeviceResource )
    return CConstraintModelResourceManager::ReacquireSaDeviceResource(v1);
  else
    return v2();
}
