/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x180036590
 * Callers:
 *     ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x18003365C (-EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<DXGIOutputInfo,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( a3 <= *(_DWORD *)(a1 + 20) )
  {
    v9 = 2LL;
    v10 = (_OWORD *)(*(_QWORD *)a1 + 272 * v4);
    do
    {
      *v10 = *a2;
      v10[1] = a2[1];
      v10[2] = a2[2];
      v10[3] = a2[3];
      v10[4] = a2[4];
      v10[5] = a2[5];
      v10[6] = a2[6];
      v10 += 8;
      v11 = a2[7];
      a2 += 8;
      *(v10 - 1) = v11;
      --v9;
    }
    while ( v9 );
    *v10 = *a2;
    *(_DWORD *)(a1 + 24) = a3;
  }
  else
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x110u, 1, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
  }
  return v6;
}
