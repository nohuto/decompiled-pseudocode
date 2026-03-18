/*
 * XREFs of ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18002418C
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddUnclaimedToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *v4; // rdi
  int v5; // ebx
  unsigned int v6; // edx
  _QWORD *v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // eax
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+10h]

  LODWORD(v12) = 0;
  *((_QWORD *)&v12 + 1) = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( *((_DWORD *)a2 + 1) )
  {
    v4 = HeapAlloc(WPF::g_processHeap, 0, *((unsigned int *)a2 + 1));
    if ( !v4 )
      v5 = -2147024882;
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8Au);
LABEL_18:
    if ( v4 )
      WPF::ProcessHeapImpl::Free(v4);
    return (unsigned int)v5;
  }
  memcpy_0(v4, a2, *((unsigned int *)a2 + 1));
  v6 = v13;
  v7 = (_QWORD *)((char *)this + 104);
  v8 = *((unsigned int *)this + 32);
  *((_QWORD *)&v12 + 1) = v4;
  v9 = v8 + 1;
  if ( (int)v8 + 1 >= (unsigned int)v8 )
    v6 = v8 + 1;
  v5 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
  if ( v9 < (unsigned int)v8 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v6 <= *((_DWORD *)this + 31) )
  {
    *(_OWORD *)(*v7 + 16 * v8) = v12;
    *((_DWORD *)this + 32) = v6;
  }
  else
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(v7, 16LL, 1LL, &v12);
    v5 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8Fu);
    goto LABEL_18;
  }
  return (unsigned int)v5;
}
