/*
 * XREFs of ?VmBusSendCreateProcess@@YAIPEAVDXGPROCESS@@PEAD@Z @ 0x1C002F7A4
 * Callers:
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0195AA4 (-GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 */

__int64 __fastcall VmBusSendCreateProcess(struct DXGPROCESS *a1, char *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rbx
  char v8; // cl
  char v9; // al
  DXGGLOBAL *Global; // rax
  struct VMBCHANNEL__ *VmBusChannel; // rax
  struct _MDL *v13; // [rsp+28h] [rbp-58h]
  unsigned int v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  int v16; // [rsp+40h] [rbp-40h]
  int v17; // [rsp+44h] [rbp-3Ch]
  struct DXGPROCESS *v18; // [rsp+48h] [rbp-38h]
  _BYTE v19[17]; // [rsp+50h] [rbp-30h] BYREF
  char v20; // [rsp+61h] [rbp-1Fh]
  unsigned int v21; // [rsp+68h] [rbp-18h] BYREF

  v15 = 0LL;
  v17 = 0;
  v4 = -1LL;
  v16 = 2;
  v5 = -1LL;
  v18 = a1;
  do
    ++v5;
  while ( a2[v5] );
  v6 = 16;
  if ( (unsigned int)v5 <= 0x10 )
  {
    do
      ++v4;
    while ( a2[v4] );
    v6 = v4;
  }
  v7 = v6;
  memmove(v19, a2, v6);
  v8 = *((_BYTE *)a1 + 274) & 1;
  v9 = *((_BYTE *)a1 + 272) & 1;
  v19[v7] = 0;
  v14 = 8;
  v20 = v20 & 0xFC | v9 | (2 * v8);
  Global = DXGGLOBAL::GetGlobal();
  VmBusChannel = DXGGLOBAL::GetVmBusChannel(Global);
  if ( VmBusSendSyncMessage(VmBusChannel, (struct DXGKVMB_COMMAND *)&v15, 0x30u, &v21, &v14, v13) < 0 || v14 < 4 )
    return 0LL;
  else
    return v21;
}
