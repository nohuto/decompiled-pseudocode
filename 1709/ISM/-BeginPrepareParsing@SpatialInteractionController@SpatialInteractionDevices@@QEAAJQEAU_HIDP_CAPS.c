/*
 * XREFs of ?BeginPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800C440C
 * Callers:
 *     ?PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@PEAVHIDDevice@@@Z @ 0x180092060 (-PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionControlle.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::BeginPrepareParsing(
        SpatialInteractionDevices::SpatialInteractionController *this,
        struct _HIDP_CAPS *const a2,
        struct _HIDP_PREPARSED_DATA *a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        HSTRING string)
{
  int v7; // eax
  __int128 v8; // xmm1
  bool v9; // al
  HSTRING *v10; // rbx
  HRESULT v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = *((_DWORD *)this + 86);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)&a2->Usage;
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)&a2->Reserved[3];
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)&a2->Reserved[11];
  v8 = *(_OWORD *)&a2->NumberInputValueCaps;
  *((_DWORD *)this + 89) = v7;
  *((_QWORD *)this + 12) = a3;
  *((_WORD *)this + 45) = a5;
  *((_WORD *)this + 44) = a4;
  *((_WORD *)this + 46) = a6;
  *((_WORD *)this + 197) = a5;
  *((_WORD *)this + 196) = a4;
  *((_WORD *)this + 198) = a6;
  *(_OWORD *)((char *)this + 152) = v8;
  v9 = a5 == 0xFF00 && a4 == 255 && a6 == 2;
  *((_BYTE *)this + 800) = v9;
  if ( v9 )
    *((_BYTE *)this + 401) = 1;
  v10 = (HSTRING *)((char *)this + 792);
  if ( string && string == *v10 )
    return 0LL;
  WindowsDeleteString(*v10);
  *v10 = 0LL;
  v11 = WindowsDuplicateString(string, v10);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x104,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
