/*
 * XREFs of SecureDmaEnabler_PrepareMemoryForDma @ 0x1C003F708
 * Callers:
 *     Control_Transfer_Map @ 0x1C0025890 (Control_Transfer_Map.c)
 *     Isoch_MapStage @ 0x1C002868C (Isoch_MapStage.c)
 *     Bulk_MapStage @ 0x1C002E7B4 (Bulk_MapStage.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     memset @ 0x1C0008A40 (memset.c)
 */

__int64 __fastcall SecureDmaEnabler_PrepareMemoryForDma(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned int v10; // edi
  int v11; // eax
  _DWORD *v12; // rbx
  __int64 v13; // rcx
  int v15; // [rsp+28h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0LL;
  if ( *(_QWORD *)a2 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0x12u,
      0x10u,
      (__int64)&WPP_ba9a70f1931133d64daec42b1a399418_Traceguids);
    return (unsigned int)-1073741637;
  }
  else
  {
    v11 = VslCreateSecureSection(&v16, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 456LL), a2, 4LL, 1);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v12 = a6;
      memset(a6, 0, 0x20uLL);
      v12[1] = 0;
      v13 = a7;
      v12[2] = a4;
      *(_DWORD *)v13 = 1;
      *(_QWORD *)(v13 + 16) = *(unsigned int *)(a2 + 44);
      *(_DWORD *)(v13 + 24) = v12[2];
      v12[3] = a5;
      *((_QWORD *)v12 + 2) = v16;
      *v12 = 1;
    }
    else
    {
      v15 = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0x12u,
        0x11u,
        (__int64)&WPP_ba9a70f1931133d64daec42b1a399418_Traceguids,
        v15);
    }
  }
  return v10;
}
