/*
 * XREFs of ?VmBusSendMakeResident@DXGADAPTER@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C00309F0
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00CAEC0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01A0068 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4C30 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendMakeResident(
        DXGADAPTER *this,
        unsigned int a2,
        UINT a3,
        UINT a4,
        struct D3DDDI_MAKERESIDENT_FLAGS a5,
        UINT a6,
        const struct DXGALLOCATIONREFERENCE *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  struct D3DDDI_MAKERESIDENT_FLAGS *v12; // rax
  __int64 v13; // rcx
  struct DXGKVMB_COMMAND *v14; // rbx
  __int64 v15; // rax
  UINT *v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edi
  __int64 v26; // rax
  struct _MDL *v27; // [rsp+28h] [rbp-60h]
  unsigned int v28; // [rsp+30h] [rbp-58h] BYREF
  DXGADAPTER *v29; // [rsp+38h] [rbp-50h]
  _QWORD v30[2]; // [rsp+40h] [rbp-48h] BYREF
  int v31; // [rsp+50h] [rbp-38h]

  v29 = this;
  v12 = (struct D3DDDI_MAKERESIDENT_FLAGS *)operator new(4 * a6 + 36, a2, 1, (enum _POOL_TYPE)512);
  v14 = (struct DXGKVMB_COMMAND *)v12;
  if ( v12 )
  {
    v12[2].Value = 14;
    v12[3].Value = a2;
    v12[6].0 = a5.0;
    v12[4].Value = a3;
    v12[5].Value = a4;
    v12[7].Value = a6;
    if ( a6 )
    {
      v18 = (UINT *)&v12[8];
      v19 = a6;
      do
      {
        v20 = *(_QWORD *)a7;
        a7 = (const struct DXGALLOCATIONREFERENCE *)((char *)a7 + 8);
        *v18++ = *(_DWORD *)(v20 + 96);
        --v19;
      }
      while ( v19 );
    }
    v28 = 24;
    VmBusSendSyncMessage(*((struct VMBCHANNEL__ **)v29 + 484), v14, 4 * a6 + 36, v30, &v28, v27);
    if ( v28 < 0x18 )
    {
      v25 = -1073741823;
    }
    else
    {
      if ( a8 )
        *a8 = v30[0];
      if ( a9 )
        *a9 = v30[1];
      v25 = v31;
    }
    if ( v25 < 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
      *(_QWORD *)(v26 + 24) = v25;
      WdLogEvent5_WdAssertion(v26);
    }
    operator delete[](v14);
    return (unsigned int)v25;
  }
  else
  {
    v15 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v15 + 24) = 3940LL;
    WdLogEvent5_WdLowResource(v15);
    return 3221225495LL;
  }
}
