/*
 * XREFs of HdlspGetLine @ 0x14078E9D8
 * Callers:
 *     HdlspBugCheckProcessing @ 0x14078E20C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x14078E340 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x14078F1C0 (HdlspPutMore.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x14016FE70 (sprintf_s.c)
 *     strcpy_s @ 0x14016FFF0 (strcpy_s.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     InbvPortGetByte @ 0x14026AEFC (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x14026B0D0 (InbvPortPollOnly.c)
 *     HdlspSendStringAtBaud @ 0x14078F530 (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, __int64 Size, __int64 a3, __int64 a4)
{
  PKSPIN_LOCK v4; // rbx
  size_t v5; // rsi
  KIRQL v7; // al
  unsigned __int8 v8; // di
  int v9; // eax
  PKSPIN_LOCK v11; // rax
  char *v12; // rcx
  KSPIN_LOCK v13; // rcx
  KSPIN_LOCK v14; // rax
  __int64 v15; // rax
  char v16; // cl
  KSPIN_LOCK v17; // rcx
  char *v18; // rcx
  __int64 v19; // rax
  size_t v20; // r8
  const void *v21; // rdx
  PKSPIN_LOCK v22; // rbx
  PKSPIN_LOCK v23; // rcx
  unsigned __int8 v24; // [rsp+50h] [rbp+18h] BYREF

  v4 = HeadlessGlobals;
  v5 = Size;
  if ( (HeadlessGlobals[6] & 2) != 0 )
  {
    v8 = -1;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v4 = HeadlessGlobals;
    v8 = v7;
  }
  v9 = *((_DWORD *)v4 + 12);
  if ( (v9 & 0x10) != 0 )
  {
    if ( v8 != 0xFF )
    {
      KxReleaseSpinLock(v4);
      __writecr8(v8);
    }
    return 0;
  }
  else
  {
    *((_DWORD *)v4 + 12) = v9 | 0x10;
    if ( v8 != 0xFF )
    {
      KxReleaseSpinLock(v4);
      __writecr8(v8);
      v4 = HeadlessGlobals;
    }
    if ( (v4[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*((_DWORD *)v4 + 14), Size, a3, a4)
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), (__int64)&v24, a3) )
          {
            LOBYTE(Size) = v24;
          }
          else
          {
            LOBYTE(Size) = 0;
            v24 = 0;
          }
          v11 = HeadlessGlobals;
          if ( !(_BYTE)Size )
            goto LABEL_32;
          *(_BYTE *)(HeadlessGlobals[11] + HeadlessGlobals[4]) = Size;
          v4 = HeadlessGlobals;
          if ( !*((_BYTE *)HeadlessGlobals + 117) || v24 != 10 )
            break;
          *((_BYTE *)HeadlessGlobals + 117) = 0;
        }
        *((_BYTE *)HeadlessGlobals + 117) = v24 == 13;
        if ( v24 == 10 || v24 == 13 )
          break;
        switch ( v24 )
        {
          case 8u:
          case 0x7Fu:
            if ( v4[11] )
            {
              HdlspSendStringAtBaud("\b \b");
              v4 = HeadlessGlobals;
              --HeadlessGlobals[11];
            }
            break;
          case 3u:
            v13 = ++v4[11];
            v14 = v4[4];
            goto LABEL_35;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
            v11 = HeadlessGlobals;
LABEL_32:
            *((_DWORD *)v11 + 12) &= ~0x10u;
            return 0;
          default:
            v12 = (char *)v4[3];
            if ( v4[11] == 78 )
            {
              sprintf_s(v12, 0x50uLL, "\b%c", v24);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              v4 = HeadlessGlobals;
            }
            else
            {
              sprintf_s(v12, 0x50uLL, "%c", v24);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              v4 = HeadlessGlobals;
              ++HeadlessGlobals[11];
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      v13 = HeadlessGlobals[11];
      v14 = HeadlessGlobals[4];
LABEL_35:
      *(_BYTE *)(v13 + v14) = 0;
      v4 = HeadlessGlobals;
      ++HeadlessGlobals[11];
      v15 = v4[11] - 1;
      if ( v4[11] != 1 )
      {
        do
        {
          v16 = *(_BYTE *)(v4[4] + v15);
          if ( v16 && v16 != 32 && v16 != 9 )
            break;
          --v15;
        }
        while ( v15 );
      }
      v17 = v4[4];
      if ( *(_BYTE *)(v17 + v15) )
      {
        *(_BYTE *)(v17 + v15 + 1) = 0;
        v4 = HeadlessGlobals;
      }
      v18 = (char *)v4[4];
      v19 = 0LL;
      if ( *v18 )
      {
        do
        {
          if ( v18[v19] != 9 && v18[v19] != 32 )
            break;
          ++v19;
        }
        while ( v18[v19] );
        if ( v19 )
        {
          strcpy_s(v18, 0x50uLL, &v18[v19]);
          v4 = HeadlessGlobals;
        }
      }
    }
    v20 = v4[11];
    v21 = (const void *)v4[4];
    if ( v5 < v20 )
    {
      memmove(a1, v21, v5);
      memmove((void *)v4[4], (const void *)(v4[4] + v5), v4[11] - v5);
      v23 = HeadlessGlobals;
      v22 = HeadlessGlobals + 6;
      *((_DWORD *)HeadlessGlobals + 12) |= 0x20u;
      v23[11] -= v5;
    }
    else
    {
      memmove(a1, v21, v20);
      v4[11] = 0LL;
      v22 = v4 + 6;
      *(_DWORD *)v22 &= ~0x20u;
    }
    *(_DWORD *)v22 &= ~0x10u;
    return 1;
  }
}
