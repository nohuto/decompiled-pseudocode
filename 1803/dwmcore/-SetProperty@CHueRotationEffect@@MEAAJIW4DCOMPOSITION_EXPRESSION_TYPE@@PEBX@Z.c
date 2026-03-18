/*
 * XREFs of ?SetProperty@CHueRotationEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B6870
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHueRotationEffect::SetProperty(_QWORD *a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  float *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rax

  if ( a3 != 18 )
    goto LABEL_8;
  v4 = *a4;
  v5 = (float *)(a1 + 22);
  v6 = 0;
  if ( a2 )
    v5 = 0LL;
  if ( v5 )
  {
    if ( *v5 != v4 )
    {
      v7 = *a1;
      *v5 = v4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v7 + 64))(a1, 0LL, 0LL);
    }
  }
  else
  {
LABEL_8:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2Fu);
  }
  return v6;
}
