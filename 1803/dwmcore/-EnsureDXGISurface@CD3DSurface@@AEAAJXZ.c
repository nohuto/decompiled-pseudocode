/*
 * XREFs of ?EnsureDXGISurface@CD3DSurface@@AEAAJXZ @ 0x180042B00
 * Callers:
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800430B0 (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::EnsureDXGISurface(CD3DSurface *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall *v6)(_QWORD, GUID *, char *); // rax
  int v7; // eax
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
    goto LABEL_3;
  }
  if ( *((_QWORD *)this + 26) )
    goto LABEL_3;
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 16);
  v6 = **v5;
  if ( *((_DWORD *)this + 38) == 1 )
  {
    v7 = v6(v5, &GUID_4ae63092_6327_4c1b_80ae_bfe12ea32b86, (char *)this + 208);
    v2 = v7;
    if ( v7 >= 0 )
      goto LABEL_3;
    v8 = 876;
  }
  else
  {
    v7 = v6(v5, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (char *)&v9);
    v2 = v7;
    if ( v7 < 0 )
    {
      v8 = 884;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 96LL))(
             v9,
             *((unsigned int *)this + 34),
             &v10);
      v2 = v7;
      if ( v7 >= 0 )
      {
        *((_QWORD *)this + 26) = v10;
        goto LABEL_3;
      }
      v8 = 887;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v8);
LABEL_3:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v2;
}
