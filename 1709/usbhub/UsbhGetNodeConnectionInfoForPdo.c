/*
 * XREFs of UsbhGetNodeConnectionInfoForPdo @ 0x1C0048490
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049FFC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0024C40 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024DB0 (UsbhRefPdoDeviceHandle.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhGetDeviceInformationEx @ 0x1C0048340 (UsbhGetDeviceInformationEx.c)
 */

__int64 __fastcall UsbhGetNodeConnectionInfoForPdo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6,
        char a7)
{
  int v11; // ebp
  _DWORD *v12; // rbx
  __int64 v13; // rax
  int *v14; // r14
  __int64 v15; // rdi
  _DWORD *DeviceInformation; // rax
  _DWORD *v17; // rdi
  char v18; // al
  int v19; // ecx
  int v20; // r10d
  unsigned int v21; // r9d
  int v22; // r8d
  unsigned int v23; // r10d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v27; // [rsp+30h] [rbp-38h]
  _DWORD *v28; // [rsp+38h] [rbp-30h]
  int v29; // [rsp+80h] [rbp+18h] BYREF

  v29 = -1073741811;
  v11 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Au,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids);
  v12 = a5;
  Log(a1, 32, 1735290417, *(unsigned __int16 *)(a3 + 4), (__int64)a5);
  v28 = PdoExt(a4);
  v13 = UsbhRefPdoDeviceHandle(a1, a4, a2, 0x48446E67u);
  v14 = (int *)a6;
  v27 = v13;
  v15 = v13;
  memset(v12, 0, *a6);
  if ( v15 )
  {
    DeviceInformation = UsbhGetDeviceInformationEx(a1, &v29, v15);
    v11 = v29;
    v17 = DeviceInformation;
    Log(a1, 32, 1735281713, (__int64)DeviceInformation, v29);
    UsbhDerefPdoDeviceHandle(a1, v27, a2, 0x48446E67u);
    if ( v11 >= 0 )
    {
      *v12 = *(unsigned __int16 *)(a3 + 4);
      *(_OWORD *)(v12 + 1) = *(_OWORD *)(v17 + 3);
      *((_WORD *)v12 + 10) = *((_WORD *)v17 + 14);
      *((_BYTE *)v12 + 22) = *((_BYTE *)v17 + 32);
      if ( a7 )
        v18 = *((_BYTE *)v17 + 40);
      else
        v18 = v17[10] == 0;
      *((_BYTE *)v12 + 23) = v18;
      if ( PdoExt(a4)[280] == 101 )
        *((_BYTE *)v12 + 24) = (v28[353] & 4) != 0;
      v19 = 1;
      v20 = *v14;
      v21 = 0;
      *(_WORD *)((char *)v12 + 25) = *((_WORD *)v17 + 17);
      v22 = v17[12];
      *(_DWORD *)((char *)v12 + 27) = v22;
      if ( (unsigned int)(*(_DWORD *)(a3 + 428) - 4) <= 3 )
        v19 = *(_DWORD *)(a3 + 428);
      v23 = v20 - 35;
      *(_DWORD *)((char *)v12 + 31) = v19;
      if ( v22 )
      {
        do
        {
          if ( v23 < 0xB )
            break;
          v24 = v21;
          v23 -= 11;
          v25 = 11LL * v21++;
          *(_DWORD *)((char *)v12 + v25 + 35) = v17[3 * v24 + 13];
          *(_WORD *)((char *)v12 + v25 + 39) = v17[3 * v24 + 14];
          *((_BYTE *)v12 + v25 + 41) = BYTE2(v17[3 * v24 + 14]);
          *(_DWORD *)((char *)v12 + v25 + 42) = v17[3 * v24 + 15];
        }
        while ( v21 < *(_DWORD *)((char *)v12 + 27) );
      }
      if ( v21 != *(_DWORD *)((char *)v12 + 27) )
        Log(a1, 32, 1735290451, v23, *(unsigned int *)((char *)v12 + 27));
      *v14 -= v23;
    }
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  else
  {
    Log(a1, 32, 1735290468, *(int *)(a3 + 428), (__int64)v12);
    *v12 = *(unsigned __int16 *)(a3 + 4);
    *(_DWORD *)((char *)v12 + 31) = *(_DWORD *)(a3 + 428);
    *v14 = 35;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Bu,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      v11);
  return (unsigned int)v11;
}
