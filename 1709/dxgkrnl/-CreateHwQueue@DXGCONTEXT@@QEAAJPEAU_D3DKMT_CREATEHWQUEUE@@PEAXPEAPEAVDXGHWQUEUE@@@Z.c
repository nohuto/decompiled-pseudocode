/*
 * XREFs of ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C01AC97C
 * Callers:
 *     DxgkCreateHwQueue @ 0x1C01AD050 (DxgkCreateHwQueue.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00088FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C0028680 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01ACE40 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CreateHwQueue(
        DXGCONTEXT *this,
        struct _D3DKMT_CREATEHWQUEUE *a2,
        void *a3,
        struct DXGHWQUEUE **a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  struct DXGHWQUEUE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGHWQUEUE *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx

  v6 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v6 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 104)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 191LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 192LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 193LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = (struct DXGHWQUEUE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x40uLL);
  v16 = v12;
  if ( v12 )
  {
    *((_QWORD *)v12 + 2) = this;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_DWORD *)v12 + 6) = 0;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 5) = 0LL;
    *((_QWORD *)v12 + 6) = 1LL;
    *((_BYTE *)v12 + 56) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  *a4 = v16;
  v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
  if ( v16 )
  {
    v19 = *((_QWORD *)v16 + 2);
    v18 = -1073741822LL;
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(v19 + 16);
  }
  else
  {
    v18 = -1073741801LL;
    *(_QWORD *)(v17 + 24) = this;
  }
  *(_QWORD *)(v17 + 32) = v18;
  WdLogEvent5_WdWarning(v17);
  if ( *a4 )
  {
    DXGHWQUEUE::DestroyCoreState(*a4, 0LL);
    if ( *a4 )
      DXGHWQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v18;
}
