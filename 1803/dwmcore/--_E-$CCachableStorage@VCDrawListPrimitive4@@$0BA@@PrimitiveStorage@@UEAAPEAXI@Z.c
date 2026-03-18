/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800BDDD0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x18009BF00 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

dataproviderBamoConnection *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(
        dataproviderBamoConnection *lpMem,
        char a2)
{
  LPVOID Value; // rbx
  _QWORD *v5; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(lpMem);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v5 = operator new(0xF8uLL);
        Value = v5;
        if ( v5 )
        {
          *v5 = 0LL;
          v5[1] = 0LL;
          v5[2] = 0LL;
          v5[3] = 0LL;
          v5[4] = 0LL;
          v5[5] = 0LL;
          v5[6] = 0LL;
          v5[7] = 0LL;
          v5[8] = 0LL;
          v5[9] = 0LL;
          v5[10] = 0LL;
          v5[11] = 0LL;
          v5[12] = 0LL;
          v5[13] = 0LL;
          v5[14] = 0LL;
          v5[15] = 0LL;
          v5[16] = 0LL;
          v5[17] = 0LL;
          v5[18] = 0LL;
          v5[19] = 0LL;
          v5[20] = 0LL;
          v5[21] = 0LL;
          v5[22] = 0LL;
          v5[23] = 0LL;
          v5[24] = 0LL;
          v5[25] = 0LL;
          v5[26] = 0LL;
          v5[27] = 0LL;
          v5[28] = 0LL;
          v5[29] = 0LL;
          v5[30] = 0LL;
        }
        else
        {
          Value = 0LL;
        }
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 23) >= *((_DWORD *)Value + 22) )
      {
        operator delete(lpMem);
      }
      else
      {
        *(_QWORD *)lpMem = *((_QWORD *)Value + 12);
        ++*((_DWORD *)Value + 23);
        *((_QWORD *)Value + 12) = lpMem;
      }
    }
  }
  return lpMem;
}
