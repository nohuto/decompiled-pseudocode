/*
 * XREFs of ndisOidPrePortState @ 0x1C0047330
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisFindPortByPortNumber @ 0x1C003D8CC (ndisFindPortByPortNumber.c)
 */

char __fastcall ndisOidPrePortState(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // di
  __int64 v5; // rax
  KIRQL v6; // r13
  unsigned int v7; // edx
  _DWORD *v8; // rbx
  int v9; // eax
  __int64 *PortByPortNumber; // rax
  __int64 *v11; // r15

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_qD(0xCDu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, *(_DWORD *)(v3 + 8));
    v5 = *(_QWORD *)a1;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    else
    {
      if ( *(_DWORD *)(v3 + 48) < 0x30u )
      {
        *(_DWORD *)(v3 + 52) = 0;
        *(_DWORD *)(v3 + 56) = 48;
        *(_DWORD *)(a1 + 40) = -1073676266;
        goto LABEL_17;
      }
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2307747;
      v7 = *(_DWORD *)(v3 + 8);
      if ( v7 )
      {
        PortByPortNumber = ndisFindPortByPortNumber(v1, v7);
        v11 = PortByPortNumber;
        if ( !PortByPortNumber )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
          *(_DWORD *)(a1 + 40) = -1071448019;
          goto LABEL_17;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 4 )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
          *(_DWORD *)(a1 + 40) = -1071448018;
          goto LABEL_17;
        }
        v8 = *(_DWORD **)(v3 + 40);
        memset(v8, 0, 0x30uLL);
        *v8 = 3146112;
        v8[1] = *((_DWORD *)v11 + 10);
        *((_QWORD *)v8 + 1) = v11[6];
        *((_QWORD *)v8 + 2) = v11[7];
        v8[6] = *((_DWORD *)v11 + 16);
        v8[7] = *((_DWORD *)v11 + 17);
        v8[8] = *((_DWORD *)v11 + 18);
        v8[9] = *((_DWORD *)v11 + 19);
        v9 = *((_DWORD *)v11 + 20);
      }
      else
      {
        v8 = *(_DWORD **)(v3 + 40);
        memset(v8, 0, 0x30uLL);
        *v8 = 3146112;
        v8[1] = *(_DWORD *)(v1 + 480);
        *((_QWORD *)v8 + 1) = *(_QWORD *)(v1 + 792);
        *((_QWORD *)v8 + 2) = *(_QWORD *)(v1 + 800);
        v8[6] = *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 532LL);
        v8[7] = *(_DWORD *)(v1 + 3336);
        v8[8] = *(_DWORD *)(v1 + 3340);
        v8[9] = *(_DWORD *)(v1 + 3344);
        v9 = *(_DWORD *)(v1 + 3348);
      }
      v8[10] = v9;
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(v3 + 52) = 48;
      *(_DWORD *)(v3 + 56) = 48;
    }
    v4 = 1;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0xCEu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, *(_DWORD *)(v3 + 8));
  return v4;
}
