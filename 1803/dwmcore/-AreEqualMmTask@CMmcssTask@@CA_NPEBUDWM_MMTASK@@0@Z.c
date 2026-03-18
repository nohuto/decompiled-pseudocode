/*
 * XREFs of ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x18001EB28
 * Callers:
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18001E854 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18001E914 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMmcssTask::AreEqualMmTask(const struct DWM_MMTASK *a1, const struct DWM_MMTASK *a2)
{
  bool v2; // r8
  int v4; // eax

  v2 = a1 == a2;
  if ( a1 != a2 )
  {
    v2 = 0;
    if ( a1 )
    {
      if ( a2 )
      {
        v4 = *((_DWORD *)a1 + 32);
        return v4 == *((_DWORD *)a2 + 32) && v4 && *((_DWORD *)a1 + 33) == *((_DWORD *)a2 + 33)
            || CompareStringOrdinal((LPCWCH)a1, 64, (LPCWCH)a2, 64, 0) == 2;
      }
    }
  }
  return v2;
}
