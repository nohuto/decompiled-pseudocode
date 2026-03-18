/*
 * XREFs of DxgkEngQueryWin32InfoPlatform @ 0x1C0114030
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DxgkEngQueryWin32InfoPlatform(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rax

  if ( *(_DWORD *)a1 != 1 )
    return 3221225474LL;
  v1 = *(_DWORD **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) != 32 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v3);
  }
  memset(v1, 0, 0x20uLL);
  *v1 = 800;
  *((_QWORD *)v1 + 2) = &DesktopScaleFactorsArray;
  *((_QWORD *)v1 + 3) = L"x";
  result = 0LL;
  v1[1] = 600;
  v1[2] = 12;
  return result;
}
