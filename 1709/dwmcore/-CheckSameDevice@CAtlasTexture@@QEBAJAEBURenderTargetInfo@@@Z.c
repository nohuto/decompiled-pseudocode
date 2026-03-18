/*
 * XREFs of ?CheckSameDevice@CAtlasTexture@@QEBAJAEBURenderTargetInfo@@@Z @ 0x18008BA24
 * Callers:
 *     ?GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008EE80 (-GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasTexture::CheckSameDevice(CAtlasTexture *this, const struct RenderTargetInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // r9d
  bool v8; // al
  DWORD v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF
  int v14; // [rsp+54h] [rbp+1Ch]

  v12 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**((_QWORD **)this + 1) + 88LL))(
         *((_QWORD *)this + 1),
         &v13,
         &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 359;
    v10 = v4;
    goto LABEL_20;
  }
  v6 = v12;
  v7 = *(_DWORD *)a2;
  if ( v12 == DisplayId::All )
    v6 = DisplayId::None;
  v12 = v6;
  v8 = v13 != v7 || v14 != *((_DWORD *)a2 + 1);
  if ( v8 || v6 != DisplayId::None && v6 != *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 2) != DisplayId::All )
  {
    v5 = -2003304287;
    v11 = 370;
LABEL_16:
    v10 = v5;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, v11);
    return v5;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 152LL))(*((_QWORD *)this + 1))
    && !*((_BYTE *)a2 + 16) )
  {
    v5 = -2147024891;
    v11 = 376;
    goto LABEL_16;
  }
  return v5;
}
