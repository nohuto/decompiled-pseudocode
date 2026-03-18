/*
 * XREFs of ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C005EA54
 * Callers:
 *     ReadDefaultAccelerationCurves @ 0x1C009B5C0 (ReadDefaultAccelerationCurves.c)
 * Callees:
 *     FastGetProfileValue @ 0x1C005FF30 (FastGetProfileValue.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CDeviceAcceleration::CreateDefaultAcceleratorCurve(
        CDeviceAcceleration *this,
        struct _UNICODE_STRING *a2)
{
  int ProfileValue; // ebx
  int v5; // eax
  __int128 v6; // [rsp+40h] [rbp-68h]
  __int128 v7; // [rsp+50h] [rbp-58h]
  __int64 v8; // [rsp+60h] [rbp-48h]
  __int128 v9; // [rsp+68h] [rbp-40h]
  __int128 v10; // [rsp+78h] [rbp-30h]
  __int64 v11; // [rsp+88h] [rbp-20h]

  if ( a2
    && (ProfileValue = FastGetProfileValue(a2, 12LL, 614LL),
        v5 = FastGetProfileValue(a2, 12LL, 615LL),
        ProfileValue == 40)
    && v5 == 40 )
  {
    *((_OWORD *)this + 1) = v6;
    *((_OWORD *)this + 2) = v7;
    *((_QWORD *)this + 6) = v8;
    *(_OWORD *)((char *)this + 56) = v9;
    *(_OWORD *)((char *)this + 72) = v10;
    *((_QWORD *)this + 11) = v11;
  }
  else if ( !*((_BYTE *)this + 8) )
  {
    *((_OWORD *)this + 1) = xmmword_1C018E718;
    *((_OWORD *)this + 2) = xmmword_1C018E728;
    *((_QWORD *)this + 6) = qword_1C018E738;
    *(_OWORD *)((char *)this + 56) = xmmword_1C018E6F0;
    *(_OWORD *)((char *)this + 72) = xmmword_1C018E700;
    *((_QWORD *)this + 11) = qword_1C018E710;
  }
  *((_BYTE *)this + 8) = 1;
}
