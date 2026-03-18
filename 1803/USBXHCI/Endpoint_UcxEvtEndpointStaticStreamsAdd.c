/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C00152D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_Create @ 0x1C005BBAC (TR_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // r14d
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r13d
  __int64 i; // r12
  int v15; // edx
  __int64 v17; // [rsp+28h] [rbp-61h]
  __int64 v18; // [rsp+30h] [rbp-59h]
  __int64 v19; // [rsp+38h] [rbp-51h]
  __int64 v20; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v21[3]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v22[14]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v23; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v24; // [rsp+108h] [rbp+7Fh]

  v23 = a3;
  v4 = a2;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B1D8);
  v6 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v5 + 80),
    v6,
    13,
    96,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
    *(_DWORD *)(v5 + 144),
    v4);
  if ( !*(_BYTE *)(v5 + 37) )
  {
    LODWORD(v18) = *(_DWORD *)(v5 + 144);
    LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x61u,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v17,
      v18);
    return (unsigned int)-1073741811;
  }
  if ( !(_DWORD)v4 || (unsigned int)v4 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 88LL) + 112LL) )
  {
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      2,
      13,
      98,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144),
      v4);
    return (unsigned int)-1073741811;
  }
  memset(v22, 0, 0x38uLL);
  v22[6] = off_1C004B368;
  v22[3] = 0x100000001LL;
  v22[1] = Endpoint_EvtStaticStreamsCleanupCallback;
  v7 = 1;
  LODWORD(v22[0]) = 56;
  v22[5] = 104 * v4 + 48;
  if ( *(_BYTE *)(v5 + 1336) )
    v7 = 2;
  LODWORD(v22[3]) = v7;
  v8 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *, _QWORD *, __int64 *))qword_1C004C8E0)(
         *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
         a1,
         &v23,
         v22,
         &v20);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v20,
            off_1C004B368);
    v12 = v11;
    *(_QWORD *)v11 = v5;
    *(_DWORD *)(v11 + 8) = v4;
    if ( (unsigned int)v4 >= 4 )
    {
      if ( (unsigned int)v4 >= 8 )
      {
        if ( (unsigned int)v4 >= 0x10 )
        {
          if ( (unsigned int)v4 >= 0x20 )
          {
            if ( (unsigned int)v4 >= 0x40 )
              *(_DWORD *)(v11 + 12) = 7 - ((unsigned int)v4 < 0x80);
            else
              *(_DWORD *)(v11 + 12) = 5;
          }
          else
          {
            *(_DWORD *)(v11 + 12) = 4;
          }
        }
        else
        {
          *(_DWORD *)(v11 + 12) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v11 + 12) = 2;
      }
    }
    else
    {
      *(_DWORD *)(v11 + 12) = 1;
    }
    v13 = 0;
    for ( i = v11 + 48; ; i += 104LL )
    {
      v24 = v13 + 1;
      v9 = TR_Create(*(_QWORD *)v5, v5, v20, v13 + 1, 104LL * v13 + v12 + 48);
      if ( v9 < 0 )
        break;
      v13 = v24;
      v21[1] = *(_QWORD *)(*(_QWORD *)i + 72LL);
      v21[0] = 24LL;
      v21[2] = v24;
      ((void (__fastcall *)(_QWORD, __int64, _QWORD *))qword_1C004C8D8)(
        *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
        v20,
        v21);
      if ( v13 >= (unsigned int)v4 )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v5 + 80),
          v15,
          13,
          101,
          (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
          *(_DWORD *)(v5 + 144),
          v4);
        return 0;
      }
    }
    LODWORD(v19) = v13;
    LODWORD(v18) = *(_DWORD *)(v5 + 144);
    LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x64u,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v17,
      v18,
      v19,
      v9);
  }
  else
  {
    v10 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      v10,
      13,
      99,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144),
      v8);
  }
  return (unsigned int)v9;
}
