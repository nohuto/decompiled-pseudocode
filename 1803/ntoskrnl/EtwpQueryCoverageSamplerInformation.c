/*
 * XREFs of EtwpQueryCoverageSamplerInformation @ 0x1407B8AD0
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExCheckFullProcessInformationAccess @ 0x140540610 (ExCheckFullProcessInformationAccess.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     EtwpCoverageSamplerQuery @ 0x1407B7744 (EtwpCoverageSamplerQuery.c)
 */

__int64 __fastcall EtwpQueryCoverageSamplerInformation(_OWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  PVOID v8; // rdi
  int v9; // ebx
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-30h]

  v8 = 0LL;
  Object = 0LL;
  if ( a2 < 0x10 )
  {
    v9 = -1073741820;
    goto LABEL_12;
  }
  *(_OWORD *)Handle = *a1;
  if ( BYTE5(Handle[0]) != 0xCE )
    goto LABEL_4;
  if ( BYTE4(Handle[0]) == 1 )
  {
    if ( !a3 )
    {
LABEL_4:
      v9 = -1073741637;
      goto LABEL_12;
    }
    v9 = ExCheckFullProcessInformationAccess(a3);
    if ( v9 >= 0 )
    {
      v9 = ObReferenceObjectByHandle(Handle[1], 1u, qword_1403A1CD0, a3, &Object, 0LL);
      v8 = Object;
      if ( v9 >= 0 )
      {
        v9 = EtwpCoverageSamplerQuery((ULONG_PTR)Object, (__int64)a1, a2, a4);
        if ( v9 >= 0 )
          v9 = 0;
      }
    }
  }
  else
  {
    v9 = -1073741821;
  }
LABEL_12:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v9;
}
