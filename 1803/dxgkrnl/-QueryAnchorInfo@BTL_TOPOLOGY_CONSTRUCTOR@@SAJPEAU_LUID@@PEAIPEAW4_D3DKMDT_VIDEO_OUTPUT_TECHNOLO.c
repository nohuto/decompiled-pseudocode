/*
 * XREFs of ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00AFB14
 * Callers:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00B40E8 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 * Callees:
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C00AFA2C (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(
        struct _LUID *a1,
        unsigned int *a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // rax
  struct _LUID v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  unsigned int v13; // [rsp+2Ch] [rbp-34h]
  int v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+34h] [rbp-2Ch]
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+3Ch] [rbp-24h]
  int v18; // [rsp+40h] [rbp-20h]
  int v19; // [rsp+44h] [rbp-1Ch]
  __int16 v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+4Ch] [rbp-14h]
  __int16 v22; // [rsp+50h] [rbp-10h]

  v16 = 0;
  v18 = 0;
  v20 = 0;
  v11 = 0LL;
  v12 = -1;
  v13 = -1;
  v17 = -1;
  v14 = -2;
  v15 = -2;
  v19 = 1;
  v21 = 4;
  v22 = 256;
  v6 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *)&v11);
  v8 = v6;
  if ( v6 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = v8;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    *a1 = v11;
    *a2 = v13;
  }
  return (unsigned int)v8;
}
