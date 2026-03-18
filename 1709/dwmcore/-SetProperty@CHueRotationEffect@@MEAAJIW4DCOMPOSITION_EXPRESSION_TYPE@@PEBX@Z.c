/*
 * XREFs of ?SetProperty@CHueRotationEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180181720
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHueRotationEffect::SetProperty(_QWORD *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  float *v6; // rdi
  __int64 v7; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_8;
  v5 = *a4;
  v6 = (float *)(a1 + 22);
  if ( a2 )
    v6 = 0LL;
  if ( v6 )
  {
    if ( *v6 != v5 )
    {
      v7 = *a1;
      *v6 = v5;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v7 + 64))(a1, 0LL, 0LL);
    }
  }
  else
  {
LABEL_8:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x2Fu);
  }
  return v4;
}
