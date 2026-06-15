/*
 * XREFs of ??1?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x1800E8E00
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87____::_1_::dtor$0 @ 0x1800E7D80 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c8.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>::~CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>(
        char **a1)
{
  char *v2; // rcx
  int v3; // ebp
  __int64 v4; // rsi
  char *v5; // rbx

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0;
    if ( *((int *)a1 + 2) > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *a1;
        CoTaskMemFree(*(LPVOID *)&(*a1)[v4]);
        *(_QWORD *)&v5[v4] = 0LL;
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *((_DWORD *)a1 + 2) );
      v2 = *a1;
    }
    free(v2);
    *a1 = 0LL;
  }
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 3) = 0;
}
