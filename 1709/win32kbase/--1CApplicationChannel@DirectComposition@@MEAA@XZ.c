/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C00325BC
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0032FE0 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C002F7D4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0080128 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00814A0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C00818C4 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        union _SLIST_HEADER *this,
        __int64 a2,
        __int64 a3)
{
  bool v3; // zf
  DirectComposition::CEvent *Region; // rcx
  ULONGLONG Alignment; // rcx
  unsigned int v7; // edx
  __int64 v8; // r8
  struct _ERESOURCE *v9; // rcx
  DirectComposition::CEvent *v10; // rcx
  ULONGLONG v11; // rdx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  union _SLIST_HEADER *v16; // rdi
  _QWORD *v17; // rcx
  char *v18; // rsi
  char *v19; // rsi
  char *v20; // rdi
  ULONGLONG v21; // rcx
  ULONGLONG v22; // rcx
  ULONGLONG v23; // rcx
  ULONGLONG *v24; // rcx
  ULONGLONG v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rax

  v3 = this[13].Region == 0;
  this->Alignment = (ULONGLONG)&DirectComposition::CApplicationChannel::`vftable';
  if ( !v3 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    Region = (DirectComposition::CEvent *)this[13].Region;
    if ( Region )
      DirectComposition::CEvent::`scalar deleting destructor'(Region, a2);
  }
  if ( this[11].Region )
  {
    do
    {
      v24 = (ULONGLONG *)this[11].Region;
      v25 = *v24;
      if ( v24 )
        Win32FreePool(v24, a2, a3);
      this[11].Region = v25;
    }
    while ( v25 );
  }
  Alignment = this[11].Alignment;
  if ( Alignment )
  {
    Win32FreePool(Alignment, a2, a3);
    this[11].Alignment = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPoolSet *)((char *)&this[37].HeaderX64 + 8));
  v9 = (struct _ERESOURCE *)this[23].Alignment;
  if ( v9 )
  {
    ExDeleteResourceLite(v9);
    Win32FreePool(this[23].Alignment, v26, v27);
  }
  v10 = (DirectComposition::CEvent *)this[22].Region;
  if ( v10 )
    DirectComposition::CEvent::`scalar deleting destructor'(v10, v7);
  v11 = this[45].Alignment;
  if ( v11 )
  {
    MmUnmapViewOfSection(this[42].Alignment, v11);
    this[45].Alignment = 0LL;
  }
  v12 = (void *)this[44].Region;
  if ( v12 )
  {
    MmUnmapViewInSessionSpace(v12);
    this[44].Region = 0LL;
  }
  v13 = (void *)this[43].Region;
  if ( v13 )
  {
    ObfDereferenceObject(v13);
    this[43].Region = 0LL;
  }
  v14 = (void *)this[42].Alignment;
  if ( v14 )
  {
    ObfDereferenceObject(v14);
    this[42].Alignment = 0LL;
  }
  v15 = (void *)this[38].Region;
  if ( v15 )
    ObfDereferenceObject(v15);
  v16 = this + 33;
  while ( 1 )
  {
    v17 = (_QWORD *)v16->Alignment;
    if ( (union _SLIST_HEADER *)v16->Alignment == v16 )
      break;
    if ( (union _SLIST_HEADER *)v17[1] != v16 || (v28 = (_QWORD *)*v17, *(_QWORD **)(*v17 + 8LL) != v17) )
      __fastfail(3u);
    v16->Alignment = (ULONGLONG)v28;
    v28[1] = v16;
    Win32FreePool(v17, v11, v8);
  }
  v18 = (char *)&this[34];
  while ( *(char **)v18 != v18 )
  {
    v29 = *(__int64 **)v18;
    if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 || (v30 = *v29, *(__int64 **)(*v29 + 8) != v29) )
      __fastfail(3u);
    *(_QWORD *)v18 = v30;
    *(_QWORD *)(v30 + 8) = v18;
    Win32FreePool(v29, v11, v8);
  }
  v19 = (char *)&this[35];
  while ( *(char **)v19 != v19 )
  {
    v31 = *(__int64 **)v19;
    if ( *(char **)(*(_QWORD *)v19 + 8LL) != v19 || (v32 = *v31, *(__int64 **)(*v31 + 8) != v31) )
      __fastfail(3u);
    *(_QWORD *)v19 = v32;
    *(_QWORD *)(v32 + 8) = v19;
    Win32FreePool(v31, v11, v8);
  }
  v20 = (char *)&this[36];
  while ( *(char **)v20 != v20 )
  {
    v33 = *(__int64 **)v20;
    if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 || (v34 = *v33, *(__int64 **)(*v33 + 8) != v33) )
      __fastfail(3u);
    *(_QWORD *)v20 = v34;
    *(_QWORD *)(v34 + 8) = v20;
    Win32FreePool(v33, v11, v8);
  }
  v21 = this[29].Region;
  if ( v21 )
    Win32FreePool(v21, v11, v8);
  v22 = this[7].Alignment;
  if ( v22 )
    Win32FreePool(v22, v11, v8);
  v23 = this[3].Region;
  if ( v23 )
    Win32FreePool(v23, v11, v8);
  DirectComposition::CChannel::~CChannel((DirectComposition::CChannel *)this);
}
