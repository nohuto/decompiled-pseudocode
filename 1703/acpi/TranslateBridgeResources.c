/*
 * XREFs of TranslateBridgeResources @ 0x1C00A4CD0
 * Callers:
 *     <none>
 * Callees:
 *     CmMemIoResourceUpdateType @ 0x1C0058B8C (CmMemIoResourceUpdateType.c)
 *     FindTranslationRange @ 0x1C00A4AC0 (FindTranslationRange.c)
 */

__int64 __fastcall TranslateBridgeResources(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _OWORD *a7)
{
  ULONGLONG v10; // rax
  __int64 result; // rax
  unsigned int v12; // ebx
  _OWORD *v13; // r9
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v10 = RtlCmDecodeMemIoResource((PCM_PARTIAL_RESOURCE_DESCRIPTOR)a2, 0LL);
  result = FindTranslationRange(*(_QWORD *)(a2 + 4), v10, a1, a3, *(_BYTE *)a2, &v14);
  v12 = 0;
  if ( (int)result >= 0 )
  {
    v13 = a7;
    *a7 = *(_OWORD *)a2;
    *((_DWORD *)v13 + 4) = *(_DWORD *)(a2 + 16);
    if ( a3 )
    {
      if ( a3 == 1 )
        CmMemIoResourceUpdateType(
          (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v13,
          *(_BYTE *)(v14 + 1),
          *(_QWORD *)(a2 + 4) + *(_QWORD *)(v14 + 16) - *(_QWORD *)(v14 + 8));
      else
        return (unsigned int)-1073741811;
    }
    else
    {
      CmMemIoResourceUpdateType(
        (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v13,
        *(_BYTE *)v14,
        *(_QWORD *)(a2 + 4) + *(_QWORD *)(v14 + 8) - *(_QWORD *)(v14 + 16));
      return 288;
    }
    return v12;
  }
  return result;
}
