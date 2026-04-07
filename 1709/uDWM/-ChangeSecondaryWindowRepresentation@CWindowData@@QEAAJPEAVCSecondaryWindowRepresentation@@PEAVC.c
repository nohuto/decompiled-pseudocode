/*
 * XREFs of ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x1800119F0
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E800 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800115DC (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800116B8 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowData::ChangeSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        struct CWindowRepresentation *a3)
{
  CWindowData *v5; // rcx
  char v6; // bl
  CWindowData *v7; // rsi
  bool v8; // bp
  int v9; // eax
  unsigned int v10; // ebx
  char v12; // r9
  __int128 v13; // [rsp+30h] [rbp-18h]

  v5 = *(CWindowData **)a3;
  v6 = 1;
  v7 = (CWindowData *)*((_QWORD *)a2 + 8);
  v13 = *((_OWORD *)a2 + 4);
  v8 = *(_QWORD *)a3 != (_QWORD)v7;
  if ( *(_QWORD *)a3 )
  {
    v12 = *(CWindowData **)a3 != v7 && v5 != this;
    CWindowData::RemoveSecondaryWindowRepresentation((__int64)v5, (__int64)a2, *((_DWORD *)a3 + 2), v12);
  }
  if ( !v8 || v7 == this )
    v6 = 0;
  v9 = CWindowData::AddSecondaryWindowRepresentation((__int64)v7, a2, SDWORD2(v13), v6);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x19DAu);
  return v10;
}
