/*
 * XREFs of ?SetD2DEffectProperties@CTurbulenceEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1801798B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTurbulenceEffect::SetD2DEffectProperties(CTurbulenceEffect *this, struct ID2D1Effect *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  int v7; // eax
  __int64 (__fastcall *v8)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 52), (__m128)*((unsigned int *)this + 53)).m128_u64[0];
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         &v15,
         8);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2Fu);
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
    v15 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 54), (__m128)*((unsigned int *)this + 55)).m128_u64[0];
    v7 = v6(a2, 2LL, 0LL, &v15, 8);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x34u);
    }
    else
    {
      v8 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
      v15 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 56), (__m128)*((unsigned int *)this + 57)).m128_u64[0];
      v9 = v8(a2, 1LL, 0LL, &v15, 8);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x39u);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                3LL,
                0LL,
                (char *)this + 232,
                4);
        v5 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3Eu);
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                  a2,
                  4LL,
                  0LL,
                  (char *)this + 236,
                  4);
          v5 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x43u);
          }
          else
          {
            v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    5LL,
                    0LL,
                    (char *)this + 240,
                    4);
            v5 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x48u);
            }
            else
            {
              v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      6LL,
                      0LL,
                      (char *)this + 244,
                      4);
              v5 = v13;
              if ( v13 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x4Du);
            }
          }
        }
      }
    }
  }
  return v5;
}
