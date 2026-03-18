/*
 * XREFs of ?EnsureDXGISurface@CD3DSurface@@AEAAJXZ @ 0x18002DE6C
 * Callers:
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18002DFB0 (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::EnsureDXGISurface(CD3DSurface *this)
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
  if ( !(*(unsigned __int8 (__fastcall **)(CD3DSurface *))(v1 + 32))(this) )
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x365u);
    goto LABEL_5;
  }
  if ( *((_QWORD *)this + 26) )
    goto LABEL_5;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 16);
  v5 = **v4;
  if ( *((_DWORD *)this + 38) == 1 )
  {
    v6 = v5(v4, &GUID_4ae63092_6327_4c1b_80ae_bfe12ea32b86, (char *)this + 208);
    v2 = v6;
    if ( v6 >= 0 )
      goto LABEL_5;
    v8 = 876;
  }
  else
  {
    v6 = v5(v4, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (char *)&v9);
    v2 = v6;
    if ( v6 < 0 )
    {
      v8 = 884;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 96LL))(
             v9,
             *((unsigned int *)this + 34),
             &v10);
      v2 = v6;
      if ( v6 >= 0 )
      {
        *((_QWORD *)this + 26) = v10;
        goto LABEL_5;
      }
      v8 = 887;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v8);
LABEL_5:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v2;
}
