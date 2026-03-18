/*
 * XREFs of GetRegistrySettings @ 0x1C0012E34
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001590 (NVMeHwFindAdapter.c)
 * Callees:
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0012C34 (ReadMultiSzRegistryValueAndCompareId.c)
 *     __security_check_cookie @ 0x1C0013F20 (__security_check_cookie.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

char __fastcall GetRegistrySettings(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // eax
  void *v4; // r9
  unsigned int v5; // edx
  __int64 i; // r8
  char v7; // cl
  unsigned int v8; // ecx
  __int64 j; // rdx
  char v10; // al
  unsigned int v11; // ecx
  __int64 k; // rdx
  char v13; // al
  unsigned int v14; // eax
  char *v15; // rcx
  unsigned int v16; // edi
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
  __int64 v32; // r8
  void *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  unsigned int v46; // [rsp+50h] [rbp-9h] BYREF
  size_t Size; // [rsp+54h] [rbp-5h] BYREF
  void *v48; // [rsp+60h] [rbp+7h] BYREF
  char v49[32]; // [rsp+68h] [rbp+Fh] BYREF

  LOBYTE(v1) = aVenVvvvDevDddd[24];
  strcpy(v49, "VEN_vvvv&DEV_dddd&REV_rr");
  Size = 512LL;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 28) = 0LL;
    *(_DWORD *)(a1 + 64) = -1;
    *(_DWORD *)(a1 + 80) = -1;
    *(_DWORD *)(a1 + 84) = -1;
    *(_DWORD *)(a1 + 96) = -1;
    v3 = *(_DWORD *)(a1 + 52) & 0xFFFFFFE8;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 16711680;
    *(_DWORD *)(a1 + 52) = v3 | 8;
    *(_QWORD *)(a1 + 44) = 0LL;
    *(_BYTE *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 60) = 0;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_DWORD *)(a1 + 104) = 0;
    *(_DWORD *)(a1 + 68) = 50;
    *(_DWORD *)(a1 + 72) = 3000;
    *(_DWORD *)(a1 + 76) = 1000;
    v1 = StorPortAllocateRegistryBuffer(a1, &Size);
    v48 = (void *)v1;
    v4 = (void *)v1;
    if ( v1 )
    {
      v5 = *(unsigned __int16 *)(a1 + 4);
      for ( i = 3LL; i >= 0; --i )
      {
        v7 = v5;
        v5 >>= 4;
        v49[i + 4] = `HexFromUchar'::`2'::hexDigits[v7 & 0xF];
      }
      v8 = *(unsigned __int16 *)(a1 + 6);
      for ( j = 3LL; j >= 0; --j )
      {
        v10 = v8;
        v8 >>= 4;
        v49[j + 13] = `HexFromUchar'::`2'::hexDigits[v10 & 0xF];
      }
      v11 = *(unsigned __int8 *)(a1 + 8);
      for ( k = 1LL; k >= 0; --k )
      {
        v13 = v11;
        v11 >>= 4;
        v49[k + 22] = `HexFromUchar'::`2'::hexDigits[v13 & 0xF];
      }
      v14 = 0;
      v15 = v49;
      v16 = 29;
      do
      {
        if ( !*v15 )
          break;
        ++v14;
        ++v15;
      }
      while ( v14 < 0x1D );
      if ( v14 < 0x1D )
        v16 = v14;
      HIDWORD(Size) = Size;
      if ( (Size & 3) != 0 )
      {
        if ( (_DWORD)Size )
          memset(v4, 0, (unsigned int)Size);
      }
      else if ( (unsigned int)Size >> 2 )
      {
        memset(v4, 0, 4LL * ((unsigned int)Size >> 2));
      }
      v46 = 0;
      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                     a1,
                     (__int64)"MaxTransferSize",
                     i,
                     (__int64 *)&v48,
                     (unsigned int *)&Size,
                     (unsigned int *)&Size + 1,
                     (__int64)v49,
                     v16,
                     &v46);
      if ( (_BYTE)v1 == 1 )
      {
        LODWORD(v1) = v46;
        if ( v46 )
        {
          *(_DWORD *)(a1 + 28) = v46;
          if ( (unsigned int)v1 > 0x800 )
          {
            *(_DWORD *)(a1 + 28) = 2048;
            LODWORD(v1) = 2048;
          }
          LODWORD(v1) = (_DWORD)v1 << 10;
          *(_DWORD *)(a1 + 28) = v1;
        }
      }
      if ( v48 )
      {
        HIDWORD(Size) = Size;
        if ( (Size & 3) != 0 )
        {
          if ( (_DWORD)Size )
            memset(v48, 0, (unsigned int)Size);
        }
        else if ( (unsigned int)Size >> 2 )
        {
          memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
        }
        v46 = 0;
        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                       a1,
                       (__int64)"IoQueueDepth",
                       v17,
                       (__int64 *)&v48,
                       (unsigned int *)&Size,
                       (unsigned int *)&Size + 1,
                       (__int64)v49,
                       v16,
                       &v46);
        if ( (_BYTE)v1 == 1 )
        {
          LOBYTE(v1) = v46;
          if ( v46 )
            *(_DWORD *)(a1 + 32) = v46;
        }
        if ( v48 )
        {
          HIDWORD(Size) = Size;
          if ( (Size & 3) != 0 )
          {
            if ( (_DWORD)Size )
              memset(v48, 0, (unsigned int)Size);
          }
          else if ( (unsigned int)Size >> 2 )
          {
            memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
          }
          v46 = 0;
          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                         a1,
                         (__int64)"IoSubmissionQueueCount",
                         v18,
                         (__int64 *)&v48,
                         (unsigned int *)&Size,
                         (unsigned int *)&Size + 1,
                         (__int64)v49,
                         v16,
                         &v46);
          if ( (_BYTE)v1 == 1 )
          {
            LOBYTE(v1) = v46;
            if ( v46 )
              *(_WORD *)(a1 + 36) = v46;
          }
          if ( v48 )
          {
            HIDWORD(Size) = Size;
            if ( (Size & 3) != 0 )
            {
              if ( (_DWORD)Size )
                memset(v48, 0, (unsigned int)Size);
            }
            else if ( (unsigned int)Size >> 2 )
            {
              memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
            }
            v46 = 0;
            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                           a1,
                           (__int64)"IoCompletionQueueCount",
                           v19,
                           (__int64 *)&v48,
                           (unsigned int *)&Size,
                           (unsigned int *)&Size + 1,
                           (__int64)v49,
                           v16,
                           &v46);
            if ( (_BYTE)v1 == 1 )
            {
              LOBYTE(v1) = v46;
              if ( v46 )
                *(_WORD *)(a1 + 38) = v46;
            }
            if ( v48 )
            {
              HIDWORD(Size) = Size;
              if ( (Size & 3) != 0 )
              {
                if ( (_DWORD)Size )
                  memset(v48, 0, (unsigned int)Size);
              }
              else if ( (unsigned int)Size >> 2 )
              {
                memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
              }
              v46 = 0;
              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                             a1,
                             (__int64)"InterruptCoalescingTime",
                             v20,
                             (__int64 *)&v48,
                             (unsigned int *)&Size,
                             (unsigned int *)&Size + 1,
                             (__int64)v49,
                             v16,
                             &v46);
              if ( (_BYTE)v1 == 1 )
              {
                LOBYTE(v1) = v46;
                if ( v46 )
                  *(_BYTE *)(a1 + 40) = v46;
              }
              if ( v48 )
              {
                HIDWORD(Size) = Size;
                if ( (Size & 3) != 0 )
                {
                  if ( (_DWORD)Size )
                    memset(v48, 0, (unsigned int)Size);
                }
                else if ( (unsigned int)Size >> 2 )
                {
                  memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                }
                v46 = 0;
                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                               a1,
                               (__int64)"InterruptCoalescingEntry",
                               v21,
                               (__int64 *)&v48,
                               (unsigned int *)&Size,
                               (unsigned int *)&Size + 1,
                               (__int64)v49,
                               v16,
                               &v46);
                if ( (_BYTE)v1 == 1 )
                {
                  LOBYTE(v1) = v46;
                  if ( v46 )
                    *(_BYTE *)(a1 + 41) = v46;
                }
                if ( v48 )
                {
                  HIDWORD(Size) = Size;
                  if ( (Size & 3) != 0 )
                  {
                    if ( (_DWORD)Size )
                      memset(v48, 0, (unsigned int)Size);
                  }
                  else if ( (unsigned int)Size >> 2 )
                  {
                    memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                  }
                  v46 = 0;
                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                 a1,
                                 (__int64)"ArbitrationBurst",
                                 v22,
                                 (__int64 *)&v48,
                                 (unsigned int *)&Size,
                                 (unsigned int *)&Size + 1,
                                 (__int64)v49,
                                 v16,
                                 &v46);
                  if ( (_BYTE)v1 == 1 )
                  {
                    LOBYTE(v1) = v46;
                    if ( v46 )
                      *(_BYTE *)(a1 + 42) = v46;
                  }
                  if ( v48 )
                  {
                    HIDWORD(Size) = Size;
                    if ( (Size & 3) != 0 )
                    {
                      if ( (_DWORD)Size )
                        memset(v48, 0, (unsigned int)Size);
                    }
                    else if ( (unsigned int)Size >> 2 )
                    {
                      memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                    }
                    v46 = 0;
                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                   a1,
                                   (__int64)"ContiguousMemoryFromAnyNode",
                                   v23,
                                   (__int64 *)&v48,
                                   (unsigned int *)&Size,
                                   (unsigned int *)&Size + 1,
                                   (__int64)v49,
                                   v16,
                                   &v46);
                    if ( (_BYTE)v1 == 1 && v46 )
                      *(_DWORD *)(a1 + 52) |= 2u;
                    if ( v48 )
                    {
                      HIDWORD(Size) = Size;
                      if ( (Size & 3) != 0 )
                      {
                        if ( (_DWORD)Size )
                          memset(v48, 0, (unsigned int)Size);
                      }
                      else if ( (unsigned int)Size >> 2 )
                      {
                        memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                      }
                      v46 = 0;
                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                     a1,
                                     (__int64)"ShutdownTimeout",
                                     v24,
                                     (__int64 *)&v48,
                                     (unsigned int *)&Size,
                                     (unsigned int *)&Size + 1,
                                     (__int64)v49,
                                     v16,
                                     &v46);
                      if ( (_BYTE)v1 == 1 && v46 )
                      {
                        LOBYTE(v1) = v46;
                        if ( v46 > 0xFF )
                          LOBYTE(v1) = -1;
                        *(_BYTE *)(a1 + 43) = v1;
                      }
                      if ( v48 )
                      {
                        HIDWORD(Size) = Size;
                        if ( (Size & 3) != 0 )
                        {
                          if ( (_DWORD)Size )
                            memset(v48, 0, (unsigned int)Size);
                        }
                        else if ( (unsigned int)Size >> 2 )
                        {
                          memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                        }
                        v46 = 0;
                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                       a1,
                                       (__int64)"DeallocateMaxLbaCount",
                                       v25,
                                       (__int64 *)&v48,
                                       (unsigned int *)&Size,
                                       (unsigned int *)&Size + 1,
                                       (__int64)v49,
                                       v16,
                                       &v46);
                        if ( (_BYTE)v1 == 1 )
                        {
                          LOBYTE(v1) = v46;
                          if ( v46 )
                            *(_DWORD *)(a1 + 44) = v46;
                        }
                        if ( v48 )
                        {
                          HIDWORD(Size) = Size;
                          if ( (Size & 3) != 0 )
                          {
                            if ( (_DWORD)Size )
                              memset(v48, 0, (unsigned int)Size);
                          }
                          else if ( (unsigned int)Size >> 2 )
                          {
                            memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                          }
                          v46 = 0;
                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (__int64)"DisableDeallocate",
                                         v26,
                                         (__int64 *)&v48,
                                         (unsigned int *)&Size,
                                         (unsigned int *)&Size + 1,
                                         (__int64)v49,
                                         v16,
                                         &v46);
                          if ( (_BYTE)v1 == 1 && v46 )
                            *(_DWORD *)(a1 + 52) |= 1u;
                          if ( v48 )
                          {
                            HIDWORD(Size) = Size;
                            if ( (Size & 3) != 0 )
                            {
                              if ( (_DWORD)Size )
                                memset(v48, 0, (unsigned int)Size);
                            }
                            else if ( (unsigned int)Size >> 2 )
                            {
                              memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                            }
                            v46 = 0;
                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (__int64)"ControllerBasicInit",
                                           v27,
                                           (__int64 *)&v48,
                                           (unsigned int *)&Size,
                                           (unsigned int *)&Size + 1,
                                           (__int64)v49,
                                           v16,
                                           &v46);
                            if ( (_BYTE)v1 == 1 && v46 )
                              *(_DWORD *)(a1 + 52) |= 4u;
                            if ( v48 )
                            {
                              HIDWORD(Size) = Size;
                              if ( (Size & 3) != 0 )
                              {
                                if ( (_DWORD)Size )
                                  memset(v48, 0, (unsigned int)Size);
                              }
                              else if ( (unsigned int)Size >> 2 )
                              {
                                memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                              }
                              v46 = 0;
                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (__int64)"AsyncEventMask",
                                             v28,
                                             (__int64 *)&v48,
                                             (unsigned int *)&Size,
                                             (unsigned int *)&Size + 1,
                                             (__int64)v49,
                                             v16,
                                             &v46);
                              if ( (_BYTE)v1 == 1 )
                              {
                                LOBYTE(v1) = v46;
                                if ( v46 )
                                {
                                  LOBYTE(v1) = v46 & 0x1F;
                                  *(_BYTE *)(a1 + 56) = v46 & 0x1F;
                                }
                              }
                              if ( v48 )
                              {
                                HIDWORD(Size) = Size;
                                if ( (Size & 3) != 0 )
                                {
                                  if ( (_DWORD)Size )
                                    memset(v48, 0, (unsigned int)Size);
                                }
                                else if ( (unsigned int)Size >> 2 )
                                {
                                  memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                }
                                v46 = 0;
                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (__int64)"IdlePowerMode",
                                               v29,
                                               (__int64 *)&v48,
                                               (unsigned int *)&Size,
                                               (unsigned int *)&Size + 1,
                                               (__int64)v49,
                                               v16,
                                               &v46);
                                if ( (_BYTE)v1 == 1 )
                                {
                                  LOBYTE(v1) = v46;
                                  if ( v46 < 6 )
                                    *(_DWORD *)(a1 + 60) = v46;
                                }
                                if ( v48 )
                                {
                                  HIDWORD(Size) = Size;
                                  if ( (Size & 3) != 0 )
                                  {
                                    if ( (_DWORD)Size )
                                      memset(v48, 0, (unsigned int)Size);
                                  }
                                  else if ( (unsigned int)Size >> 2 )
                                  {
                                    memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                  }
                                  v46 = 0;
                                  if ( ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (__int64)"DiagnosticFlags",
                                         v30,
                                         (__int64 *)&v48,
                                         (unsigned int *)&Size,
                                         (unsigned int *)&Size + 1,
                                         (__int64)v49,
                                         v16,
                                         &v46)
                                    && v46 )
                                  {
                                    *(_DWORD *)(a1 + 88) = v46;
                                  }
                                  LODWORD(v1) = *(_DWORD *)(a1 + 88);
                                  if ( (v1 & 2) != 0 )
                                    *(_DWORD *)(a1 + 92) = 0x100000;
                                  if ( v48 )
                                  {
                                    HIDWORD(Size) = Size;
                                    if ( (Size & 3) != 0 )
                                    {
                                      if ( (_DWORD)Size )
                                        memset(v48, 0, (unsigned int)Size);
                                    }
                                    else if ( (unsigned int)Size >> 2 )
                                    {
                                      memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                    }
                                    v46 = 0;
                                    if ( ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (__int64)"LogSize",
                                           v31,
                                           (__int64 *)&v48,
                                           (unsigned int *)&Size,
                                           (unsigned int *)&Size + 1,
                                           (__int64)v49,
                                           v16,
                                           &v46)
                                      && v46 )
                                    {
                                      *(_DWORD *)(a1 + 92) = v46 << 10;
                                    }
                                    LODWORD(v1) = -1431655765 * *(_DWORD *)(a1 + 92);
                                    v33 = v48;
                                    *(_DWORD *)(a1 + 3324) = *(_DWORD *)(a1 + 92) / 0x18u;
                                    if ( v33 )
                                    {
                                      HIDWORD(Size) = Size;
                                      if ( (Size & 3) != 0 )
                                      {
                                        if ( (_DWORD)Size )
                                          memset(v33, 0, (unsigned int)Size);
                                      }
                                      else if ( (unsigned int)Size >> 2 )
                                      {
                                        memset(v33, 0, 4LL * ((unsigned int)Size >> 2));
                                      }
                                      v46 = 0;
                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                     a1,
                                                     (__int64)"IoStripeAlignment",
                                                     v32,
                                                     (__int64 *)&v48,
                                                     (unsigned int *)&Size,
                                                     (unsigned int *)&Size + 1,
                                                     (__int64)v49,
                                                     v16,
                                                     &v46);
                                      if ( (_BYTE)v1 == 1 )
                                      {
                                        LOBYTE(v1) = v46;
                                        if ( v46 )
                                        {
                                          LODWORD(v1) = v46 << 10;
                                          if ( ((v46 << 10) & 0xFFF) == 0 )
                                            *(_DWORD *)(a1 + 48) = v1;
                                        }
                                      }
                                      if ( v48 )
                                      {
                                        HIDWORD(Size) = Size;
                                        if ( (Size & 3) != 0 )
                                        {
                                          if ( (_DWORD)Size )
                                            memset(v48, 0, (unsigned int)Size);
                                        }
                                        else if ( (unsigned int)Size >> 2 )
                                        {
                                          memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                        }
                                        v46 = 0;
                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                       a1,
                                                       (__int64)"MedPowerFxIdleTimeout",
                                                       v34,
                                                       (__int64 *)&v48,
                                                       (unsigned int *)&Size,
                                                       (unsigned int *)&Size + 1,
                                                       (__int64)v49,
                                                       v16,
                                                       &v46);
                                        if ( (_BYTE)v1 == 1 )
                                        {
                                          LOBYTE(v1) = v46;
                                          *(_DWORD *)(a1 + 64) = v46;
                                        }
                                        if ( v48 )
                                        {
                                          HIDWORD(Size) = Size;
                                          if ( (Size & 3) != 0 )
                                          {
                                            if ( (_DWORD)Size )
                                              memset(v48, 0, (unsigned int)Size);
                                          }
                                          else if ( (unsigned int)Size >> 2 )
                                          {
                                            memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                          }
                                          v46 = 0;
                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                         a1,
                                                         (__int64)"LowestPowerFxIdleTimeout",
                                                         v35,
                                                         (__int64 *)&v48,
                                                         (unsigned int *)&Size,
                                                         (unsigned int *)&Size + 1,
                                                         (__int64)v49,
                                                         v16,
                                                         &v46);
                                          if ( (_BYTE)v1 == 1 )
                                          {
                                            LOBYTE(v1) = v46;
                                            *(_DWORD *)(a1 + 68) = v46;
                                          }
                                          if ( v48 )
                                          {
                                            HIDWORD(Size) = Size;
                                            if ( (Size & 3) != 0 )
                                            {
                                              if ( (_DWORD)Size )
                                                memset(v48, 0, (unsigned int)Size);
                                            }
                                            else if ( (unsigned int)Size >> 2 )
                                            {
                                              memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                            }
                                            v46 = 0;
                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                           a1,
                                                           (__int64)"MedPowerD3IdleTimeout",
                                                           v36,
                                                           (__int64 *)&v48,
                                                           (unsigned int *)&Size,
                                                           (unsigned int *)&Size + 1,
                                                           (__int64)v49,
                                                           v16,
                                                           &v46);
                                            if ( (_BYTE)v1 == 1 )
                                            {
                                              LOBYTE(v1) = v46;
                                              *(_DWORD *)(a1 + 72) = v46;
                                            }
                                            if ( v48 )
                                            {
                                              HIDWORD(Size) = Size;
                                              if ( (Size & 3) != 0 )
                                              {
                                                if ( (_DWORD)Size )
                                                  memset(v48, 0, (unsigned int)Size);
                                              }
                                              else if ( (unsigned int)Size >> 2 )
                                              {
                                                memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                              }
                                              v46 = 0;
                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                             a1,
                                                             (__int64)"LowestPowerD3IdleTimeout",
                                                             v37,
                                                             (__int64 *)&v48,
                                                             (unsigned int *)&Size,
                                                             (unsigned int *)&Size + 1,
                                                             (__int64)v49,
                                                             v16,
                                                             &v46);
                                              if ( (_BYTE)v1 == 1 )
                                              {
                                                LOBYTE(v1) = v46;
                                                *(_DWORD *)(a1 + 76) = v46;
                                              }
                                              if ( v48 )
                                              {
                                                HIDWORD(Size) = Size;
                                                if ( (Size & 3) != 0 )
                                                {
                                                  if ( (_DWORD)Size )
                                                    memset(v48, 0, (unsigned int)Size);
                                                }
                                                else if ( (unsigned int)Size >> 2 )
                                                {
                                                  memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                                }
                                                v46 = 0;
                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                               a1,
                                                               (__int64)"MedPowerResumeLatency",
                                                               v38,
                                                               (__int64 *)&v48,
                                                               (unsigned int *)&Size,
                                                               (unsigned int *)&Size + 1,
                                                               (__int64)v49,
                                                               v16,
                                                               &v46);
                                                if ( (_BYTE)v1 == 1 )
                                                {
                                                  LOBYTE(v1) = v46;
                                                  *(_DWORD *)(a1 + 80) = v46;
                                                }
                                                if ( v48 )
                                                {
                                                  HIDWORD(Size) = Size;
                                                  if ( (Size & 3) != 0 )
                                                  {
                                                    if ( (_DWORD)Size )
                                                      memset(v48, 0, (unsigned int)Size);
                                                  }
                                                  else if ( (unsigned int)Size >> 2 )
                                                  {
                                                    memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                                  }
                                                  v46 = 0;
                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                 a1,
                                                                 (__int64)"LowestPowerResumeLatency",
                                                                 v39,
                                                                 (__int64 *)&v48,
                                                                 (unsigned int *)&Size,
                                                                 (unsigned int *)&Size + 1,
                                                                 (__int64)v49,
                                                                 v16,
                                                                 &v46);
                                                  if ( (_BYTE)v1 == 1 )
                                                  {
                                                    LOBYTE(v1) = v46;
                                                    *(_DWORD *)(a1 + 84) = v46;
                                                  }
                                                  if ( v48 )
                                                  {
                                                    HIDWORD(Size) = Size;
                                                    if ( (Size & 3) != 0 )
                                                    {
                                                      if ( (_DWORD)Size )
                                                        memset(v48, 0, (unsigned int)Size);
                                                    }
                                                    else if ( (unsigned int)Size >> 2 )
                                                    {
                                                      memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                                    }
                                                    v46 = 0;
                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                   a1,
                                                                   (__int64)"HostMemoryBufferBytes",
                                                                   v40,
                                                                   (__int64 *)&v48,
                                                                   (unsigned int *)&Size,
                                                                   (unsigned int *)&Size + 1,
                                                                   (__int64)v49,
                                                                   v16,
                                                                   &v46);
                                                    if ( (_BYTE)v1 == 1 )
                                                    {
                                                      LOBYTE(v1) = v46;
                                                      *(_DWORD *)(a1 + 96) = v46;
                                                    }
                                                    if ( v48 )
                                                    {
                                                      HIDWORD(Size) = Size;
                                                      if ( (Size & 3) != 0 )
                                                      {
                                                        if ( (_DWORD)Size )
                                                          memset(v48, 0, (unsigned int)Size);
                                                      }
                                                      else if ( (unsigned int)Size >> 2 )
                                                      {
                                                        memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                                      }
                                                      v46 = 0;
                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                     a1,
                                                                     (__int64)"BypassSgl",
                                                                     v41,
                                                                     (__int64 *)&v48,
                                                                     (unsigned int *)&Size,
                                                                     (unsigned int *)&Size + 1,
                                                                     (__int64)v49,
                                                                     v16,
                                                                     &v46);
                                                      if ( (_BYTE)v1 == 1 )
                                                      {
                                                        LODWORD(v1) = (*(_DWORD *)(a1 + 52) ^ (8 * v46)) & 8;
                                                        *(_DWORD *)(a1 + 52) ^= v1;
                                                      }
                                                      if ( v48 )
                                                      {
                                                        HIDWORD(Size) = Size;
                                                        if ( (Size & 3) != 0 )
                                                        {
                                                          if ( (_DWORD)Size )
                                                            memset(v48, 0, (unsigned int)Size);
                                                        }
                                                        else if ( (unsigned int)Size >> 2 )
                                                        {
                                                          memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                                        }
                                                        v46 = 0;
                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                       a1,
                                                                       (__int64)"TestMdlDataBufferOffsetInBytes",
                                                                       v42,
                                                                       (__int64 *)&v48,
                                                                       (unsigned int *)&Size,
                                                                       (unsigned int *)&Size + 1,
                                                                       (__int64)v49,
                                                                       v16,
                                                                       &v46);
                                                        if ( (_BYTE)v1 == 1 )
                                                        {
                                                          LOBYTE(v1) = v46;
                                                          *(_DWORD *)(a1 + 100) = v46;
                                                        }
                                                        if ( v48 )
                                                        {
                                                          HIDWORD(Size) = Size;
                                                          if ( (Size & 3) != 0 )
                                                          {
                                                            if ( (_DWORD)Size )
                                                              memset(v48, 0, (unsigned int)Size);
                                                          }
                                                          else if ( (unsigned int)Size >> 2 )
                                                          {
                                                            memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                                          }
                                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                         a1,
                                                                         (__int64)"UseDumpPointers",
                                                                         v43,
                                                                         (__int64 *)&v48,
                                                                         (unsigned int *)&Size,
                                                                         (unsigned int *)&Size + 1,
                                                                         (__int64)v49,
                                                                         v16,
                                                                         0LL);
                                                          if ( (_BYTE)v1 == 1 )
                                                            *(_DWORD *)(a1 + 52) |= 0x10u;
                                                          if ( v48 )
                                                          {
                                                            HIDWORD(Size) = Size;
                                                            if ( (Size & 3) != 0 )
                                                            {
                                                              if ( (_DWORD)Size )
                                                                memset(v48, 0, (unsigned int)Size);
                                                            }
                                                            else if ( (unsigned int)Size >> 2 )
                                                            {
                                                              memset(v48, 0, 4LL * ((unsigned int)Size >> 2));
                                                            }
                                                            v46 = 0;
                                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                           a1,
                                                                           (__int64)"ReservedQueuePairCount",
                                                                           v44,
                                                                           (__int64 *)&v48,
                                                                           (unsigned int *)&Size,
                                                                           (unsigned int *)&Size + 1,
                                                                           (__int64)v49,
                                                                           v16,
                                                                           &v46);
                                                            if ( (_BYTE)v1 == 1 )
                                                            {
                                                              LOBYTE(v1) = v46;
                                                              if ( v46 )
                                                                *(_DWORD *)(a1 + 104) = v46;
                                                            }
                                                            if ( v48 )
                                                              LOBYTE(v1) = StorPortFreeRegistryBuffer(a1, v48);
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
    }
  }
  return v1;
}
