/*
 * XREFs of ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C01A24A0
 * Callers:
 *     DxgkCreateHwQueue @ 0x1C01A50E0 (DxgkCreateHwQueue.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01CE7F0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0019E50 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C00330AC (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2990 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C01A30D4 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CreateHwQueue(
        DXGCONTEXT *this,
        struct _D3DKMT_CREATEHWQUEUE *a2,
        void *a3,
        struct DXGHWQUEUE **a4)
{
  __int64 v6; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // esi
  DXGHWQUEUE *v21; // rax
  DXGHWQUEUE **v22; // rcx
  __int64 v23; // rdx

  v6 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v6 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 104)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 261LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 262LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v13 + 24) = 263LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x48uLL);
  if ( v14 )
  {
    v16 = 0LL;
    v14[2] = this;
    *v14 = 0LL;
    v14[1] = 0LL;
    *((_DWORD *)v14 + 6) = 0;
    v14[4] = 0LL;
    v14[5] = 0LL;
    v14[6] = 0LL;
    v14[7] = 1LL;
    *((_BYTE *)v14 + 64) = 0;
  }
  *a4 = (struct DXGHWQUEUE *)v14;
  if ( !v14 )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    v19 = -1073741801;
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v18);
LABEL_13:
    if ( *a4 )
    {
      DXGHWQUEUE::DestroyCoreState(*a4, 0LL);
      if ( *a4 )
        DXGHWQUEUE::`scalar deleting destructor'(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v19;
  }
  v19 = DXGHWQUEUE::Initialize((DXGHWQUEUE *)v14, a2, a3);
  if ( v19 < 0 )
    goto LABEL_13;
  v21 = *a4;
  v22 = (DXGHWQUEUE **)((char *)this + 368);
  v23 = *((_QWORD *)this + 46);
  if ( *(DXGCONTEXT **)(v23 + 8) != (DXGCONTEXT *)((char *)this + 368) )
    __fastfail(3u);
  *(_QWORD *)v21 = v23;
  *((_QWORD *)v21 + 1) = v22;
  *(_QWORD *)(v23 + 8) = v21;
  *v22 = v21;
  _InterlockedIncrement64((volatile signed __int64 *)this + 4);
  return 0LL;
}
