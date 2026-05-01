/*
 * XREFs of ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800522B8
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostFindMixedHostForHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU1@@Z @ 0x180054550 (-RmpActivityHostFindMixedHostForHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU1@@Z.c)
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005460C (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpResourceSetAddForegroundDonor(struct _RM_RESOURCE_SET *a1)
{
  __int64 result; // rax
  struct _RM_RESOURCE_SET *ForegroundSet; // rax
  struct _RM_ACTIVITY_HOST *v4; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  if ( (int)RmpActivityHostFindMixedHostForHost(*(struct _RM_ACTIVITY_HOST **)(*((_QWORD *)a1 + 6) + 1440LL), &v4) < 0 )
  {
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D742, 0LL, 0LL, 2u, &pData);
    }
    return 2147747081LL;
  }
  ForegroundSet = RmpActivityHostGetForegroundSet(v4);
  if ( !ForegroundSet )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D88E, 0LL, 0LL, 2u, &pData);
    return 2147747081LL;
  }
  result = RmpResourceSetAddRecipient(ForegroundSet, a1, 7u);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
