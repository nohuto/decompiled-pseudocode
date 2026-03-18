/*
 * XREFs of RawQueryInformation @ 0x14071D85C
 * Callers:
 *     RawDispatch @ 0x140547000 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     RawEndOperation @ 0x1400FA2CC (RawEndOperation.c)
 *     RawBeginOperation @ 0x1400FA380 (RawBeginOperation.c)
 */

__int64 __fastcall RawQueryInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( RawBeginOperation(a1, *(_QWORD *)(a3 + 48)) )
  {
    if ( *(_DWORD *)(a3 + 16) == 14 )
    {
      if ( *(_DWORD *)(a3 + 8) >= 8u )
      {
        **(_QWORD **)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 104LL);
        *(_DWORD *)(a3 + 8) -= 8;
        *(_QWORD *)(a2 + 56) = 8LL;
      }
      else
      {
        *(_QWORD *)(a2 + 56) = 0LL;
        v6 = -2147483643;
      }
    }
    else
    {
      v6 = -1073741808;
    }
    RawEndOperation(a1, *(_QWORD *)(a3 + 48));
  }
  else
  {
    v6 = -1073741202;
  }
  *(_DWORD *)(a2 + 48) = v6;
  IofCompleteRequest((PIRP)a2, 1);
  return v6;
}
