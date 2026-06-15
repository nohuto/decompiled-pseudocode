/*
 * XREFs of ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x18002B8D0
 * Callers:
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18002EA30 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?Initialize@CAudioStream@@UEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18002F1A0 (-Initialize@CAudioStream@@UEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount(
        CPerStreamVolumeAudioStream *this,
        unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rax
  void *v5; // rax
  void **v6; // rdi
  void *v7; // rcx
  _DWORD *v8; // rdi
  unsigned __int64 i; // rcx
  int v10; // edi
  unsigned __int64 v11; // rax
  void *v12; // rax
  void **v13; // r14
  void *v14; // rcx
  unsigned __int64 v15; // rax
  void *v16; // rax
  void **v17; // rsi
  void *v18; // rcx
  _DWORD *v19; // rdx
  unsigned int j; // ecx
  __int64 v21; // rax
  unsigned int v22; // ebx
  char v24; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *((_DWORD *)this + 23) == a2 )
    goto LABEL_11;
  v4 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v4 = -1LL;
  v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (void **)((char *)this + 648);
  if ( (char *)this + 648 == &v24 )
  {
    if ( !v5 )
      goto LABEL_6;
    v7 = v5;
LABEL_29:
    operator delete(v7);
    goto LABEL_6;
  }
  v7 = *v6;
  *v6 = v5;
  if ( v7 )
    goto LABEL_29;
LABEL_6:
  v8 = *v6;
  if ( !v8 )
  {
    v22 = -2147024882;
    goto LABEL_31;
  }
  if ( (_DWORD)v2 )
  {
    for ( i = v2; i; --i )
      *v8++ = 1065353216;
  }
LABEL_11:
  v10 = 0;
  if ( *((_DWORD *)this + 23) == (_DWORD)v2 )
    goto LABEL_24;
  v11 = 4 * v2;
  *((_DWORD *)this + 23) = v2;
  if ( !is_mul_ok(v2, 4uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  v13 = (void **)((char *)this + 112);
  if ( (char *)this + 112 == &v24 )
  {
    if ( !v12 )
      goto LABEL_16;
    v14 = v12;
  }
  else
  {
    v14 = *v13;
    *v13 = v12;
    if ( !v14 )
      goto LABEL_16;
  }
  operator delete(v14);
LABEL_16:
  v15 = 4LL * *((unsigned int *)this + 23);
  if ( !is_mul_ok(*((unsigned int *)this + 23), 4uLL) )
    v15 = -1LL;
  v16 = operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
  v17 = (void **)((char *)this + 120);
  if ( (char *)this + 120 == &v24 )
  {
    if ( !v16 )
      goto LABEL_20;
    v18 = v16;
    goto LABEL_26;
  }
  v18 = *v17;
  *v17 = v16;
  if ( v18 )
LABEL_26:
    operator delete(v18);
LABEL_20:
  v19 = *v13;
  if ( *v13 && *v17 )
  {
    for ( j = 0; j < *((_DWORD *)this + 23); v19[v21] = 1065353216 )
      v21 = j++;
  }
  else
  {
    v10 = -2147024882;
    AudSrvTraceLoggingErrorHelper("CAudioStream::InitializeVolumeCoefficientCount", 0x121u, -2147024882);
  }
LABEL_24:
  v22 = v10;
  if ( v10 < 0 )
LABEL_31:
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount", 0x8AEu, v22);
  return v22;
}
