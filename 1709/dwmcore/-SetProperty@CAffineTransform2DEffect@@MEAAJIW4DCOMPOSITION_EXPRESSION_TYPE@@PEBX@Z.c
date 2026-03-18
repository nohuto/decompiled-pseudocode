/*
 * XREFs of ?SetProperty@CAffineTransform2DEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18017FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAffineTransform2DEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v6; // xmm1_4
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rax
  float *v13; // rcx
  __int64 v14; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_17;
  v6 = *a4;
  v7 = a2 - 4;
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
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 != 1 )
            {
LABEL_17:
              v4 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x46u);
              return v4;
            }
            v12 = 204LL;
          }
          else
          {
            v12 = 200LL;
          }
        }
        else
        {
          v12 = 196LL;
        }
      }
      else
      {
        v12 = 192LL;
      }
    }
    else
    {
      v12 = 188LL;
    }
  }
  else
  {
    v12 = 184LL;
  }
  v13 = (float *)((char *)a1 + v12);
  if ( !v13 )
    goto LABEL_17;
  if ( *v13 != v6 )
  {
    v14 = *a1;
    *v13 = v6;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v14 + 64))(a1, 0LL, 0LL);
  }
  return v4;
}
