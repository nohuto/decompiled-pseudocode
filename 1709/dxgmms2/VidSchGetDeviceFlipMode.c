/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x1C0072440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDeviceFlipMode(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rbp
  int v6; // edi
  __int64 v8; // rax

  v3 = *(_DWORD *)(a1 + 920);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = (unsigned int)a2;
  if ( v3 == 1 )
  {
    *a3 = 0;
    return *(unsigned int *)(v4 + 2172);
  }
  if ( v3 == 2 )
    *a3 = 1;
  if ( !*a3 )
    return *(unsigned int *)(v4 + 2172);
  if ( (unsigned int)(*a3 - 1) <= 3 )
  {
    if ( *(int *)(v4 + 2176) < 4 && !*(_BYTE *)(v4 + 132) )
      return *(unsigned int *)(v4 + 2176);
    if ( (unsigned int)a2 >= *(_DWORD *)(v4 + 40) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v8 + 24) = v5;
      WdLogEvent5_WdAssertion(v8);
    }
    else
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1248), 1u);
      v6 = *(_DWORD *)(v4 + 1992);
      ExReleaseResourceLite((PERESOURCE)(v4 + 1248));
      if ( _bittest(&v6, v5) )
        return *(unsigned int *)(v4 + 2176);
    }
    return *(unsigned int *)(v4 + 2172);
  }
  return 0LL;
}
