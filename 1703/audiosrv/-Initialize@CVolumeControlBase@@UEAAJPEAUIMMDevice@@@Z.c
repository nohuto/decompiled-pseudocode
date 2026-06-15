/*
 * XREFs of ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003AF20
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003B13C (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180085430 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002DAEC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003B440 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::Initialize(CVolumeControlBase *this, struct IUnknown *a2)
{
  int v4; // ebx
  struct IUnknown *v5; // rcx
  __int64 (__fastcall *v6)(CVolumeHardware *__hidden); // rax
  int LevelData; // eax
  int v8; // ecx
  struct IUnknown *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))a2->lpVtbl[1].Release)(a2, (char *)this + 64);
  if ( v4 < 0 )
    goto LABEL_12;
  v5 = v10;
  if ( v10 != a2 )
  {
    ATL::AtlComQIPtrAssign(&v10, a2, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v5 = v10;
  }
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v5->lpVtbl[1].QueryInterface)(v5, (char *)this + 72);
  if ( v4 < 0
    || ((v6 = *(__int64 (__fastcall **)(CVolumeHardware *__hidden))(*(_QWORD *)this + 224LL),
         v6 != CVolumeHardware::GetLevelData)
      ? (LevelData = v6(this))
      : (LevelData = CVolumeHardware::GetLevelData(this)),
        v4 = LevelData,
        v8 = *((_DWORD *)this + 18),
        *((_QWORD *)this + 28) = *((_QWORD *)this + 8),
        *((_DWORD *)this + 58) = v8,
        LevelData < 0) )
  {
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::Initialize", 0x7Fu, v4);
  }
  if ( v10 )
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
  return (unsigned int)v4;
}
