/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1C00510EC
 * Callers:
 *     NtUserGetKeyState @ 0x1C0050420 (NtUserGetKeyState.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     EditionPostUpdateKeyStateEvent @ 0x1C0111800 (EditionPostUpdateKeyStateEvent.c)
 * Callees:
 *     ProcessUpdateKeyStateEvent @ 0x1C005125C (ProcessUpdateKeyStateEvent.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall PostUpdateKeyStateEvent(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  void *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  _OWORD *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // rcx

  result = *(unsigned int *)(a1 + 380);
  if ( (result & 1) != 0 )
  {
    result = gptiRit;
    if ( *(_QWORD *)(a1 + 96) != gptiRit )
    {
      v3 = 0;
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v4 = (void *)(a1 + 192);
        ProcessUpdateKeyStateEvent(a1, *(_QWORD *)&gafAsyncKeyState[0], a1 + 192);
LABEL_5:
        result = (__int64)memset(v4, 0, 0x20uLL);
        *(_DWORD *)(a1 + 380) &= ~1u;
        return result;
      }
      v5 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v5 + 96) == 4 )
      {
        v4 = (void *)(a1 + 192);
        v9 = *(_OWORD **)(v5 + 32);
        v10 = v9 + 4;
        *v9 = gafAsyncKeyState[0];
        v9[1] = gafAsyncKeyState[1];
        v9[2] = gafAsyncKeyState[2];
        v9[3] = gafAsyncKeyState[3];
        v11 = (_DWORD *)(a1 + 192);
        do
        {
          ++v3;
          *v10++ |= *v11++;
        }
        while ( v3 < 8 );
        SetWakeBit(*(_QWORD *)(a1 + 96), 8256LL);
        goto LABEL_5;
      }
      result = Win32AllocPool(96LL, 1936421717LL);
      v6 = result;
      if ( result )
      {
        v4 = (void *)(a1 + 192);
        *(_OWORD *)result = gafAsyncKeyState[0];
        *(_OWORD *)(result + 16) = gafAsyncKeyState[1];
        *(_OWORD *)(result + 32) = gafAsyncKeyState[2];
        *(_OWORD *)(result + 48) = gafAsyncKeyState[3];
        *(_OWORD *)(result + 64) = *(_OWORD *)(a1 + 192);
        *(_OWORD *)(result + 80) = *(_OWORD *)(a1 + 208);
        if ( !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(a1 + 96), 0, result, 0LL, 0LL) )
          return Win32FreePool(v6, v7, v8);
        goto LABEL_5;
      }
    }
  }
  return result;
}
