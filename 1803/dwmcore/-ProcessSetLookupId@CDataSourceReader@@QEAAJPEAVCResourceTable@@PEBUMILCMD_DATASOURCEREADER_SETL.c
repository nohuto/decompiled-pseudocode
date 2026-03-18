/*
 * XREFs of ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x1801888C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x18015381C (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016B810 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall CDataSourceReader::ProcessSetLookupId(
        CDataSourceReader *this,
        struct CResourceTable *a2,
        const struct MILCMD_DATASOURCEREADER_SETLOOKUPID *a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // r8
  struct BamoDataSourceProxy *DataSourceProxy; // rax
  int v7; // eax
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 7) = v3;
  v5 = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 8) = v5;
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(
                      *(DataProviderManager **)(*((_QWORD *)this + 2) + 1320LL),
                      v3,
                      v5);
  if ( DataSourceProxy )
  {
    v7 = DataSourceProxy::RegisterReader(DataSourceProxy, this);
    v8 = v7;
    if ( v7 >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x194,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
        (const char *)(unsigned int)v7);
    if ( v8 >= 0 )
      *((_BYTE *)this + 72) |= 1u;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x80004005LL);
  }
  return 0LL;
}
