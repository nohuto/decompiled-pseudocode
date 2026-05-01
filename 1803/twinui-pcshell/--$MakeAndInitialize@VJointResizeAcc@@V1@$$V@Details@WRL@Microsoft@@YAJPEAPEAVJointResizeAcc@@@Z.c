/*
 * XREFs of ??$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z @ 0x1802EABA0
 * Callers:
 *     ?JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802EAF30 (-JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0JointResizeAcc@@QEAA@XZ @ 0x1802EAC1C (--0JointResizeAcc@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ @ 0x1802EB154 (-RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<JointResizeAcc,JointResizeAcc,>(JointResizeAcc **a1)
{
  JointResizeAcc *v2; // rax
  int v3; // ebx
  JointResizeAcc *v4; // rdi
  JointResizeAcc *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (JointResizeAcc *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v6 = JointResizeAcc::JointResizeAcc(v2);
    v4 = v6;
    v3 = JointResizeAcc::RuntimeClassInitialize(v6);
    if ( v3 >= 0 )
    {
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v6);
      v3 = 0;
      *a1 = v4;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
