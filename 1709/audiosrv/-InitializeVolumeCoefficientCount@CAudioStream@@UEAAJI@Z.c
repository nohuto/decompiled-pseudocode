/*
 * XREFs of ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x18001CD60
 * Callers:
 *     ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x18002D870 (-InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeVolumeCoefficientCount(CAudioStream *this, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rax
  void *v5; // rbx
  void **v6; // r15
  void *v7; // rcx
  unsigned __int64 v8; // rax
  void *v9; // rbx
  void **v10; // r14
  void *v11; // rcx
  _DWORD *v12; // rdx
  unsigned int i; // ecx
  __int64 v14; // rax
  char v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 21) == a2 )
    return v2;
  *((_DWORD *)this + 21) = a2;
  v4 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v4 = -1LL;
  v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (void **)((char *)this + 112);
  if ( (char *)this + 112 != &v16 )
  {
    v7 = *v6;
    *v6 = v5;
    v5 = 0LL;
    if ( !v7 )
      goto LABEL_6;
    operator delete(v7);
  }
  if ( v5 )
    operator delete(v5);
LABEL_6:
  v8 = 4LL * *((unsigned int *)this + 21);
  if ( !is_mul_ok(*((unsigned int *)this + 21), 4uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (void **)((char *)this + 120);
  if ( (char *)this + 120 == &v16 )
    goto LABEL_19;
  v11 = *v10;
  *v10 = v9;
  v9 = 0LL;
  if ( v11 )
  {
    operator delete(v11);
LABEL_19:
    if ( v9 )
      operator delete(v9);
  }
  v12 = *v6;
  if ( *v6 && *v10 )
  {
    for ( i = 0; i < *((_DWORD *)this + 21); v12[v14] = 1065353216 )
      v14 = i++;
  }
  else
  {
    v2 = -2147024882;
    AudSrvTraceLoggingErrorHelper("CAudioStream::InitializeVolumeCoefficientCount", 0x11Fu, -2147024882);
  }
  return v2;
}
