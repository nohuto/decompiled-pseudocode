/*
 * XREFs of ?PreRender@CSpatialVisualContent@@QEAAJXZ @ 0x1801C218C
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpatialVisualContent::PreRender(CSpatialVisualContent *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  char v4; // bp
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v1 = (_QWORD *)((char *)this + 64);
  v3 = *((_QWORD *)this + 8);
  v4 = 0;
  if ( v3 )
  {
LABEL_7:
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) )
    {
      v4 = 1;
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 40LL))(*v1);
    }
    goto LABEL_9;
  }
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 144LL);
  *v1 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v5 + 24LL))(v5, *((_QWORD *)this + 7), v1);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147024809 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x47u);
    return v6;
  }
  v3 = *v1;
  if ( *v1 )
  {
    v4 = 1;
    goto LABEL_7;
  }
LABEL_9:
  if ( v4 )
    (*(void (__fastcall **)(CSpatialVisualContent *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0;
}
