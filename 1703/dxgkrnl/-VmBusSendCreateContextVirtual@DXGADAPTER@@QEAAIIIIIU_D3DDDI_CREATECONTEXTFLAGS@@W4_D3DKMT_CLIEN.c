/*
 * XREFs of ?VmBusSendCreateContextVirtual@DXGADAPTER@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C002F494
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00BB7D4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendCreateContextVirtual(
        DXGADAPTER *this,
        UINT a2,
        UINT a3,
        UINT a4,
        UINT a5,
        struct _D3DDDI_CREATECONTEXTFLAGS a6,
        enum _D3DKMT_CLIENTHINT a7,
        size_t Size,
        void *Src)
{
  size_t v9; // rdi
  struct _D3DDDI_CREATECONTEXTFLAGS *v10; // rbx
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  struct VMBCHANNEL__ *v19; // rcx
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // ebp
  struct _MDL *v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  int v23; // [rsp+38h] [rbp-50h]
  int v24; // [rsp+3Ch] [rbp-4Ch]

  v9 = (unsigned int)Size;
  v10 = (struct _D3DDDI_CREATECONTEXTFLAGS *)&v22;
  v22 = 0LL;
  v24 = 0;
  v23 = 8;
  v15 = (Size + 62) & 0xFFFFFFF8;
  if ( !(_DWORD)Size
    || (v10 = (struct _D3DDDI_CREATECONTEXTFLAGS *)operator new[](v15, 0x4B677844u, (enum _POOL_TYPE)512)) != 0LL )
  {
    v10[4].Value = 0;
    v10[7].Value = a5;
    v10[8].0 = a6.0;
    v10[9].Value = a7;
    v10[2].Value = 8;
    v10[3].Value = a2;
    v10[5].Value = a3;
    v10[6].Value = a4;
    v10[10].Value = v9;
    if ( (_DWORD)v9 )
      memmove(&v10[12], Src, v9);
    v19 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
    LODWORD(Size) = v15;
    Value = 0;
    if ( VmBusSendSyncMessage(v19, (struct DXGKVMB_COMMAND *)v10, v15, v10, (unsigned int *)&Size, v21) >= 0
      && (unsigned int)Size >= v15 )
    {
      Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v10[4].Value;
    }
    if ( (_DWORD)v9 )
    {
      if ( *((_DWORD *)this + 376) >= 0x7008u )
        memmove(Src, &v10[14], v9);
      operator delete[](v10);
    }
    return *(unsigned int *)&Value;
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v17 + 24) = 2449LL;
    WdLogEvent5_WdLowResource(v17);
    return 0LL;
  }
}
