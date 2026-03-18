/*
 * XREFs of ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C0032E28
 * Callers:
 *     DxgkGetAdapter @ 0x1C01A1960 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C01A1EC0 (DxgkReleaseAdapter.c)
 * Callees:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01CE414 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01D0264 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 */

void __fastcall DXGSESSIONDATA::SetAdapterLuidInRemoteSession(DXGSESSIONDATA *this, struct _LUID *a2)
{
  int v3; // eax
  __int64 v4; // rax
  int v5; // eax

  if ( a2 )
  {
    if ( *((_DWORD *)this + 4623) == a2->LowPart && *((_DWORD *)this + 4624) == a2->HighPart )
    {
      ++*((_DWORD *)this + 4625);
    }
    else
    {
      *(struct _LUID *)((char *)this + 18492) = *a2;
      *((_DWORD *)this + 4625) = 1;
      DXGSESSIONDATA::AddAdapterToSession(this, (const struct _LUID *)((char *)this + 18492), 0LL);
    }
  }
  else
  {
    v3 = *((_DWORD *)this + 4625);
    if ( !v3 )
    {
      v4 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v4 + 24) = 234LL;
      WdLogEvent5_WdAssertion(v4);
      v3 = *((_DWORD *)this + 4625);
    }
    v5 = v3 - 1;
    *((_DWORD *)this + 4625) = v5;
    if ( !v5 )
    {
      DXGSESSIONDATA::RemoveAdapterFromSession(this, (const struct _LUID *)((char *)this + 18492));
      *(_QWORD *)((char *)this + 18492) = 0LL;
    }
  }
}
