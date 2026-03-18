/*
 * XREFs of AlpcpMapLegacyPortView @ 0x14045E120
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140466208 (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     AlpcpCreateSection @ 0x140460E08 (AlpcpCreateSection.c)
 *     AlpcpCreateSectionView @ 0x1404610D4 (AlpcpCreateSectionView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     MmGetSectionInformation @ 0x14048C730 (MmGetSectionInformation.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(PVOID Object, __int64 a2, __int64 a3)
{
  void *v3; // rbp
  NTSTATUS SectionInformation; // edi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  ULONG_PTR v12; // rbx
  __int64 v13; // rax
  ULONG_PTR v15; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-50h] BYREF
  int v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+10h] BYREF
  PVOID Objecta; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(void **)(a2 + 8);
  if ( !v3 )
    return 3221225480LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &Objecta,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation(Objecta, 0LL, v16);
    if ( SectionInformation >= 0 )
    {
      if ( (v17 & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v8 = (unsigned int)(AlpcpViewGranularity - 1);
        v9 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v10 = v9 & (v8 + *(unsigned int *)(a2 + 16));
        v11 = v9 & (v8 + *(_QWORD *)(a2 + 24));
        if ( v11 + v10 < v10 )
        {
          SectionInformation = -1073741811;
        }
        else if ( v11 + v10 > v18 )
        {
          SectionInformation = -1073741670;
        }
        else
        {
          SectionInformation = AlpcpCreateSection(Object, v18, (__int64)&BugCheckParameter2);
          if ( SectionInformation >= 0 )
          {
            SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, (ULONG_PTR)&v15);
            if ( SectionInformation < 0 )
            {
              AlpcpDereferenceBlobEx(BugCheckParameter2);
            }
            else
            {
              v12 = v15;
              *(_DWORD *)a2 = 48;
              *(_QWORD *)(a2 + 32) = *(_QWORD *)(v12 + 40);
              v13 = *(_QWORD *)(v12 + 48);
              *(_QWORD *)(a2 + 40) = 0LL;
              *(_QWORD *)(a2 + 24) = v13;
              *(_QWORD *)(a3 + 40) = v12;
              AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v12 + 16));
              ++*(_DWORD *)(v12 + 76);
              AlpcpUnlockBlob(*(_QWORD *)(v12 + 16));
            }
          }
        }
      }
    }
    ObfDereferenceObject(Objecta);
  }
  return (unsigned int)SectionInformation;
}
