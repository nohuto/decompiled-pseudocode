/*
 * XREFs of ?SetProperty@CBrightnessEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B1730
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrightnessEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // ebx
  float *v11; // rcx
  __int64 v12; // rax

  if ( a3 != 18 )
    goto LABEL_13;
  v5 = *a4;
  v6 = a2 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
LABEL_13:
          v10 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4Fu);
          return v10;
        }
        v9 = 188LL;
      }
      else
      {
        v9 = 184LL;
      }
    }
    else
    {
      v9 = 180LL;
    }
  }
  else
  {
    v9 = 176LL;
  }
  v10 = 0;
  v11 = (float *)((char *)a1 + v9);
  if ( !v11 )
    goto LABEL_13;
  if ( *v11 != v5 )
  {
    v12 = *a1;
    *v11 = v5;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v12 + 64))(a1, 0LL, 0LL);
  }
  return v10;
}
