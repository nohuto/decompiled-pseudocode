/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x180019DBC
 * Callers:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18001692C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004DE8A (memcpy_0.c)
 */

__int64 __fastcall DynArray<CVisual *,0>::AddMultipleAndSet(__int64 a1, const void *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v9; // eax
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + a3;
  v6 = v3 + a3;
  if ( (int)v3 + (int)a3 < (unsigned int)v3 )
    v6 = v10;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, a3, a2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 8 * v3), a2, 8LL * (unsigned int)a3);
    *(_DWORD *)(a1 + 24) = v6;
  }
  return v7;
}
