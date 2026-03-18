/*
 * XREFs of ObpCaptureObjectCreateInformation @ 0x1404ACCF0
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 * Callees:
 *     SeComputeQuotaInformationSize @ 0x140485560 (SeComputeQuotaInformationSize.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectName @ 0x1404ACFE0 (ObpCaptureObjectName.c)
 *     SeCaptureSecurityDescriptor @ 0x1404BBCD0 (SeCaptureSecurityDescriptor.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureObjectCreateInformation(
        unsigned __int8 a1,
        unsigned __int8 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  int v7; // r9d
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r14
  int v14; // r12d
  __int64 *v15; // r13
  void *v16; // rcx
  unsigned int v17; // [rsp+3Ch] [rbp-4Ch] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+48h] [rbp-40h]
  __int64 v20; // [rsp+50h] [rbp-38h]

  v7 = a2;
  result = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 24) = 0LL;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  *(_QWORD *)(a5 + 56) = 0LL;
  if ( !a3 )
    return result;
  *(_BYTE *)(a5 + 16) = a1;
  if ( a1 && KeGetCurrentThread()->PreviousMode && (a3 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( *(_DWORD *)a3 == 48 )
  {
    *(_QWORD *)(a5 + 8) = *(_QWORD *)(a3 + 8);
    v10 = *(_DWORD *)(a3 + 24);
    if ( a2 )
      v10 &= ~0x200u;
    if ( (v10 & 0xFFFEE00D) != 0 )
    {
      v14 = -1073741811;
    }
    else
    {
      *(_DWORD *)a5 = v10;
      v11 = *(_QWORD *)(a3 + 16);
      v19 = v11;
      v12 = *(_QWORD *)(a3 + 32);
      v20 = v12;
      v13 = *(_QWORD *)(a3 + 40);
      v18 = v13;
      if ( v13 )
      {
        if ( a1 )
        {
          if ( KeGetCurrentThread()->PreviousMode && (v18 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v13 = v18;
          v12 = v20;
          v11 = v19;
        }
        *(_QWORD *)(a5 + 48) = *(_QWORD *)v13;
        *(_DWORD *)(a5 + 56) = *(_DWORD *)(v13 + 8);
      }
      if ( v12 )
      {
        v15 = (__int64 *)(a5 + 32);
        LOBYTE(v7) = 1;
        v14 = SeCaptureSecurityDescriptor(v12, a1, 1, v7, a5 + 32);
        if ( v14 < 0 )
        {
          *v15 = 0LL;
          goto LABEL_35;
        }
        SeComputeQuotaInformationSize(*v15, &v17);
        *(_DWORD *)(a5 + 28) = v17;
      }
      if ( !v13 )
        goto LABEL_22;
      *(_DWORD *)(a5 + 48) = 12;
      *(_QWORD *)(a5 + 40) = a5 + 48;
      if ( *(_BYTE *)(a5 + 56) >= 2u )
      {
        v14 = -1073741811;
      }
      else
      {
        if ( *(_DWORD *)(a5 + 52) <= 3u )
        {
LABEL_22:
          if ( v11 )
          {
            v14 = ObpCaptureObjectName(a1, v11, a4, a6);
            if ( v14 >= 0 )
              return 0LL;
          }
          else
          {
            if ( !*(_QWORD *)(a5 + 8) )
              return 0LL;
            v14 = -1073741773;
          }
          goto LABEL_35;
        }
        v14 = -1073741659;
      }
    }
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_35:
  v16 = *(void **)(a5 + 32);
  if ( v16 )
  {
    SeReleaseSecurityDescriptor(v16, *(_BYTE *)(a5 + 16), 1);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v14;
}
