/*
 * XREFs of ?FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ @ 0x1C012C5D8
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C012D7E4 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall DelayZonePalmRejection::FreeDelayZoneList(DelayZonePalmRejection *this)
{
  char *v1; // rdi
  char *v2; // rbx
  char *v3; // rax
  __int64 v4; // rcx
  char **v5; // rdx

  v1 = (char *)DelayZonePalmRejection::s_instance + 72;
  v2 = (char *)*((_QWORD *)DelayZonePalmRejection::s_instance + 9);
  while ( v2 != v1 )
  {
    v3 = *(char **)v2;
    v4 = (__int64)v2;
    v2 = v3;
    if ( *((_QWORD *)v3 + 1) != v4 || (v5 = *(char ***)(v4 + 8), *v5 != (char *)v4) )
      __fastfail(3u);
    *v5 = v3;
    *((_QWORD *)v3 + 1) = v5;
    Win32FreePool(v4);
  }
}
