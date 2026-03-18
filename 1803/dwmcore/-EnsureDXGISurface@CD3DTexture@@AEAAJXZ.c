/*
 * XREFs of ?EnsureDXGISurface@CD3DTexture@@AEAAJXZ @ 0x1801E409C
 * Callers:
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E3FB4 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::EnsureDXGISurface(CD3DTexture *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall *v5)(_QWORD, GUID *, char *); // rax
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v9 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(CD3DTexture *))(v1 + 32))(this) )
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x27Cu);
    goto LABEL_13;
  }
  if ( !*((_QWORD *)this + 26) )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 15);
    v5 = **v4;
    if ( *((_DWORD *)this + 35) == 1 )
    {
      v6 = v5(v4, &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, (char *)this + 208);
      v2 = v6;
      if ( v6 >= 0 )
        goto LABEL_13;
      v8 = 644;
    }
    else
    {
      v6 = v5(v4, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (char *)&v9);
      v2 = v6;
      if ( v6 < 0 )
      {
        v8 = 655;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 96LL))(
               v9,
               *((unsigned int *)this + 43),
               &v10);
        v2 = v6;
        if ( v6 >= 0 )
        {
          *((_QWORD *)this + 26) = v10;
          goto LABEL_13;
        }
        v8 = 658;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v8);
  }
LABEL_13:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v2;
}
