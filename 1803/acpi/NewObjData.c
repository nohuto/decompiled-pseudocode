/*
 * XREFs of NewObjData @ 0x1C0047164
 * Callers:
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0044F0C (AMLICreateNativeNamespaceObject.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0045CFC (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0045DF0 (AMLICreateOverrideObjectDep.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall NewObjData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rbx
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  int v10; // edx
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  int ObjectTypeName; // eax

  v2 = *(unsigned __int16 *)(a2 + 2);
  v3 = 0LL;
  if ( v2 > 0x82 )
  {
    v15 = v2 - 131;
    if ( !v15 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = 1329874504;
      return HeapAlloc(a1, v10, v9);
    }
    if ( v15 == 1 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = 1180191048;
      return HeapAlloc(a1, v10, v9);
    }
    goto LABEL_30;
  }
  if ( v2 == 130 )
  {
    v9 = *(_DWORD *)(a2 + 24);
    v10 = 1179337288;
    return HeapAlloc(a1, v10, v9);
  }
  if ( v2 > 8 )
  {
    v11 = v2 - 9;
    if ( !v11 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = 1414876488;
      return HeapAlloc(a1, v10, v9);
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = 1196576584;
      return HeapAlloc(a1, v10, v9);
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = 1397903432;
      return HeapAlloc(a1, v10, v9);
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = 1330794568;
      return HeapAlloc(a1, v10, v9);
    }
    if ( v14 == 2 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = 1145455176;
      return HeapAlloc(a1, v10, v9);
    }
    goto LABEL_30;
  }
  if ( v2 == 8 )
  {
    v9 = *(_DWORD *)(a2 + 24);
    v10 = 1413827912;
    return HeapAlloc(a1, v10, v9);
  }
  v5 = v2 - 2;
  if ( !v5 )
  {
    v9 = *(_DWORD *)(a2 + 24);
    v10 = 1381258056;
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *(_DWORD *)(a2 + 24);
    v10 = 1179992648;
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *(_DWORD *)(a2 + 24);
    v10 = 1196118088;
LABEL_13:
    a1 = gpheapGlobal;
    return HeapAlloc(a1, v10, v9);
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *(_DWORD *)(a2 + 24);
    v10 = 1430537800;
    return HeapAlloc(a1, v10, v9);
  }
  if ( v8 == 2 )
  {
    v9 = *(_DWORD *)(a2 + 24);
    v10 = 1314276680;
    return HeapAlloc(a1, v10, v9);
  }
LABEL_30:
  LogError(3222536195LL);
  AcpiDiagTraceAmlError(0LL, -1072431101);
  ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
  PrintDebugMessage(112, ObjectTypeName, 0, 0, 0LL);
  return v3;
}
