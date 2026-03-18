/*
 * XREFs of ??0DataProviderRegistrarConnection@@QEAA@XZ @ 0x1800C4C34
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800C4B7C (--$CreateServer@VDataProviderRegistrarConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 * Callees:
 *     <none>
 */

DataProviderRegistrarConnection *__fastcall DataProviderRegistrarConnection::DataProviderRegistrarConnection(
        DataProviderRegistrarConnection *this)
{
  DataProviderRegistrarConnection *result; // rax

  *(_QWORD *)this = &dataproviderBamoConnection::`vftable';
  *((_DWORD *)this + 4) = 1;
  *((_QWORD *)this + 1) = &Microsoft::BamoImpl::BamoConnectionImpl::`vftable';
  *((_QWORD *)this + 3) = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 18) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  *((_QWORD *)this + 1) = &BamoImpl::dataproviderBamoConnectionImpl::`vftable';
  *(_QWORD *)this = &DataProviderRegistrarConnection::`vftable';
  result = this;
  *((_QWORD *)this + 19) = 0LL;
  return result;
}
