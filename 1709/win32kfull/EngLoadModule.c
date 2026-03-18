/*
 * XREFs of EngLoadModule @ 0x1C0269470
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C0268990 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 */

HANDLE __stdcall EngLoadModule(LPWSTR pwsz)
{
  return (HANDLE)LoadModuleWorkHorse((char *)pwsz, 0);
}
