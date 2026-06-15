/*
 * XREFs of ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180068F00
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180068FFC (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800690F0 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::Initialize(CVolumeControlBase *this, struct IUnknown *a2)
{
  int v4; // ebx
  struct IUnknown *v5; // rcx
  int v6; // ecx
  struct IUnknown *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))a2->lpVtbl[1].Release)(a2, (char *)this + 64);
  if ( v4 < 0 )
    goto LABEL_6;
  v5 = v8;
  if ( v8 != a2 )
  {
    ATL::AtlComQIPtrAssign(&v8, a2, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v5 = v8;
  }
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v5->lpVtbl[1].QueryInterface)(v5, (char *)this + 72);
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 224LL))(this),
        v6 = *((_DWORD *)this + 18),
        *((_QWORD *)this + 28) = *((_QWORD *)this + 8),
        *((_DWORD *)this + 58) = v6,
        v4 < 0) )
  {
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::Initialize", 127, v4);
  }
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v4;
}
