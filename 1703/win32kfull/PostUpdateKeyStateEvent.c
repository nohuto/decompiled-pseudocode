/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1C00B936C
 * Callers:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     NtUserGetKeyState @ 0x1C00B8500 (NtUserGetKeyState.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     EditionPostUpdateKeyStateEvent @ 0x1C0107950 (EditionPostUpdateKeyStateEvent.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C00B94E0 (ProcessUpdateKeyStateEvent.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall PostUpdateKeyStateEvent(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  void *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbp
  _OWORD *v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx

  result = *(unsigned int *)(a1 + 340);
  if ( (result & 1) != 0 )
  {
    result = gptiRit;
    if ( *(_QWORD *)(a1 + 64) != gptiRit )
    {
      v3 = 0;
      if ( !*(_QWORD *)a1 )
      {
        v4 = (void *)(a1 + 160);
        ProcessUpdateKeyStateEvent(a1, *(_QWORD *)&gafAsyncKeyState[0], a1 + 160);
LABEL_5:
        result = (__int64)memset(v4, 0, 0x20uLL);
        *(_DWORD *)(a1 + 340) &= ~1u;
        return result;
      }
      v5 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(v5 + 96) == 4 )
      {
        v4 = (void *)(a1 + 160);
        v7 = *(_OWORD **)(v5 + 32);
        v8 = v7 + 4;
        *v7 = gafAsyncKeyState[0];
        v7[1] = gafAsyncKeyState[1];
        v7[2] = gafAsyncKeyState[2];
        v7[3] = gafAsyncKeyState[3];
        v9 = (_DWORD *)(a1 + 160);
        do
        {
          ++v3;
          *v8++ |= *v9++;
        }
        while ( v3 < 8 );
        SetWakeBit(*(_QWORD *)(a1 + 64), 0x2040u);
        goto LABEL_5;
      }
      result = Win32AllocPool(96LL, 1936421717LL);
      v6 = result;
      if ( result )
      {
        v4 = (void *)(a1 + 160);
        *(_OWORD *)result = gafAsyncKeyState[0];
        *(_OWORD *)(result + 16) = gafAsyncKeyState[1];
        *(_OWORD *)(result + 32) = gafAsyncKeyState[2];
        *(_OWORD *)(result + 48) = gafAsyncKeyState[3];
        *(_OWORD *)(result + 64) = *(_OWORD *)(a1 + 160);
        *(_OWORD *)(result + 80) = *(_OWORD *)(a1 + 176);
        if ( !(unsigned int)PostEventMessageEx(*(_QWORD *)(a1 + 64), a1, 4u, 0LL, 0, result, 0LL, 0LL) )
          return Win32FreePool(v6);
        goto LABEL_5;
      }
    }
  }
  return result;
}
