/*
 * XREFs of DCompositionForceRender @ 0x1C013EB50
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 *     NtGdiDdDDISetHwProtectionTeardownRecovery @ 0x1C00F1B20 (NtGdiDdDDISetHwProtectionTeardownRecovery.c)
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0013D40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00146C8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C013FDDC (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 */

__int64 __fastcall DCompositionForceRender(int a1, int a2, int a3, int a4)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  __int64 v9; // rdx
  DirectComposition::CConnection *v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // r9
  unsigned int v13; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v10 = DefaultConnection;
  if ( DefaultConnection )
  {
    v12 = 0LL;
    if ( a2 )
      v12 = 2 - (unsigned int)(a3 != 0);
    LOBYTE(v9) = a1 != 0;
    v11 = DirectComposition::CConnection::ForceRender(DefaultConnection, v9, 0LL, v12, a4 != 0);
    DirectComposition::CConnection::Release(v10, v13);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v11;
}
