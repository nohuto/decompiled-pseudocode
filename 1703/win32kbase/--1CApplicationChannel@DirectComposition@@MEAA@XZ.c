/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C001CF18
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0018CF0 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C001A268 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E5EC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C007F2E0 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C008207C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(union _SLIST_HEADER *this)
{
  unsigned int v2; // edx
  DirectComposition::CEvent *Region; // rcx
  ULONGLONG Alignment; // rcx
  unsigned int v5; // edx
  struct _ERESOURCE *v6; // rcx
  DirectComposition::CEvent *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  ULONGLONG *p_Region; // rdi
  ULONGLONG *v13; // rcx
  ULONGLONG *v14; // rsi
  ULONGLONG *v15; // rsi
  ULONGLONG *v16; // rdi
  ULONGLONG *v17; // rcx
  ULONGLONG v18; // rdi
  ULONGLONG v19; // rax
  _QWORD *v20; // rcx
  ULONGLONG v21; // rax
  _QWORD *v22; // rcx
  ULONGLONG v23; // rax
  _QWORD *v24; // rcx
  ULONGLONG v25; // rax

  this->Alignment = (ULONGLONG)&DirectComposition::CApplicationChannel::`vftable';
  if ( this[14].Region )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    Region = (DirectComposition::CEvent *)this[14].Region;
    if ( Region )
      DirectComposition::CEvent::`scalar deleting destructor'(Region, v2);
  }
  if ( this[12].Region )
  {
    do
    {
      v17 = (ULONGLONG *)this[12].Region;
      v18 = *v17;
      if ( v17 )
        Win32FreePool(v17);
      this[12].Region = v18;
    }
    while ( v18 );
  }
  Alignment = this[12].Alignment;
  if ( Alignment )
  {
    Win32FreePool(Alignment);
    this[12].Alignment = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPoolSet *)&this[39]);
  v6 = (struct _ERESOURCE *)this[24].Alignment;
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    Win32FreePool(this[24].Alignment);
  }
  v7 = (DirectComposition::CEvent *)this[23].Region;
  if ( v7 )
    DirectComposition::CEvent::`scalar deleting destructor'(v7, v5);
  if ( this[46].Region )
  {
    MmUnmapViewOfSection(this[43].Region);
    this[46].Region = 0LL;
  }
  v8 = (void *)this[46].Alignment;
  if ( v8 )
  {
    MmUnmapViewInSessionSpace(v8);
    this[46].Alignment = 0LL;
  }
  v9 = (void *)this[45].Alignment;
  if ( v9 )
  {
    ObfDereferenceObject(v9);
    this[45].Alignment = 0LL;
  }
  v10 = (void *)this[43].Region;
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    this[43].Region = 0LL;
  }
  v11 = (void *)this[40].Alignment;
  if ( v11 )
    ObfDereferenceObject(v11);
  p_Region = &this[34].Region;
  while ( 1 )
  {
    v13 = (ULONGLONG *)*p_Region;
    if ( (ULONGLONG *)*p_Region == p_Region )
      break;
    v19 = *v13;
    if ( (ULONGLONG *)v13[1] != p_Region || *(ULONGLONG **)(v19 + 8) != v13 )
      __fastfail(3u);
    *p_Region = v19;
    *(_QWORD *)(v19 + 8) = p_Region;
    Win32FreePool(v13);
  }
  v14 = &this[35].Region;
  while ( (ULONGLONG *)*v14 != v14 )
  {
    v20 = (_QWORD *)*v14;
    v21 = *(_QWORD *)*v14;
    if ( *(ULONGLONG **)(*v14 + 8) != v14 || *(_QWORD **)(v21 + 8) != v20 )
      __fastfail(3u);
    *v14 = v21;
    *(_QWORD *)(v21 + 8) = v14;
    Win32FreePool(v20);
  }
  v15 = &this[36].Region;
  while ( (ULONGLONG *)*v15 != v15 )
  {
    v22 = (_QWORD *)*v15;
    v23 = *(_QWORD *)*v15;
    if ( *(ULONGLONG **)(*v15 + 8) != v15 || *(_QWORD **)(v23 + 8) != v22 )
      __fastfail(3u);
    *v15 = v23;
    *(_QWORD *)(v23 + 8) = v15;
    Win32FreePool(v22);
  }
  v16 = &this[37].Region;
  while ( (ULONGLONG *)*v16 != v16 )
  {
    v24 = (_QWORD *)*v16;
    v25 = *(_QWORD *)*v16;
    if ( *(ULONGLONG **)(*v16 + 8) != v16 || *(_QWORD **)(v25 + 8) != v24 )
      __fastfail(3u);
    *v16 = v25;
    *(_QWORD *)(v25 + 8) = v16;
    Win32FreePool(v24);
  }
  this[30].Region = (ULONGLONG)&DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CDCompDynamicArrayBase *)((char *)&this[30].HeaderX64 + 8));
  this[7].Region = (ULONGLONG)&DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CDCompDynamicArrayBase *)((char *)&this[7].HeaderX64 + 8));
  this[3].Region = (ULONGLONG)&DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CDCompDynamicArrayBase *)((char *)&this[3].HeaderX64 + 8));
  DirectComposition::CChannel::~CChannel((DirectComposition::CChannel *)this);
}
