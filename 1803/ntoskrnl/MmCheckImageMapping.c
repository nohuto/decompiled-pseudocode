/*
 * XREFs of MmCheckImageMapping @ 0x1405BE128
 * Callers:
 *     PspLocateInPEManifest @ 0x1405BD2B8 (PspLocateInPEManifest.c)
 *     MiInitializeWowPeb @ 0x1405BDD10 (MiInitializeWowPeb.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 */

__int64 __fastcall MmCheckImageMapping(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rax
  bool *v3; // r8

  v1 = *(_QWORD *)(a1 + 952);
  if ( !v1 )
    return 3221225477LL;
  v2 = MiSectionControlArea(v1);
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
    return 3221225477LL;
  *v3 = *(_QWORD *)(v2 + 144) != 0LL;
  return 0LL;
}
