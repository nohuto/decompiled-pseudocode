/*
 * XREFs of ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x180069838
 * Callers:
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180069930 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180069954 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x18006BFAC (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetImportanceVector@ViewWrapperBase@@UEAAJI@Z @ 0x18004EB00 (-SetImportanceVector@ViewWrapperBase@@UEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::SetImportanceValues(__int64 a1, char a2)
{
  char v4; // al
  __int16 v5; // ax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(ViewWrapperBase *, __int64); // rax
  int v9; // eax
  ViewWrapperBase *v10; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  unsigned int v15; // [rsp+40h] [rbp+10h] BYREF
  ViewWrapperBase *v16; // [rsp+50h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  RmActivityImportanceInitialize(&v15);
  v4 = HIBYTE(v15);
  if ( (a2 & 1) != 0 )
    v4 = -16;
  HIBYTE(v15) = v4;
  v5 = v15;
  if ( (a2 & 2) != 0 )
    v5 = v15 | 0x400;
  LOWORD(v15) = v5 | 0x101;
  v16 = 0LL;
  v6 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, ViewWrapperBase **))(a1 + 24))(
         *(_QWORD *)(a1 + 24),
         &GUID_35f1648c_265f_402c_b575_c9a325451df5,
         &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = (unsigned int)v6;
    v13 = 1191LL;
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(ViewWrapperBase *, __int64))(*(_QWORD *)v16 + 64LL);
    if ( v8 == ViewWrapperBase::SetImportanceVector )
      v9 = ViewWrapperBase::SetImportanceVector(v16, v15);
    else
      v9 = v8(v16, v15);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v10 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return 0LL;
    }
    v12 = (unsigned int)v9;
    v13 = 1192LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)v12,
    -2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v7;
}
