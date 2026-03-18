/*
 * XREFs of ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x18015E200
 * Callers:
 *     ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x1801FC320 (-ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWER_INI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::GetOwningProcessId(CResource *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 6);
  if ( !v1 || *(_DWORD *)(v1 + 16) == 1 )
    return 0LL;
  else
    return *(unsigned int *)(v1 + 20);
}
