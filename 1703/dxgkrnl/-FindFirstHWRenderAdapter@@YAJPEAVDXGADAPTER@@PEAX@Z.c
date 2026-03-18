/*
 * XREFs of ?FindFirstHWRenderAdapter@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01050A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

__int64 __fastcall FindFirstHWRenderAdapter(struct DXGADAPTER *a1, DXGADAPTER **a2)
{
  DXGADAPTER *v4; // rcx

  v4 = *a2;
  if ( (!*a2 || (*((_BYTE *)v4 + 300) & 1) == 0)
    && *((_DWORD *)a1 + 44) == 1
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 186))
    && !*((_BYTE *)a1 + 2205)
    && *((_QWORD *)a1 + 286)
    && (*((_DWORD *)a1 + 75) & 0x10) == 0 )
  {
    if ( v4 )
      DXGADAPTER::ReleaseReference(v4);
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    a2[1] = (DXGADAPTER *)-1LL;
    *a2 = a1;
  }
  return 0LL;
}
