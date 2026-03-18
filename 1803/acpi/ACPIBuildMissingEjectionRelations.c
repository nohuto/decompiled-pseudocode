/*
 * XREFs of ACPIBuildMissingEjectionRelations @ 0x1C000B954
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C0018144 (ACPIDetectEjectDevices.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0028704 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInternalMoveList @ 0x1C002A20C (ACPIInternalMoveList.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

__int64 ACPIBuildMissingEjectionRelations()
{
  KIRQL v0; // si
  __int64 v1; // rcx
  ULONG_PTR v2; // rdi
  _QWORD *v3; // rdx
  __int64 *v4; // r14
  int v5; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 v11; // [rsp+42h] [rbp-2Eh]
  void *Src; // [rsp+60h] [rbp-10h]

  v9[1] = v9;
  v9[0] = v9;
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (__int64 *)AcpiUnresolvedEjectList != &AcpiUnresolvedEjectList )
  {
    ACPIInternalMoveList(&AcpiUnresolvedEjectList, v9);
    while ( (_QWORD *)v9[0] != v9 )
    {
      v1 = *(_QWORD *)v9[0];
      v2 = v9[0] - 800LL;
      if ( *(_QWORD *)(*(_QWORD *)v9[0] + 8LL) != v9[0] || (v3 = *(_QWORD **)(v9[0] + 8LL), *v3 != v9[0]) )
        __fastfail(3u);
      *v3 = v1;
      *(_QWORD *)(v1 + 8) = v3;
      v4 = AMLIGetNamedChild(*(_QWORD **)(v2 + 712), 1145718111);
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 684));
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
        v5 = AMLIEvalNameSpaceObject(v4, v10, 0, 0LL);
        if ( (unsigned __int8)ACPIInitDereferenceDeviceExtensionUnlocked(v2) )
        {
          v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        }
        else
        {
          v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          if ( v5 >= 0 )
          {
            if ( v11 != 2 )
              KeBugCheckEx(0xA5u, 0xAuLL, v2, (ULONG_PTR)v4, v11);
            if ( (int)AMLIGetNameSpaceObject(Src) >= 0 )
            {
              dword_1C00677B8 = 0;
              pszDest = 0;
              FreeDataBuffs((__int64)v10, 1u);
            }
            v6 = (_QWORD *)qword_1C0067368;
            v7 = (_QWORD *)(v2 + 800);
            if ( *(__int64 **)qword_1C0067368 != &AcpiUnresolvedEjectList )
              __fastfail(3u);
          }
          else
          {
            v6 = (_QWORD *)qword_1C0067368;
            v7 = (_QWORD *)(v2 + 800);
            if ( *(__int64 **)qword_1C0067368 != &AcpiUnresolvedEjectList )
              __fastfail(3u);
          }
          *v7 = &AcpiUnresolvedEjectList;
          v7[1] = v6;
          *v6 = v7;
          qword_1C0067368 = (__int64)v7;
        }
        AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
      }
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
  return 0LL;
}
