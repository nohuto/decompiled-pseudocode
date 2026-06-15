/*
 * XREFs of ?IsBackgroundAudioTask@CProcess@@UEAAHXZ @ 0x180019C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsBackgroundAudioTask(CProcess *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *((_QWORD *)this + 68);
  if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *((_QWORD *)this + 68) )
    v1 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *((_QWORD *)this + 69);
  return v1 != 0;
}
