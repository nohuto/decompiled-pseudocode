/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x18008AC60
 * Callers:
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x18009BF00 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x18008B954 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

dataproviderBamoConnection *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor'(
        dataproviderBamoConnection *lpMem,
        char a2)
{
  struct CObjectCache *ObjectCache; // rax

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(lpMem);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(lpMem);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(lpMem);
      }
      else
      {
        *(_QWORD *)lpMem = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = lpMem;
      }
    }
  }
  return lpMem;
}
