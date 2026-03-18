/*
 * XREFs of ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C0071C14
 * Callers:
 *     ReadDefaultAccelerationCurves @ 0x1C0070360 (ReadDefaultAccelerationCurves.c)
 * Callees:
 *     FastGetProfileValue @ 0x1C00735B0 (FastGetProfileValue.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CDeviceAcceleration::CreateDefaultAcceleratorCurve(
        CDeviceAcceleration *this,
        struct _UNICODE_STRING *a2)
{
  int ProfileValue; // ebx
  int v5; // eax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  size_t Size; // [rsp+28h] [rbp-80h]
  size_t Sizea; // [rsp+28h] [rbp-80h]
  _OWORD v12[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+60h] [rbp-48h]
  _OWORD v14[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v15; // [rsp+88h] [rbp-20h]

  if ( a2
    && (LODWORD(Size) = 40,
        ProfileValue = FastGetProfileValue(a2, v12, Size, 0),
        LODWORD(Sizea) = 40,
        v5 = FastGetProfileValue(a2, v14, Sizea, 0),
        ProfileValue == 40)
    && v5 == 40 )
  {
    v6 = v12[1];
    *((_OWORD *)this + 1) = v12[0];
    v7 = v13;
    *((_OWORD *)this + 2) = v6;
    v8 = v14[1];
    *((_QWORD *)this + 6) = v7;
    *(_OWORD *)((char *)this + 56) = v14[0];
    v9 = v15;
    *(_OWORD *)((char *)this + 72) = v8;
    *((_QWORD *)this + 11) = v9;
  }
  else if ( !*((_BYTE *)this + 8) )
  {
    *((_OWORD *)this + 1) = xmmword_1C0189B98;
    *((_OWORD *)this + 2) = xmmword_1C0189BA8;
    *((_QWORD *)this + 6) = qword_1C0189BB8;
    *(_OWORD *)((char *)this + 56) = xmmword_1C0189B70;
    *(_OWORD *)((char *)this + 72) = xmmword_1C0189B80;
    *((_QWORD *)this + 11) = qword_1C0189B90;
  }
  *((_BYTE *)this + 8) = 1;
}
