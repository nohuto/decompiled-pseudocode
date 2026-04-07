/*
 * XREFs of ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x18001D7B4
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001D8C8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003564C (-Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureNonClientAreaButton(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v5; // rbp
  struct CVisual *v6; // rdx
  __int64 v8; // rsi
  CVisual *v9; // rcx
  bool v10; // r8
  int v11; // eax
  int inserted; // eax
  int v13; // eax
  CBaseObject *v14; // rcx

  v2 = a2;
  v3 = 0;
  v5 = 3LL * a2;
  if ( (dword_1800AAF98[3 * a2] & *(_DWORD *)(a1 + 584)) != 0 )
  {
    v8 = a1 + 8LL * a2;
    if ( !*(_QWORD *)(v8 + 480) )
    {
      v11 = CButton::Create(*(struct IDwmChannel **)(*(_QWORD *)(a1 + 16) + 16LL), (struct CButton **)(v8 + 480));
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x9D4u);
        return v3;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*(_QWORD *)(a1 + 272) + 32LL),
                   *(struct CVisual ***)(v8 + 480),
                   0LL,
                   0,
                   1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x9D6u);
        return v3;
      }
      *(_DWORD *)(*(_QWORD *)(v8 + 480) + 192LL) = dword_1800AAF98[v5 + 2];
    }
    v9 = *(CVisual **)(v8 + 480);
    v10 = (dword_1800AAF98[v5 + 1] & *(_DWORD *)(a1 + 584)) != 0;
    if ( (*((_BYTE *)v9 + 280) & 1) != v10 )
    {
      *((_BYTE *)v9 + 280) = v10 | *((_BYTE *)v9 + 280) & 0xFE;
      CVisual::SetDirtyFlags(v9, 0x8000);
    }
  }
  else
  {
    v6 = *(struct CVisual **)(a1 + 8LL * a2 + 480);
    if ( v6 )
    {
      v13 = VisualCollection::Remove((VisualCollection *)(*(_QWORD *)(a1 + 272) + 32LL), v6);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x9E1u);
      }
      else
      {
        v14 = *(CBaseObject **)(a1 + 8 * v2 + 480);
        if ( v14 )
        {
          CBaseObject::Release(v14);
          *(_QWORD *)(a1 + 8 * v2 + 480) = 0LL;
        }
      }
    }
  }
  return v3;
}
