/*
 * XREFs of ?CheckSameDevice@CAtlasTexture@@QEBAJAEBURenderTargetInfo@@@Z @ 0x1800132BC
 * Callers:
 *     ?GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180013120 (-GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasTexture::CheckSameDevice(CAtlasTexture *this, const struct RenderTargetInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // r9d
  bool v8; // al
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF
  int v14; // [rsp+54h] [rbp+1Ch]

  v12 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**((_QWORD **)this + 1) + 136LL))(
         *((_QWORD *)this + 1),
         &v13,
         &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 357;
    v10 = v4;
    goto LABEL_19;
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
    v11 = 368;
LABEL_15:
    v10 = v5;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v11);
    return v5;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 160LL))(*((_QWORD *)this + 1))
    && !*((_BYTE *)a2 + 16) )
  {
    v5 = -2147024891;
    v11 = 374;
    goto LABEL_15;
  }
  return v5;
}
