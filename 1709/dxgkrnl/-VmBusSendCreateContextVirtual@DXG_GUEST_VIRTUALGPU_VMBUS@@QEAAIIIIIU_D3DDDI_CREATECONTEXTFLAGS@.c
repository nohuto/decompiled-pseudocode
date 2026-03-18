/*
 * XREFs of ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C01959DC
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00C08F4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
        struct VMBCHANNEL__ **this,
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
  __int64 v14; // rax
  struct _D3DDDI_CREATECONTEXTFLAGS *p_P; // rbx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rax
  struct VMBCHANNEL__ *v20; // rcx
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // ebp
  struct _MDL *v22; // [rsp+28h] [rbp-60h]
  __int64 P; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+3Ch] [rbp-4Ch]
  int v26; // [rsp+40h] [rbp-48h]

  v9 = (unsigned int)Size;
  if ( (unsigned int)Size > 0x20000 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 4034LL;
    WdLogEvent5_WdAssertion(v14);
    return 0LL;
  }
  P = 0LL;
  v24 = 0;
  p_P = (struct _D3DDDI_CREATECONTEXTFLAGS *)&P;
  v25 = 0;
  v17 = (Size + 70) & 0xFFFFFFF8;
  v26 = 6;
  if ( (_DWORD)Size )
  {
    p_P = (struct _D3DDDI_CREATECONTEXTFLAGS *)operator new[](v17, 0x4B677844u, (POOL_TYPE)512);
    if ( !p_P )
    {
      v19 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v19 + 24) = 4047LL;
      WdLogEvent5_WdLowResource(v19);
      return 0LL;
    }
  }
  *(_QWORD *)&p_P->0 = 0LL;
  p_P[3].Value = 0;
  p_P[6].Value = 0;
  p_P[9].Value = a5;
  p_P[10].0 = a6.0;
  p_P[11].Value = a7;
  p_P[4].Value = 6;
  p_P[2].Value = a2;
  p_P[7].Value = a3;
  p_P[8].Value = a4;
  p_P[12].Value = v9;
  if ( (_DWORD)v9 )
    memmove(&p_P[14], Src, v9);
  v20 = *this;
  LODWORD(Size) = (v9 + 70) & 0xFFFFFFF8;
  Value = 0;
  if ( VmBusSendSyncMessage(v20, (struct DXGKVMB_COMMAND_BASE *)p_P, v17, p_P, (unsigned int *)&Size, v22) >= 0
    && (unsigned int)Size >= v17 )
  {
    Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)p_P[6].Value;
  }
  if ( (_DWORD)v9 )
  {
    if ( *((_DWORD *)this[2] + 382) >= 0x7008u )
      memmove(Src, &p_P[14], v9);
    ExFreePoolWithTag(p_P, 0);
  }
  return *(unsigned int *)&Value;
}
