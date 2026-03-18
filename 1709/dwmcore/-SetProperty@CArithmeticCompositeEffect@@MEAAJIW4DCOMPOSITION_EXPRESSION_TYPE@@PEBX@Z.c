/*
 * XREFs of ?SetProperty@CArithmeticCompositeEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180180320
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CArithmeticCompositeEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v6; // xmm1_4
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  float *v11; // rcx
  __int64 v12; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_13;
  v6 = *a4;
  v7 = a2 - 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
LABEL_13:
          v4 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x4Au);
          return v4;
        }
        v10 = 188LL;
      }
      else
      {
        v10 = 184LL;
      }
    }
    else
    {
      v10 = 180LL;
    }
  }
  else
  {
    v10 = 176LL;
  }
  v11 = (float *)((char *)a1 + v10);
  if ( !v11 )
    goto LABEL_13;
  if ( *v11 != v6 )
  {
    v12 = *a1;
    *v11 = v6;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v12 + 64))(a1, 0LL, 0LL);
  }
  return v4;
}
