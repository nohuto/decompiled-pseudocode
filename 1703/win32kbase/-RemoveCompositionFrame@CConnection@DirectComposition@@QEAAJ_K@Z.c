/*
 * XREFs of ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0015ACC
 * Callers:
 *     NtDCompositionRetireFrame @ 0x1C00130E0 (NtDCompositionRetireFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C0013DF0 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C0013EE0 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::RemoveCompositionFrame(
        DirectComposition::CConnection *this,
        __int64 a2)
{
  char *v2; // rdi
  unsigned int v5; // esi
  char *v6; // rcx
  char *i; // rax
  DirectComposition::CCompositionFrame *v8; // rbx
  __int64 v9; // rdx
  char **v10; // rcx

  v2 = (char *)this + 200;
  v5 = -1073741275;
  ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
  v2[8] = 1;
  v6 = (char *)this + 184;
  for ( i = (char *)*((_QWORD *)this + 24); i != v6; i = (char *)*((_QWORD *)i + 1) )
  {
    v8 = (DirectComposition::CCompositionFrame *)(i - 8);
    if ( *((_QWORD *)i + 8) == a2 )
    {
      v9 = *(_QWORD *)i;
      v10 = (char **)*((_QWORD *)i + 1);
      if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v10 != i )
        __fastfail(3u);
      *v10 = (char *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
      {
        if ( *((_DWORD *)v8 + 20) != 3 )
          DirectComposition::CCompositionFrame::Discard(v8);
        if ( (int)IsWin32FreePoolImplSupported() >= 0 )
          Win32FreePoolImpl(v8);
      }
      v5 = 0;
      break;
    }
  }
  if ( v2[8] )
    ExReleasePushLockExclusiveEx(v2, 0LL);
  else
    ExReleasePushLockSharedEx(v2, 0LL);
  return v5;
}
