/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C00087B0
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C0008920 (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0008DD8 (RIMFindInputDeviceForConfig.c)
 *     RIMGetDeviceParent @ 0x1C000B2A0 (RIMGetDeviceParent.c)
 *     WPP_RECORDER_SF_S @ 0x1C000B81C (WPP_RECORDER_SF_S.c)
 *     RIMFreeHidDesc @ 0x1C000D2C8 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000E118 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMAllocateHidConfigDesc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rsi
  int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // eax
  int v19; // edx
  int v21; // r9d
  int v22; // [rsp+40h] [rbp-28h] BYREF
  __int64 v23; // [rsp+48h] [rbp-20h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF

  v7 = a2;
  if ( a3 )
  {
    if ( *(_WORD *)(a4 + 8) )
    {
      v10 = Win32AllocPoolZInit(0x78uLL);
      if ( v10 )
      {
        v11 = Win32AllocPoolNonPaged(*(unsigned __int16 *)(a4 + 8), 1886417746LL);
        *(_QWORD *)(v10 + 32) = v11;
        if ( v11 )
        {
          v14 = a5;
          *(_OWORD *)(v10 + 40) = *(_OWORD *)a4;
          v24 = 0;
          *(_OWORD *)(v10 + 56) = *(_OWORD *)(a4 + 16);
          v22 = 0;
          *(_OWORD *)(v10 + 72) = *(_OWORD *)(a4 + 32);
          v23 = 0LL;
          *(_OWORD *)(v10 + 88) = *(_OWORD *)(a4 + 48);
          *(_QWORD *)(v10 + 16) = a3;
          *(_QWORD *)(v10 + 104) = *(_QWORD *)v14;
          *(_DWORD *)(v10 + 112) = *(_DWORD *)(v14 + 8);
          if ( !(unsigned int)RIMGetDeviceParent(v13, v7) )
          {
            LOBYTE(v15) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v15,
              18,
              39,
              (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
          }
          if ( !(unsigned int)RIMFindInputDeviceForConfig(v10, a1, v7, (unsigned int)&v24, (__int64)&v22, (__int64)&v23)
            || !v24 )
          {
            goto LABEL_14;
          }
          LODWORD(v16) = *(_DWORD *)(a1 + 76);
          if ( v22 )
          {
            if ( (v16 & 0x10) != 0 )
            {
              *(_DWORD *)(v7 + 184) |= 0x400u;
              v17 = 2LL;
              goto LABEL_12;
            }
            v21 = 40;
          }
          else
          {
            if ( (v16 & 8) != 0 )
            {
              *(_DWORD *)(v7 + 184) |= 0x800u;
              v17 = 3LL;
LABEL_12:
              v18 = RIMDeliverConfigRequest(v7, v10, 82LL, v17);
              if ( v18 < 0 )
              {
                LOBYTE(v19) = 3;
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v19,
                  18,
                  42,
                  (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
                  v18);
              }
LABEL_14:
              *(_BYTE *)(v7 + 48) = 3;
              return v10;
            }
            v21 = 41;
          }
        }
        else
        {
          v16 = *(unsigned __int16 *)(a4 + 8);
          v21 = 38;
        }
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          18,
          v21,
          (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
          v16);
        RIMFreeHidDesc(v10);
      }
      else
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          18,
          37,
          (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
          *(_QWORD *)(v7 + 216));
      }
    }
    else
    {
      WPP_RECORDER_SF_DD(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        18,
        36,
        (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
        *(_WORD *)(a4 + 2),
        *(_WORD *)a4);
    }
  }
  else
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      18,
      35,
      (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
  }
  return 0LL;
}
