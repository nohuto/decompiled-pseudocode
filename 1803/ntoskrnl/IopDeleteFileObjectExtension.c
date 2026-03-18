/*
 * XREFs of IopDeleteFileObjectExtension @ 0x140062248
 * Callers:
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     IopCleanupNotifications @ 0x140160260 (IopCleanupNotifications.c)
 *     PsReleaseSiloHardReference @ 0x140283E10 (PsReleaseSiloHardReference.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404D1FD0 (FsRtlFreeExtraCreateParameter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14077A780 (PspAdjustKeepAliveCountProcess.c)
 */

void __fastcall IopDeleteFileObjectExtension(__int64 a1)
{
  _DWORD *v1; // r14
  __int64 i; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  void *v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // rcx
  void *v9; // rcx
  _QWORD *v10; // rsi
  void *v11; // rcx
  _BYTE *v12; // rbp
  _QWORD *v13; // r15
  KIRQL v14; // r12
  __int64 v15; // r9
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx
  int v18; // eax
  void *v19; // rcx
  ULONG v20; // edx
  char v21; // [rsp+50h] [rbp+8h]

  v1 = *(_DWORD **)(a1 + 208);
  if ( v1 == IopRevocationExtension )
    return;
  for ( i = 0LL; i < 9; ++i )
  {
    v4 = *(_QWORD **)&v1[2 * i + 2];
    if ( !v4 )
      continue;
    if ( i == 4 )
    {
      v10 = (_QWORD *)*v4;
      while ( v10 != v4 )
      {
        v11 = v10;
        v10 = (_QWORD *)*v10;
        ExFreePoolWithTag(v11, 0);
      }
      goto LABEL_21;
    }
    if ( !i )
    {
      v9 = (void *)v4[1];
      if ( v9 )
        ObDereferenceObjectDeferDeleteWithTag(v9, 0x746C6644u);
      goto LABEL_21;
    }
    if ( i != 5 )
    {
      switch ( i )
      {
        case 1LL:
          v5 = (_QWORD *)v4[2];
          while ( v5 )
          {
            v6 = v5;
            v5 = (_QWORD *)*v5;
            ExFreePoolWithTag(v6, 0);
          }
          v7 = (_QWORD *)v4[3];
          while ( v7 )
          {
            v12 = (_BYTE *)v7[3];
            v13 = v7;
            v7 = (_QWORD *)*v7;
            v14 = KeAcquireSpinLockRaiseToDpc(&qword_1403C84F0);
            v21 = v12[18];
            if ( v12[16] == 1 )
              v12[17] = 1;
            else
              ExFreePoolWithTag(v12, 0);
            KxReleaseSpinLock(&qword_1403C84F0);
            __writecr8(v14);
            if ( *((_DWORD *)v13 + 4) )
            {
              LOBYTE(v15) = v21;
              PspAdjustKeepAliveCountProcess(v13[1], 0xFFFFFFFFLL, a1, v15);
              ObfDereferenceObjectWithTag((PVOID)v13[1], 0x746C6644u);
            }
            ExFreePoolWithTag(v13, 0);
          }
          v8 = (_QWORD *)v4[1];
          if ( !v8 )
            goto LABEL_21;
          v20 = 1953261124;
          break;
        case 6LL:
          ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v4);
          continue;
        case 2LL:
          v16 = (_QWORD *)v4[5];
          if ( v16 )
          {
            do
            {
              v17 = (_QWORD *)v16[5];
              ExFreePoolWithTag(v16, 0);
              v16 = v17;
            }
            while ( v17 );
          }
          goto LABEL_21;
        case 7LL:
          v18 = *((_DWORD *)v4 + 1);
          if ( (v18 & 1) != 0 )
          {
            v19 = (void *)v4[1];
            *((_DWORD *)v4 + 1) = v18 & 0xFFFFFFFE;
            PsReleaseSiloHardReference(v19);
          }
          v8 = (_QWORD *)v4[1];
          v20 = 1884516169;
          break;
        case 8LL:
          v8 = (_QWORD *)*v4;
          v20 = 1866886985;
          break;
        default:
LABEL_21:
          ExFreePoolWithTag(*(PVOID *)&v1[2 * i + 2], 0);
          continue;
      }
      ObfDereferenceObjectWithTag(v8, v20);
      goto LABEL_21;
    }
    FsRtlFreeExtraCreateParameter(v4);
  }
  if ( (*v1 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag(v1, 0);
}
