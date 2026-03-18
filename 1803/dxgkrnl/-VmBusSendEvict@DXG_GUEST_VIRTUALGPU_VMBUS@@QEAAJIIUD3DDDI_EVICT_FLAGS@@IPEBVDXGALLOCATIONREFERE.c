/*
 * XREFs of ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0182E9C
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00D5E3C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
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
  char *v11; // rax
  __int64 v12; // rcx
  struct DXGKVMB_COMMAND_BASE *v13; // rdi
  __int64 v14; // rax
  _DWORD *v17; // r10
  __int64 v18; // r11
  __int64 v19; // rax
  struct VMBCHANNEL__ *v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  struct _MDL *v25; // [rsp+28h] [rbp-60h]
  unsigned int v26; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-50h] BYREF

  if ( a5 - 1 > 0x7FFF )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v24 + 24) = 6472LL;
    WdLogEvent5_WdAssertion(v24);
    return 0LL;
  }
  else
  {
    v11 = (char *)operator new(4 * a5 + 36, 0x4B677844u, 1, (POOL_TYPE)512);
    v13 = (struct DXGKVMB_COMMAND_BASE *)v11;
    if ( v11 )
    {
      *(_QWORD *)v11 = 0LL;
      *((_DWORD *)v11 + 3) = 0;
      *((_DWORD *)v11 + 4) = 12;
      *((_DWORD *)v11 + 2) = a2;
      *((struct D3DDDI_EVICT_FLAGS *)v11 + 7) = a4;
      *((_DWORD *)v11 + 6) = a3;
      *((_DWORD *)v11 + 8) = a5;
      if ( a5 )
      {
        v17 = v11 + 36;
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
      v20 = *this;
      v26 = 8;
      v22 = VmBusSendSyncMessage(v20, v13, 4 * a5 + 36, &v27, &v26, v25);
      if ( v22 < 0 || (v22 = -1073741823, v26 < 8) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v23 + 24) = v22;
        WdLogEvent5_WdAssertion(v23);
      }
      else
      {
        v22 = 0;
        *a7 = v27;
      }
      operator delete[](v13);
      return (unsigned int)v22;
    }
    else
    {
      v14 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v14 + 24) = 6479LL;
      WdLogEvent5_WdLowResource(v14);
      return 3221225495LL;
    }
  }
}
