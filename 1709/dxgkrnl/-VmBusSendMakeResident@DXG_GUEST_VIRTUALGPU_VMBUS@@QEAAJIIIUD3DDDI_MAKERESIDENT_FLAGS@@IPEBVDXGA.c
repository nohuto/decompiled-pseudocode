/*
 * XREFs of ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0196EA4
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0084ED0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01B6D94 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C78F8 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01CE448 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        int a4,
        struct D3DDDI_MAKERESIDENT_FLAGS a5,
        unsigned int a6,
        const struct DXGALLOCATIONREFERENCE *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  char *v12; // rax
  __int64 v13; // rcx
  struct DXGKVMB_COMMAND_BASE *v14; // rbx
  __int64 v15; // rax
  _DWORD *v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rax
  struct _MDL *v25; // [rsp+28h] [rbp-60h]
  unsigned int v26; // [rsp+30h] [rbp-58h] BYREF
  struct VMBCHANNEL__ **v27; // [rsp+38h] [rbp-50h]
  _QWORD v28[2]; // [rsp+40h] [rbp-48h] BYREF
  int v29; // [rsp+50h] [rbp-38h]

  v27 = this;
  if ( a6 - 1 > 0x7FFF )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v24 + 24) = 5626LL;
    WdLogEvent5_WdAssertion(v24);
    return 3221225485LL;
  }
  else
  {
    v12 = (char *)operator new(4 * a6 + 44, 0x4B677844u, 1, (POOL_TYPE)512);
    v14 = (struct DXGKVMB_COMMAND_BASE *)v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_DWORD *)v12 + 3) = 0;
      *((_DWORD *)v12 + 4) = 11;
      *((_DWORD *)v12 + 2) = a2;
      *((struct D3DDDI_MAKERESIDENT_FLAGS *)v12 + 8) = a5;
      *((_DWORD *)v12 + 6) = a3;
      *((_DWORD *)v12 + 7) = a4;
      *((_DWORD *)v12 + 9) = a6;
      if ( a6 )
      {
        v18 = v12 + 40;
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
      v26 = 24;
      VmBusSendSyncMessage(*v27, v14, 4 * a6 + 44, v28, &v26, v25);
      if ( v26 < 0x18 )
      {
        v22 = -1073741823;
      }
      else
      {
        if ( a8 )
          *a8 = v28[0];
        if ( a9 )
          *a9 = v28[1];
        v22 = v29;
      }
      if ( v22 < 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v23 + 24) = v22;
        WdLogEvent5_WdAssertion(v23);
      }
      ExFreePoolWithTag(v14, 0);
      return (unsigned int)v22;
    }
    else
    {
      v15 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v15 + 24) = 5633LL;
      WdLogEvent5_WdLowResource(v15);
      return 3221225495LL;
    }
  }
}
