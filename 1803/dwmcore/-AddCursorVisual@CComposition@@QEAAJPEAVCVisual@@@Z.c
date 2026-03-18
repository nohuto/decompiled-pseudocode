/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800D9DD8
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800D9D7C (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800D9ED8 (-Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800D9F60 (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800D9F98 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // edi
  int v3; // ebx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  CCursorVisualReference *v8; // r15
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v15; // eax
  struct CCursorVisualReference *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 236);
  v3 = 0;
  v16 = 0LL;
  if ( v2 > 0 )
  {
    v6 = (_QWORD *)((char *)this + 920);
    do
    {
      v7 = (unsigned int)(v2 - 1);
      v8 = *(CCursorVisualReference **)(*v6 + 8 * v7);
      v9 = *((_QWORD *)v8 + 1);
      if ( *(_QWORD *)(v9 + 8) )
      {
        if ( *(struct CVisual **)(v9 + 8) == a2 )
          goto LABEL_20;
      }
      else
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt(v6, v7);
        CCursorVisualReference::`scalar deleting destructor'(v8, v10);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
  v11 = CCursorVisualReference::Create(this, a2, &v16);
  v3 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xF9Cu);
LABEL_20:
    if ( v16 )
      CCursorVisualReference::`scalar deleting destructor'(v16, v7);
    return (unsigned int)v3;
  }
  v12 = *((_DWORD *)this + 236);
  v13 = v12 + 1;
  v3 = v12 + 1 < v12 ? 0x80070216 : 0;
  if ( v12 + 1 < v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v13 > *((_DWORD *)this + 235) )
  {
    v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 920, 8u, 1, &v16);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 115) + 8LL * v12) = v16;
    *((_DWORD *)this + 236) = v13;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xF9Eu);
    goto LABEL_20;
  }
  return (unsigned int)v3;
}
