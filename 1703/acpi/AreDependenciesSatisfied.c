/*
 * XREFs of AreDependenciesSatisfied @ 0x1C0027C74
 * Callers:
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C0027BC8 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 */

bool __fastcall AreDependenciesSatisfied(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  unsigned int v3; // ebx
  unsigned int v5; // edi
  _BYTE **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbp
  volatile signed __int32 *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD **)(a2 + 32);
  v3 = 0;
  v5 = *v2;
  if ( *v2 )
  {
    v7 = (_BYTE **)(v2 + 10);
    do
    {
      if ( (int)AMLIGetNameSpaceObject(*v7, a1, &v10) < 0 )
        break;
      v9 = *(_QWORD *)(*(_QWORD *)v10 + 104LL);
      AMLIDereferenceHandleEx(v10, v8);
      if ( !v9 )
        break;
      if ( *(_DWORD *)(v9 + 320) != 3 )
        break;
      ++v3;
      v7 += 5;
    }
    while ( v3 < v5 );
  }
  return v3 == v5;
}
