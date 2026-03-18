/*
 * XREFs of ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18001CF54
 * Callers:
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800200D8 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddUnclaimedToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *v3; // rdi
  int v5; // ebx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0uLL;
  v3 = 0LL;
  v5 = 0;
  if ( *((_DWORD *)a2 + 1) )
  {
    v3 = HeapAlloc(WPF::g_processHeap, 0, *((unsigned int *)a2 + 1));
    if ( !v3 )
      v5 = -2147024882;
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v5 < 0 )
  {
    v11 = 54;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v11);
    if ( v3 )
      operator delete(v3);
    return (unsigned int)v5;
  }
  memcpy_0(v3, a2, *((unsigned int *)a2 + 1));
  v6 = (_QWORD *)((char *)this + 104);
  *((_QWORD *)&v12 + 1) = v3;
  v7 = *((unsigned int *)this + 32);
  v8 = v7 + 1;
  v5 = (int)v7 + 1 < (unsigned int)v7 ? 0x80070216 : 0;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v8 <= *((_DWORD *)this + 31) )
  {
    *(_OWORD *)(*v6 + 16 * v7) = v12;
    *((_DWORD *)this + 32) = v8;
  }
  else
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(v6, 16LL, 1LL, &v12);
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
  }
  if ( v5 < 0 )
  {
    v11 = 59;
    goto LABEL_16;
  }
  return (unsigned int)v5;
}
