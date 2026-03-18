/*
 * XREFs of ?SetProperty@CAffineTransform2DEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B0E10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAffineTransform2DEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // ebx
  float *v13; // rcx
  __int64 v14; // rax

  if ( a3 != 18 )
    goto LABEL_17;
  v5 = *a4;
  v6 = a2 - 4;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 1 )
            {
LABEL_17:
              v12 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x46u);
              return v12;
            }
            v11 = 204LL;
          }
          else
          {
            v11 = 200LL;
          }
        }
        else
        {
          v11 = 196LL;
        }
      }
      else
      {
        v11 = 192LL;
      }
    }
    else
    {
      v11 = 188LL;
    }
  }
  else
  {
    v11 = 184LL;
  }
  v12 = 0;
  v13 = (float *)((char *)a1 + v11);
  if ( !v13 )
    goto LABEL_17;
  if ( *v13 != v5 )
  {
    v14 = *a1;
    *v13 = v5;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v14 + 64))(a1, 0LL, 0LL);
  }
  return v12;
}
