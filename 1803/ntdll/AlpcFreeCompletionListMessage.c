/*
 * XREFs of AlpcFreeCompletionListMessage @ 0x1800DAB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl AlpcFreeCompletionListMessage(PVOID CompletionList, PPORT_MESSAGE Message)
{
  __int64 TotalLength; // rax
  _PORT_MESSAGE *v4; // r8
  int v5; // eax
  int v6; // ecx
  _PORT_MESSAGE *v7; // rbx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  volatile signed __int32 *v10; // r11
  int v11; // r9d
  unsigned int v12; // edx
  unsigned __int64 v13; // rcx

  if ( ((unsigned __int8)Message & 0x3F) == 0 )
  {
    TotalLength = Message->u1.s1.TotalLength;
    v4 = (PPORT_MESSAGE)((char *)Message + TotalLength);
    if ( *((_DWORD *)CompletionList + 9) )
    {
      v5 = ((_BYTE)Message + (_BYTE)TotalLength) & 7;
      if ( v5 )
        v6 = 8 - v5;
      else
        v6 = 0;
      v4 = (_PORT_MESSAGE *)((char *)v4 + (unsigned int)(v6 + *((_DWORD *)CompletionList + 10)));
    }
    if ( Message < v4 )
    {
      v7 = (_PORT_MESSAGE *)((char *)CompletionList + *((unsigned int *)CompletionList + 7));
      if ( Message >= v7 && v4 <= (_PORT_MESSAGE *)((char *)v7 + *((unsigned int *)CompletionList + 8)) )
      {
        v8 = (unsigned __int64)((char *)Message - (char *)v7) >> 6;
        v9 = ((unsigned __int64)((char *)v4 - (char *)v7 + 63) >> 6) - v8;
        v10 = (volatile signed __int32 *)((char *)CompletionList
                                        + 4 * ((unsigned __int64)((char *)Message - (char *)v7) >> 11)
                                        + *((unsigned int *)CompletionList + 5));
        v11 = v8 & 0x1F;
        if ( v11 )
        {
          v12 = 32 - v11;
          if ( (unsigned int)(32 - v11) > v9 )
            v12 = v9;
          _InterlockedAnd(v10++, ~(((1 << v12) - 1) << v11));
          v9 -= v12;
        }
        if ( v9 >= 0x20 )
        {
          v13 = v9 >> 5;
          v9 += -32LL * (v9 >> 5);
          do
          {
            _InterlockedAnd(v10++, 0);
            --v13;
          }
          while ( v13 );
        }
        if ( v9 )
          _InterlockedAnd(v10, ~((1 << v9) - 1));
        _InterlockedAdd((volatile signed __int32 *)CompletionList + 48, 1u);
      }
    }
  }
}
