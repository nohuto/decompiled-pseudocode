/*
 * XREFs of ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C016B4B8
 * Callers:
 *     DxgkUnlock2 @ 0x1C00BEED0 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x1C00CA6A0 (DxgkLock2.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000F5E0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?VidMmUnlock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0013B24 (-VidMmUnlock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C019789C (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock2(DXGDEVICE *this, struct DXGALLOCATION *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  unsigned int v8; // esi
  __int64 v9; // rax
  unsigned int v10; // esi
  bool v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  _QWORD *v18; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]
  char v22; // [rsp+38h] [rbp-10h]

  if ( *((DXGDEVICE **)a2 + 1) == this )
  {
    if ( !*((_DWORD *)this + 82) )
    {
      v8 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
      if ( (v8 & 4) != 0 )
      {
        if ( (_DWORD)a3 )
        {
          v9 = *((_QWORD *)this + 225);
          v10 = (v8 >> 6) & 0xF;
          v21 = v9;
          v22 = 0;
          if ( v9 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24));
            v20 = -1LL;
          }
          COREACCESS::AcquireShared((COREACCESS *)v19);
          if ( *((_DWORD *)this + 102) == 1
            && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 225) + 2280LL), this, v10)
            && DXGDEVICE::GetDisplayedPrimary(this, v10, v11) == a2 )
          {
            DXGDEVICE::UpdateDodFrontBuffer(this, a2);
          }
          COREACCESS::~COREACCESS((COREACCESS *)v19);
        }
      }
    }
    v12 = VIDMM_EXPORT::VidMmUnlock(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
            *((struct _VIDMM_MULTI_ALLOC **)a2 + 3));
    v17 = v12;
    if ( v12 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      v18[3] = this;
      v18[4] = a2;
      v18[5] = v17;
      WdLogEvent5_WdWarning(v18);
    }
    return (unsigned int)v17;
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v6[4] = this;
    v6[3] = a2;
    v6[5] = *((_QWORD *)a2 + 1);
    v6[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
}
