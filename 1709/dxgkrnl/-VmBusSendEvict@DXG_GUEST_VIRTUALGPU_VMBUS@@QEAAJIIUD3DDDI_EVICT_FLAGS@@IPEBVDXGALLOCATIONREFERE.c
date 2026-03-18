/*
 * XREFs of ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0196654
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00BC8C4 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        struct D3DDDI_EVICT_FLAGS a4,
        unsigned int a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int64 *a7)
{
  char *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  struct DXGKVMB_COMMAND_BASE *v13; // rdi
  __int64 v14; // rax
  _DWORD *v17; // r10
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  struct _MDL *v23; // [rsp+28h] [rbp-60h]
  unsigned int v24; // [rsp+30h] [rbp-58h] BYREF
  struct VMBCHANNEL__ **v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+40h] [rbp-48h] BYREF

  v25 = this;
  if ( a5 - 1 > 0x7FFF )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v22 + 24) = 5721LL;
    WdLogEvent5_WdAssertion(v22);
    return 0LL;
  }
  else
  {
    v10 = (char *)operator new(4 * a5 + 36, 0x4B677844u, 1, (POOL_TYPE)512);
    v12 = 0;
    v13 = (struct DXGKVMB_COMMAND_BASE *)v10;
    if ( v10 )
    {
      *(_QWORD *)v10 = 0LL;
      *((_DWORD *)v10 + 3) = 0;
      *((_DWORD *)v10 + 4) = 12;
      *((_DWORD *)v10 + 2) = a2;
      *((struct D3DDDI_EVICT_FLAGS *)v10 + 7) = a4;
      *((_DWORD *)v10 + 6) = a3;
      *((_DWORD *)v10 + 8) = a5;
      if ( a5 )
      {
        v17 = v10 + 36;
        v18 = a5;
        do
        {
          v19 = *(_QWORD *)a6;
          a6 = (const struct DXGALLOCATIONREFERENCE *)((char *)a6 + 8);
          *v17++ = *(_DWORD *)(v19 + 96);
          --v18;
        }
        while ( v18 );
      }
      v24 = 8;
      VmBusSendSyncMessage(*v25, v13, 4 * a5 + 36, &v26, &v24, v23);
      if ( v24 < 8 )
      {
        v12 = -1073741823;
        v21 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v21 + 24) = -1073741823LL;
        WdLogEvent5_WdAssertion(v21);
      }
      else
      {
        *a7 = v26;
      }
      ExFreePoolWithTag(v13, 0);
      return v12;
    }
    else
    {
      v14 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v14 + 24) = 5728LL;
      WdLogEvent5_WdLowResource(v14);
      return 3221225495LL;
    }
  }
}
