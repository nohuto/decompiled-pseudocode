/*
 * XREFs of ?pRenderAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C003CD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pRenderAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v4; // rdx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2592LL);
  if ( v2 != -4 )
  {
    if ( !v2 || (*(_DWORD *)(v1 + 32) & 0x20000) != 0 )
      return 0LL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v1 + 32) & 0x20000) == 0 )
  {
LABEL_4:
    if ( (*(_DWORD *)(v2 + 160) & 0x4000000) != 0 )
      return (struct _LUID *)(v2 + 312);
    else
      return (struct _LUID *)(v2 + 264);
  }
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1816) + 40LL) + 2592LL);
  if ( (*(_DWORD *)(v4 + 160) & 0x4000000) != 0 )
    return (struct _LUID *)(v4 + 312);
  else
    return (struct _LUID *)(v4 + 264);
}
