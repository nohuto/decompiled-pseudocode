/*
 * XREFs of MiUnloadApproved @ 0x140604EC0
 * Callers:
 *     MiDereferenceImports @ 0x140604E38 (MiDereferenceImports.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiSessionLookupImage @ 0x14012B754 (MiSessionLookupImage.c)
 *     RtlFindExportedRoutineByName @ 0x140519F90 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiUnloadApproved(__int64 a1)
{
  int SystemRegionType; // eax
  __int64 v2; // r8
  void *v3; // r9
  unsigned int v4; // r10d
  __int16 v5; // ax
  _QWORD *v7; // rax
  int v8; // ecx
  unsigned int v9; // ebx
  int (*ExportedRoutineByName)(void); // rax

  if ( *(_QWORD *)(a1 + 136) == 1LL )
    return 0LL;
  SystemRegionType = MiGetSystemRegionType(*(_QWORD *)(a1 + 48));
  if ( SystemRegionType == v4 )
  {
    v7 = MiSessionLookupImage((unsigned __int64)v3);
    v8 = *((_DWORD *)v7 + 15);
    if ( v8 != v4 )
    {
      *((_DWORD *)v7 + 15) = v8 - 1;
      return 0LL;
    }
  }
  else
  {
    v5 = *(_WORD *)(v2 + 108);
    if ( v5 != (_WORD)v4 )
    {
      *(_WORD *)(v2 + 108) = v5 - v4;
      return 0LL;
    }
  }
  v9 = 0;
  if ( *(_QWORD *)(v2 + 272) )
    return v4;
  ExportedRoutineByName = (int (*)(void))RtlFindExportedRoutineByName(v3, "DllUnload");
  if ( !ExportedRoutineByName )
    return 0LL;
  LOBYTE(v9) = ExportedRoutineByName() >= 0;
  return v9;
}
