/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x1C006CBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDeviceFlipMode(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int8 v9; // di
  __int64 v11; // rax

  v3 = *(_DWORD *)(a1 + 920);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = (unsigned int)a2;
  if ( v3 == 1 )
  {
    *a3 = 0;
    return *(unsigned int *)(v4 + 2156);
  }
  if ( v3 == 2 )
  {
    *a3 = 1;
  }
  else
  {
    v6 = *a3;
    if ( !*a3 )
      return *(unsigned int *)(v4 + 2156);
    if ( v6 != 1 && ((unsigned int)(v6 - 2) > 2 || (*(_DWORD *)(v4 + 2152) & 8) == 0) )
      return 0LL;
  }
  v7 = *(_DWORD *)(v4 + 2160);
  if ( v7 < 4 && (!*(_BYTE *)(v4 + 132) || v7 != 3) )
    return *(unsigned int *)(v4 + 2160);
  if ( (unsigned int)a2 >= *(_DWORD *)(v4 + 40) )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = v5;
    WdLogEvent5_WdAssertion(v11);
  }
  else
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1240), 1u);
    v8 = *(_DWORD *)(v4 + 1976);
    v9 = _bittest(&v8, v5);
    ExReleaseResourceLite((PERESOURCE)(v4 + 1240));
    if ( v9 )
      return *(unsigned int *)(v4 + 2160);
  }
  return *(unsigned int *)(v4 + 2156);
}
