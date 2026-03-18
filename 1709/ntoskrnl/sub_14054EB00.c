/*
 * XREFs of sub_14054EB00 @ 0x14054EB00
 * Callers:
 *     sub_14059EE50 @ 0x14059EE50 (sub_14059EE50.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExpHwidProcessDevice @ 0x14054EC80 (ExpHwidProcessDevice.c)
 *     ExpHwidAuthenticateHardwareId @ 0x14054EF30 (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x14054F0F0 (ExpHwidGetDeviceProperties.c)
 *     sub_14055EB30 @ 0x14055EB30 (sub_14055EB30.c)
 *     PiPnpFreePdoDeviceList @ 0x14055EC68 (PiPnpFreePdoDeviceList.c)
 *     ExpHwidProcessInterface @ 0x14055F97C (ExpHwidProcessInterface.c)
 *     sub_140560ECC @ 0x140560ECC (sub_140560ECC.c)
 *     sub_140560F40 @ 0x140560F40 (sub_140560F40.c)
 */

__int64 __fastcall sub_14054EB00(_QWORD *a1, _DWORD *a2)
{
  int v4; // edx
  int v5; // ebx
  _DWORD *v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 (__fastcall **v9)(); // rsi
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+38h] [rbp-51h]
  _BYTE v14[12]; // [rsp+3Ch] [rbp-4Dh]
  PVOID v15; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v16[96]; // [rsp+50h] [rbp-39h] BYREF

  sub_140560F40(v16);
  v15 = 0LL;
  v13 = 0;
  v12 = 0LL;
  *(_DWORD *)&v14[8] = 0;
  *(_QWORD *)v14 = a1 == 0LL;
  v5 = sub_14055EB30(&v15);
  if ( v5 >= 0 )
  {
    v6 = v15;
    v7 = 0LL;
    if ( *(_DWORD *)v15 )
    {
      while ( 1 )
      {
        if ( (int)ExpHwidGetDeviceProperties(*(PDEVICE_OBJECT *)&v6[2 * v7 + 2], (ULONG)v16) >= 0 )
        {
          v5 = ExpHwidAuthenticateHardwareId(*(PDEVICE_OBJECT *)&v6[2 * v7 + 2]);
          if ( v5 < 0 )
            break;
          v5 = ExpHwidProcessDevice(v16, 0LL, &v12);
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
      v9 = &off_140355820;
      while ( 1 )
      {
        if ( *((_BYTE *)v9 - 16) )
        {
          LOBYTE(v4) = *((_BYTE *)v9 - 15);
          v10 = ExpHwidProcessInterface(
                  (unsigned int)*(v9 - 1),
                  v4,
                  (unsigned int)*v9,
                  (_DWORD)v6,
                  (__int64)v16,
                  (__int64)&v12);
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD))*v9)(&v12, 0LL, 0LL);
        }
        v5 = v10;
        if ( v10 < 0 )
          break;
        ++v8;
        v9 += 3;
        if ( v8 >= 6 )
        {
          if ( a1 )
            *a1 = *(_QWORD *)&v14[4];
          *(_QWORD *)&v14[4] = 0LL;
          *a2 = HIDWORD(v12);
          break;
        }
      }
    }
    PiPnpFreePdoDeviceList(v6);
  }
  sub_140560ECC(v16);
  if ( *(_QWORD *)&v14[4] )
    ExFreePoolWithTag(*(PVOID *)&v14[4], 0);
  return (unsigned int)v5;
}
