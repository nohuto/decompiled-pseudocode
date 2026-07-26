/*
 * XREFs of ndisOidPreGenStats @ 0x1C00AF2C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidGetStatisticAllProcessors @ 0x1C00DDCEC (ndisOidGetStatisticAllProcessors.c)
 *     ndisSSGetCachedOidValue @ 0x1C00F570C (ndisSSGetCachedOidValue.c)
 */

char __fastcall ndisOidPreGenStats(__int64 *a1)
{
  __int64 v1; // rsi
  char v2; // di
  __int64 v4; // r15
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF

  v1 = a1[4];
  v2 = 0;
  v13 = 0LL;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    v4 = *a1;
    if ( *a1 )
    {
      if ( *(_BYTE *)(v4 + 32) < 6u )
      {
        if ( *(_QWORD *)(v1 + 144) )
        {
          *((_DWORD *)a1 + 10) = 0;
          v6 = 0;
          if ( *(_DWORD *)(v1 + 48) < 0x98u )
          {
            v6 = -1073676268;
            *(_DWORD *)(v1 + 56) = 152;
            *((_DWORD *)a1 + 10) = -1073676268;
          }
          v7 = *(_DWORD **)(v1 + 144);
          v2 = 1;
          if ( !v6 )
          {
            v8 = v7[14];
            if ( v8 )
            {
              *((_DWORD *)a1 + 10) = v8;
            }
            else
            {
              v9 = *(_QWORD *)(v1 + 40);
              *(_DWORD *)(v9 + 4) = 0;
              *(_DWORD *)v9 = 9961856;
              v10 = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 40LL);
              *(_DWORD *)(v9 + 4) = 16;
              *(_QWORD *)(v9 + 8) = v10;
              *(_QWORD *)(v9 + 16) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 24LL);
              *(_DWORD *)(v9 + 4) = 48;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131609LL, &v13);
              *(_QWORD *)(v9 + 24) = v13;
              *(_DWORD *)(v9 + 4) = 56;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131592LL, &v13);
              *(_QWORD *)(v9 + 32) = v13;
              *(_DWORD *)(v9 + 4) = 57;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131594LL, &v13);
              *(_QWORD *)(v9 + 40) = v13;
              *(_DWORD *)(v9 + 4) = 59;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131596LL, &v13);
              *(_QWORD *)(v9 + 48) = v13;
              *(_DWORD *)(v9 + 4) = 63;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131610LL, &v13);
              *(_QWORD *)(v9 + 56) = v13;
              *(_DWORD *)(v9 + 4) = 575;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131586LL, &v13);
              *(_QWORD *)(v9 + 64) = v13;
              *(_DWORD *)(v9 + 4) = 639;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131588LL, &v13);
              *(_QWORD *)(v9 + 72) = v13;
              *(_DWORD *)(v9 + 4) = 767;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131590LL, &v13);
              v11 = v13;
              *(_DWORD *)(v9 + 4) = 1023;
              *(_QWORD *)(v9 + 80) = v11;
              v12 = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 48LL);
              *(_QWORD *)(v9 + 96) = 0LL;
              *(_QWORD *)(v9 + 88) = v12;
              *(_DWORD *)(v9 + 4) = 2047;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131591LL, &v13);
              *(_QWORD *)(v9 + 104) = v13;
              *(_DWORD *)(v9 + 4) = 67583;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131593LL, &v13);
              *(_QWORD *)(v9 + 112) = v13;
              *(_DWORD *)(v9 + 4) = 198655;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131595LL, &v13);
              *(_QWORD *)(v9 + 120) = v13;
              *(_DWORD *)(v9 + 4) = 460799;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131585LL, &v13);
              *(_QWORD *)(v9 + 128) = v13;
              *(_DWORD *)(v9 + 4) = 985087;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131587LL, &v13);
              *(_QWORD *)(v9 + 136) = v13;
              *(_DWORD *)(v9 + 4) = 2033663;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3160), 131589LL, &v13);
              *(_QWORD *)(v9 + 144) = v13;
              *(_DWORD *)(v9 + 4) = 4130815;
              *(_DWORD *)(v1 + 52) = 152;
              *((_DWORD *)a1 + 10) = 0;
            }
            v7 = *(_DWORD **)(v1 + 144);
          }
          ExFreePoolWithTag(v7, 0);
          *(_QWORD *)(v1 + 144) = 0LL;
        }
        else
        {
          *((_DWORD *)a1 + 10) = -1073741670;
          return 1;
        }
      }
      else if ( *(_QWORD *)(v4 + 4480) )
      {
        return ndisSSGetCachedOidValue();
      }
    }
  }
  return v2;
}
