/*
 * XREFs of ?FindFirstHWRenderAdapter@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0104910
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall FindFirstHWRenderAdapter(struct DXGADAPTER *a1, DXGADAPTER **a2)
{
  DXGADAPTER *v4; // rcx

  v4 = *a2;
  if ( (!*a2 || (*((_BYTE *)v4 + 300) & 1) == 0)
    && *((_DWORD *)a1 + 44) == 1
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 185))
    && !*((_BYTE *)a1 + 2229)
    && *((_QWORD *)a1 + 289)
    && (*((_DWORD *)a1 + 75) & 0x10) == 0 )
  {
    if ( v4 )
      DXGADAPTER::ReleaseReferenceNoTracking(v4);
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    a2[1] = (DXGADAPTER *)-1LL;
    *a2 = a1;
  }
  return 0LL;
}
