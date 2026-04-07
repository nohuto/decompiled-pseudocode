/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x180080518
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180083130 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CTouchContact,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _OWORD *v7; // rcx
  int v8; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 >= (unsigned int)v4 )
  {
    if ( a3 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x70u, 1, a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      v7 = (_OWORD *)(*(_QWORD *)a1 + 112 * v4);
      *v7 = *a2;
      v7[1] = a2[1];
      v7[2] = a2[2];
      v7[3] = a2[3];
      v7[4] = a2[4];
      v7[5] = a2[5];
      v7[6] = a2[6];
      *(_DWORD *)(a1 + 24) = a3;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  return v6;
}
