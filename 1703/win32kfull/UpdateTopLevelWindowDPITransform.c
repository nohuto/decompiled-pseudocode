/*
 * XREFs of UpdateTopLevelWindowDPITransform @ 0x1C00F25C0
 * Callers:
 *     UpdateWindowMonitor @ 0x1C005F450 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UpdateTopLevelWindowDPITransform(__int64 a1, __int64 a2)
{
  int v3; // eax
  _OWORD *v4; // rbx
  _OWORD *result; // rax

  v3 = *(_DWORD *)(a1 + 368) & 0xF;
  if ( v3 == 2 )
  {
    v4 = 0LL;
  }
  else if ( v3 == 1 )
  {
    v4 = *(_OWORD **)(a2 + 528);
  }
  else
  {
    v4 = *(_OWORD **)(a2 + 520);
  }
  result = *(_OWORD **)(a1 + 288);
  if ( result )
  {
    if ( !v4 )
    {
      result = (_OWORD *)Win32FreePool(*(_QWORD *)(a1 + 288));
      *(_QWORD *)(a1 + 288) = 0LL;
      return result;
    }
  }
  else if ( !v4 )
  {
    return result;
  }
  if ( !result )
    *(_QWORD *)(a1 + 288) = Win32AllocPoolWithQuota(64LL, 2020438869LL);
  result = *(_OWORD **)(a1 + 288);
  if ( result )
  {
    *result = *v4;
    result[1] = v4[1];
    result[2] = v4[2];
    result[3] = v4[3];
  }
  return result;
}
