/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CDCompDesktopThumbnail@@UEAA_NPEAVCWindowData@@@Z @ 0x1800A4E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDCompDesktopThumbnail::v_ShouldIncludeInSnapshot(CDCompDesktopThumbnail *this, struct CWindowData *a2)
{
  unsigned int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx

  if ( *((char *)a2 + 595) < 0 )
    return 0;
  v3 = *((_DWORD *)a2 + 126);
  if ( v3 )
  {
    v4 = *((_QWORD *)a2 + 60);
    v5 = 0LL;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + 8 * v5);
      if ( *(_BYTE *)(v6 + 34) )
      {
        if ( *(_DWORD *)(v6 + 112) == 1 )
          break;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v3 )
        return 1;
    }
    return 0;
  }
  return 1;
}
