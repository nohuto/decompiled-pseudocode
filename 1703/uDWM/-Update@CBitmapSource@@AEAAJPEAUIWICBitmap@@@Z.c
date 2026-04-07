/*
 * XREFs of ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18001E7A4
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A44C (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18001E6F4 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180044480 (-Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Update(CBitmapSource *this, struct IWICBitmap *a2)
{
  __int64 v4; // rcx
  struct IWICBitmapVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v11; // eax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 12) = a2;
  if ( a2 )
  {
    ((void (__fastcall *)(struct IWICBitmap *))a2->lpVtbl->AddRef)(a2);
    lpVtbl = a2->lpVtbl;
    v12 = 0;
    v13 = 0;
    v6 = ((__int64 (__fastcall *)(struct IWICBitmap *, int *, int *))lpVtbl->GetSize)(a2, &v12, &v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x171u);
    }
    else
    {
      *((_DWORD *)this + 6) = v12;
      *((_DWORD *)this + 7) = v13;
      v8 = ((__int64 (__fastcall *)(struct IWICBitmap *))a2->lpVtbl->SetResolution)(a2);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x178u);
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IWICBitmap *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 280LL))(
               *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
               *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
               a2);
        v7 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x17Bu);
      }
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 280LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
            0LL);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x181u);
  }
  return v7;
}
