/*
 * XREFs of ?RmpActivityHostFindMixedHostForHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU1@@Z @ 0x180054550
 * Callers:
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800522B8 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000936C (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000CF70 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostFindMixedHostForHost(struct _RM_ACTIVITY_HOST *a1, struct _RM_ACTIVITY_HOST **a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rdi
  const wchar_t *v3; // rbp
  unsigned int v5; // ebx
  struct _RM_PSM_APP_FAMILY *v6; // rax
  _QWORD *i; // rdi
  __int64 v8; // rsi
  _BYTE v10[544]; // [rsp+20h] [rbp-248h] BYREF

  v2 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)a1 + 6);
  v3 = (const wchar_t *)((char *)a1 + 88);
  v5 = 0;
  if ( (int)RmpPsmAppFamilyIdFromPsmAppInstanceId(
              (struct _RM_ACTIVITY_HOST *)((char *)a1 + 88),
              (struct _RM_PSM_APP_FAMILY_ID *)v10) >= 0 )
  {
    v6 = RmpPsmAppFamilyTableFind(v2, (struct _RM_PSM_APP_FAMILY_ID *)v10);
    if ( v6 )
    {
      for ( i = (_QWORD *)((char *)v6 + 560); i; i = (_QWORD *)*i )
      {
        v8 = *(i - 1);
        if ( *(_DWORD *)(v8 + 624) == 2 && !_wcsicmp((const wchar_t *)(v8 + 88), v3) )
        {
          *a2 = (struct _RM_ACTIVITY_HOST *)v8;
          return v5;
        }
      }
    }
  }
  return (unsigned int)-1073741275;
}
