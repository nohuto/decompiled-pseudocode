/*
 * XREFs of ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x180079428
 * Callers:
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1801C20F8 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1801C2290 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(HKEY *a1)
{
  HKEY v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = RegCloseKey(v1);
  return (int)v1;
}
