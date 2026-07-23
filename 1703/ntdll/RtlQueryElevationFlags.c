/*
 * XREFs of RtlQueryElevationFlags @ 0x180084D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryElevationFlags(PRTL_ELEVATION_FLAGS Flags)
{
  ULONG v1; // eax

  Flags->Flags = 0;
  v1 = Flags->Flags;
  if ( (MEMORY[0x7FFE02F0] & 2) != 0 )
    v1 = 1;
  Flags->Flags = v1;
  if ( (MEMORY[0x7FFE02F0] & 4) != 0 )
    Flags->Flags |= 2u;
  if ( (MEMORY[0x7FFE02F0] & 8) != 0 )
    Flags->Flags |= 4u;
  return 0;
}
