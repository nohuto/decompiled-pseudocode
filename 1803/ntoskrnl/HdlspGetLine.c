/*
 * XREFs of HdlspGetLine @ 0x1408394FC
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140838CE0 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140838E10 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x140839CEC (HdlspPutMore.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x14018E540 (sprintf_s.c)
 *     strcpy_s @ 0x14018E6D0 (strcpy_s.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     InbvPortGetByte @ 0x1402CAA2C (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x1402CABE4 (InbvPortPollOnly.c)
 *     HdlspSendStringAtBaud @ 0x14083A070 (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, size_t Size)
{
  KIRQL v4; // bl
  KSPIN_LOCK *v5; // rcx
  int v6; // eax
  unsigned __int8 v8; // dl
  PKSPIN_LOCK v9; // rax
  PKSPIN_LOCK v10; // r10
  char *v11; // rcx
  KSPIN_LOCK v12; // rcx
  KSPIN_LOCK v13; // rax
  PKSPIN_LOCK v14; // rax
  __int64 v15; // rcx
  KSPIN_LOCK v16; // rdx
  unsigned __int8 v17; // al
  __int64 v18; // r8
  KSPIN_LOCK v19; // rdx
  __int64 v20; // r8
  char *v21; // rcx
  char v22; // al
  PKSPIN_LOCK v23; // rbx
  size_t v24; // r8
  const void *v25; // rdx
  PKSPIN_LOCK v26; // rax
  PKSPIN_LOCK v27; // rcx
  unsigned __int8 v28; // [rsp+40h] [rbp+18h] BYREF

  if ( (HeadlessGlobals[6] & 2) != 0 )
    v4 = -1;
  else
    v4 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v5 = HeadlessGlobals;
  v6 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v6 & 0x10) != 0 )
  {
    if ( v4 != 0xFF )
    {
      KxReleaseSpinLock(HeadlessGlobals);
      __writecr8(v4);
    }
    return 0;
  }
  else
  {
    *((_DWORD *)HeadlessGlobals + 12) = v6 | 0x10;
    if ( v4 != 0xFF )
    {
      KxReleaseSpinLock(v5);
      __writecr8(v4);
    }
    if ( (HeadlessGlobals[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14))
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), &v28) )
          {
            v8 = v28;
          }
          else
          {
            v8 = 0;
            v28 = 0;
          }
          v9 = HeadlessGlobals;
          if ( !v8 )
            goto LABEL_32;
          *(_BYTE *)(HeadlessGlobals[11] + HeadlessGlobals[4]) = v8;
          v10 = HeadlessGlobals;
          if ( !*((_BYTE *)HeadlessGlobals + 117) || v28 != 10 )
            break;
          *((_BYTE *)HeadlessGlobals + 117) = 0;
        }
        *((_BYTE *)HeadlessGlobals + 117) = v28 == 13;
        if ( v28 == 10 || v28 == 13 )
          break;
        switch ( v28 )
        {
          case 8u:
          case 0x7Fu:
            if ( v10[11] )
            {
              HdlspSendStringAtBaud("\b \b");
              --HeadlessGlobals[11];
            }
            break;
          case 3u:
            v12 = ++v10[11];
            v13 = v10[4];
            goto LABEL_35;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
            v9 = HeadlessGlobals;
LABEL_32:
            *((_DWORD *)v9 + 12) &= ~0x10u;
            return 0;
          default:
            v11 = (char *)v10[3];
            if ( v10[11] == 78 )
            {
              sprintf_s(v11, 0x50uLL, "\b%c", v28);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
            }
            else
            {
              sprintf_s(v11, 0x50uLL, "%c", v28);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              ++HeadlessGlobals[11];
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      v12 = HeadlessGlobals[11];
      v13 = HeadlessGlobals[4];
LABEL_35:
      *(_BYTE *)(v12 + v13) = 0;
      v14 = HeadlessGlobals;
      ++HeadlessGlobals[11];
      v15 = v14[11] - 1;
      if ( v14[11] != 1 )
      {
        v16 = v14[4];
        do
        {
          v17 = *(_BYTE *)(v16 + v15);
          if ( v17 > 0x20u )
            break;
          v18 = 0x100000201LL;
          if ( !_bittest64(&v18, v17) )
            break;
          --v15;
        }
        while ( v15 );
      }
      v19 = HeadlessGlobals[4];
      if ( *(_BYTE *)(v19 + v15) )
        *(_BYTE *)(v19 + v15 + 1) = 0;
      v20 = 0LL;
      v21 = (char *)HeadlessGlobals[4];
      v22 = *v21;
      if ( *v21 )
      {
        do
        {
          if ( v22 != 9 && v22 != 32 )
            break;
          v22 = v21[++v20];
        }
        while ( v22 );
        if ( v20 )
          strcpy_s(v21, 0x50uLL, &v21[v20]);
      }
    }
    v23 = HeadlessGlobals;
    v24 = HeadlessGlobals[11];
    v25 = (const void *)HeadlessGlobals[4];
    if ( Size < v24 )
    {
      memmove(a1, v25, Size);
      memmove((void *)v23[4], (const void *)(v23[4] + Size), v23[11] - Size);
      v27 = HeadlessGlobals;
      v26 = HeadlessGlobals + 6;
      *((_DWORD *)HeadlessGlobals + 12) |= 0x20u;
      v27[11] -= Size;
    }
    else
    {
      memmove(a1, v25, v24);
      v23[11] = 0LL;
      v26 = v23 + 6;
      *((_DWORD *)v23 + 12) &= ~0x20u;
    }
    *(_DWORD *)v26 &= ~0x10u;
    return 1;
  }
}
