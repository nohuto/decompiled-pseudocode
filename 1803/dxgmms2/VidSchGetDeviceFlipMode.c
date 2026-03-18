/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x1C0054730
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
  char v8; // di
  __int64 v10; // rax

  v3 = *(_DWORD *)(a1 + 944);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = (unsigned int)a2;
  if ( v3 == 1 )
  {
    *a3 = 0;
    return *(unsigned int *)(v4 + 2196);
  }
  if ( v3 != 2 )
  {
    v6 = *a3;
    if ( *a3 )
      goto LABEL_4;
    return *(unsigned int *)(v4 + 2196);
  }
  v6 = 1;
  *a3 = 1;
LABEL_4:
  if ( (unsigned int)(v6 - 1) <= 3 )
  {
    if ( *(int *)(v4 + 2200) < 4 && !*(_BYTE *)(v4 + 136) )
      return *(unsigned int *)(v4 + 2200);
    if ( (unsigned int)a2 >= *(_DWORD *)(v4 + 40) )
    {
      v10 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v10 + 24) = v5;
      WdLogEvent5_WdAssertion(v10);
    }
    else
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1264), 1u);
      v7 = *(_DWORD *)(v4 + 2008);
      if ( _bittest(&v7, v5) )
        v8 = 1;
      else
        v8 = 0;
      ExReleaseResourceLite((PERESOURCE)(v4 + 1264));
      if ( v8 )
        return *(unsigned int *)(v4 + 2200);
    }
    return *(unsigned int *)(v4 + 2196);
  }
  return 0LL;
}
