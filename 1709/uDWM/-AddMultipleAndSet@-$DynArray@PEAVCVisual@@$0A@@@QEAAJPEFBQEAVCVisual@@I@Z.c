/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x180012E10
 * Callers:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180035F78 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004675A (memcpy_0.c)
 */

__int64 __fastcall DynArray<CVisual *,0>::AddMultipleAndSet(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v3 = v10;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = v5 + a3;
  if ( (int)v5 + (int)a3 >= (unsigned int)v5 )
    v3 = v5 + a3;
  v7 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v3 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, a3, a2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 8 * v5), a2, 8LL * (unsigned int)a3);
    *(_DWORD *)(a1 + 24) = v3;
  }
  return v7;
}
