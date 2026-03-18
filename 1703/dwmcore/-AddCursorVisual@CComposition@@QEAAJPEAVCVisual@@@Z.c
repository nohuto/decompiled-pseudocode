/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800CF090
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800CF198 (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x180005B8C (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800CF1F4 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800CF27C (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // edi
  int v3; // ebx
  __int64 *v6; // r14
  __int64 v7; // rdx
  CCursorVisual *v8; // r15
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v16; // eax
  struct CCursorVisual *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 238);
  v3 = 0;
  v17 = 0LL;
  if ( v2 > 0 )
  {
    v6 = (__int64 *)((char *)this + 928);
    do
    {
      v7 = (unsigned int)(v2 - 1);
      v8 = *(CCursorVisual **)(*v6 + 8 * v7);
      v9 = *((_QWORD *)v8 + 1);
      if ( *(_QWORD *)(v9 + 8) )
      {
        if ( *(struct CVisual **)(v9 + 8) == a2 )
          goto LABEL_22;
      }
      else
      {
        DynArray<CCursorVisual *,0>::RemoveAt(v6, v7);
        CCursorVisual::`scalar deleting destructor'(v8, v10);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
  v11 = CCursorVisual::Create(this, a2, &v17);
  v3 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1097u);
LABEL_22:
    if ( v17 )
      CCursorVisual::`scalar deleting destructor'(v17, v7);
    return (unsigned int)v3;
  }
  v12 = (unsigned int)v17;
  v13 = *((unsigned int *)this + 238);
  v14 = v13 + 1;
  if ( (int)v13 + 1 >= (unsigned int)v13 )
    v12 = v13 + 1;
  v3 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
  if ( v14 < (unsigned int)v13 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v12 > *((_DWORD *)this + 237) )
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 928, 8u, 1, &v17);
    v3 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 116) + 8 * v13) = v17;
    *((_DWORD *)this + 238) = v12;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1099u);
    goto LABEL_22;
  }
  return (unsigned int)v3;
}
