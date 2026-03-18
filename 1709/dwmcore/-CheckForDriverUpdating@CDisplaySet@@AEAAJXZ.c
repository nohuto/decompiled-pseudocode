/*
 * XREFs of ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x1800984D0
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180010940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800752D0 (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x18008BDE4 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 */

__int64 __fastcall CDisplaySet::CheckForDriverUpdating(CDisplaySet *this)
{
  signed int v1; // ebx
  __int64 v2; // rsi
  __int64 v4; // rax
  CDXGIEnumeration *v5; // rcx
  struct _LUID *v6; // rbp
  signed int AdapterNoRefFromLuid; // eax
  struct CDXGIAdapterLimited *v8; // rcx
  __int64 v9; // rax
  CDXGIEnumeration *v10; // rcx
  int v11; // ebp
  struct _LUID *v12; // rdx
  signed int v13; // eax
  struct CDXGIAdapterLimited *v15; // [rsp+50h] [rbp+8h] BYREF
  struct CDXGIAdapterLimited *v16; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0LL;
  *((_BYTE *)this + 112) = 0;
  while ( (unsigned int)v2 < *((_DWORD *)this + 18) )
  {
    v4 = *((_QWORD *)this + 6);
    v5 = (CDXGIEnumeration *)*((_QWORD *)this + 2);
    v15 = 0LL;
    v6 = *(struct _LUID **)(v4 + 8 * v2);
    AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(v5, v6[28], &v15);
    v1 = AdapterNoRefFromLuid;
    if ( AdapterNoRefFromLuid < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, AdapterNoRefFromLuid, 0x16Cu);
    }
    else
    {
      v8 = v15;
      v6[31].HighPart = *((_DWORD *)v15 + 74);
      v6[32].LowPart = *((_DWORD *)v8 + 75);
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0x51Du);
      return (unsigned int)v1;
    }
    v9 = *((_QWORD *)this + 6);
    v10 = (CDXGIEnumeration *)*((_QWORD *)this + 2);
    v11 = 0;
    v16 = 0LL;
    LODWORD(v15) = 0;
    v12 = *(struct _LUID **)(v9 + 8 * v2);
    *((_BYTE *)this + 112) = 0;
    v13 = CDXGIEnumeration::GetAdapterNoRefFromLuid(v10, v12[28], &v16);
    v1 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x98u);
    }
    else
    {
      if ( !v16 )
        goto LABEL_10;
      CDXGIAdapterLimited::GetKMTDriverUpdateStatus(v16, (int *)&v15);
      v11 = (int)v15;
      *((_BYTE *)this + 112) = (_DWORD)v15 != 0;
    }
    if ( v11 )
      v1 = -2003304307;
LABEL_10:
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0x51Fu);
      return (unsigned int)v1;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  return (unsigned int)v1;
}
