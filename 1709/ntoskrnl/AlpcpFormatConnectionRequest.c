/*
 * XREFs of AlpcpFormatConnectionRequest @ 0x140466208
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14046750C (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x14046827C (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpMapLegacyPortView @ 0x14045E120 (AlpcpMapLegacyPortView.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140465CF0 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpAllocateMessage @ 0x140466410 (AlpcpAllocateMessage.c)
 *     AlpcpValidateConnectionMessage @ 0x140466CEC (AlpcpValidateConnectionMessage.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10)
{
  char v10; // si
  unsigned __int16 *v12; // r14
  void *v13; // r15
  ULONG_PTR *v15; // rbp
  __int64 result; // rax
  int v17; // ebx
  ULONG_PTR v18; // rdi
  _WORD *v19; // rcx
  unsigned __int16 v20; // ax
  __int16 v21; // dx
  _QWORD *v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  ULONG_PTR v25; // rcx
  ULONG_PTR v27; // [rsp+80h] [rbp+18h] BYREF

  v10 = a9;
  v12 = a5;
  v13 = a3;
  v15 = a1;
  if ( !a4
    || (v22 = (_QWORD *)a3[2], LOBYTE(a3) = a9, result = AlpcpValidateConnectionMessage(*v22, a5, a3), (int)result >= 0) )
  {
    result = AlpcpAllocateMessage(&v27, 0LL, 0LL);
    v17 = result;
    if ( (int)result >= 0 )
    {
      v18 = v27;
      if ( v10 )
      {
        v23 = a7;
        if ( a7 )
        {
          v17 = AlpcpMapLegacyPortView(v13, a7, v27 + 104);
          v24 = *(_QWORD *)(v23 + 24);
          v15 = a1;
          *(_QWORD *)(v18 + 272) = v24;
        }
        else
        {
          v15 = a1;
          *(_QWORD *)(v27 + 272) = 0LL;
        }
      }
      else
      {
        v17 = AlpcpCaptureAttributes(v13, a2, a6, v27, v27 + 104);
      }
      if ( v17 < 0 )
        goto LABEL_22;
      v19 = (_WORD *)v27;
      *(_OWORD *)(v27 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
      v20 = *v12;
      v19[120] = *v12;
      v19[121] = v20 + 40;
      v21 = v19[122] & 0xFF00 | 0xA;
      v19[122] = v21;
      if ( !KeGetCurrentThread()->PreviousMode )
        v19[122] = v21 | v12[2] & 0x8000;
      v18 = v27;
      if ( *v12 && (v17 = AlpcpSetupMessageDataForDeferredCopy(v27, a4, a2, *v12, v10, a10), v17 < 0) )
      {
LABEL_22:
        AlpcpUnlockMessage(v18);
      }
      else
      {
        if ( v10 )
        {
          v25 = *(_QWORD *)(v18 + 144);
          if ( v25 )
          {
            *a8 = v25;
            AlpcpReferenceBlob(v25);
          }
        }
        *v15 = v18;
      }
      return (unsigned int)v17;
    }
  }
  return result;
}
