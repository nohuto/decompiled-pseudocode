/*
 * XREFs of ?GetDeviceTexture@CDeviceTextureImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801D4830
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceTextureImageSource::GetDeviceTexture(
        CDeviceTextureImageSource *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  unsigned int v3; // ebx
  char v7; // al
  int v8; // ecx
  int v9; // eax
  struct IDeviceTexture *v10; // rcx

  v3 = 0;
  if ( *((_DWORD *)this + 6) != *(_DWORD *)a2 || (v7 = 0, *((_DWORD *)this + 7) != *((_DWORD *)a2 + 1)) )
    v7 = 1;
  if ( !v7
    && ((v8 = *((_DWORD *)this + 8), v9 = *((_DWORD *)a2 + 2), v8 == DisplayId::None) || v8 == v9
                                                                                      || v9 == DisplayId::All) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 40LL))((char *)this - 8)
      || *((_BYTE *)a2 + 16) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2)) )
      {
        v10 = (struct IDeviceTexture *)((*((_QWORD *)this + 2) + 120LL) & -(__int64)(*((_QWORD *)this + 2) != 0LL));
        *a3 = v10;
        (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v10 + 8LL))(v10);
      }
      else
      {
        v3 = -2003304307;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8898008D, 0x7Bu);
      }
    }
    else
    {
      v3 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070005, 0x76u);
    }
  }
  else
  {
    v3 = -2003304287;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x889800A1, 0x71u);
  }
  return v3;
}
