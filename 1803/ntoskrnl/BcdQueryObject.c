/*
 * XREFs of BcdQueryObject @ 0x140607C5C
 * Callers:
 *     PopBcdSetPendingResume @ 0x1405ECAD4 (PopBcdSetPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140606DDC (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14076E950 (PopBcdRegenerateResumeObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1407E5D78 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1401643C4 (BiIsOfflineHandle.c)
 *     BiGetObjectDescription @ 0x140606768 (BiGetObjectDescription.c)
 *     BiReleaseBcdSyncMutant @ 0x140609030 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x140609058 (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x1406091E0 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdQueryObject(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rcx
  char v8; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  int ObjectIdentifier; // ebx

  if ( a3 )
  {
    if ( a2 == 1 )
      goto LABEL_3;
    return 3221225485LL;
  }
  if ( !a4 )
    return 3221225485LL;
LABEL_3:
  LOBYTE(v7) = BiIsOfflineHandle(a1);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( (int)result >= 0 )
  {
    ObjectIdentifier = 0;
    if ( !a3 || (ObjectIdentifier = BiGetObjectDescription(a1, a3), ObjectIdentifier >= 0) )
    {
      if ( a4 )
        ObjectIdentifier = BiGetObjectIdentifier(a1, a4);
    }
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return (unsigned int)ObjectIdentifier;
  }
  return result;
}
