/*
 * XREFs of ?GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ @ 0x1800ED7F4
 * Callers:
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x1800ED4A4 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?NewNode@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@AEAAPEAVCNode@12@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAV312@1@Z @ 0x1800EE7F4 (-NewNode@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@AEAAPEAVCNode@12@.c)
 */

__int64 __fastcall TelephonyController::GetSupportedCellularRoutingPairs(TelephonyController *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  unsigned int i; // esi
  __int64 v10; // rdx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 *v25; // rcx
  GUID v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+54h] [rbp-ACh]
  _DWORD v30[10]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v31[1056]; // [rsp+80h] [rbp-80h] BYREF
  char v32; // [rsp+4C0h] [rbp+3C0h] BYREF

  v2 = 0;
  memset(v30, 0, sizeof(v30));
  v3 = *((_QWORD *)this + 25);
  v27 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
  v28 = 0;
  v29 = 512;
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _DWORD *, int, char *))(*(_QWORD *)v3 + 24LL))(
         v3,
         &v27,
         24LL,
         v30,
         40,
         &v32);
  if ( v4 >= 0 )
  {
    v5 = operator new(v30[1]);
    v6 = v5;
    if ( v5 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD *, _DWORD, char *))(**((_QWORD **)this + 25) + 24LL))(
             *((_QWORD *)this + 25),
             &v27,
             24LL,
             v5,
             v30[1],
             &v32);
      if ( v7 >= 0 )
      {
        v8 = v6[1] - *(_QWORD *)&GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97.Data1;
        if ( !v8 )
          v8 = v6[2] - *(_QWORD *)GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97.Data4;
        if ( v8
          || *((_DWORD *)v6 + 6)
          || *((_DWORD *)v6 + 7)
          || *((_DWORD *)v6 + 8) != 1
          || *((_DWORD *)v6 + 9)
          || *((_DWORD *)v6 + 10) != 3
          || *((_DWORD *)v6 + 11) != 1048
          || !*((_DWORD *)v6 + 12)
          || *((_DWORD *)v6 + 13) )
        {
          v2 = -2147024809;
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)v6 + 12); *((_QWORD *)this + 11) = v24 )
          {
            v10 = 8LL;
            v11 = &v6[131 * i + 7];
            v12 = v31;
            do
            {
              v13 = *v11;
              v14 = v11[1];
              v11 += 8;
              *v12 = v13;
              v15 = *(v11 - 6);
              v12[1] = v14;
              v16 = *(v11 - 5);
              v12[2] = v15;
              v17 = *(v11 - 4);
              v12[3] = v16;
              v18 = *(v11 - 3);
              v12[4] = v17;
              v19 = *(v11 - 2);
              v12[5] = v18;
              v20 = *(v11 - 1);
              v12[6] = v19;
              v12 += 8;
              *(v12 - 1) = v20;
              --v10;
            }
            while ( v10 );
            v21 = *v11;
            v22 = *((_QWORD *)v11 + 2);
            v23 = *((_QWORD *)this + 11);
            *v12 = v21;
            *((_QWORD *)v12 + 2) = v22;
            v24 = ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::NewNode((char *)this + 80, v31, v23);
            v25 = (__int64 *)*((_QWORD *)this + 11);
            if ( v25 )
              *v25 = v24;
            else
              *((_QWORD *)this + 10) = v24;
            ++i;
          }
        }
      }
      else
      {
        v2 = v7;
      }
      operator delete(v6);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)v4;
  }
  return v2;
}
