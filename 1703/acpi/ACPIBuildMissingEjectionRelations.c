/*
 * XREFs of ACPIBuildMissingEjectionRelations @ 0x1C0043A04
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C0047D78 (ACPIDetectEjectDevices.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008504 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     ACPIInternalMoveList @ 0x1C002B028 (ACPIInternalMoveList.c)
 */

__int64 ACPIBuildMissingEjectionRelations()
{
  KIRQL v0; // si
  __int64 v1; // rdx
  ULONG_PTR v2; // rdi
  _QWORD *v3; // rcx
  __int64 *v4; // r14
  int v5; // ebx
  KIRQL v6; // al
  _QWORD *v7; // rdx
  volatile signed __int32 *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  _QWORD v16[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v17[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 v18; // [rsp+42h] [rbp-2Eh]
  void *Src; // [rsp+60h] [rbp-10h]
  volatile signed __int32 *v20; // [rsp+A0h] [rbp+30h] BYREF

  v16[1] = v16;
  v16[0] = v16;
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (__int64 *)AcpiUnresolvedEjectList != &AcpiUnresolvedEjectList )
  {
    ACPIInternalMoveList(&AcpiUnresolvedEjectList, (__int64)v16);
    while ( 1 )
    {
      do
      {
        if ( (_QWORD *)v16[0] == v16 )
          goto LABEL_28;
        v1 = *(_QWORD *)v16[0];
        v2 = v16[0] - 800LL;
        v20 = 0LL;
        v3 = *(_QWORD **)(v16[0] + 8LL);
        if ( *(_QWORD *)(v1 + 8) != v16[0] || *v3 != v16[0] )
          __fastfail(3u);
        *v3 = v1;
        *(_QWORD *)(v1 + 8) = v3;
        v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 712), 1145718111);
      }
      while ( !v4 );
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 684));
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
      v5 = AMLIEvalNameSpaceObject(v4, v17, 0, 0LL);
      if ( ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)v2) )
      {
        v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v8 = v20;
        v0 = v6;
      }
      else
      {
        v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        if ( v5 < 0 )
        {
          v9 = (_QWORD *)qword_1C0077248;
          v10 = (_QWORD *)(v2 + 800);
          if ( *(__int64 **)qword_1C0077248 != &AcpiUnresolvedEjectList )
            __fastfail(3u);
          v8 = v20;
LABEL_20:
          *v10 = &AcpiUnresolvedEjectList;
          v10[1] = v9;
          *v9 = v10;
          qword_1C0077248 = (__int64)v10;
          goto LABEL_21;
        }
        if ( v18 != 2 )
          KeBugCheckEx(0xA5u, 0xAuLL, v2, (ULONG_PTR)v4, v18);
        v11 = AMLIGetNameSpaceObject(Src, 0LL, &v20);
        v8 = v20;
        if ( v11 < 0
          || (dword_1C00776F8 = 0, pszDest = 0, FreeDataBuffs((__int64)v17, 1u), !v8)
          || (v12 = *(_QWORD *)(*(_QWORD *)v8 + 104LL)) == 0 )
        {
          v9 = (_QWORD *)qword_1C0077248;
          v10 = (_QWORD *)(v2 + 800);
          if ( *(__int64 **)qword_1C0077248 != &AcpiUnresolvedEjectList )
            __fastfail(3u);
          goto LABEL_20;
        }
        v13 = (_QWORD *)(v2 + 800);
        v7 = *(_QWORD **)(v12 + 792);
        if ( *v7 != v12 + 784 )
          __fastfail(3u);
        *v13 = v12 + 784;
        v13[1] = v7;
        *v7 = v13;
        *(_QWORD *)(v12 + 792) = v13;
        if ( (*(_DWORD *)(v12 + 8) & 0x208) == 0x200LL )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v12 + 736), EjectionRelations);
      }
LABEL_21:
      AMLIDereferenceHandleEx((volatile signed __int32 *)v4, (__int64)v7);
      if ( v8 )
        AMLIDereferenceHandleEx(v8, v14);
    }
  }
LABEL_28:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
  return 0LL;
}
