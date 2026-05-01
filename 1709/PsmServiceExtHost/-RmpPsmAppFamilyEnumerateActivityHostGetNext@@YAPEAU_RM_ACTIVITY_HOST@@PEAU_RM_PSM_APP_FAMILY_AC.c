/*
 * XREFs of ?RmpPsmAppFamilyEnumerateActivityHostGetNext@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT@@@Z @ 0x18003CDB0
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B54C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 * Callees:
 *     <none>
 */

struct _RM_ACTIVITY_HOST *__fastcall RmpPsmAppFamilyEnumerateActivityHostGetNext(struct _RM_ACTIVITY_HOST **a1)
{
  struct _RM_ACTIVITY_HOST *result; // rax
  __int64 v3; // rcx

  result = *a1;
  if ( *a1 )
  {
    v3 = *((_QWORD *)result + 1);
    result = *(struct _RM_ACTIVITY_HOST **)result;
    *a1 = (struct _RM_ACTIVITY_HOST *)((v3 - 8) & -(__int64)(v3 != 0));
  }
  return result;
}
