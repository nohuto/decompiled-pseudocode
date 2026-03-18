/*
 * XREFs of AlpcpMapLegacyPortView @ 0x1405563C4
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1404DBA50 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     MmGetSectionInformation @ 0x1404F91C0 (MmGetSectionInformation.c)
 *     AlpcpCreateSectionView @ 0x140556764 (AlpcpCreateSectionView.c)
 *     AlpcpCreateSection @ 0x140556B5C (AlpcpCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(PVOID Object, __int64 a2, __int64 a3)
{
  void *v3; // rbp
  int SectionInformation; // edi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  ULONG_PTR v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR v18; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+48h] [rbp-40h]
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
    SectionInformation = MmGetSectionInformation((__int64)Objecta, 0);
    if ( SectionInformation >= 0 )
    {
      if ( (v19 & 0x800000) != 0 )
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
        else if ( v11 + v10 > v20 )
        {
          SectionInformation = -1073741670;
        }
        else
        {
          SectionInformation = AlpcpCreateSection(Object, v20, (__int64)&BugCheckParameter2);
          if ( SectionInformation >= 0 )
          {
            SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, Object, (ULONG_PTR)&v18);
            if ( SectionInformation < 0 )
            {
              AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
            }
            else
            {
              v12 = v18;
              *(_DWORD *)a2 = 48;
              *(_QWORD *)(a2 + 32) = *(_QWORD *)(v12 + 40);
              v13 = *(_QWORD *)(v12 + 48);
              *(_QWORD *)(a2 + 40) = 0LL;
              *(_QWORD *)(a2 + 24) = v13;
              *(_QWORD *)(a3 + 40) = v12;
              AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v12 + 16));
              ++*(_DWORD *)(v12 + 76);
              AlpcpUnlockBlob(*(_QWORD *)(v12 + 16), v14, v15, v16);
            }
          }
        }
      }
    }
    ObfDereferenceObject(Objecta);
  }
  return (unsigned int)SectionInformation;
}
