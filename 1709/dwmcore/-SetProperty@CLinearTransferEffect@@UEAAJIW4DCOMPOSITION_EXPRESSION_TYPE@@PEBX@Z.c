/*
 * XREFs of ?SetProperty@CLinearTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180182150
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearTransferEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v6; // xmm1_4
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rax
  float *v14; // rcx
  __int64 v15; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_21;
  v6 = *a4;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 2;
              if ( v12 )
              {
                if ( v12 != 1 )
                {
LABEL_21:
                  v4 = -2147024809;
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xB0u);
                  return v4;
                }
                v13 = 216LL;
              }
              else
              {
                v13 = 212LL;
              }
            }
            else
            {
              v13 = 204LL;
            }
          }
          else
          {
            v13 = 200LL;
          }
        }
        else
        {
          v13 = 192LL;
        }
      }
      else
      {
        v13 = 188LL;
      }
    }
    else
    {
      v13 = 180LL;
    }
  }
  else
  {
    v13 = 176LL;
  }
  v14 = (float *)((char *)a1 + v13);
  if ( !v14 )
    goto LABEL_21;
  if ( *v14 != v6 )
  {
    v15 = *a1;
    *v14 = v6;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v15 + 64))(a1, 0LL, 0LL);
  }
  return v4;
}
