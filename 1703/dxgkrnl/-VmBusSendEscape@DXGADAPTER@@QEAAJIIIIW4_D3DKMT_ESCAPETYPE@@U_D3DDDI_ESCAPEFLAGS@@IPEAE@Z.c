/*
 * XREFs of ?VmBusSendEscape@DXGADAPTER@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C003001C
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C018FD24 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendEscape(
        DXGADAPTER *this,
        UINT a2,
        UINT a3,
        UINT a4,
        UINT a5,
        enum _D3DKMT_ESCAPETYPE a6,
        struct _D3DDDI_ESCAPEFLAGS a7,
        size_t Size,
        unsigned __int8 *Src)
{
  size_t v9; // rbp
  unsigned int v10; // edi
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  unsigned int v18; // esi
  struct _D3DDDI_ESCAPEFLAGS *v19; // rax
  __int64 v20; // rcx
  struct _D3DDDI_ESCAPEFLAGS *v21; // rbx
  __int64 v22; // rax
  unsigned __int8 *v24; // rdx
  struct VMBCHANNEL__ *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct _MDL *v31; // [rsp+28h] [rbp-30h]

  v9 = (unsigned int)Size;
  v10 = 0;
  v15 = (((_DWORD)Size + 7) & 0xFFFFFFF8) == 0;
  v16 = (Size + 7) & 0xFFFFFFF8;
  LODWORD(Size) = v16;
  if ( v15 )
    v17 = 0;
  else
    v17 = v16 - 1;
  v18 = v17 + 48;
  v19 = (struct _D3DDDI_ESCAPEFLAGS *)operator new[]((unsigned int)(v17 + 48), 0x4B677844u, (enum _POOL_TYPE)512);
  v21 = v19;
  if ( v19 )
  {
    v24 = Src;
    v19[2].Value = 16;
    v19[3].Value = a2;
    v19[4].Value = a3;
    v19[7].0 = a7.0;
    v19[5].Value = a4;
    v19[9].Value = a5;
    v19[6].Value = a6;
    v19[8].Value = v9;
    memmove(&v19[10], v24, v9);
    v25 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
    if ( (_DWORD)v9 )
    {
      VmBusSendSyncMessage(v25, (struct DXGKVMB_COMMAND *)v21, v18, &v21[10], (unsigned int *)&Size, v31);
      if ( (unsigned int)Size < (unsigned int)v9 )
      {
        v10 = -1073741823;
        v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        *(_QWORD *)(v30 + 24) = -1073741823LL;
        WdLogEvent5_WdAssertion(v30);
      }
      else
      {
        memmove(Src, &v21[10], v9);
      }
    }
    else
    {
      VmBusSendSyncMessage(v25, (struct DXGKVMB_COMMAND *)v21, v18, 0LL, 0LL, v31);
    }
    operator delete[](v21);
    return v10;
  }
  else
  {
    v22 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v22 + 24) = 4146LL;
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
}
