/*
 * XREFs of ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C013374C
 * Callers:
 *     ReadDefaultAccelerationCurves @ 0x1C012E850 (ReadDefaultAccelerationCurves.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     FastGetProfileValue @ 0x1C00A84E0 (FastGetProfileValue.c)
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
  _OWORD v10[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v11; // [rsp+60h] [rbp-48h]
  _OWORD v12[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v13; // [rsp+88h] [rbp-20h]

  if ( a2
    && (ProfileValue = FastGetProfileValue(a2, 0xCu, (const WCHAR *)0x266, 0LL, v10, 0x28u, 0),
        v5 = FastGetProfileValue(a2, 0xCu, (const WCHAR *)0x267, 0LL, v12, 0x28u, 0),
        ProfileValue == 40)
    && v5 == 40 )
  {
    v6 = v10[1];
    *((_OWORD *)this + 1) = v10[0];
    v7 = v11;
    *((_OWORD *)this + 2) = v6;
    v8 = v12[1];
    *((_QWORD *)this + 6) = v7;
    *(_OWORD *)((char *)this + 56) = v12[0];
    v9 = v13;
    *(_OWORD *)((char *)this + 72) = v8;
    *((_QWORD *)this + 11) = v9;
  }
  else if ( !*((_BYTE *)this + 8) )
  {
    *((_OWORD *)this + 1) = xmmword_1C019FFA0;
    *((_OWORD *)this + 2) = xmmword_1C019FFB0;
    *((_QWORD *)this + 6) = qword_1C019FFC0;
    *(_OWORD *)((char *)this + 56) = xmmword_1C019FF78;
    *(_OWORD *)((char *)this + 72) = xmmword_1C019FF88;
    *((_QWORD *)this + 11) = qword_1C019FF98;
  }
  *((_BYTE *)this + 8) = 1;
}
