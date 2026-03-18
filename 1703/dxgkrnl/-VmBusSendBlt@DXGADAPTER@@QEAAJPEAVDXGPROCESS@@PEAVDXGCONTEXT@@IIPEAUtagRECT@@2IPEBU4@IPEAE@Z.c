/*
 * XREFs of ?VmBusSendBlt@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C002ECB0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B51E8 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendBlt(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        LONG a4,
        LONG a5,
        struct tagRECT *a6,
        struct tagRECT *a7,
        LONG a8,
        const struct tagRECT *Src,
        size_t Size,
        unsigned __int8 *a11)
{
  unsigned int v13; // esi
  struct tagRECT *v14; // rax
  __int64 v15; // rcx
  struct _MDL *v16; // r9
  struct DXGKVMB_COMMAND *v17; // rbx
  __int64 v18; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax

  v13 = 16 * a8;
  v14 = (struct tagRECT *)operator new((unsigned int)(16 * a8 + Size + 72), (unsigned int)a2, 1, (enum _POOL_TYPE)512);
  v17 = (struct DXGKVMB_COMMAND *)v14;
  if ( v14 )
  {
    v14->right = 50;
    v14->bottom = *((_DWORD *)a2 + 96);
    v14[1].left = *(_DWORD *)(*((_QWORD *)a3 + 2) + 336LL);
    v14[1].top = *((_DWORD *)a3 + 7);
    v14[1].right = a4;
    v14[1].bottom = a5;
    v14[2] = *a6;
    v14[3] = *a7;
    v14[4].left = a8;
    v14[4].top = Size;
    if ( a8 )
      memmove(&v14[4].right, Src, v13);
    if ( (_DWORD)Size )
    {
      if ( &a11[(unsigned int)Size] < a11 || (unsigned __int64)&a11[(unsigned int)Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove((char *)v17 + v13 + 72, a11, (unsigned int)Size);
    }
    v20 = VmBusSendSyncMessageStatusReturn(this[484], v17, 16 * a8 + (int)Size + 72, v16);
    v25 = v20;
    if ( v20 < 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
      *(_QWORD *)(v26 + 24) = v25;
      WdLogEvent5_WdAssertion(v26);
    }
    operator delete[](v17);
    return (unsigned int)v25;
  }
  else
  {
    v18 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v18 + 24) = 3560LL;
    WdLogEvent5_WdLowResource(v18);
    return 3221225495LL;
  }
}
