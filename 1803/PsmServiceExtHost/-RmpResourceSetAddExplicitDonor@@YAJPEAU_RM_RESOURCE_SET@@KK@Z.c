/*
 * XREFs of ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x180052228
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005460C (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180054674 (-RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180054730 (-RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpResourceSetAddExplicitDonor(struct _RM_RESOURCE_SET *a1, unsigned int a2)
{
  __int64 v2; // rax
  int v4; // ebx
  struct _RM_RESOURCE_SET *ForegroundSet; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 6);
  P = 0LL;
  if ( (int)RmpActivityHostQueryByTokenPsmInfo(
              *(struct _RM_SERVICE_GLOBALS **)(*(_QWORD *)(v2 + 24) + 152LL),
              a2,
              (struct _RM_ACTIVITY_HOST **)&P) >= 0 )
  {
    ForegroundSet = RmpActivityHostGetForegroundSet((struct _RM_ACTIVITY_HOST *)P);
    if ( ForegroundSet || (ForegroundSet = RmpActivityHostGetSponsorSet((struct _RM_ACTIVITY_HOST *)P)) != 0LL )
    {
      v4 = RmpResourceSetAddRecipient(ForegroundSet, a1, 7u);
      if ( v4 >= 0 )
        v4 = 0;
    }
    else
    {
      v4 = -2147220215;
    }
  }
  else
  {
    v4 = 0;
  }
  if ( P )
    RmpObjectRelease((char *)P);
  return (unsigned int)v4;
}
