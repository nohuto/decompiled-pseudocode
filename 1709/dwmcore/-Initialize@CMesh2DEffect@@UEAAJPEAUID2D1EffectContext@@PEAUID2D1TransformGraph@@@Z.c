/*
 * XREFs of ?Initialize@CMesh2DEffect@@UEAAJPEAUID2D1EffectContext@@PEAUID2D1TransformGraph@@@Z @ 0x1801DAAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMesh2DEffect::Initialize(
        CMesh2DEffect *this,
        struct ID2D1EffectContext *a2,
        struct ID2D1TransformGraph *a3)
{
  signed int v5; // eax
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h]

  v11 = 0LL;
  *((_QWORD *)this + 17) = a2;
  (*(void (__fastcall **)(struct ID2D1EffectContext *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 17) + 64LL))(
         *((_QWORD *)this + 17),
         0LL,
         0LL,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 135;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, char *))(*(_QWORD *)a3 + 40LL))(a3, (char *)this + 8);
    v6 = v5;
    if ( v5 < 0 )
    {
      v10 = 137;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, __int64))(*(_QWORD *)a3 + 40LL))(a3, v11);
      v6 = v5;
      if ( v5 < 0 )
      {
        v10 = 138;
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, __int64, char *, _QWORD))(*(_QWORD *)a3 + 64LL))(
               a3,
               v11,
               (char *)this + 8,
               0LL);
        v6 = v5;
        if ( v5 < 0 )
        {
          v10 = 139;
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, char *))(*(_QWORD *)a3 + 56LL))(
                 a3,
                 (char *)this + 8);
          v6 = v5;
          if ( v5 < 0 )
          {
            v10 = 140;
          }
          else
          {
            v5 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, _QWORD, __int64, _QWORD))(*(_QWORD *)a3 + 72LL))(
                   a3,
                   0LL,
                   v11,
                   0LL);
            v6 = v5;
            if ( v5 < 0 )
            {
              v10 = 141;
            }
            else
            {
              v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, void *, __int64))(**((_QWORD **)this + 17) + 88LL))(
                     *((_QWORD *)this + 17),
                     &GUID_Mesh2D_PS,
                     &unk_18024BEB0,
                     876LL);
              v6 = v5;
              if ( v5 < 0 )
              {
                v10 = 148;
              }
              else
              {
                v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, void *, __int64))(**((_QWORD **)this + 17) + 96LL))(
                       *((_QWORD *)this + 17),
                       &GUID_Mesh2D_VS,
                       &unk_18024C230,
                       2304LL);
                v6 = v7;
                if ( v7 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x9Au);
                  goto LABEL_22;
                }
                v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD))(**((_QWORD **)this + 16) + 80LL))(
                       *((_QWORD *)this + 16),
                       &GUID_Mesh2D_PS,
                       0LL);
                v6 = v5;
                if ( v5 < 0 )
                {
                  v10 = 157;
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 48LL))(
                    *((_QWORD *)this + 16),
                    3LL);
                  v8 = *((_QWORD *)this + 16);
                  v12 = 21LL;
                  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 24LL))(v8, 0LL, 21LL);
                  v6 = v5;
                  if ( v5 >= 0 )
                    goto LABEL_22;
                  v10 = 171;
                }
              }
            }
          }
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v10);
LABEL_22:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v6;
}
