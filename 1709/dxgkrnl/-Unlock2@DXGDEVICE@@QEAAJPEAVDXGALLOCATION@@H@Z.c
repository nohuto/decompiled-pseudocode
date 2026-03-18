/*
 * XREFs of ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C016F1AC
 * Callers:
 *     DxgkLock2 @ 0x1C009E500 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C00A1620 (DxgkUnlock2.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000F818 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?VidMmUnlock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0014B50 (-VidMmUnlock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01AD6FC (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock2(DXGDEVICE *this, struct DXGALLOCATION *a2, __int64 a3)
{
  _QWORD *v5; // rax
  unsigned int v7; // esi
  __int64 v8; // rax
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  _QWORD *v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]
  char v19; // [rsp+38h] [rbp-10h]

  if ( *((DXGDEVICE **)a2 + 1) == this )
  {
    if ( !*((_DWORD *)this + 82) )
    {
      v7 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
      if ( (v7 & 4) != 0 )
      {
        if ( (_DWORD)a3 )
        {
          v8 = *((_QWORD *)this + 209);
          v9 = (v7 >> 6) & 0xF;
          v18 = v8;
          v19 = 0;
          if ( v8 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24));
            v17 = -1LL;
          }
          COREACCESS::AcquireShared((COREACCESS *)v16);
          if ( *((_DWORD *)this + 102) == 1
            && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 209) + 2304LL), this, v9)
            && DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v9) == a2 )
          {
            DXGDEVICE::UpdateDodFrontBuffer(this, a2);
          }
          COREACCESS::~COREACCESS((COREACCESS *)v16);
        }
      }
    }
    v10 = VIDMM_EXPORT::VidMmUnlock(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
            *((struct _VIDMM_MULTI_ALLOC **)a2 + 3));
    v14 = v10;
    if ( v10 < 0 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v15[3] = this;
      v15[4] = a2;
      v15[5] = v14;
      WdLogEvent5_WdWarning(v15);
    }
    return (unsigned int)v14;
  }
  else
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v5[4] = this;
    v5[3] = a2;
    v5[5] = *((_QWORD *)a2 + 1);
    v5[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
}
