/*
 * XREFs of ?FindHWRenderAdapterByLuid@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C019E8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FindHWRenderAdapterByLuid(struct DXGADAPTER *a1, _QWORD *a2)
{
  if ( !*a2
    && *((_DWORD *)a1 + 44) == 1
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 185))
    && !*((_BYTE *)a1 + 2373)
    && *((_QWORD *)a1 + 308)
    && (*((_DWORD *)a1 + 75) & 0x10) == 0
    && *((_DWORD *)a2 + 4) == *((_DWORD *)a1 + 67)
    && *((_DWORD *)a2 + 5) == *((_DWORD *)a1 + 68) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    a2[1] = -1LL;
    *a2 = a1;
  }
  return 0LL;
}
