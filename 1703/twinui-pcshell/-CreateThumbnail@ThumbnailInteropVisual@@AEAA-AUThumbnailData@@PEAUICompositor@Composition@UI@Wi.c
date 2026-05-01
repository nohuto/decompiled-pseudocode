/*
 * XREFs of ?CreateThumbnail@ThumbnailInteropVisual@@AEAA?AUThumbnailData@@PEAUICompositor@Composition@UI@Windows@@PEAUIThumbnailDeviceInternal@@PEAUHWND__@@PEAURect@Foundation@6@USize@Foundation@6@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180169C24
 * Callers:
 *     ??0ThumbnailInteropVisual@@QEAA@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEAUHWND__@@PEAURect@Foundation@Windows@@PEAUICompositor@Composition@UI@6@USize@56@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016950C (--0ThumbnailInteropVisual@@QEAA@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEA.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIDCompositionDevice2@@AEAPEAUICompositor@Composition@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UIDCompositionDevice2@@Uerr_exception_policy@wil@@@0@AEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x18016A198 (--$com_query@UIDCompositionDevice2@@AEAPEAUICompositor@Composition@UI@Windows@@@wil@@YA-AV-$com_.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ThumbnailInteropVisual::CreateThumbnail(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        float *a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // r9d
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  __int64 *v14; // rsi
  void *v15; // r14
  DWORD LastError; // ebx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  int SharedThumbnailVisual; // eax
  __int128 v22; // [rsp+48h] [rbp-89h] BYREF
  int v23; // [rsp+58h] [rbp-79h]
  int v24[2]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v25; // [rsp+68h] [rbp-69h]
  _QWORD *v26; // [rsp+70h] [rbp-61h]
  _DWORD v27[12]; // [rsp+78h] [rbp-59h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+3Fh]

  v25 = -2LL;
  v26 = a2;
  *(_QWORD *)&v22 = a3;
  v23 = 0;
  wil::com_query<IDCompositionDevice2,Windows::UI::Composition::ICompositor * &>(v24, &v22);
  memset(v27, 0, 0x2DuLL);
  *(_QWORD *)&v22 = *(_QWORD *)a8;
  DWORD2(v22) = *(_DWORD *)(a8 + 8);
  v10 = BYTE8(v22) != 0 ? 67108873 : 134217737;
  if ( (_DWORD)v22 == 1 )
  {
    v10 |= 0x40000000u;
  }
  else if ( (_DWORD)v22 == 2 )
  {
    v10 |= 0x80000000;
  }
  if ( DWORD1(v22) == 1 )
  {
    v10 |= 0x20000000u;
  }
  else if ( DWORD1(v22) == 2 )
  {
    v10 |= 0x10000000u;
  }
  v27[0] = v10;
  *(_DWORD *)((char *)&v27[9] + 1) = 1;
  if ( a6 )
  {
    v11 = (int)a6[3];
    v12 = (int)a6[2];
    v13 = (int)a6[1];
    LODWORD(v22) = (int)*a6;
    DWORD1(v22) = v13;
    DWORD2(v22) = v12 + v22;
    HIDWORD(v22) = v13 + v11;
    v27[0] = v10 | 2;
    *(_OWORD *)&v27[5] = v22;
  }
  *(_QWORD *)&v22 = 0LL;
  DWORD2(v22) = (int)*(float *)&a7;
  HIDWORD(v22) = (int)*((float *)&a7 + 1);
  *(_OWORD *)&v27[1] = v22;
  *a2 = 0LL;
  v14 = a2 + 1;
  a2[1] = 0LL;
  v23 = 1;
  v15 = (void *)*a2;
  if ( (unsigned __int64)(*a2 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    DwmUnregisterThumbnail(v15);
    SetLastError(LastError);
  }
  *a2 = 0LL;
  v17 = *v14;
  *v14 = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *(_QWORD *)v24;
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 24LL))(a4);
  SharedThumbnailVisual = DwmpCreateSharedThumbnailVisual(v19, a5, 2LL, v27, v18, a2 + 1, a2);
  if ( SharedThumbnailVisual < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\visual.cpp",
      (const char *)(unsigned int)SharedThumbnailVisual);
  if ( *(_QWORD *)v24 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v24 + 16LL))(*(_QWORD *)v24);
  return a2;
}
