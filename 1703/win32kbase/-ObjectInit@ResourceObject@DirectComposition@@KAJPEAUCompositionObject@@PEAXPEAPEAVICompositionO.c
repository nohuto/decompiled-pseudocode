/*
 * XREFs of ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C000DF60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0013D40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0014A94 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  char *v3; // rbx
  int v5; // esi
  DirectComposition::CConnection *DefaultConnection; // rax
  int SystemResource; // edi

  v3 = (char *)a1 + 24;
  v5 = (int)a2;
  if ( a1 != (struct CompositionObject *)-24LL )
  {
    memset((char *)a1 + 24, 0, 0x28uLL);
    *(_QWORD *)v3 = &DirectComposition::CSharedSystemResource::`vftable';
    *((_DWORD *)v3 + 6) = 0;
  }
  *a3 = (struct ICompositionObject *)v3;
  *((_DWORD *)v3 + 6) = 0;
  *((_DWORD *)v3 + 7) = 0;
  *((_DWORD *)v3 + 8) = 0;
  KeEnterCriticalRegion();
  *((_DWORD *)v3 + 3) = v5;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  *((_QWORD *)v3 + 2) = DefaultConnection;
  if ( DefaultConnection )
    SystemResource = DirectComposition::CConnection::CreateSystemResource(
                       DefaultConnection,
                       *((_DWORD *)v3 + 3),
                       (struct ResourceHandle *)(v3 + 24));
  else
    SystemResource = -1073741790;
  if ( SystemResource >= 0 )
    v3[8] = 1;
  KeLeaveCriticalRegion();
  return (unsigned int)SystemResource;
}
