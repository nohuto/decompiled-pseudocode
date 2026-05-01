/*
 * XREFs of ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x18004B090
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEBQEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x18004E218 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEBQEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x18004E338 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PE_ea_18004E338.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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

  v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 24LL))(a4, (char *)this + 48);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 120LL))(a4, (char *)this + 56);
    if ( v8 >= 0 )
    {
      v9 = *((_QWORD *)this + 12);
      if ( v9 )
      {
        *((_QWORD *)this + 12) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 144LL))(
             a4,
             (char *)this + 96);
      if ( v8 >= 0 )
      {
        if ( *((struct IApplicationFrame **)this + 10) != a4 )
        {
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a4 + 8LL))(a4);
          v10 = *((_QWORD *)this + 10);
          *((_QWORD *)this + 10) = a4;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        if ( *((struct IApplicationFrameManager **)this + 11) != a3 )
        {
          if ( a3 )
            (*(void (__fastcall **)(struct IApplicationFrameManager *))(*(_QWORD *)a3 + 8LL))(a3);
          v11 = *((_QWORD *)this + 11);
          *((_QWORD *)this + 11) = a3;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        if ( *((struct IApplicationFrameService **)this + 13) != a2 )
        {
          if ( a2 )
            (*(void (__fastcall **)(struct IApplicationFrameService *))(*(_QWORD *)a2 + 8LL))(a2);
          v12 = *((_QWORD *)this + 13);
          *((_QWORD *)this + 13) = a2;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
  }
  return (unsigned int)v8;
}
