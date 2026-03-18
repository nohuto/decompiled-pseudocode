/*
 * XREFs of NtWaitForSingleObject @ 0x14059C7D0
 * Callers:
 *     SepRmCallLsa @ 0x1400C7970 (SepRmCallLsa.c)
 *     PfSnPrefetchFileMetadata @ 0x140575E74 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Object, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE PreviousMode; // si
  PLARGE_INTEGER v5; // rbx
  int v6; // edi
  PVOID v7; // r14
  __int64 v8; // r8
  __int64 v9; // r10
  LARGE_INTEGER v11; // [rsp+48h] [rbp-20h] BYREF
  PVOID Objecta; // [rsp+88h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = Timeout;
  if ( Timeout && PreviousMode )
  {
    if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
      v5 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    v11 = *v5;
    v5 = &v11;
  }
  v6 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Object, 0x7457624Fu, (__int64)&Objecta, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    v7 = Objecta;
    v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Objecta - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Objecta - 48) >> 8)];
    v9 = *(_QWORD *)(v8 + 32);
    if ( (v9 & 1) != 0 )
    {
      if ( (v9 & 2) == 0 )
      {
        v9 = *(_QWORD *)((char *)Objecta + v9 - 1);
        goto LABEL_10;
      }
      if ( (*(_DWORD *)((_BYTE *)Objecta + *(unsigned __int16 *)(v8 + 180)) & *(_DWORD *)(v8 + 176)) == *(_DWORD *)(v8 + 176) )
      {
        v9 = *(_QWORD *)((char *)Objecta + *(unsigned __int16 *)(v8 + 182));
        goto LABEL_10;
      }
      v9 -= 3LL;
    }
    else if ( v9 < 0 )
    {
LABEL_10:
      v6 = KeWaitForSingleObject((PVOID)v9, UserRequest, PreviousMode, Alertable, v5);
      ObfDereferenceObjectWithTag(v7, 0x7457624Fu);
      return v6;
    }
    v9 += (__int64)Objecta;
    goto LABEL_10;
  }
  return v6;
}
