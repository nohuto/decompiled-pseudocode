/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x1800C06AC
 * Callers:
 *     ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x180075620 (-EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<DXGIOutputInfo,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  DWORD v6; // ebx
  __int64 v7; // rax
  _OWORD *v8; // rcx
  __int128 v9; // xmm1
  signed int v10; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( a3 > *(_DWORD *)(a1 + 20) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x110u, 1, a2);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    v7 = 2LL;
    v8 = (_OWORD *)(*(_QWORD *)a1 + 272 * v4);
    do
    {
      *v8 = *a2;
      v8[1] = a2[1];
      v8[2] = a2[2];
      v8[3] = a2[3];
      v8[4] = a2[4];
      v8[5] = a2[5];
      v8[6] = a2[6];
      v8 += 8;
      v9 = a2[7];
      a2 += 8;
      *(v8 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *v8 = *a2;
    *(_DWORD *)(a1 + 24) = a3;
  }
  return v6;
}
