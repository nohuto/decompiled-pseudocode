/*
 * XREFs of ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z @ 0x18000DF44
 * Callers:
 *     ?Release@ResourceSetClientProxy@@UEAAKXZ @ 0x18000DC60 (-Release@ResourceSetClientProxy@@UEAAKXZ.c)
 *     ?ReleaseResourcesImpl@ResourceSetClientProxy@@IEAAJK@Z @ 0x18000DE18 (-ReleaseResourcesImpl@ResourceSetClientProxy@@IEAAJK@Z.c)
 * Callees:
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18000C614 (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@.c)
 *     ?erase@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@2@0@Z @ 0x18000E528 (-erase@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to@_.c)
 */

__int64 __fastcall ResourceManagerClientProxy::RemoveProxyResourceSet(ResourceManagerClientProxy *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v4; // esi
  char *v5; // rdi
  __int64 v6; // rdx
  char *v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v9 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 22008);
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 22008));
  v8 = 0LL;
  v5 = (char *)this + 22048;
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
    (__int64)v5,
    v6,
    &v9,
    &v8,
    &v11,
    &v10);
  if ( v8 == v5 )
    v4 = -2147023728;
  else
    utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::erase(
      v5,
      &v8,
      v8,
      *(_QWORD *)v8);
  LeaveCriticalSection(v2);
  return v4;
}
