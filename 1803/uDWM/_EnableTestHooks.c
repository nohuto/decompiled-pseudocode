/*
 * XREFs of _EnableTestHooks @ 0x180048ADC
 * Callers:
 *     _DisableIndependentStartTiles @ 0x180036EA0 (_DisableIndependentStartTiles.c)
 * Callees:
 *     <none>
 */

bool EnableTestHooks()
{
  int v0; // ecx
  NTSTATUS v1; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  int SystemInformation; // [rsp+38h] [rbp+10h] BYREF
  char v5; // [rsp+3Ch] [rbp+14h]

  v0 = dword_1800CA260;
  if ( !dword_1800CA260 )
  {
    SystemInformation = 8;
    v1 = NtQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength);
    v0 = 2;
    if ( v1 >= 0 && (v5 & 2) != 0 )
      v0 = 1;
    dword_1800CA260 = v0;
  }
  return v0 == 1;
}
