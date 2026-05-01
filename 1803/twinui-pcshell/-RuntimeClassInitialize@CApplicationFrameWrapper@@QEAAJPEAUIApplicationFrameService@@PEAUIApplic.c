/*
 * XREFs of ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x1800F285C
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x180128DE4 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall CApplicationFrameWrapper::RuntimeClassInitialize(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameService *a2,
        struct IApplicationFrameManager *a3,
        struct IApplicationFrame *a4)
{
  int v8; // ebx
  struct IApplicationFrameService *v9; // rax
  struct IApplicationFrameManager *v11; // [rsp+40h] [rbp+8h] BYREF

  v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 24LL))(a4, (char *)this + 88);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 120LL))(a4, (char *)this + 96);
    if ( v8 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
      v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 144LL))(
             a4,
             (char *)this + 136);
      if ( v8 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((char *)this + 120, a4);
        if ( *((struct IApplicationFrameManager **)this + 16) != a3 )
        {
          v11 = a3;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
          v11 = (struct IApplicationFrameManager *)*((_QWORD *)this + 16);
          *((_QWORD *)this + 16) = a3;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
        }
        v9 = (struct IApplicationFrameService *)*((_QWORD *)this + 18);
        if ( v9 != a2 )
        {
          if ( a2 )
          {
            (*(void (__fastcall **)(struct IApplicationFrameService *))(*(_QWORD *)a2 + 8LL))(a2);
            v9 = (struct IApplicationFrameService *)*((_QWORD *)this + 18);
          }
          v11 = v9;
          *((_QWORD *)this + 18) = a2;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
        }
      }
    }
  }
  return (unsigned int)v8;
}
