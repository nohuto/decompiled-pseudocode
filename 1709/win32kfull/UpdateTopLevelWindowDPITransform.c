/*
 * XREFs of UpdateTopLevelWindowDPITransform @ 0x1C005D5D8
 * Callers:
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 * Callees:
 *     GetMonitorTransform @ 0x1C005D640 (GetMonitorTransform.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

char __fastcall UpdateTopLevelWindowDPITransform(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  LOBYTE(v4) = *(_DWORD *)(a1 + 368) & 0xF;
  if ( (_BYTE)v4 == 2 )
    goto LABEL_2;
  memset(v11, 0, sizeof(v11));
  LODWORD(v4) = GetMonitorTransform(a2, a1, v11);
  if ( !(_DWORD)v4 )
    goto LABEL_2;
  if ( !*(_QWORD *)(a1 + 288) )
    *(_QWORD *)(a1 + 288) = Win32AllocPoolWithQuota(64LL, 2020438869LL);
  v4 = *(_OWORD **)(a1 + 288);
  if ( v4 )
  {
    v7 = v11[1];
    *v4 = v11[0];
    v8 = v11[2];
    v4[1] = v7;
    v9 = v11[3];
    v4[2] = v8;
    v4[3] = v9;
  }
  else
  {
LABEL_2:
    v6 = *(_QWORD *)(a1 + 288);
    if ( v6 )
    {
      LOBYTE(v4) = Win32FreePool(v6, a2, a3);
      *(_QWORD *)(a1 + 288) = 0LL;
    }
  }
  return (char)v4;
}
