/*
 * XREFs of ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x1801150A4
 * Callers:
 *     ?ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x180114B18 (-ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x180098310 (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800D952C (-LogError@@YAXPEBGZZ.c)
 *     ?LogOutput@@YAXPEBGZZ @ 0x1800D95E0 (-LogOutput@@YAXPEBGZZ.c)
 *     ?Lookup@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBA_NPEBGAEAW4RmResourceType@@@Z @ 0x180113D80 (-Lookup@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceTyp.c)
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBW4RmResourceType@@@Z @ 0x1801143BC (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType.c)
 *     ?FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z @ 0x180114764 (-FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z.c)
 *     ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x1801157B8 (-ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseLimits(
        CConstraintModelXMLParser *a1,
        struct IXmlReader *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 **a5)
{
  _DWORD *v5; // rdi
  int StartOrEndElement; // ebx
  unsigned int v7; // r9d
  unsigned int v8; // esi
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // rbx
  int v12; // [rsp+30h] [rbp-2A8h] BYREF
  int v13; // [rsp+34h] [rbp-2A4h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-2A0h] BYREF
  int v15; // [rsp+3Ch] [rbp-29Ch]
  _DWORD *v16; // [rsp+40h] [rbp-298h]
  struct IXmlReader *v17; // [rsp+48h] [rbp-290h]
  CConstraintModelXMLParser *v18; // [rsp+50h] [rbp-288h]
  __int64 v19; // [rsp+60h] [rbp-278h]
  __int64 v20; // [rsp+70h] [rbp-268h] BYREF
  __int64 **v21; // [rsp+78h] [rbp-260h]
  __int64 v22; // [rsp+80h] [rbp-258h]
  ATL::CAtlException *v23; // [rsp+88h] [rbp-250h] BYREF
  ATL::CAtlException *v24; // [rsp+90h] [rbp-248h] BYREF
  unsigned __int16 v25[264]; // [rsp+A0h] [rbp-238h] BYREF

  v22 = -2LL;
  v5 = a3;
  v18 = a1;
  v17 = a2;
  v16 = a3;
  v19 = a4;
  v21 = a5;
  StartOrEndElement = 0;
  LogOutput((size_t *)L"Parsing resource IDs and limits");
  v15 = 0;
  v13 = 1;
  while ( 2 )
  {
    if ( StartOrEndElement >= 0 )
    {
      if ( !v13 )
      {
        if ( (unsigned int)(v15 - 1) > 0xE )
          return (unsigned int)-2147024809;
        return (unsigned int)StartOrEndElement;
      }
      StartOrEndElement = CConstraintModelXMLParser::FindStartOrEndElement(v18, v17, L"Resource", L"Limits", 0, &v13);
      if ( StartOrEndElement < 0 )
        continue;
      if ( !v13 )
        continue;
      memset_0(v25, 0, 0x202uLL);
      v14 = 0;
      StartOrEndElement = CConstraintModelXMLParser::ParseSingleResource(v18, v17, v25, v7, &v14);
      if ( StartOrEndElement < 0 )
        continue;
      if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::Lookup(
             v19,
             v25,
             &v12) )
      {
        StartOrEndElement = -2147024713;
        LogError((size_t *)L"Repeated resource type limit declaration for resource ID %s in XML not allowed", v25);
        continue;
      }
      try
      {
        ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::SetAt(
          v19,
          v25,
          v5);
      }
      catch ( ATL::CAtlException *v23 )
      {
        v10 = v23;
        if ( *(_DWORD *)v23 == -1073741571 )
          o__resetstkoflw_0();
        v12 = *(_DWORD *)v10;
        StartOrEndElement = v12;
        if ( v12 >= 0 )
        {
          v5 = v16;
          goto LABEL_11;
        }
LABEL_13:
        v5 = v16;
        continue;
      }
LABEL_11:
      LODWORD(v20) = *v5;
      v8 = v14;
      HIDWORD(v20) = v14;
      StartOrEndElement = 0;
      try
      {
        ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(v21, &v20);
      }
      catch ( ATL::CAtlException *v24 )
      {
        v11 = v24;
        if ( *(_DWORD *)v24 == -1073741571 )
          o__resetstkoflw_0();
        v12 = *(_DWORD *)v11;
        StartOrEndElement = v12;
        if ( v12 < 0 )
          goto LABEL_13;
        v8 = v14;
        v5 = v16;
      }
      ++*v5;
      ++v15;
      LogOutput((size_t *)L"Resource ID %s found with limit %d", v25, v8);
      continue;
    }
    return (unsigned int)StartOrEndElement;
  }
}
