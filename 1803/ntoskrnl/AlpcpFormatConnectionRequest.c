/*
 * XREFs of AlpcpFormatConnectionRequest @ 0x1404DBA50
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404DA158 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1404DF490 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1404DC52C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpAllocateMessage @ 0x1404DCA4C (AlpcpAllocateMessage.c)
 *     AlpcpValidateConnectionMessage @ 0x1404DD524 (AlpcpValidateConnectionMessage.c)
 *     AlpcpMapLegacyPortView @ 0x1405563C4 (AlpcpMapLegacyPortView.c)
 */

__int64 AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        int a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned int *a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10,
        ...)
{
  char v10; // si
  int v11; // r12d
  unsigned __int16 *v12; // r14
  void *v13; // r15
  ULONG_PTR *v15; // rbp
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  ULONG_PTR v21; // rdi
  _WORD *v22; // rcx
  __int16 v23; // ax
  __int16 v24; // dx
  int v25; // r9d
  _QWORD *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rax
  ULONG_PTR v29; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+18h] BYREF

  v10 = a9;
  v11 = a4;
  v12 = a5;
  v13 = a3;
  v15 = a1;
  if ( !a4
    || (v26 = (_QWORD *)a3[2], LOBYTE(a3) = a9, result = AlpcpValidateConnectionMessage(*v26, a5, a3), (int)result >= 0) )
  {
    result = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0LL);
    v20 = result;
    if ( (int)result >= 0 )
    {
      v21 = BugCheckParameter2;
      if ( v10 )
      {
        v27 = a7;
        if ( a7 )
        {
          v20 = AlpcpMapLegacyPortView(v13);
          v28 = *(_QWORD *)(v27 + 24);
          v15 = a1;
          *(_QWORD *)(v21 + 272) = v28;
        }
        else
        {
          v15 = a1;
          *(_QWORD *)(BugCheckParameter2 + 272) = 0LL;
        }
      }
      else
      {
        v20 = AlpcpCaptureAttributes((__int64)v13, a2, a6, BugCheckParameter2, (void *)(BugCheckParameter2 + 104));
      }
      if ( v20 < 0 )
        goto LABEL_22;
      v22 = (_WORD *)BugCheckParameter2;
      *(_OWORD *)(BugCheckParameter2 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
      v23 = *v12;
      v22[120] = *v12;
      v22[121] = v23 + 40;
      v24 = v22[122] & 0xFF00 | 0xA;
      v22[122] = v24;
      if ( !KeGetCurrentThread()->PreviousMode )
        v22[122] = v24 | v12[2] & 0x8000;
      v25 = *v12;
      v21 = BugCheckParameter2;
      if ( (_WORD)v25
        && (v20 = AlpcpSetupMessageDataForDeferredCopy(BugCheckParameter2, v11, a2, v25, v10, a10), v20 < 0) )
      {
LABEL_22:
        AlpcpUnlockMessage(v21, v17, v18, v19);
      }
      else
      {
        if ( v10 )
        {
          v29 = *(_QWORD *)(v21 + 144);
          if ( v29 )
          {
            *a8 = v29;
            AlpcpReferenceBlob(v29);
          }
        }
        *v15 = v21;
      }
      return (unsigned int)v20;
    }
  }
  return result;
}
