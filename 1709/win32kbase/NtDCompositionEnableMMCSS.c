/*
 * XREFs of NtDCompositionEnableMMCSS @ 0x1C013E6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0023A90 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0034974 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0036E40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C013F004 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall NtDCompositionEnableMMCSS(int a1)
{
  unsigned int v2; // edi
  DirectComposition::CConnection *DefaultConnection; // rbp
  struct DirectComposition::CProcessData *v4; // rsi
  struct _ERESOURCE *v5; // rbx
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  unsigned int v10; // edx

  v2 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v4 = DirectComposition::CProcessData::Current();
    v5 = (struct _ERESOURCE *)*((_QWORD *)v4 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v5, 1u);
    if ( a1 )
    {
      v6 = *((_DWORD *)v4 + 10);
      if ( v6 != -1 )
      {
        v7 = v6 + 1;
        v8 = v6 == 0;
        goto LABEL_8;
      }
    }
    else
    {
      v9 = *((_DWORD *)v4 + 10);
      if ( v9 )
      {
        v7 = v9 - 1;
        v8 = v7 == 0;
LABEL_8:
        *((_DWORD *)v4 + 10) = v7;
        if ( v8 )
          v2 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, a1);
        goto LABEL_11;
      }
    }
    v2 = -1073741823;
LABEL_11:
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 1));
    KeLeaveCriticalRegion();
    DirectComposition::CConnection::Release(DefaultConnection, v10);
    return v2;
  }
  return (unsigned int)-1073741790;
}
