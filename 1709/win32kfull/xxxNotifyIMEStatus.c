/*
 * XREFs of xxxNotifyIMEStatus @ 0x1C01055E0
 * Callers:
 *     NtUserNotifyIMEStatus @ 0x1C0105530 (NtUserNotifyIMEStatus.c)
 * Callees:
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxNotifyIMEStatus(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int i; // r10d
  int j; // r10d
  __int64 v17; // rax
  __int64 v18; // rax

  v3 = a1[2];
  v5 = 0LL;
  if ( v3 )
  {
    if ( gpqForeground )
    {
      if ( *(_QWORD **)(gpqForeground + 112LL) == a1 )
      {
        v7 = a1[33];
        if ( gHimcFocus != v7 || gdwIMEConversionStatus != a3 || gdwIMEOpenStatus != a2 )
        {
          gHimcFocus = v7;
          if ( v7 )
          {
            gdwIMEConversionStatus = a3;
            gdwIMEOpenStatus = a2 != 0;
            v8 = *(_QWORD *)(v3 + 416);
            v9 = a2 != 0 ? a3 : 0;
            if ( v8 )
            {
              if ( (*(_WORD *)(v8 + 40) & 0x3FF) == 0x11 )
              {
                *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) &= ~1u;
                *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) &= ~2u;
                *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) &= ~4u;
                *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) &= ~8u;
                *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) &= ~0x10u;
                *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) &= ~0x20u;
                if ( (v9 & 1) != 0 )
                {
                  v14 = *(_QWORD *)(v3 + 408);
                  if ( (v9 & 2) != 0 )
                  {
                    *(_BYTE *)(v14 + 284) |= 4u;
                    *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) |= 8u;
                  }
                  else
                  {
                    *(_BYTE *)(v14 + 284) |= 0x10u;
                    *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) |= 0x20u;
                  }
                }
                else
                {
                  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) |= i )
                    ++i;
                }
                if ( (v9 & 8) != 0 )
                {
                  for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(v3 + 408) + 285LL) |= j )
                    ++j;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) |= 0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 284LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 285LL) &= ~1u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 285LL) &= ~2u;
                }
                v17 = *(_QWORD *)(v3 + 408);
                if ( (v9 & 0x10) != 0 )
                {
                  *(_BYTE *)(v17 + 285) |= 4u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 285LL) |= 8u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 285LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 285LL) &= ~0x20u;
                }
                else
                {
                  *(_BYTE *)(v17 + 285) |= 0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 285LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 285LL) &= ~4u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 285LL) &= ~8u;
                }
                v18 = *(_QWORD *)(v3 + 408);
                if ( (v9 & 0x20) != 0 )
                {
                  *(_BYTE *)(v18 + 286) |= 0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 286LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 286LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 286LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(v18 + 286) |= 0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 286LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 286LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 408) + 286LL) &= ~0x20u;
                }
              }
              else if ( (*(_WORD *)(v8 + 40) & 0x3FF) == 0x12 )
              {
                v11 = *(_QWORD *)(v3 + 408);
                if ( (v9 & 1) != 0 )
                  *(_BYTE *)(v11 + 229) |= 8u;
                else
                  *(_BYTE *)(v11 + 229) &= ~8u;
                v12 = *(_QWORD *)(v3 + 408);
                if ( (v9 & 8) != 0 )
                  *(_BYTE *)(v12 + 229) |= 0x80u;
                else
                  *(_BYTE *)(v12 + 229) &= ~0x80u;
                v13 = *(_QWORD *)(v3 + 408);
                if ( (v9 & 0x40) != 0 )
                  *(_BYTE *)(v13 + 230) |= 8u;
                else
                  *(_BYTE *)(v13 + 230) &= ~8u;
              }
            }
          }
          v10 = *(_QWORD *)(v3 + 416);
          if ( v10 )
            v5 = *(_QWORD *)(v10 + 40);
          if ( ((*(_DWORD *)(v3 + 656) | *(_DWORD *)(**(_QWORD **)(v3 + 440) + 16LL)) & 0x800) != 0 )
            xxxCallHook(8, *a1, v5, 0xAu);
          NlsKbdSendIMENotificationBase(gdwIMEOpenStatus, (unsigned int)gdwIMEConversionStatus, v5);
        }
      }
    }
  }
}
