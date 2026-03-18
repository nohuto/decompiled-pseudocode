/*
 * XREFs of xxxNotifyIMEStatus @ 0x1C00F9340
 * Callers:
 *     NtUserNotifyIMEStatus @ 0x1C00F9290 (NtUserNotifyIMEStatus.c)
 * Callees:
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxNotifyIMEStatus(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int *v7; // rbx
  unsigned int v8; // r11d
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int i; // r10d
  int j; // r10d
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = a1[2];
  v5 = 0LL;
  if ( v3 )
  {
    if ( gpqForeground )
    {
      if ( *(_QWORD **)(gpqForeground + 80LL) == a1 )
      {
        v6 = a1[33];
        v7 = (unsigned int *)gdwIMEOpenStatus;
        v8 = gdwIMEConversionStatus;
        if ( gHimcFocus != v6 || gdwIMEConversionStatus != a3 || gdwIMEOpenStatus != a2 )
        {
          gHimcFocus = a1[33];
          if ( v6 )
          {
            gdwIMEConversionStatus = a3;
            v8 = a3;
            gdwIMEOpenStatus = a2 != 0;
            v9 = *(_QWORD *)(v3 + 392);
            v10 = gdwIMEOpenStatus != 0 ? a3 : 0;
            if ( v9 )
            {
              if ( (*(_WORD *)(v9 + 40) & 0x3FF) == 0x11 )
              {
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) &= ~1u;
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) &= ~2u;
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) &= ~4u;
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) &= ~8u;
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) &= ~0x10u;
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) &= ~0x20u;
                if ( (v10 & 1) != 0 )
                {
                  v15 = *(_QWORD *)(v3 + 384);
                  if ( (v10 & 2) != 0 )
                  {
                    *(_BYTE *)(v15 + 252) |= 4u;
                    *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) |= 8u;
                  }
                  else
                  {
                    *(_BYTE *)(v15 + 252) |= 0x10u;
                    *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) |= 0x20u;
                  }
                }
                else
                {
                  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) |= i )
                    ++i;
                }
                if ( (v10 & 8) != 0 )
                {
                  for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(v3 + 384) + 253LL) |= j )
                    ++j;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) |= 0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 252LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 253LL) &= ~1u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 253LL) &= ~2u;
                }
                v18 = *(_QWORD *)(v3 + 384);
                if ( (v10 & 0x10) != 0 )
                {
                  *(_BYTE *)(v18 + 253) |= 4u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 253LL) |= 8u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 253LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 253LL) &= ~0x20u;
                }
                else
                {
                  *(_BYTE *)(v18 + 253) |= 0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 253LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 253LL) &= ~4u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 253LL) &= ~8u;
                }
                v19 = *(_QWORD *)(v3 + 384);
                if ( (v10 & 0x20) != 0 )
                {
                  *(_BYTE *)(v19 + 254) |= 0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 254LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 254LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 254LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(v19 + 254) |= 0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 254LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 254LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 254LL) &= ~0x20u;
                }
              }
              else if ( (*(_WORD *)(v9 + 40) & 0x3FF) == 0x12 )
              {
                v12 = *(_QWORD *)(v3 + 384);
                if ( (v10 & 1) != 0 )
                  *(_BYTE *)(v12 + 197) |= 8u;
                else
                  *(_BYTE *)(v12 + 197) &= ~8u;
                v13 = *(_QWORD *)(v3 + 384);
                if ( (v10 & 8) != 0 )
                  *(_BYTE *)(v13 + 197) |= 0x80u;
                else
                  *(_BYTE *)(v13 + 197) &= ~0x80u;
                v14 = *(_QWORD *)(v3 + 384);
                if ( (v10 & 0x40) != 0 )
                  *(_BYTE *)(v14 + 198) |= 8u;
                else
                  *(_BYTE *)(v14 + 198) &= ~8u;
              }
            }
          }
          v11 = *(_QWORD *)(v3 + 392);
          if ( v11 )
            v5 = *(_QWORD *)(v11 + 40);
          if ( ((*(_DWORD *)(v3 + 600) | *(_DWORD *)(**(_QWORD **)(v3 + 416) + 16LL)) & 0x800) != 0 )
          {
            xxxCallHook(8, *a1, v5, 0xAu);
            v8 = gdwIMEConversionStatus;
            v7 = (unsigned int *)gdwIMEOpenStatus;
          }
          NlsKbdSendIMENotificationBase(*v7, v8, v5);
        }
      }
    }
  }
}
