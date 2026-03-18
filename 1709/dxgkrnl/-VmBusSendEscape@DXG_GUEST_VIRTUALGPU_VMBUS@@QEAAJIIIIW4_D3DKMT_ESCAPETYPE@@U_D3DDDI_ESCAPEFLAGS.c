/*
 * XREFs of ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C01964B8
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
        struct VMBCHANNEL__ **this,
        UINT a2,
        UINT a3,
        UINT a4,
        UINT a5,
        enum _D3DKMT_ESCAPETYPE a6,
        struct _D3DDDI_ESCAPEFLAGS a7,
        size_t Size,
        unsigned __int8 *Src)
{
  size_t v9; // rsi
  __int64 v14; // rax
  unsigned int v16; // edi
  int v17; // eax
  unsigned int v18; // ebp
  struct _D3DDDI_ESCAPEFLAGS *v19; // rax
  __int64 v20; // rcx
  struct _D3DDDI_ESCAPEFLAGS *v21; // rbx
  __int64 v22; // rax
  unsigned __int8 *v23; // rdx
  struct VMBCHANNEL__ *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  struct _MDL *v29; // [rsp+28h] [rbp-30h]

  v9 = (unsigned int)Size;
  if ( (unsigned int)Size <= 0x20000 )
  {
    v16 = 0;
    LODWORD(Size) = (Size + 7) & 0xFFFFFFF8;
    if ( (_DWORD)Size )
      v17 = ((v9 + 7) & 0xFFFFFFF8) - 1;
    else
      v17 = 0;
    v18 = v17 + 56;
    v19 = (struct _D3DDDI_ESCAPEFLAGS *)operator new[]((unsigned int)(v17 + 56), 0x4B677844u, (POOL_TYPE)512);
    v21 = v19;
    if ( v19 )
    {
      v23 = Src;
      *(_QWORD *)&v19->0 = 0LL;
      v19[3].Value = 0;
      v19[4].Value = 13;
      v19[2].Value = a2;
      v19[6].Value = a3;
      v19[9].0 = a7.0;
      v19[7].Value = a4;
      v19[11].Value = a5;
      v19[8].Value = a6;
      v19[10].Value = v9;
      memmove(&v19[12], v23, v9);
      v24 = *this;
      if ( (_DWORD)v9 )
      {
        VmBusSendSyncMessage(v24, (struct DXGKVMB_COMMAND_BASE *)v21, v18, &v21[12], (unsigned int *)&Size, v29);
        if ( (unsigned int)Size < (unsigned int)v9 )
        {
          v16 = -1073741823;
          v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          *(_QWORD *)(v28 + 24) = -1073741823LL;
          WdLogEvent5_WdWarning(v28);
        }
        else
        {
          memmove(Src, &v21[12], v9);
        }
      }
      else
      {
        VmBusSendSyncMessage(v24, (struct DXGKVMB_COMMAND_BASE *)v21, v18, 0LL, 0LL, v29);
      }
      ExFreePoolWithTag(v21, 0);
      return v16;
    }
    else
    {
      v22 = WdLogNewEntry5_WdLowResource(v20);
      *(_QWORD *)(v22 + 24) = 5831LL;
      WdLogEvent5_WdLowResource(v22);
      return 3221225495LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 5823LL;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
}
