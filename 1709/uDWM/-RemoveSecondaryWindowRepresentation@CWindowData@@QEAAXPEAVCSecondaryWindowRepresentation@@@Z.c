/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001189C
 * Callers:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18000F194 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026D60 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowRepresentation@@@Z @ 0x180011CDC (-Remove@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowReprese.c)
 *     EtwppTemplate_qq @ 0x1800754E8 (EtwppTemplate_qq.c)
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
    if ( dword_1800BE044
      && (unsigned __int8)(byte_1800BE048 - 1) > 2u
      && (qword_1800BE030 & 0x8000000000000001uLL) != 0
      && (qword_1800BE038 & 0x8000000000000001uLL) == qword_1800BE038 )
    {
      EtwppTemplate_qq(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &EtwTraceInfo_9001, a2, *((_QWORD *)this + 5));
    }
    DynArray<CSecondaryWindowRepresentation *,0>::Remove((char *)this + 440, &v5);
  }
  CWindowData::RemoveSecondaryWindowRepresentation(v4, (__int64)a2, SDWORD2(v4), 1);
}
