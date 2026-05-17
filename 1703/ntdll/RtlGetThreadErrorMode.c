/*
 * XREFs of RtlGetThreadErrorMode @ 0x180081FF0
 * Callers:
 *     sub_180081F44 @ 0x180081F44 (sub_180081F44.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetThreadErrorMode()
{
  struct _TEB *v0; // rcx
  int SpareUlong0; // eax
  struct _TEB *v2; // rdx
  __int64 v3; // rax
  bool v4; // zf
  struct _TEB *v5; // rcx
  __int64 v6; // rax

  v0 = NtCurrentTeb();
  SpareUlong0 = v0->SpareUlong0;
  if ( SpareUlong0 < 0 )
    LODWORD(v0) = SpareUlong0 + (_DWORD)v0;
  v2 = NtCurrentTeb();
  v3 = (int)v2->SpareUlong0;
  if ( (int)v3 < 0 )
    v2 = (struct _TEB *)((char *)v2 + v3);
  v4 = (_DWORD)v0 == LODWORD(v2->NtTib.SubSystemTib);
  v5 = NtCurrentTeb();
  v6 = (int)v5->SpareUlong0;
  if ( v4 )
  {
    if ( (int)v6 < 0 )
      v5 = (struct _TEB *)((char *)v5 + v6);
    return LODWORD(v5->glDispatchTable[167]);
  }
  else
  {
    if ( (int)v6 < 0 )
      v5 = (struct _TEB *)((char *)v5 + v6);
    return v5->HardErrorMode;
  }
}
