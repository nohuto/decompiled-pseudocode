/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C000BF60
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C000A5E0 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C000FF3C (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0010DB8 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00160C8 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this)
{
  bool v1; // zf
  DirectComposition::CEvent *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rcx
  DirectComposition::CEvent *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  _QWORD **v13; // rbx
  _QWORD *v14; // rcx
  _QWORD **v15; // rsi
  _QWORD *v16; // rcx
  _QWORD **v17; // rsi
  _QWORD *v18; // rcx
  _QWORD **v19; // rbx
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax

  v1 = *((_QWORD *)this + 27) == 0LL;
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  if ( !v1 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    v3 = (DirectComposition::CEvent *)*((_QWORD *)this + 27);
    if ( v3 )
      DirectComposition::CEvent::`scalar deleting destructor'(v3);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 23);
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      Win32FreePool(v4);
      *((_QWORD *)this + 23) = v5;
      v4 = v5;
    }
    while ( v5 );
  }
  v6 = *((_QWORD *)this + 22);
  if ( v6 )
  {
    Win32FreePool(v6);
    *((_QWORD *)this + 22) = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CApplicationChannel *)((char *)this + 600));
  v7 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v7 )
  {
    ExDeleteResourceLite(v7);
    Win32FreePool(*((_QWORD *)this + 46));
  }
  v8 = (DirectComposition::CEvent *)*((_QWORD *)this + 45);
  if ( v8 )
    DirectComposition::CEvent::`scalar deleting destructor'(v8);
  if ( *((_QWORD *)this + 90) )
  {
    MmUnmapViewOfSection(*((_QWORD *)this + 84));
    *((_QWORD *)this + 90) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 89);
  if ( v9 )
  {
    MmUnmapViewInSessionSpace(v9);
    *((_QWORD *)this + 89) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 87);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    *((_QWORD *)this + 87) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 84);
  if ( v11 )
  {
    ObfDereferenceObject(v11);
    *((_QWORD *)this + 84) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 77);
  if ( v12 )
    ObfDereferenceObject(v12);
  v13 = (_QWORD **)((char *)this + 528);
  while ( 1 )
  {
    v14 = *v13;
    if ( *v13 == v13 )
      break;
    if ( (_QWORD **)v14[1] != v13 || (v24 = (_QWORD *)*v14, *(_QWORD **)(*v14 + 8LL) != v14) )
      __fastfail(3u);
    *v13 = v24;
    v24[1] = v13;
    Win32FreePool(v14);
  }
  v15 = (_QWORD **)((char *)this + 544);
  while ( 1 )
  {
    v16 = *v15;
    if ( *v15 == v15 )
      break;
    if ( (_QWORD **)v16[1] != v15 || (v25 = (_QWORD *)*v16, *(_QWORD **)(*v16 + 8LL) != v16) )
      __fastfail(3u);
    *v15 = v25;
    v25[1] = v15;
    Win32FreePool(v16);
  }
  v17 = (_QWORD **)((char *)this + 560);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == v17 )
      break;
    if ( (_QWORD **)v18[1] != v17 || (v26 = (_QWORD *)*v18, *(_QWORD **)(*v18 + 8LL) != v18) )
      __fastfail(3u);
    *v17 = v26;
    v26[1] = v17;
    Win32FreePool(v18);
  }
  v19 = (_QWORD **)((char *)this + 576);
  while ( 1 )
  {
    v20 = *v19;
    if ( *v19 == v19 )
      break;
    if ( (_QWORD **)v20[1] != v19 || (v27 = (_QWORD *)*v20, *(_QWORD **)(*v20 + 8LL) != v20) )
      __fastfail(3u);
    *v19 = v27;
    v27[1] = v19;
    Win32FreePool(v20);
  }
  v21 = *((_QWORD *)this + 59);
  if ( v21 )
    Win32FreePool(v21);
  v22 = *((_QWORD *)this + 14);
  if ( v22 )
    Win32FreePool(v22);
  v23 = *((_QWORD *)this + 7);
  if ( v23 )
    Win32FreePool(v23);
  DirectComposition::CChannel::~CChannel(this);
}
