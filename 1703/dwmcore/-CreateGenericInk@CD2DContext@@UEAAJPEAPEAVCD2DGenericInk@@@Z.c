/*
 * XREFs of ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x180197DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkPartner@@PEAPEAV1@@Z @ 0x18019E9EC (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkPartner@@PEAPEAV1@.c)
 */

__int64 __fastcall CD2DContext::CreateGenericInk(CD2DContext *this, struct CD2DGenericInk **a2)
{
  unsigned int v4; // ebx
  int v5; // r9d
  int (*ProcAddress)(struct ID2D1DeviceContext *, struct IDCompositionDirectInkPartner **); // rax
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct IDCompositionDirectInkPartner *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  if ( CGenericInk::s_hDirectInkModule )
  {
    ProcAddress = CGenericInk::s_lpCreateDirectInkPartner;
LABEL_8:
    if ( !ProcAddress )
    {
      v4 = -2147467261;
      v9 = 664;
      goto LABEL_4;
    }
    goto LABEL_10;
  }
  CGenericInk::s_hDirectInkModule = LoadLibraryW(L"Windows.UI.Input.Inking.dll");
  if ( !CGenericInk::s_hDirectInkModule )
  {
    v4 = -2147024890;
    v9 = 652;
LABEL_4:
    v5 = v4;
    goto LABEL_15;
  }
  ProcAddress = CGenericInk::s_lpCreateDirectInkPartner;
  if ( !CGenericInk::s_lpCreateDirectInkPartner )
  {
    ProcAddress = (int (*)(struct ID2D1DeviceContext *, struct IDCompositionDirectInkPartner **))GetProcAddress(
                                                                                                   CGenericInk::s_hDirectInkModule,
                                                                                                   "CreateDirectInkPartner");
    CGenericInk::s_lpCreateDirectInkPartner = ProcAddress;
    goto LABEL_8;
  }
LABEL_10:
  v7 = ((__int64 (__fastcall *)(_QWORD, struct IDCompositionDirectInkPartner **))ProcAddress)(
         *((_QWORD *)this + 22),
         &v10);
  v4 = v7;
  if ( v7 < 0 )
  {
    v9 = 667;
  }
  else
  {
    v7 = CD2DGenericInk::Create(*((struct CD2DResourceManager **)this + 18), v10, a2);
    v4 = v7;
    if ( v7 >= 0 )
      goto LABEL_16;
    v9 = 668;
  }
  v5 = v7;
LABEL_15:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v9);
LABEL_16:
  if ( v10 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkPartner *))(*(_QWORD *)v10 + 16LL))(v10);
  return v4;
}
