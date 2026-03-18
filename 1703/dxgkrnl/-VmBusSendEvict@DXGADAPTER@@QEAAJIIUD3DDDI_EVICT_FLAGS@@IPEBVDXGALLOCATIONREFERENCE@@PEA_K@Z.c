/*
 * XREFs of ?VmBusSendEvict@DXGADAPTER@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0030184
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C009DF70 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendEvict(
        DXGADAPTER *this,
        unsigned int a2,
        UINT a3,
        struct D3DDDI_EVICT_FLAGS a4,
        UINT a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int64 *a7)
{
  struct D3DDDI_EVICT_FLAGS *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  struct DXGKVMB_COMMAND *v13; // rdi
  __int64 v14; // rax
  UINT *v17; // r10
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  struct _MDL *v25; // [rsp+28h] [rbp-60h]
  unsigned int v26; // [rsp+30h] [rbp-58h] BYREF
  DXGADAPTER *v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+40h] [rbp-48h] BYREF

  v27 = this;
  v10 = (struct D3DDDI_EVICT_FLAGS *)operator new(4 * a5 + 28, a2, 1, (enum _POOL_TYPE)512);
  v12 = 0;
  v13 = (struct DXGKVMB_COMMAND *)v10;
  if ( v10 )
  {
    v10[2].Value = 15;
    v10[3].Value = a2;
    v10[5].0 = a4.0;
    v10[4].Value = a3;
    v10[6].Value = a5;
    if ( a5 )
    {
      v17 = (UINT *)&v10[7];
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
    v26 = 8;
    VmBusSendSyncMessage(*((struct VMBCHANNEL__ **)v27 + 484), v13, 4 * a5 + 28, &v28, &v26, v25);
    if ( v26 < 8 )
    {
      v12 = -1073741823;
      v24 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
      *(_QWORD *)(v24 + 24) = -1073741823LL;
      WdLogEvent5_WdAssertion(v24);
    }
    else
    {
      *a7 = v28;
    }
    operator delete[](v13);
    return v12;
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v14 + 24) = 4047LL;
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
}
