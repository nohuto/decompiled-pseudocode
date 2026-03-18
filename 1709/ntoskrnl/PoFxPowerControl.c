/*
 * XREFs of PoFxPowerControl @ 0x14023D690
 * Callers:
 *     <none>
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400FD8A0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 *     PopPluginRequestPowerControl @ 0x1402401AC (PopPluginRequestPowerControl.c)
 */

__int64 __fastcall PoFxPowerControl(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  struct _IO_REMOVE_LOCK *v7; // rsi
  NTSTATUS v12; // ebx
  __int64 v13; // rcx

  v7 = (struct _IO_REMOVE_LOCK *)(a1 + 216);
  v12 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 216), 0LL, &File, 1u, 0x20u);
  if ( v12 >= 0 )
  {
    v12 = -1073741637;
    v13 = *(_QWORD *)(a1 + 56);
    if ( a7 )
      *a7 = 0LL;
    if ( *(_BYTE *)(v13 + 124) )
      v12 = PopPluginRequestPowerControl(*(_QWORD *)(v13 + 32), a2, a3, a4, a5, a6, (__int64)a7);
    IoReleaseRemoveLockEx(v7, 0LL, 0x20u);
  }
  return (unsigned int)v12;
}
