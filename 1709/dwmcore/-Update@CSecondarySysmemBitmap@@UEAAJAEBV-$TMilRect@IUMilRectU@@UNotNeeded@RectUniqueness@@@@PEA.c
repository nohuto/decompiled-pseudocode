/*
 * XREFs of ?Update@CSecondarySysmemBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800875E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x180088B6C (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180088BB0 (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Update(CSecondaryBitmap *this, struct MilRectU *a2, __int64 a3)
{
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v8; // r14
  int valid; // eax
  unsigned int v10; // ebx
  DWORD v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-58h]
  _BYTE v14[16]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF

  v15 = *(_OWORD *)a2;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(this, &v15)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v10 = -2147024809;
    v13 = 122;
    goto LABEL_15;
  }
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 24LL))(a3, &v15);
  v7 = *((_DWORD *)this + 27);
  if ( *v6 != v7 )
  {
    v10 = -2003292288;
    v13 = 127;
LABEL_15:
    v12 = v10;
    goto LABEL_16;
  }
  v8 = *((_DWORD *)this + 26) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * (GetPixelFormatSize(v7) >> 3);
  if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 40LL))(a3, v14) != DisplayId::None
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 48LL))(a3) )
  {
    memset_0((void *)(v8 + *((_QWORD *)this + 15)), 0, *((unsigned int *)this + 32) - v8);
    *((_BYTE *)this + 132) = 1;
  }
  else
  {
    valid = (*(__int64 (__fastcall **)(__int64, struct MilRectU *, _QWORD, _QWORD, __int64))(*(_QWORD *)a3 + 56LL))(
              a3,
              a2,
              *((unsigned int *)this + 26),
              (unsigned int)(*((_DWORD *)this + 32) - v8),
              v8 + *((_QWORD *)this + 15));
    v10 = valid;
    if ( valid < 0 )
    {
      v13 = 145;
LABEL_12:
      v12 = valid;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, v13);
      return v10;
    }
  }
  valid = CSecondaryBitmap::AddValidRect(this, a2);
  v10 = valid;
  if ( valid < 0 )
  {
    v13 = 154;
    goto LABEL_12;
  }
  return v10;
}
