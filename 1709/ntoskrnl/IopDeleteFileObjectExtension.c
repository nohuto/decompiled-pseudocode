/*
 * XREFs of IopDeleteFileObjectExtension @ 0x1400E5250
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 * Callees:
 *     IopCleanupNotifications @ 0x1400159F4 (IopCleanupNotifications.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     PsReleaseSiloHardReference @ 0x14024DA30 (PsReleaseSiloHardReference.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1407166EC (PspAdjustKeepAliveCountProcess.c)
 */

void __fastcall IopDeleteFileObjectExtension(_QWORD *a1)
{
  _DWORD *v1; // rsi
  __int64 i; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // r14
  _QWORD *v5; // r14
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  _QWORD **v10; // r14
  _QWORD *v11; // rdi
  void *v12; // rcx
  _BYTE *v13; // rbp
  _QWORD *v14; // r15
  KIRQL v15; // r12
  unsigned __int8 v16; // r13
  _QWORD *v17; // rcx
  _QWORD *v18; // rdi
  __int64 v19; // rdi
  int v20; // eax
  void *v21; // rcx
  _DWORD *v23; // [rsp+68h] [rbp+10h]

  v1 = (_DWORD *)a1[26];
  v23 = v1;
  if ( v1 == IopRevocationExtension )
    return;
  for ( i = 0LL; i < 9; ++i )
  {
    if ( !*(_QWORD *)&v1[2 * i + 2] )
      continue;
    if ( i == 4 )
    {
      v10 = (_QWORD **)*((_QWORD *)v1 + 5);
      v11 = *v10;
      while ( v11 != v10 )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        ExFreePoolWithTag(v12, 0);
      }
      goto LABEL_17;
    }
    if ( i )
    {
      switch ( i )
      {
        case 5LL:
          FsRtlFreeExtraCreateParameter(*((PVOID *)v1 + 6));
          break;
        case 1LL:
          v3 = (_QWORD *)*((_QWORD *)v1 + 2);
          v4 = (_QWORD *)v3[2];
          while ( v4 )
          {
            v7 = v4;
            v4 = (_QWORD *)*v4;
            ExFreePoolWithTag(v7, 0);
          }
          v5 = (_QWORD *)v3[3];
          if ( v5 )
          {
            do
            {
              v13 = (_BYTE *)v5[3];
              v14 = v5;
              v5 = (_QWORD *)*v5;
              v15 = KeAcquireSpinLockRaiseToDpc(&qword_140385130);
              v16 = v13[18];
              if ( v13[16] == 1 )
                v13[17] = 1;
              else
                ExFreePoolWithTag(v13, 0);
              KxReleaseSpinLock(&qword_140385130);
              __writecr8(v15);
              if ( *((_DWORD *)v14 + 4) )
              {
                PspAdjustKeepAliveCountProcess(v14[1], 0xFFFFFFFFLL, a1, v16);
                ObfDereferenceObjectWithTag((PVOID)v14[1], 0x746C6644u);
              }
              ExFreePoolWithTag(v14, 0);
            }
            while ( v5 );
            v1 = v23;
          }
          v6 = (void *)v3[1];
          if ( v6 )
            ObfDereferenceObjectWithTag(v6, 0x746C6644u);
LABEL_17:
          ExFreePoolWithTag(*(PVOID *)&v1[2 * i + 2], 0);
          continue;
        case 6LL:
          ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, *((PVOID *)v1 + 7));
          break;
        default:
          switch ( i )
          {
            case 2LL:
              v17 = *(_QWORD **)(*((_QWORD *)v1 + 3) + 40LL);
              if ( v17 )
              {
                do
                {
                  v18 = (_QWORD *)v17[5];
                  ExFreePoolWithTag(v17, 0);
                  v17 = v18;
                }
                while ( v18 );
              }
              break;
            case 7LL:
              v19 = *((_QWORD *)v1 + 8);
              v20 = *(_DWORD *)(v19 + 4);
              if ( (v20 & 1) != 0 )
              {
                v21 = *(void **)(v19 + 8);
                *(_DWORD *)(v19 + 4) = v20 & 0xFFFFFFFE;
                PsReleaseSiloHardReference(v21);
              }
              ObfDereferenceObjectWithTag(*(PVOID *)(v19 + 8), 0x70536F49u);
              break;
            case 8LL:
              ObfDereferenceObject(**((PVOID **)v1 + 9));
              break;
          }
          goto LABEL_17;
      }
    }
    else
    {
      v8 = *((_QWORD *)v1 + 1);
      if ( !v8 )
        goto LABEL_17;
      v9 = *(void **)(v8 + 8);
      if ( !v9 )
        goto LABEL_17;
      ObDereferenceObjectDeferDeleteWithTag(v9, 0x746C6644u);
      ExFreePoolWithTag(*((PVOID *)v1 + 1), 0);
    }
  }
  if ( (*v1 & 2) != 0 )
    IopCleanupNotifications(*(PVOID *)(a1[1] + 8LL), a1);
  ExFreePoolWithTag(v1, 0);
}
