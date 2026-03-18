/*
 * XREFs of AreDependenciesSatisfied @ 0x1C00127D4
 * Callers:
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C0012728 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 */

bool __fastcall AreDependenciesSatisfied(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // edi
  void **v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // [rsp+48h] [rbp+10h]

  v2 = *(_DWORD **)(a2 + 32);
  v3 = 0;
  v4 = *v2;
  if ( *v2 )
  {
    v6 = (void **)(v2 + 10);
    do
    {
      if ( (int)AMLIGetNameSpaceObject(*v6) < 0 )
        break;
      v7 = *(_QWORD *)(*(_QWORD *)v8 + 104LL);
      AMLIDereferenceHandleEx(v8);
      if ( !v7 )
        break;
      if ( *(_DWORD *)(v7 + 320) != 3 )
        break;
      ++v3;
      v6 += 5;
    }
    while ( v3 < v4 );
  }
  return v3 == v4;
}
