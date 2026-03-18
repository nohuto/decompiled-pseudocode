/*
 * XREFs of ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C0108AEC
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C008450C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1C01DF7F0 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveHDRParamDriverOverrides(DXGMONITOR *this)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // edx
  DXGADAPTER *v11; // rbx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // ecx
  char v15; // al
  int v16; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v17[5]; // [rsp+30h] [rbp-21h] BYREF
  _BYTE v18[52]; // [rsp+58h] [rbp+7h] BYREF

  if ( !*((_QWORD *)this + 5) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v2 = -1071841279;
  v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 64LL);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  memset(v18, 0, sizeof(v18));
  v5 = *(_QWORD *)(v3 + 936);
  v6 = *(_QWORD *)(v5 + 96);
  if ( v6 )
  {
    v9 = v6 + 68;
    if ( RtlCompareMemory(v18, (const void *)(v6 + 68), 0x34uLL) != 52 )
    {
      v2 = 0;
      *(_OWORD *)v18 = *(_OWORD *)v9;
      *(_OWORD *)&v18[16] = *(_OWORD *)(v9 + 16);
      *(_OWORD *)&v18[32] = *(_OWORD *)(v9 + 32);
      v10 = *(_DWORD *)(v9 + 48);
      *(_DWORD *)&v18[48] = v10;
LABEL_14:
      *((_DWORD *)this + 147) = 0;
      *((_WORD *)this + 296) = 0;
      v14 = *(_DWORD *)&v18[44];
      *((_DWORD *)this + 142) = v18[44] >> 2;
      *((_DWORD *)this + 143) = (v14 >> 8) & 0x3F;
      *((_DWORD *)this + 144) = (v14 >> 14) & 0x3F;
      *((_DWORD *)this + 145) = (v14 >> 20) & 0x3F;
      v15 = v18[48];
      *((_DWORD *)this + 146) = v14 >> 26;
      *((_BYTE *)this + 594) = v15 & 1;
      *((_BYTE *)this + 595) = (v10 & 2) != 0;
      *(_QWORD *)((char *)this + 596) = *(_QWORD *)v18;
      *((_DWORD *)this + 151) = *(_DWORD *)&v18[8];
      *((_DWORD *)this + 152) = *(_DWORD *)&v18[12];
      *(_OWORD *)((char *)this + 612) = *(_OWORD *)&v18[16];
      *((_QWORD *)this + 79) = *(_QWORD *)&v18[32];
      *((_DWORD *)this + 160) = *(_DWORD *)&v18[40];
      *((_DWORD *)this + 157) = 2;
      *((_BYTE *)this + 648) = 0;
      *((_BYTE *)this + 649) = (v10 & 4) != 0;
    }
  }
  else if ( *(int *)(v4 + 3744) >= 8704 )
  {
    v16 = *(_DWORD *)(v5 + 24);
    memset(v17, 0, sizeof(v17));
    v11 = *(DXGADAPTER **)(v4 + 3728);
    v17[1] = &v16;
    LODWORD(v17[0]) = 19;
    v17[3] = v18;
    LODWORD(v17[2]) = 4;
    LODWORD(v17[4]) = 52;
    DXGADAPTER::IsCoreResourceSharedOwner(v11);
    if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v11, (struct _DXGKARG_QUERYADAPTERINFO *)v17, v12) < 0
      || (v13 = DpiFdoValidateDxgkColorimetry(v18, *(unsigned int *)(*(_QWORD *)(v3 + 936) + 24LL)), v2 = v13, v13 < 0)
      || v13 == 279 )
    {
      memset(v18, 0, sizeof(v18));
      v2 = -1071841279;
    }
    if ( v2 >= 0 )
    {
      LOBYTE(v10) = v18[48];
      goto LABEL_14;
    }
  }
  return (unsigned int)v2;
}
