/*
 * XREFs of ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x18008BDE4
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001A4D0 (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x1800984D0 (-CheckForDriverUpdating@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDXGIEnumeration::GetAdapterNoRefFromLuid(
        CDXGIEnumeration *this,
        struct _LUID a2,
        struct CDXGIAdapterLimited **a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // ebx
  __int64 v5; // r9
  struct CDXGIAdapterLimited **v6; // r11
  struct CDXGIAdapterLimited *i; // rcx
  __int64 v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v3 = *((_DWORD *)this + 22);
  v4 = 0;
  LODWORD(v5) = 0;
  if ( v3 )
  {
    v6 = (struct CDXGIAdapterLimited **)*((_QWORD *)this + 8);
    for ( i = *v6; ; i = v6[v5] )
    {
      v8 = *((_QWORD *)i + 42);
      if ( a2.LowPart != (_DWORD)v8 || (LOBYTE(v8) = 0, a2.HighPart != HIDWORD(v8)) )
        LOBYTE(v8) = 1;
      if ( !(_BYTE)v8 )
      {
        *a3 = i;
        return v4;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v3 )
        break;
    }
    v10 = 158;
  }
  else
  {
    v10 = 145;
  }
  v4 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1801F0798, 1u, 0x8898008D, v10);
  return v4;
}
