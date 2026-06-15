/*
 * XREFs of ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x18002D870
 * Callers:
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18001C580 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?Initialize@CAudioStream@@UEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18001CCA0 (-Initialize@CAudioStream@@UEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x18001CD60 (-InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount(
        CPerStreamVolumeAudioStream *this,
        unsigned int a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  void *v5; // rdi
  void **v6; // r14
  void *v7; // rcx
  void *v8; // rax
  _DWORD *v9; // rdi
  __int64 i; // rcx
  int v11; // edi
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( *((_DWORD *)this + 21) == a2 )
    goto LABEL_11;
  v4 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v4 = -1LL;
  v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (void **)((char *)this + 552);
  if ( (char *)this + 552 == &v13 )
    goto LABEL_14;
  v7 = *v6;
  v8 = v5;
  v5 = 0LL;
  *v6 = v8;
  if ( v7 )
  {
    operator delete(v7);
LABEL_14:
    if ( v5 )
      operator delete(v5);
  }
  v9 = *v6;
  if ( !*v6 )
  {
    v11 = -2147024882;
    goto LABEL_17;
  }
  if ( (_DWORD)v3 )
  {
    for ( i = v3; i; --i )
      *v9++ = 1065353216;
  }
LABEL_11:
  v11 = CAudioStream::InitializeVolumeCoefficientCount(this, v3);
  if ( v11 < 0 )
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount", 0x86Cu, v11);
  return (unsigned int)v11;
}
