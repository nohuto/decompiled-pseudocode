/*
 * XREFs of GetRegistrySettings @ 0x1C0010E90
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001580 (NVMeHwFindAdapter.c)
 * Callees:
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0010C94 (ReadMultiSzRegistryValueAndCompareId.c)
 *     __security_check_cookie @ 0x1C0011E70 (__security_check_cookie.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

char __fastcall GetRegistrySettings(__int64 a1)
{
  __int64 v1; // rax
  void *v3; // r9
  unsigned int v4; // edx
  __int64 i; // r8
  char v6; // cl
  unsigned int v7; // ecx
  __int64 j; // rdx
  char v9; // al
  unsigned int v10; // ecx
  __int64 k; // rdx
  char v12; // al
  unsigned int v13; // eax
  char *v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  void *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  unsigned int v43; // [rsp+50h] [rbp-9h] BYREF
  size_t Size; // [rsp+54h] [rbp-5h] BYREF
  void *v45; // [rsp+60h] [rbp+7h] BYREF
  char v46[32]; // [rsp+68h] [rbp+Fh] BYREF

  LOBYTE(v1) = aVenVvvvDevDddd[24];
  strcpy(v46, "VEN_vvvv&DEV_dddd&REV_rr");
  Size = 512LL;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 52) &= 0xFFFFFFF0;
    *(_QWORD *)(a1 + 28) = 0LL;
    *(_DWORD *)(a1 + 64) = -1;
    *(_DWORD *)(a1 + 80) = -1;
    *(_DWORD *)(a1 + 84) = -1;
    *(_DWORD *)(a1 + 96) = -1;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 16711680;
    *(_QWORD *)(a1 + 44) = 0LL;
    *(_BYTE *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 60) = 0;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_DWORD *)(a1 + 68) = 50;
    *(_DWORD *)(a1 + 72) = 3000;
    *(_DWORD *)(a1 + 76) = 1000;
    v1 = StorPortAllocateRegistryBuffer(a1, &Size);
    v45 = (void *)v1;
    v3 = (void *)v1;
    if ( v1 )
    {
      v4 = *(unsigned __int16 *)(a1 + 4);
      for ( i = 3LL; i >= 0; --i )
      {
        v6 = v4;
        v4 >>= 4;
        v46[i + 4] = `HexFromUchar'::`2'::hexDigits[v6 & 0xF];
      }
      v7 = *(unsigned __int16 *)(a1 + 6);
      for ( j = 3LL; j >= 0; --j )
      {
        v9 = v7;
        v7 >>= 4;
        v46[j + 13] = `HexFromUchar'::`2'::hexDigits[v9 & 0xF];
      }
      v10 = *(unsigned __int8 *)(a1 + 8);
      for ( k = 1LL; k >= 0; --k )
      {
        v12 = v10;
        v10 >>= 4;
        v46[k + 22] = `HexFromUchar'::`2'::hexDigits[v12 & 0xF];
      }
      v13 = 0;
      v14 = v46;
      v15 = 29;
      do
      {
        if ( !*v14 )
          break;
        ++v13;
        ++v14;
      }
      while ( v13 < 0x1D );
      if ( v13 < 0x1D )
        v15 = v13;
      HIDWORD(Size) = Size;
      if ( (Size & 3) != 0 )
      {
        if ( (_DWORD)Size )
          memset(v3, 0, (unsigned int)Size);
      }
      else if ( (unsigned int)Size >> 2 )
      {
        memset(v3, 0, 4LL * ((unsigned int)Size >> 2));
      }
      v43 = 0;
      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                     a1,
                     (__int64)"MaxTransferSize",
                     i,
                     (__int64 *)&v45,
                     (unsigned int *)&Size,
                     (unsigned int *)&Size + 1,
                     (__int64)v46,
                     v15,
                     &v43);
      if ( (_BYTE)v1 == 1 )
      {
        LODWORD(v1) = v43;
        if ( v43 )
        {
          if ( v43 > 0x800 )
            LODWORD(v1) = 2048;
          LODWORD(v1) = (_DWORD)v1 << 10;
          *(_DWORD *)(a1 + 28) = v1;
        }
      }
      if ( v45 )
      {
        HIDWORD(Size) = Size;
        if ( (Size & 3) != 0 )
        {
          if ( (_DWORD)Size )
            memset(v45, 0, (unsigned int)Size);
        }
        else if ( (unsigned int)Size >> 2 )
        {
          memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
        }
        v43 = 0;
        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                       a1,
                       (__int64)"IoQueueDepth",
                       v16,
                       (__int64 *)&v45,
                       (unsigned int *)&Size,
                       (unsigned int *)&Size + 1,
                       (__int64)v46,
                       v15,
                       &v43);
        if ( (_BYTE)v1 == 1 )
        {
          LOBYTE(v1) = v43;
          if ( v43 )
            *(_DWORD *)(a1 + 32) = v43;
        }
        if ( v45 )
        {
          HIDWORD(Size) = Size;
          if ( (Size & 3) != 0 )
          {
            if ( (_DWORD)Size )
              memset(v45, 0, (unsigned int)Size);
          }
          else if ( (unsigned int)Size >> 2 )
          {
            memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
          }
          v43 = 0;
          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                         a1,
                         (__int64)"IoSubmissionQueueCount",
                         v17,
                         (__int64 *)&v45,
                         (unsigned int *)&Size,
                         (unsigned int *)&Size + 1,
                         (__int64)v46,
                         v15,
                         &v43);
          if ( (_BYTE)v1 == 1 )
          {
            LOBYTE(v1) = v43;
            if ( v43 )
              *(_WORD *)(a1 + 36) = v43;
          }
          if ( v45 )
          {
            HIDWORD(Size) = Size;
            if ( (Size & 3) != 0 )
            {
              if ( (_DWORD)Size )
                memset(v45, 0, (unsigned int)Size);
            }
            else if ( (unsigned int)Size >> 2 )
            {
              memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
            }
            v43 = 0;
            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                           a1,
                           (__int64)"IoCompletionQueueCount",
                           v18,
                           (__int64 *)&v45,
                           (unsigned int *)&Size,
                           (unsigned int *)&Size + 1,
                           (__int64)v46,
                           v15,
                           &v43);
            if ( (_BYTE)v1 == 1 )
            {
              LOBYTE(v1) = v43;
              if ( v43 )
                *(_WORD *)(a1 + 38) = v43;
            }
            if ( v45 )
            {
              HIDWORD(Size) = Size;
              if ( (Size & 3) != 0 )
              {
                if ( (_DWORD)Size )
                  memset(v45, 0, (unsigned int)Size);
              }
              else if ( (unsigned int)Size >> 2 )
              {
                memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
              }
              v43 = 0;
              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                             a1,
                             (__int64)"InterruptCoalescingTime",
                             v19,
                             (__int64 *)&v45,
                             (unsigned int *)&Size,
                             (unsigned int *)&Size + 1,
                             (__int64)v46,
                             v15,
                             &v43);
              if ( (_BYTE)v1 == 1 )
              {
                LOBYTE(v1) = v43;
                if ( v43 )
                  *(_BYTE *)(a1 + 40) = v43;
              }
              if ( v45 )
              {
                HIDWORD(Size) = Size;
                if ( (Size & 3) != 0 )
                {
                  if ( (_DWORD)Size )
                    memset(v45, 0, (unsigned int)Size);
                }
                else if ( (unsigned int)Size >> 2 )
                {
                  memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                }
                v43 = 0;
                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                               a1,
                               (__int64)"InterruptCoalescingEntry",
                               v20,
                               (__int64 *)&v45,
                               (unsigned int *)&Size,
                               (unsigned int *)&Size + 1,
                               (__int64)v46,
                               v15,
                               &v43);
                if ( (_BYTE)v1 == 1 )
                {
                  LOBYTE(v1) = v43;
                  if ( v43 )
                    *(_BYTE *)(a1 + 41) = v43;
                }
                if ( v45 )
                {
                  HIDWORD(Size) = Size;
                  if ( (Size & 3) != 0 )
                  {
                    if ( (_DWORD)Size )
                      memset(v45, 0, (unsigned int)Size);
                  }
                  else if ( (unsigned int)Size >> 2 )
                  {
                    memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                  }
                  v43 = 0;
                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                 a1,
                                 (__int64)"ArbitrationBurst",
                                 v21,
                                 (__int64 *)&v45,
                                 (unsigned int *)&Size,
                                 (unsigned int *)&Size + 1,
                                 (__int64)v46,
                                 v15,
                                 &v43);
                  if ( (_BYTE)v1 == 1 )
                  {
                    LOBYTE(v1) = v43;
                    if ( v43 )
                      *(_BYTE *)(a1 + 42) = v43;
                  }
                  if ( v45 )
                  {
                    HIDWORD(Size) = Size;
                    if ( (Size & 3) != 0 )
                    {
                      if ( (_DWORD)Size )
                        memset(v45, 0, (unsigned int)Size);
                    }
                    else if ( (unsigned int)Size >> 2 )
                    {
                      memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                    }
                    v43 = 0;
                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                   a1,
                                   (__int64)"ContiguousMemoryFromAnyNode",
                                   v22,
                                   (__int64 *)&v45,
                                   (unsigned int *)&Size,
                                   (unsigned int *)&Size + 1,
                                   (__int64)v46,
                                   v15,
                                   &v43);
                    if ( (_BYTE)v1 == 1 && v43 )
                      *(_DWORD *)(a1 + 52) |= 2u;
                    if ( v45 )
                    {
                      HIDWORD(Size) = Size;
                      if ( (Size & 3) != 0 )
                      {
                        if ( (_DWORD)Size )
                          memset(v45, 0, (unsigned int)Size);
                      }
                      else if ( (unsigned int)Size >> 2 )
                      {
                        memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                      }
                      v43 = 0;
                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                     a1,
                                     (__int64)"ShutdownTimeout",
                                     v23,
                                     (__int64 *)&v45,
                                     (unsigned int *)&Size,
                                     (unsigned int *)&Size + 1,
                                     (__int64)v46,
                                     v15,
                                     &v43);
                      if ( (_BYTE)v1 == 1 && v43 )
                      {
                        LOBYTE(v1) = v43;
                        if ( v43 > 0xFF )
                          LOBYTE(v1) = -1;
                        *(_BYTE *)(a1 + 43) = v1;
                      }
                      if ( v45 )
                      {
                        HIDWORD(Size) = Size;
                        if ( (Size & 3) != 0 )
                        {
                          if ( (_DWORD)Size )
                            memset(v45, 0, (unsigned int)Size);
                        }
                        else if ( (unsigned int)Size >> 2 )
                        {
                          memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                        }
                        v43 = 0;
                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                       a1,
                                       (__int64)"DeallocateMaxLbaCount",
                                       v24,
                                       (__int64 *)&v45,
                                       (unsigned int *)&Size,
                                       (unsigned int *)&Size + 1,
                                       (__int64)v46,
                                       v15,
                                       &v43);
                        if ( (_BYTE)v1 == 1 )
                        {
                          LOBYTE(v1) = v43;
                          if ( v43 )
                            *(_DWORD *)(a1 + 44) = v43;
                        }
                        if ( v45 )
                        {
                          HIDWORD(Size) = Size;
                          if ( (Size & 3) != 0 )
                          {
                            if ( (_DWORD)Size )
                              memset(v45, 0, (unsigned int)Size);
                          }
                          else if ( (unsigned int)Size >> 2 )
                          {
                            memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                          }
                          v43 = 0;
                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (__int64)"DisableDeallocate",
                                         v25,
                                         (__int64 *)&v45,
                                         (unsigned int *)&Size,
                                         (unsigned int *)&Size + 1,
                                         (__int64)v46,
                                         v15,
                                         &v43);
                          if ( (_BYTE)v1 == 1 && v43 )
                            *(_DWORD *)(a1 + 52) |= 1u;
                          if ( v45 )
                          {
                            HIDWORD(Size) = Size;
                            if ( (Size & 3) != 0 )
                            {
                              if ( (_DWORD)Size )
                                memset(v45, 0, (unsigned int)Size);
                            }
                            else if ( (unsigned int)Size >> 2 )
                            {
                              memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                            }
                            v43 = 0;
                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (__int64)"ControllerBasicInit",
                                           v26,
                                           (__int64 *)&v45,
                                           (unsigned int *)&Size,
                                           (unsigned int *)&Size + 1,
                                           (__int64)v46,
                                           v15,
                                           &v43);
                            if ( (_BYTE)v1 == 1 && v43 )
                              *(_DWORD *)(a1 + 52) |= 4u;
                            if ( v45 )
                            {
                              HIDWORD(Size) = Size;
                              if ( (Size & 3) != 0 )
                              {
                                if ( (_DWORD)Size )
                                  memset(v45, 0, (unsigned int)Size);
                              }
                              else if ( (unsigned int)Size >> 2 )
                              {
                                memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                              }
                              v43 = 0;
                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (__int64)"AsyncEventMask",
                                             v27,
                                             (__int64 *)&v45,
                                             (unsigned int *)&Size,
                                             (unsigned int *)&Size + 1,
                                             (__int64)v46,
                                             v15,
                                             &v43);
                              if ( (_BYTE)v1 == 1 )
                              {
                                LOBYTE(v1) = v43;
                                if ( v43 )
                                {
                                  LOBYTE(v1) = v43 & 0x1F;
                                  *(_BYTE *)(a1 + 56) = v43 & 0x1F;
                                }
                              }
                              if ( v45 )
                              {
                                HIDWORD(Size) = Size;
                                if ( (Size & 3) != 0 )
                                {
                                  if ( (_DWORD)Size )
                                    memset(v45, 0, (unsigned int)Size);
                                }
                                else if ( (unsigned int)Size >> 2 )
                                {
                                  memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                }
                                v43 = 0;
                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (__int64)"IdlePowerMode",
                                               v28,
                                               (__int64 *)&v45,
                                               (unsigned int *)&Size,
                                               (unsigned int *)&Size + 1,
                                               (__int64)v46,
                                               v15,
                                               &v43);
                                if ( (_BYTE)v1 == 1 )
                                {
                                  LOBYTE(v1) = v43;
                                  if ( v43 < 6 )
                                    *(_DWORD *)(a1 + 60) = v43;
                                }
                                if ( v45 )
                                {
                                  HIDWORD(Size) = Size;
                                  if ( (Size & 3) != 0 )
                                  {
                                    if ( (_DWORD)Size )
                                      memset(v45, 0, (unsigned int)Size);
                                  }
                                  else if ( (unsigned int)Size >> 2 )
                                  {
                                    memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                  }
                                  v43 = 0;
                                  if ( ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (__int64)"DiagnosticFlags",
                                         v29,
                                         (__int64 *)&v45,
                                         (unsigned int *)&Size,
                                         (unsigned int *)&Size + 1,
                                         (__int64)v46,
                                         v15,
                                         &v43) == 1
                                    && v43 )
                                  {
                                    *(_DWORD *)(a1 + 88) = v43;
                                  }
                                  LODWORD(v1) = *(_DWORD *)(a1 + 88);
                                  if ( (v1 & 2) != 0 )
                                    *(_DWORD *)(a1 + 92) = 0x100000;
                                  if ( v45 )
                                  {
                                    HIDWORD(Size) = Size;
                                    if ( (Size & 3) != 0 )
                                    {
                                      if ( (_DWORD)Size )
                                        memset(v45, 0, (unsigned int)Size);
                                    }
                                    else if ( (unsigned int)Size >> 2 )
                                    {
                                      memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                    }
                                    v43 = 0;
                                    if ( ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (__int64)"LogSize",
                                           v30,
                                           (__int64 *)&v45,
                                           (unsigned int *)&Size,
                                           (unsigned int *)&Size + 1,
                                           (__int64)v46,
                                           v15,
                                           &v43) == 1
                                      && v43 )
                                    {
                                      *(_DWORD *)(a1 + 92) = v43 << 10;
                                    }
                                    LODWORD(v1) = -1431655765 * *(_DWORD *)(a1 + 92);
                                    v32 = v45;
                                    *(_DWORD *)(a1 + 11472) = *(_DWORD *)(a1 + 92) / 0x18u;
                                    if ( v32 )
                                    {
                                      HIDWORD(Size) = Size;
                                      if ( (Size & 3) != 0 )
                                      {
                                        if ( (_DWORD)Size )
                                          memset(v32, 0, (unsigned int)Size);
                                      }
                                      else if ( (unsigned int)Size >> 2 )
                                      {
                                        memset(v32, 0, 4LL * ((unsigned int)Size >> 2));
                                      }
                                      v43 = 0;
                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                     a1,
                                                     (__int64)"IoStripeAlignment",
                                                     v31,
                                                     (__int64 *)&v45,
                                                     (unsigned int *)&Size,
                                                     (unsigned int *)&Size + 1,
                                                     (__int64)v46,
                                                     v15,
                                                     &v43);
                                      if ( (_BYTE)v1 == 1 )
                                      {
                                        LOBYTE(v1) = v43;
                                        if ( v43 )
                                        {
                                          LODWORD(v1) = v43 << 10;
                                          if ( ((v43 << 10) & 0xFFF) == 0 )
                                            *(_DWORD *)(a1 + 48) = v1;
                                        }
                                      }
                                      if ( v45 )
                                      {
                                        HIDWORD(Size) = Size;
                                        if ( (Size & 3) != 0 )
                                        {
                                          if ( (_DWORD)Size )
                                            memset(v45, 0, (unsigned int)Size);
                                        }
                                        else if ( (unsigned int)Size >> 2 )
                                        {
                                          memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                        }
                                        v43 = 0;
                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                       a1,
                                                       (__int64)"MedPowerFxIdleTimeout",
                                                       v33,
                                                       (__int64 *)&v45,
                                                       (unsigned int *)&Size,
                                                       (unsigned int *)&Size + 1,
                                                       (__int64)v46,
                                                       v15,
                                                       &v43);
                                        if ( (_BYTE)v1 == 1 )
                                        {
                                          LOBYTE(v1) = v43;
                                          *(_DWORD *)(a1 + 64) = v43;
                                        }
                                        if ( v45 )
                                        {
                                          HIDWORD(Size) = Size;
                                          if ( (Size & 3) != 0 )
                                          {
                                            if ( (_DWORD)Size )
                                              memset(v45, 0, (unsigned int)Size);
                                          }
                                          else if ( (unsigned int)Size >> 2 )
                                          {
                                            memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                          }
                                          v43 = 0;
                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                         a1,
                                                         (__int64)"LowestPowerFxIdleTimeout",
                                                         v34,
                                                         (__int64 *)&v45,
                                                         (unsigned int *)&Size,
                                                         (unsigned int *)&Size + 1,
                                                         (__int64)v46,
                                                         v15,
                                                         &v43);
                                          if ( (_BYTE)v1 == 1 )
                                          {
                                            LOBYTE(v1) = v43;
                                            *(_DWORD *)(a1 + 68) = v43;
                                          }
                                          if ( v45 )
                                          {
                                            HIDWORD(Size) = Size;
                                            if ( (Size & 3) != 0 )
                                            {
                                              if ( (_DWORD)Size )
                                                memset(v45, 0, (unsigned int)Size);
                                            }
                                            else if ( (unsigned int)Size >> 2 )
                                            {
                                              memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                            }
                                            v43 = 0;
                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                           a1,
                                                           (__int64)"MedPowerD3IdleTimeout",
                                                           v35,
                                                           (__int64 *)&v45,
                                                           (unsigned int *)&Size,
                                                           (unsigned int *)&Size + 1,
                                                           (__int64)v46,
                                                           v15,
                                                           &v43);
                                            if ( (_BYTE)v1 == 1 )
                                            {
                                              LOBYTE(v1) = v43;
                                              *(_DWORD *)(a1 + 72) = v43;
                                            }
                                            if ( v45 )
                                            {
                                              HIDWORD(Size) = Size;
                                              if ( (Size & 3) != 0 )
                                              {
                                                if ( (_DWORD)Size )
                                                  memset(v45, 0, (unsigned int)Size);
                                              }
                                              else if ( (unsigned int)Size >> 2 )
                                              {
                                                memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                              }
                                              v43 = 0;
                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                             a1,
                                                             (__int64)"LowestPowerD3IdleTimeout",
                                                             v36,
                                                             (__int64 *)&v45,
                                                             (unsigned int *)&Size,
                                                             (unsigned int *)&Size + 1,
                                                             (__int64)v46,
                                                             v15,
                                                             &v43);
                                              if ( (_BYTE)v1 == 1 )
                                              {
                                                LOBYTE(v1) = v43;
                                                *(_DWORD *)(a1 + 76) = v43;
                                              }
                                              if ( v45 )
                                              {
                                                HIDWORD(Size) = Size;
                                                if ( (Size & 3) != 0 )
                                                {
                                                  if ( (_DWORD)Size )
                                                    memset(v45, 0, (unsigned int)Size);
                                                }
                                                else if ( (unsigned int)Size >> 2 )
                                                {
                                                  memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                                }
                                                v43 = 0;
                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                               a1,
                                                               (__int64)"MedPowerResumeLatency",
                                                               v37,
                                                               (__int64 *)&v45,
                                                               (unsigned int *)&Size,
                                                               (unsigned int *)&Size + 1,
                                                               (__int64)v46,
                                                               v15,
                                                               &v43);
                                                if ( (_BYTE)v1 == 1 )
                                                {
                                                  LOBYTE(v1) = v43;
                                                  *(_DWORD *)(a1 + 80) = v43;
                                                }
                                                if ( v45 )
                                                {
                                                  HIDWORD(Size) = Size;
                                                  if ( (Size & 3) != 0 )
                                                  {
                                                    if ( (_DWORD)Size )
                                                      memset(v45, 0, (unsigned int)Size);
                                                  }
                                                  else if ( (unsigned int)Size >> 2 )
                                                  {
                                                    memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                                  }
                                                  v43 = 0;
                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                 a1,
                                                                 (__int64)"LowestPowerResumeLatency",
                                                                 v38,
                                                                 (__int64 *)&v45,
                                                                 (unsigned int *)&Size,
                                                                 (unsigned int *)&Size + 1,
                                                                 (__int64)v46,
                                                                 v15,
                                                                 &v43);
                                                  if ( (_BYTE)v1 == 1 )
                                                  {
                                                    LOBYTE(v1) = v43;
                                                    *(_DWORD *)(a1 + 84) = v43;
                                                  }
                                                  if ( v45 )
                                                  {
                                                    HIDWORD(Size) = Size;
                                                    if ( (Size & 3) != 0 )
                                                    {
                                                      if ( (_DWORD)Size )
                                                        memset(v45, 0, (unsigned int)Size);
                                                    }
                                                    else if ( (unsigned int)Size >> 2 )
                                                    {
                                                      memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                                    }
                                                    v43 = 0;
                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                   a1,
                                                                   (__int64)"HostMemoryBufferBytes",
                                                                   v39,
                                                                   (__int64 *)&v45,
                                                                   (unsigned int *)&Size,
                                                                   (unsigned int *)&Size + 1,
                                                                   (__int64)v46,
                                                                   v15,
                                                                   &v43);
                                                    if ( (_BYTE)v1 == 1 )
                                                    {
                                                      LOBYTE(v1) = v43;
                                                      *(_DWORD *)(a1 + 96) = v43;
                                                    }
                                                    if ( v45 )
                                                    {
                                                      HIDWORD(Size) = Size;
                                                      if ( (Size & 3) != 0 )
                                                      {
                                                        if ( (_DWORD)Size )
                                                          memset(v45, 0, (unsigned int)Size);
                                                      }
                                                      else if ( (unsigned int)Size >> 2 )
                                                      {
                                                        memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                                      }
                                                      v43 = 0;
                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                     a1,
                                                                     (__int64)"BypassSgl",
                                                                     v40,
                                                                     (__int64 *)&v45,
                                                                     (unsigned int *)&Size,
                                                                     (unsigned int *)&Size + 1,
                                                                     (__int64)v46,
                                                                     v15,
                                                                     &v43);
                                                      if ( (_BYTE)v1 == 1 )
                                                      {
                                                        LODWORD(v1) = (*(_DWORD *)(a1 + 52) ^ (8 * v43)) & 8;
                                                        *(_DWORD *)(a1 + 52) ^= v1;
                                                      }
                                                      if ( v45 )
                                                      {
                                                        HIDWORD(Size) = Size;
                                                        if ( (Size & 3) != 0 )
                                                        {
                                                          if ( (_DWORD)Size )
                                                            memset(v45, 0, (unsigned int)Size);
                                                        }
                                                        else if ( (unsigned int)Size >> 2 )
                                                        {
                                                          memset(v45, 0, 4LL * ((unsigned int)Size >> 2));
                                                        }
                                                        v43 = 0;
                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                       a1,
                                                                       (__int64)"TestMdlDataBufferOffsetInBytes",
                                                                       v41,
                                                                       (__int64 *)&v45,
                                                                       (unsigned int *)&Size,
                                                                       (unsigned int *)&Size + 1,
                                                                       (__int64)v46,
                                                                       v15,
                                                                       &v43);
                                                        if ( (_BYTE)v1 == 1 )
                                                        {
                                                          LOBYTE(v1) = v43;
                                                          *(_DWORD *)(a1 + 100) = v43;
                                                        }
                                                        if ( v45 )
                                                          LOBYTE(v1) = StorPortFreeRegistryBuffer(a1, v45);
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
