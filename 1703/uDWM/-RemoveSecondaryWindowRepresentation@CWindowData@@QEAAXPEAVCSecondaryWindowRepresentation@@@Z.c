/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180036960
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003461C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18003ACA8 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowRepresentation@@@Z @ 0x180015F00 (-Remove@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowReprese.c)
 *     EtwppTemplate_qq @ 0x18007F798 (EtwppTemplate_qq.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2)
{
  __int128 v4; // [rsp+20h] [rbp-18h]
  struct CSecondaryWindowRepresentation *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v4 = *((_OWORD *)a2 + 4);
  if ( (CWindowData *)v4 != this )
  {
    if ( dword_1800C0044
      && (unsigned __int8)(byte_1800C0048 - 1) > 2u
      && (qword_1800C0030 & 0x8000000000000001uLL) != 0
      && (qword_1800C0038 & 0x8000000000000001uLL) == qword_1800C0038 )
    {
      EtwppTemplate_qq(this, &EtwTraceInfo_9001, a2, *((_QWORD *)this + 5));
    }
    DynArray<CSecondaryWindowRepresentation *,0>::Remove((__int64 *)this + 55, (__int64 *)&v5);
  }
  CWindowData::RemoveSecondaryWindowRepresentation(v4, (__int64)a2, SDWORD2(v4), 1);
}
