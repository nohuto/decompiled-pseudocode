/*
 * XREFs of ndisOidPrePortState @ 0x1C0046130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisFindPortByPortNumber @ 0x1C003C57C (ndisFindPortByPortNumber.c)
 */

char __fastcall ndisOidPrePortState(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  char v4; // bl
  KIRQL v5; // r10
  unsigned int v6; // edx
  __int64 v7; // rdx
  __int64 *PortByPortNumber; // rax
  __int64 v9; // rcx

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0xD0u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, *(_DWORD *)(v3 + 8));
  if ( *(_QWORD *)a1 )
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
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2307809;
      v6 = *(_DWORD *)(v3 + 8);
      if ( v6 )
      {
        PortByPortNumber = ndisFindPortByPortNumber(v1, v6);
        if ( !PortByPortNumber )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
          *(_DWORD *)(a1 + 40) = -1071448019;
          goto LABEL_17;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 4 )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
          *(_DWORD *)(a1 + 40) = -1071448018;
          goto LABEL_17;
        }
        v9 = *(_QWORD *)(v3 + 40);
        *(_DWORD *)v9 = 3146112;
        *(_DWORD *)(v9 + 4) = *((_DWORD *)PortByPortNumber + 10);
        *(_QWORD *)(v9 + 8) = PortByPortNumber[6];
        *(_QWORD *)(v9 + 16) = PortByPortNumber[7];
        *(_DWORD *)(v9 + 24) = *((_DWORD *)PortByPortNumber + 16);
        *(_DWORD *)(v9 + 28) = *((_DWORD *)PortByPortNumber + 17);
        *(_DWORD *)(v9 + 32) = *((_DWORD *)PortByPortNumber + 18);
        *(_DWORD *)(v9 + 36) = *((_DWORD *)PortByPortNumber + 19);
        *(_DWORD *)(v9 + 40) = *((_DWORD *)PortByPortNumber + 20);
      }
      else
      {
        v7 = *(_QWORD *)(v3 + 40);
        *(_DWORD *)v7 = 3146112;
        *(_DWORD *)(v7 + 4) = *(_DWORD *)(v1 + 480);
        *(_QWORD *)(v7 + 8) = *(_QWORD *)(v1 + 792);
        *(_QWORD *)(v7 + 16) = *(_QWORD *)(v1 + 800);
        *(_DWORD *)(v7 + 24) = *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 532LL);
        *(_DWORD *)(v7 + 28) = *(_DWORD *)(v1 + 3336);
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v1 + 3340);
        *(_DWORD *)(v7 + 36) = *(_DWORD *)(v1 + 3344);
        *(_DWORD *)(v7 + 40) = *(_DWORD *)(v1 + 3348);
      }
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(v3 + 52) = 48;
      *(_DWORD *)(v3 + 56) = 48;
    }
    v4 = 1;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0xD1u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, *(_DWORD *)(v3 + 8));
  return v4;
}
