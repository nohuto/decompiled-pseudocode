/*
 * XREFs of ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C0106620
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00D2FBC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1C01C5C54 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveHDRParamDriverOverrides(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // edx
  DXGADAPTER *v14; // rbx
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // ecx
  char v18; // al
  int v19; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v20[5]; // [rsp+30h] [rbp-21h] BYREF
  _BYTE v21[52]; // [rsp+58h] [rbp+7h] BYREF

  if ( !*((_QWORD *)this + 5) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  v5 = -1071841279;
  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 64LL);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 64LL);
  memset(v21, 0, sizeof(v21));
  v8 = *(_QWORD *)(v6 + 936);
  v9 = *(_QWORD *)(v8 + 96);
  if ( v9 )
  {
    v12 = v9 + 68;
    if ( RtlCompareMemory(v21, (const void *)(v9 + 68), 0x34uLL) != 52 )
    {
      v5 = 0;
      *(_OWORD *)v21 = *(_OWORD *)v12;
      *(_OWORD *)&v21[16] = *(_OWORD *)(v12 + 16);
      *(_OWORD *)&v21[32] = *(_OWORD *)(v12 + 32);
      v13 = *(_DWORD *)(v12 + 48);
      *(_DWORD *)&v21[48] = v13;
LABEL_14:
      *((_DWORD *)this + 137) = 0;
      *((_WORD *)this + 276) = 0;
      v17 = *(_DWORD *)&v21[44];
      *((_DWORD *)this + 132) = v21[44] >> 2;
      *((_DWORD *)this + 133) = (v17 >> 8) & 0x3F;
      *((_DWORD *)this + 134) = (v17 >> 14) & 0x3F;
      *((_DWORD *)this + 135) = (v17 >> 20) & 0x3F;
      v18 = v21[48];
      *((_DWORD *)this + 136) = v17 >> 26;
      *((_BYTE *)this + 554) = v18 & 1;
      *((_BYTE *)this + 555) = (v13 & 2) != 0;
      *(_QWORD *)((char *)this + 556) = *(_QWORD *)v21;
      *((_DWORD *)this + 141) = *(_DWORD *)&v21[8];
      *((_DWORD *)this + 142) = *(_DWORD *)&v21[12];
      *(_OWORD *)((char *)this + 572) = *(_OWORD *)&v21[16];
      *((_QWORD *)this + 74) = *(_QWORD *)&v21[32];
      *((_DWORD *)this + 150) = *(_DWORD *)&v21[40];
      *((_DWORD *)this + 147) = 2;
      *((_BYTE *)this + 604) = 0;
      *((_BYTE *)this + 605) = (v13 & 4) != 0;
    }
  }
  else if ( *(_DWORD *)(*(_QWORD *)(v7 + 40) + 28LL) >= 0x700Au )
  {
    v19 = *(_DWORD *)(v8 + 24);
    memset(v20, 0, sizeof(v20));
    v14 = *(DXGADAPTER **)(v7 + 3704);
    v20[1] = &v19;
    LODWORD(v20[0]) = 19;
    v20[3] = v21;
    LODWORD(v20[2]) = 4;
    LODWORD(v20[4]) = 52;
    DXGADAPTER::IsCoreResourceSharedOwner(v14);
    if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v14, (struct _DXGKARG_QUERYADAPTERINFO *)v20, v15) < 0
      || (v16 = DpiFdoValidateDxgkColorimetry(v21, *(unsigned int *)(*(_QWORD *)(v6 + 936) + 24LL)), v5 = v16, v16 < 0)
      || v16 == 279 )
    {
      memset(v21, 0, sizeof(v21));
      v5 = -1071841279;
    }
    if ( v5 >= 0 )
    {
      LOBYTE(v13) = v21[48];
      goto LABEL_14;
    }
  }
  return (unsigned int)v5;
}
