/*
 * XREFs of NdisMFreePort @ 0x1C003F5C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisFindPortByPortNumber @ 0x1C003FA44 (ndisFindPortByPortNumber.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 */

NDIS_STATUS __stdcall NdisMFreePort(NDIS_HANDLE NdisMiniportHandle, NDIS_PORT_NUMBER PortNumber)
{
  NDIS_STATUS v4; // edi
  KIRQL v5; // r14
  __int64 PortByPortNumber; // rax
  unsigned int v7; // edx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  NDIS_PORT_NUMBER v12; // r9d
  __int64 v13; // rdx
  _QWORD *v14; // rax

  v4 = 0;
  if ( (unsigned __int8)byte_1C009261E >= 4u )
    WPP_SF_qD(0xCu, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)NdisMiniportHandle, PortNumber);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisMiniportHandle + 12);
  *((_QWORD *)NdisMiniportHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)NdisMiniportHandle + 464) = 2359598;
  PortByPortNumber = ndisFindPortByPortNumber(NdisMiniportHandle, PortNumber);
  v8 = (_QWORD *)PortByPortNumber;
  if ( PortByPortNumber )
  {
    if ( *(_DWORD *)(PortByPortNumber + 16) == 2 )
    {
      v9 = *((_QWORD *)NdisMiniportHandle + 343);
      v10 = v7 >> 3;
      if ( v9
        && *((_DWORD *)NdisMiniportHandle + 688) >= (unsigned int)(v10 + 1)
        && (v11 = *(unsigned __int8 *)(v10 + v9), v12 = PortNumber & 7, _bittest(&v11, v12)) )
      {
        *(_BYTE *)(v10 + v9) = v11 & ~(1 << v12);
        v13 = *v8;
        v14 = (_QWORD *)v8[1];
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v14 != v8 )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        --*((_DWORD *)NdisMiniportHandle + 689);
        ExFreePoolWithTag(v8, 0);
      }
      else
      {
        v4 = -1073741811;
      }
    }
    else
    {
      v4 = -1071448018;
    }
  }
  else
  {
    v4 = -1071448019;
  }
  *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
  *((_DWORD *)NdisMiniportHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v5);
  if ( !v4 )
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x63u);
  if ( (unsigned __int8)byte_1C009261E >= 4u )
    WPP_SF_qdD(13LL, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, NdisMiniportHandle, PortNumber, v4);
  return v4;
}
