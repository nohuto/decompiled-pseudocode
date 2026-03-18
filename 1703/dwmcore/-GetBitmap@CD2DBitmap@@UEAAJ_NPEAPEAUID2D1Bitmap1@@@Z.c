/*
 * XREFs of ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1800268B0
 * Callers:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18007A740 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::GetBitmap(CD2DBitmap *this, char a2, struct ID2D1Bitmap1 **a3)
{
  int v3; // ebx
  struct ID2D1Bitmap1 *v6; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int64 v10; // rcx
  int v11; // eax
  _OWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    if ( !*((_QWORD *)this + 7) )
    {
      v8 = *((_QWORD *)this + 6);
      v9 = *((_OWORD *)this + 8);
      v10 = *(_QWORD *)(*((_QWORD *)this - 10) + 24LL);
      v12[0] = *((_OWORD *)this + 7);
      DWORD1(v12[0]) = 3;
      v12[1] = v9;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *))(**(_QWORD **)(v10 + 184) + 96LL))(
              *(_QWORD *)(v10 + 184),
              v8,
              v12);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x23Au);
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xBCu);
      return (unsigned int)v3;
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
    v6 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 7);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
    v6 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 6);
  }
  *a3 = v6;
  return (unsigned int)v3;
}
