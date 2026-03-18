/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180127964
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18012899C (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801278B0 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180134600 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18013BCA4 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // edi
  DWORD v3; // ebx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  signed int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax
  signed int v14; // eax
  CCursorVisual *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 230);
  v3 = 0;
  v16 = 0LL;
  if ( v2 > 0 )
  {
    v6 = (_QWORD *)((char *)this + 896);
    do
    {
      v7 = (unsigned int)(v2 - 1);
      v8 = *(_QWORD *)(*v6 + 8 * v7);
      v9 = *(_QWORD *)(v8 + 8);
      if ( *(_QWORD *)(v9 + 8) )
      {
        if ( *(struct CVisual **)(v9 + 8) == a2 )
          goto LABEL_20;
      }
      else
      {
        DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(v6, v7);
        CCursorVisual::`scalar deleting destructor'((CWeakReferenceBase **)v8);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
  v10 = CCursorVisual::Create(this, a2, &v16);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xF4Bu);
LABEL_20:
    if ( v16 )
      CCursorVisual::`scalar deleting destructor'((CWeakReferenceBase **)v16);
    return v3;
  }
  v11 = (unsigned int)v16;
  v12 = *((unsigned int *)this + 230);
  v13 = v12 + 1;
  if ( (int)v12 + 1 >= (unsigned int)v12 )
    v11 = v12 + 1;
  v3 = v13 < (unsigned int)v12 ? 0x80070216 : 0;
  if ( v13 < (unsigned int)v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
  }
  else if ( v11 > *((_DWORD *)this + 229) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 896, 8u, 1, &v16);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 112) + 8 * v12) = v16;
    *((_DWORD *)this + 230) = v11;
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xF4Du);
    goto LABEL_20;
  }
  return v3;
}
