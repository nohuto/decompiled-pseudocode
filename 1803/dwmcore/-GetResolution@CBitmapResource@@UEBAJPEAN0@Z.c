/*
 * XREFs of ?GetResolution@CBitmapResource@@UEBAJPEAN0@Z @ 0x1801B15B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetResolution(CBitmapResource *this, double *a2, double *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx

  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, double *, double *))(*(_QWORD *)v3 + 40LL))(v3, a2, a3);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x7Au);
  }
  else
  {
    v5 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292404, 0x7Eu);
  }
  return v5;
}
