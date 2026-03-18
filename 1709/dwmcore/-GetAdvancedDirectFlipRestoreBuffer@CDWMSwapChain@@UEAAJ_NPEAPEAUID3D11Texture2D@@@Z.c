/*
 * XREFs of ?GetAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x1801B04D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x1801B05C0 (-GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CDWMSwapChain::GetAdvancedDirectFlipRestoreBuffer(
        CDWMSwapChain *this,
        char a2,
        struct ID3D11Texture2D **a3)
{
  int Buffer; // eax
  unsigned int v6; // edi
  unsigned int v7; // edx
  DWORD v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  struct ID3D11Texture2D *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( !*((_QWORD *)this + 64) )
  {
    v6 = -2003292412;
    v10 = 963;
    v8 = -2003292412;
    goto LABEL_16;
  }
  if ( a2 && *((_DWORD *)this + 132) == *((_DWORD *)this + 40) - 1 && !*((_BYTE *)this + 581) )
  {
    Buffer = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 52) + 232LL))(*((_QWORD *)this + 52), 0LL);
    v6 = Buffer;
    if ( Buffer < 0 )
    {
      v10 = 948;
LABEL_10:
      v8 = Buffer;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v10);
      return v6;
    }
    *((_BYTE *)this + 581) = 1;
  }
  if ( *((_BYTE *)this + 581) )
    v7 = 0;
  else
    v7 = *((_DWORD *)this + 132);
  Buffer = CDWMSwapChain::GetBuffer(this, v7, &v11, &v12);
  v6 = Buffer;
  if ( Buffer < 0 )
  {
    v10 = 959;
    goto LABEL_10;
  }
  *a3 = v12;
  return v6;
}
