/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x180016F44
 * Callers:
 *     ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x18000F48C (-EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<DXGIOutputInfo,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  _OWORD *v12; // rcx
  __int128 v13; // xmm1

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = a3;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 <= *(_DWORD *)(a1 + 20) )
  {
    v10 = 272 * v3;
    v11 = 2LL;
    v12 = (_OWORD *)(*(_QWORD *)a1 + v10);
    do
    {
      *v12 = *a2;
      v12[1] = a2[1];
      v12[2] = a2[2];
      v12[3] = a2[3];
      v12[4] = a2[4];
      v12[5] = a2[5];
      v12[6] = a2[6];
      v12 += 8;
      v13 = a2[7];
      a2 += 8;
      *(v12 - 1) = v13;
      --v11;
    }
    while ( v11 );
    *v12 = *a2;
    *(_DWORD *)(a1 + 24) = v6;
  }
  else
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 272LL, 1LL, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
  }
  return v7;
}
