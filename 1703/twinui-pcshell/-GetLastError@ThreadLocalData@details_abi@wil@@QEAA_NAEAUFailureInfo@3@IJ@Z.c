/*
 * XREFs of ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x180082C5C
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180082D58 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180097BC0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     memset @ 0x180194E50 (memset.c)
 */

char __fastcall wil::details_abi::ThreadLocalData::GetLastError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        int a4)
{
  unsigned int *v6; // rcx
  unsigned int *v7; // rbx
  unsigned int v8; // esi
  unsigned int *v10; // rdx
  unsigned int *v11; // rcx

  v6 = (unsigned int *)*((_QWORD *)this + 3);
  v7 = &v6[22 * *((unsigned __int16 *)this + 17)];
  v8 = v7[1];
  if ( a3 < v8 )
  {
    if ( !a4 )
    {
      memset(a2, 0, 0x90uLL);
      *((_DWORD *)a2 + 2) = v8;
LABEL_4:
      *((_DWORD *)a2 + 1) = v7[2];
      *((_QWORD *)a2 + 6) = *((_QWORD *)v7 + 2);
      *((_DWORD *)a2 + 14) = *((unsigned __int16 *)v7 + 12);
      *(_DWORD *)a2 = v7[7];
      *((_QWORD *)a2 + 15) = *((_QWORD *)v7 + 5);
      *((_QWORD *)a2 + 16) = *((_QWORD *)v7 + 6);
      *((_QWORD *)a2 + 17) = *((_QWORD *)v7 + 7);
      *((_QWORD *)a2 + 2) = *((_QWORD *)v7 + 8);
      return 1;
    }
    v7 = 0LL;
    v10 = &v6[22 * *((unsigned __int16 *)this + 16)];
    if ( v6 != v10 )
    {
      v11 = v6 + 1;
      do
      {
        if ( v11[1] == a4 && *v11 > a3 && (!v7 || *v11 < v7[1]) )
          v7 = v11 - 1;
        v11 += 22;
      }
      while ( v11 - 1 != v10 );
      if ( v7 )
      {
        memset(a2, 0, 0x90uLL);
        *((_DWORD *)a2 + 2) = v7[1];
        goto LABEL_4;
      }
    }
  }
  return 0;
}
