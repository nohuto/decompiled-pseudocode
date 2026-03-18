/*
 * XREFs of ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00547AC
 * Callers:
 *     DCompositionProcessCallout @ 0x1C00546D0 (DCompositionProcessCallout.c)
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C005471C (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0013D40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00146C8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C0054B90 (-OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0092294 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C013FBD4 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

DirectComposition::CProcessData *__fastcall DirectComposition::CProcessData::`scalar deleting destructor'(
        DirectComposition::CProcessData *this)
{
  struct HDCOMPOSITIONCONNECTION__ *v2; // rcx
  struct _ERESOURCE *v3; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v6; // rdi
  unsigned int v7; // edx

  if ( *((_DWORD *)this + 10) )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v6 = DefaultConnection;
    if ( DefaultConnection )
    {
      DirectComposition::CConnection::EnableMMCSS(DefaultConnection, 0);
      DirectComposition::CConnection::Release(v6, v7);
    }
  }
  DirectComposition::CChannel::OnProcessDestruction(this);
  v2 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)this + 2);
  if ( v2 )
    DirectComposition::CConnection::DestroyHandle(v2);
  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    ExDeleteResourceLite(v3);
    Win32FreePool(*((_QWORD *)this + 4));
  }
  Win32FreePool((__int64)this);
  return this;
}
