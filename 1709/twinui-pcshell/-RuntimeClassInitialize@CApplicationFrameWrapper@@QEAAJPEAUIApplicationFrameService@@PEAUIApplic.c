/*
 * XREFs of ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x18004D560
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x1800508D8 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x180050A84 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_180050A84.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::RuntimeClassInitialize(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameService *a2,
        struct IApplicationFrameManager *a3,
        struct IApplicationFrame *a4)
{
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 24LL))(a4, (char *)this + 64);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 120LL))(a4, (char *)this + 72);
    if ( v8 >= 0 )
    {
      v9 = *((_QWORD *)this + 14);
      if ( v9 )
      {
        *((_QWORD *)this + 14) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 144LL))(
             a4,
             (char *)this + 112);
      if ( v8 >= 0 )
      {
        if ( *((struct IApplicationFrame **)this + 12) != a4 )
        {
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a4 + 8LL))(a4);
          v10 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = a4;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        if ( *((struct IApplicationFrameManager **)this + 13) != a3 )
        {
          if ( a3 )
            (*(void (__fastcall **)(struct IApplicationFrameManager *))(*(_QWORD *)a3 + 8LL))(a3);
          v11 = *((_QWORD *)this + 13);
          *((_QWORD *)this + 13) = a3;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        if ( *((struct IApplicationFrameService **)this + 15) != a2 )
        {
          if ( a2 )
            (*(void (__fastcall **)(struct IApplicationFrameService *))(*(_QWORD *)a2 + 8LL))(a2);
          v12 = *((_QWORD *)this + 15);
          *((_QWORD *)this + 15) = a2;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
  }
  return (unsigned int)v8;
}
