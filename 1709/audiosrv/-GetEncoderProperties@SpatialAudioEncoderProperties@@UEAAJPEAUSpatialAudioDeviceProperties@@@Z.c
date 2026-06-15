/*
 * XREFs of ?GetEncoderProperties@SpatialAudioEncoderProperties@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x1800D6A80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderProperties(
        SpatialAudioEncoderProperties *this,
        struct SpatialAudioDeviceProperties *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  int v9; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  int *v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 250);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 266);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 282);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 298);
    *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)this + 314);
    *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)this + 330);
    *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)this + 346);
    *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)this + 362);
    *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)this + 378);
    *((_WORD *)a2 + 72) = *((_WORD *)this + 197);
  }
  else
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioEncoderProperties::GetEncoderProperties");
      v9 = 410;
      v13 = &v9;
      v15 = &v10;
      v14 = 4LL;
      v10 = -2147024809;
      v16 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v6, v7, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
