/*
 * XREFs of ?DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z @ 0x18001F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F4EC (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcBase::DisconnectObject(IUnknown *this, const struct _GUID *a2)
{
  unsigned int v2; // edi
  int FTM; // ebx
  void *v4; // rcx
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v2 = (unsigned int)a2;
  FTM = CFTMCrossProcBase::_GetFTM(this, a2, &v6);
  if ( FTM >= 0 )
    FTM = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, v2);
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (unsigned int)FTM;
}
