/*
 * XREFs of NewObjData @ 0x1C0008108
 * Callers:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     Return @ 0x1C000C940 (Return.c)
 *     WriteObject @ 0x1C0020320 (WriteObject.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005C51C (AMLICreateNativeNamespaceObject.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C005CDD4 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C005CEC8 (AMLICreateOverrideObjectDep.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     GetObjectTypeName @ 0x1C005D4E0 (GetObjectTypeName.c)
 */

__int64 __fastcall NewObjData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rbx
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  int ObjectTypeName; // eax

  v2 = *(unsigned __int16 *)(a2 + 2);
  v3 = 0LL;
  if ( v2 > 0x82 )
  {
    v16 = v2 - 131;
    if ( !v16 )
    {
      v8 = *(unsigned int *)(a2 + 24);
      v9 = 1329874504LL;
      return HeapAlloc(a1, v9, v8);
    }
    if ( v16 == 1 )
    {
      v8 = *(unsigned int *)(a2 + 24);
      v9 = 1180191048LL;
      return HeapAlloc(a1, v9, v8);
    }
    goto LABEL_33;
  }
  if ( v2 == 130 )
  {
    v8 = *(unsigned int *)(a2 + 24);
    v9 = 1179337288LL;
    return HeapAlloc(a1, v9, v8);
  }
  if ( v2 > 8 )
  {
    v11 = v2 - 9;
    if ( !v11 )
    {
      v8 = *(unsigned int *)(a2 + 24);
      v9 = 1414876488LL;
      return HeapAlloc(a1, v9, v8);
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v8 = *(unsigned int *)(a2 + 24);
      v9 = 1196576584LL;
      return HeapAlloc(a1, v9, v8);
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v8 = *(unsigned int *)(a2 + 24);
      v9 = 1397903432LL;
      return HeapAlloc(a1, v9, v8);
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v8 = *(unsigned int *)(a2 + 24);
      v9 = 1330794568LL;
      return HeapAlloc(a1, v9, v8);
    }
    if ( v14 == 2 )
    {
      v8 = *(unsigned int *)(a2 + 24);
      v9 = 1145455176LL;
      return HeapAlloc(a1, v9, v8);
    }
LABEL_33:
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, 3222536195LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
    PrintDebugMessage(112, ObjectTypeName, 0, 0, 0LL);
    return v3;
  }
  if ( v2 == 8 )
  {
    v8 = *(unsigned int *)(a2 + 24);
    v9 = 1413827912LL;
    return HeapAlloc(a1, v9, v8);
  }
  v5 = v2 - 2;
  if ( !v5 )
  {
    v8 = *(unsigned int *)(a2 + 24);
    v9 = 1381258056LL;
    goto LABEL_9;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = *(unsigned int *)(a2 + 24);
    v9 = 1179992648LL;
    goto LABEL_9;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v15 = v7 - 1;
    if ( !v15 )
    {
      v8 = *(unsigned int *)(a2 + 24);
      v9 = 1430537800LL;
      return HeapAlloc(a1, v9, v8);
    }
    if ( v15 == 2 )
    {
      v8 = *(unsigned int *)(a2 + 24);
      v9 = 1314276680LL;
      return HeapAlloc(a1, v9, v8);
    }
    goto LABEL_33;
  }
  v8 = *(unsigned int *)(a2 + 24);
  v9 = 1196118088LL;
LABEL_9:
  a1 = gpheapGlobal;
  return HeapAlloc(a1, v9, v8);
}
