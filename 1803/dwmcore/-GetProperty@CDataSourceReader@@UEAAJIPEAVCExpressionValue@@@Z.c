/*
 * XREFs of ?GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180188860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x180153934 (-GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z.c)
 */

int __fastcall CDataSourceReader::GetProperty(CDataSourceReader *this, unsigned int a2, struct CExpressionValue *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*((_BYTE *)this + 72) & 1) != 0 )
    return DataProviderManager::GetPropertyValue(
             *(DataProviderManager **)(*((_QWORD *)this + 2) + 1320LL),
             this,
             *((_QWORD *)this + 7),
             *((_QWORD *)this + 8),
             a2,
             a3);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\datasourcereader.cpp",
    (const char *)0x80004005LL);
  return -2147467259;
}
