/*
 * XREFs of AlpcpMapLegacyPortView @ 0x140436098
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140474A80 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpCreateSectionView @ 0x140436460 (AlpcpCreateSectionView.c)
 *     AlpcpCreateSection @ 0x140436860 (AlpcpCreateSection.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     MmGetSectionInformation @ 0x1404ECBAC (MmGetSectionInformation.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(PVOID Object, __int64 a2, __int64 a3)
{
  void *v3; // rbp
  NTSTATUS SectionInformation; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  ULONG_PTR v15; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-50h] BYREF
  int v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+10h] BYREF
  PVOID v20; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(void **)(a2 + 8);
  if ( !v3 )
    return 3221225480LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &v20,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation(v20, 0LL, v16);
    if ( SectionInformation >= 0 )
    {
      if ( (v17 & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v9 = (unsigned int)(AlpcpViewGranularity - 1);
        v10 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v11 = v10 & (v9 + *(unsigned int *)(a2 + 16));
        v12 = v10 & (v9 + *(_QWORD *)(a2 + 24));
        if ( v12 + v11 >= v11 )
        {
          if ( v12 + v11 <= v18 )
          {
            SectionInformation = AlpcpCreateSection(Object, v18, (__int64)&BugCheckParameter2);
            if ( SectionInformation >= 0 )
            {
              SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, (ULONG_PTR)&v15);
              if ( SectionInformation >= 0 )
              {
                v13 = v15;
                *(_DWORD *)a2 = 48;
                *(_QWORD *)(a2 + 32) = *(_QWORD *)(v13 + 40);
                v14 = *(_QWORD *)(v13 + 48);
                *(_QWORD *)(a2 + 40) = 0LL;
                *(_QWORD *)(a2 + 24) = v14;
                *(_QWORD *)(a3 + 40) = v13;
                AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v13 + 16));
                ++*(_DWORD *)(v13 + 76);
                AlpcpUnlockBlob(*(_QWORD *)(v13 + 16));
              }
              else
              {
                AlpcpDereferenceBlobEx(BugCheckParameter2);
              }
            }
          }
          else
          {
            SectionInformation = -1073741670;
          }
        }
        else
        {
          SectionInformation = -1073741811;
        }
      }
    }
    ObfDereferenceObject(v20);
  }
  return (unsigned int)SectionInformation;
}
