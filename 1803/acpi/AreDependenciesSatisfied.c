/*
 * XREFs of AreDependenciesSatisfied @ 0x1C00123FC
 * Callers:
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C000C534 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

bool __fastcall AreDependenciesSatisfied(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // edi
  void **v5; // rsi
  __int64 v6; // rbp
  volatile signed __int32 *v8; // [rsp+48h] [rbp+10h]

  v2 = *(_DWORD **)(a2 + 32);
  v3 = 0;
  v4 = *v2;
  if ( *v2 )
  {
    v5 = (void **)(v2 + 10);
    do
    {
      if ( (int)AMLIGetNameSpaceObject(*v5) < 0 )
        break;
      v6 = *(_QWORD *)(*(_QWORD *)v8 + 104LL);
      AMLIDereferenceHandleEx(v8);
      if ( !v6 )
        break;
      if ( *(_DWORD *)(v6 + 320) != 3 )
        break;
      ++v3;
      v5 += 5;
    }
    while ( v3 < v4 );
  }
  return v3 == v4;
}
