/*
 * XREFs of sub_1405D49A0 @ 0x1405D49A0
 * Callers:
 *     sub_1405E9CE0 @ 0x1405E9CE0 (sub_1405E9CE0.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExpHwidAuthenticateHardwareId @ 0x1405D415C (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x1405D4308 (ExpHwidGetDeviceProperties.c)
 *     ExpHwidProcessDevice @ 0x1405D4B18 (ExpHwidProcessDevice.c)
 *     sub_1405E31F0 @ 0x1405E31F0 (sub_1405E31F0.c)
 *     PiPnpFreePdoDeviceList @ 0x1405E3328 (PiPnpFreePdoDeviceList.c)
 *     ExpHwidProcessInterface @ 0x1405E34B0 (ExpHwidProcessInterface.c)
 *     sub_1405E3D64 @ 0x1405E3D64 (sub_1405E3D64.c)
 *     sub_1405E3DD8 @ 0x1405E3DD8 (sub_1405E3DD8.c)
 */

__int64 __fastcall sub_1405D49A0(_QWORD *a1, _DWORD *a2)
{
  int v4; // edx
  int v5; // ebx
  _DWORD *v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 (__fastcall **v9)(); // rsi
  __int64 (__fastcall *v10)(); // rax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-59h] BYREF
  int v14; // [rsp+38h] [rbp-51h]
  _BYTE v15[12]; // [rsp+3Ch] [rbp-4Dh]
  PVOID v16; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v17[96]; // [rsp+50h] [rbp-39h] BYREF

  sub_1405E3DD8(v17);
  v16 = 0LL;
  v14 = 0;
  v13 = 0LL;
  *(_DWORD *)&v15[8] = 0;
  *(_QWORD *)v15 = a1 == 0LL;
  v5 = sub_1405E31F0(&v16);
  if ( v5 >= 0 )
  {
    v6 = v16;
    v7 = 0LL;
    if ( *(_DWORD *)v16 )
    {
      while ( 1 )
      {
        if ( (int)ExpHwidGetDeviceProperties(*(PDEVICE_OBJECT *)&v6[2 * v7 + 2], (__int64)v17) >= 0 )
        {
          v5 = ExpHwidAuthenticateHardwareId(*(PDEVICE_OBJECT *)&v6[2 * v7 + 2], (__int64)v17);
          if ( v5 < 0 )
            break;
          v5 = ExpHwidProcessDevice(v17, 0LL, &v13);
          if ( v5 < 0 )
            break;
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *v6 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v8 = 0;
      v9 = &off_140398BF0;
      while ( 1 )
      {
        v10 = *v9;
        if ( *((_BYTE *)v9 - 16) )
        {
          LOBYTE(v4) = *((_BYTE *)v9 - 15);
          v11 = ExpHwidProcessInterface(
                  (unsigned int)*(v9 - 1),
                  v4,
                  (_DWORD)v10,
                  (_DWORD)v6,
                  (__int64)v17,
                  (__int64)&v13);
        }
        else
        {
          v11 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD))v10)(&v13, 0LL, 0LL);
        }
        v5 = v11;
        if ( v11 < 0 )
          break;
        ++v8;
        v9 += 3;
        if ( v8 >= 6 )
        {
          if ( a1 )
            *a1 = *(_QWORD *)&v15[4];
          *(_QWORD *)&v15[4] = 0LL;
          *a2 = HIDWORD(v13);
          break;
        }
      }
    }
    PiPnpFreePdoDeviceList(v6);
  }
  sub_1405E3D64(v17);
  if ( *(_QWORD *)&v15[4] )
    ExFreePoolWithTag(*(PVOID *)&v15[4], 0);
  return (unsigned int)v5;
}
