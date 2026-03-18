/*
 * XREFs of HdlspGetLine @ 0x1407CC508
 * Callers:
 *     HdlspBugCheckProcessing @ 0x1407CBCE0 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x1407CBE10 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x1407CCCF0 (HdlspPutMore.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x140164670 (sprintf_s.c)
 *     strcpy_s @ 0x1401647F0 (strcpy_s.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     InbvPortGetByte @ 0x140295370 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x140295638 (InbvPortPollOnly.c)
 *     HdlspSendStringAtBaud @ 0x1407CD074 (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, __int64 Size, __int64 a3, __int64 a4)
{
  size_t v5; // rdi
  KIRQL v6; // bl
  KSPIN_LOCK *v7; // rcx
  int v8; // eax
  PKSPIN_LOCK v10; // rax
  PKSPIN_LOCK v11; // r10
  char *v12; // rcx
  KSPIN_LOCK v13; // rcx
  KSPIN_LOCK v14; // rax
  PKSPIN_LOCK v15; // rax
  __int64 v16; // rcx
  KSPIN_LOCK v17; // rdx
  unsigned __int8 v18; // al
  __int64 v19; // r8
  KSPIN_LOCK v20; // rdx
  __int64 v21; // r8
  char *v22; // rcx
  char v23; // al
  PKSPIN_LOCK v24; // rbx
  size_t v25; // r8
  const void *v26; // rdx
  PKSPIN_LOCK v27; // rax
  PKSPIN_LOCK v28; // rcx
  unsigned __int8 v29; // [rsp+40h] [rbp+18h] BYREF

  v5 = Size;
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v6 = -1;
  else
    v6 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v7 = HeadlessGlobals;
  v8 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v8 & 0x10) != 0 )
  {
    if ( v6 != 0xFF )
    {
      KxReleaseSpinLock(HeadlessGlobals);
      __writecr8(v6);
    }
    return 0;
  }
  else
  {
    *((_DWORD *)HeadlessGlobals + 12) = v8 | 0x10;
    if ( v6 != 0xFF )
    {
      KxReleaseSpinLock(v7);
      __writecr8(v6);
    }
    if ( (HeadlessGlobals[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14), Size, a3, a4)
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), (__int64)&v29, a3) )
          {
            LOBYTE(Size) = v29;
          }
          else
          {
            LOBYTE(Size) = 0;
            v29 = 0;
          }
          v10 = HeadlessGlobals;
          if ( !(_BYTE)Size )
            goto LABEL_32;
          *(_BYTE *)(HeadlessGlobals[11] + HeadlessGlobals[4]) = Size;
          v11 = HeadlessGlobals;
          if ( !*((_BYTE *)HeadlessGlobals + 117) || v29 != 10 )
            break;
          *((_BYTE *)HeadlessGlobals + 117) = 0;
        }
        *((_BYTE *)HeadlessGlobals + 117) = v29 == 13;
        if ( v29 == 10 || v29 == 13 )
          break;
        switch ( v29 )
        {
          case 8u:
          case 0x7Fu:
            if ( v11[11] )
            {
              HdlspSendStringAtBaud("\b \b");
              --HeadlessGlobals[11];
            }
            break;
          case 3u:
            v13 = ++v11[11];
            v14 = v11[4];
            goto LABEL_35;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
            v10 = HeadlessGlobals;
LABEL_32:
            *((_DWORD *)v10 + 12) &= ~0x10u;
            return 0;
          default:
            v12 = (char *)v11[3];
            if ( v11[11] == 78 )
            {
              sprintf_s(v12, 0x50uLL, "\b%c", v29);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
            }
            else
            {
              sprintf_s(v12, 0x50uLL, "%c", v29);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
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
      v15 = HeadlessGlobals;
      ++HeadlessGlobals[11];
      v16 = v15[11] - 1;
      if ( v15[11] != 1 )
      {
        v17 = v15[4];
        do
        {
          v18 = *(_BYTE *)(v17 + v16);
          if ( v18 > 0x20u )
            break;
          v19 = 0x100000201LL;
          if ( !_bittest64(&v19, v18) )
            break;
          --v16;
        }
        while ( v16 );
      }
      v20 = HeadlessGlobals[4];
      if ( *(_BYTE *)(v20 + v16) )
        *(_BYTE *)(v20 + v16 + 1) = 0;
      v21 = 0LL;
      v22 = (char *)HeadlessGlobals[4];
      v23 = *v22;
      if ( *v22 )
      {
        do
        {
          if ( v23 != 9 && v23 != 32 )
            break;
          v23 = v22[++v21];
        }
        while ( v23 );
        if ( v21 )
          strcpy_s(v22, 0x50uLL, &v22[v21]);
      }
    }
    v24 = HeadlessGlobals;
    v25 = HeadlessGlobals[11];
    v26 = (const void *)HeadlessGlobals[4];
    if ( v5 < v25 )
    {
      memmove(a1, v26, v5);
      memmove((void *)v24[4], (const void *)(v24[4] + v5), v24[11] - v5);
      v28 = HeadlessGlobals;
      v27 = HeadlessGlobals + 6;
      *((_DWORD *)HeadlessGlobals + 12) |= 0x20u;
      v28[11] -= v5;
    }
    else
    {
      memmove(a1, v26, v25);
      v24[11] = 0LL;
      v27 = v24 + 6;
      *((_DWORD *)v24 + 12) &= ~0x20u;
    }
    *(_DWORD *)v27 &= ~0x10u;
    return 1;
  }
}
