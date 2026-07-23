/*
 * XREFs of AVrfpParseVerifierDllsString @ 0x1800DB354
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 AVrfpParseVerifierDllsString()
{
  void *ProcessHeap; // rbp
  PVOID Heap; // rax
  __int64 v2; // rbx
  __int64 *v4; // rax
  bool v5; // zf
  wchar_t *v6; // rbx
  const WCHAR *v7; // rsi
  PVOID v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x48uLL);
  v2 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x48uLL);
  *(UNICODE_STRING *)(v2 + 16) = VerifierDllString;
  v4 = (__int64 *)qword_18015E5D8;
  if ( *(__int64 **)qword_18015E5D8 != &AVrfpVerifierProvidersList )
    __fastfail(3u);
  v5 = UseWOW64 == 0;
  *(_QWORD *)v2 = &AVrfpVerifierProvidersList;
  *(_QWORD *)(v2 + 8) = v4;
  *v4 = v2;
  qword_18015E5D8 = v2;
  if ( v5 )
  {
    v6 = &AVrfpVerifierDllsString;
    if ( AVrfpVerifierDllsString )
    {
      do
      {
        while ( *v6 == 32 || *v6 == 9 )
          ++v6;
        v7 = v6;
        if ( !*v6 )
          break;
        do
        {
          if ( *v6 == 32 )
            break;
          if ( *v6 == 9 )
            break;
          ++v6;
        }
        while ( *v6 );
        if ( v7 == v6 )
          break;
        *v6 = 0;
        if ( wcsicmp(v7, L"verifier.dll") )
        {
          v8 = RtlAllocateHeap(ProcessHeap, 0, 0x48uLL);
          v9 = (__int64)v8;
          if ( !v8 )
            return 3221225495LL;
          memset(v8, 0, 0x48uLL);
          RtlInitUnicodeString((PUNICODE_STRING)(v9 + 16), v7);
          v10 = (__int64 *)qword_18015E5D8;
          if ( *(__int64 **)qword_18015E5D8 != &AVrfpVerifierProvidersList )
            __fastfail(3u);
          *(_QWORD *)v9 = &AVrfpVerifierProvidersList;
          *(_QWORD *)(v9 + 8) = v10;
          *v10 = v9;
          qword_18015E5D8 = v9;
        }
        ++v6;
      }
      while ( *v6 );
    }
  }
  return 0LL;
}
