/*
 * XREFs of MiUnloadApproved @ 0x14059D710
 * Callers:
 *     MiDereferenceImports @ 0x14059D690 (MiDereferenceImports.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiSessionLookupImage @ 0x1400D5620 (MiSessionLookupImage.c)
 *     RtlFindExportedRoutineByName @ 0x1404DC270 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiUnloadApproved(__int64 a1)
{
  int SystemRegionType; // eax
  __int64 v3; // r8
  void *v4; // r9
  unsigned int v5; // r10d
  __int16 v6; // ax
  _QWORD *v7; // rax
  int v8; // ecx
  unsigned int v9; // ebx
  int (*ExportedRoutineByName)(void); // rax

  if ( *(_QWORD *)(a1 + 136) == 1LL )
    return 0LL;
  SystemRegionType = MiGetSystemRegionType(*(_QWORD *)(a1 + 48));
  if ( SystemRegionType == v5 )
  {
    v7 = MiSessionLookupImage((unsigned __int64)v4);
    v8 = *((_DWORD *)v7 + 15);
    if ( v8 != v5 )
    {
      *((_DWORD *)v7 + 15) = v8 - 1;
      return 0LL;
    }
  }
  else
  {
    v6 = *(_WORD *)(v3 + 108);
    if ( v6 != (_WORD)v5 )
    {
      *(_WORD *)(v3 + 108) = v6 - v5;
      return 0LL;
    }
  }
  v9 = 0;
  if ( *(_QWORD *)(v3 + 248) )
    return v5;
  ExportedRoutineByName = (int (*)(void))RtlFindExportedRoutineByName(v4, "DllUnload");
  if ( !ExportedRoutineByName )
    return 0LL;
  LOBYTE(v9) = ExportedRoutineByName() >= 0;
  return v9;
}
