/*
 * XREFs of DCompositionRenderBlack @ 0x1C013EBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0013D40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00146C8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C0140070 (-RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DCompositionRenderBlack(int a1)
{
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v3 = DefaultConnection;
  if ( DefaultConnection )
  {
    v4 = DirectComposition::CConnection::RenderBlack(DefaultConnection, a1 != 0);
    DirectComposition::CConnection::Release(v3, v5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
