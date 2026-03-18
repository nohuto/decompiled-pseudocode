/*
 * XREFs of ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C01820D0
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00FDD94 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        UINT a2,
        UINT a3,
        UINT a4,
        UINT a5,
        struct _D3DDDI_CREATECONTEXTFLAGS a6,
        enum _D3DKMT_CLIENTHINT a7,
        size_t Size,
        void *Src)
{
  __int64 v12; // rax
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // r12d
  unsigned int v15; // ebp
  struct _D3DDDI_CREATECONTEXTFLAGS *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  size_t v19; // r15
  struct _MDL *v20; // [rsp+28h] [rbp-80h]
  unsigned int v21; // [rsp+30h] [rbp-78h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v22; // [rsp+38h] [rbp-70h]
  _QWORD v23[2]; // [rsp+40h] [rbp-68h] BYREF
  int v24; // [rsp+50h] [rbp-58h]

  v22 = this;
  if ( (unsigned int)Size > 0x20000 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 4708LL;
    WdLogEvent5_WdAssertion(v12);
    return 0LL;
  }
  Value = 0;
  v24 = 6;
  v23[0] = 0LL;
  v15 = (Size + 62) & 0xFFFFFFF8;
  v23[1] = 0LL;
  v16 = (struct _D3DDDI_CREATECONTEXTFLAGS *)v23;
  if ( (_DWORD)Size )
  {
    v16 = (struct _D3DDDI_CREATECONTEXTFLAGS *)operator new[](v15, 0x4B677844u, (POOL_TYPE)512);
    if ( !v16 )
    {
      v18 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v18 + 24) = 4721LL;
      WdLogEvent5_WdLowResource(v18);
      return 0LL;
    }
  }
  v16[9].Value = a5;
  v16[10].0 = a6.0;
  v16[8].Value = a4;
  v16[11].Value = a7;
  *(_QWORD *)&v16->0 = 0LL;
  v16[3].Value = 0;
  v16[4].Value = 6;
  v16[6].Value = 0;
  v16[2].Value = a2;
  v16[7].Value = a3;
  v16[12].Value = Size;
  if ( (_DWORD)Size )
  {
    v19 = (unsigned int)Size;
    memmove(&v16[13], Src, (unsigned int)Size);
  }
  else
  {
    v19 = 0LL;
  }
  v21 = (Size + 62) & 0xFFFFFFF8;
  if ( VmBusSendSyncMessage(*(struct VMBCHANNEL__ **)v22, (struct DXGKVMB_COMMAND_BASE *)v16, v15, v16, &v21, v20) >= 0
    && v21 >= v15 )
  {
    Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v16[6].Value;
  }
  if ( (_DWORD)Size )
  {
    if ( *(_DWORD *)(*((_QWORD *)v22 + 6) + 1664LL) >= 0x7008u )
      memmove(Src, &v16[13], v19);
    operator delete[](v16);
  }
  return *(unsigned int *)&Value;
}
