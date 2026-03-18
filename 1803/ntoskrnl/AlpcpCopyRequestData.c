/*
 * XREFs of AlpcpCopyRequestData @ 0x140747E84
 * Callers:
 *     NtReadRequestData @ 0x1407471AC (NtReadRequestData.c)
 *     NtWriteRequestData @ 0x1407472B0 (NtWriteRequestData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404DDD48 (AlpcpProbeAndCaptureMessageHeader.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall AlpcpCopyRequestData(
        char a1,
        void *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char *Address,
        SIZE_T Length,
        __int64 *a7)
{
  __int64 v7; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r10
  unsigned __int64 v13; // rdi
  __int64 *v14; // r9
  __int64 *v15; // rsi
  NTSTATUS result; // eax
  unsigned __int64 v17; // rdx
  signed int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR v21; // rcx
  __int64 v22; // r10
  __int16 v23; // ax
  struct _KTHREAD *CurrentThread; // r8
  _KPROCESS *Process; // rcx
  unsigned __int64 v26; // r9
  _KPROCESS *v27; // r8
  char *v28; // rdx
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  __int64 v30; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-60h] BYREF
  __m128i v32; // [rsp+60h] [rbp-58h]
  __int128 v33; // [rsp+70h] [rbp-48h] BYREF
  __int128 v34; // [rsp+80h] [rbp-38h]
  __int64 v35; // [rsp+90h] [rbp-28h]

  v7 = a4;
  v32 = 0uLL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  HandleInformation = 0LL;
  if ( PreviousMode )
  {
    v13 = Length;
    if ( a1 )
    {
      if ( Length && ((unsigned __int64)&Address[Length] > 0x7FFFFFFF0000LL || &Address[Length] < Address) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      ProbeForWrite(Address, Length, 1u);
    }
    AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&v33, 0);
    v15 = a7;
    if ( a7 )
    {
      if ( a7 < v14 )
        v14 = a7;
      *v14 = *v14;
    }
  }
  else
  {
    v33 = *(_OWORD *)a3;
    v34 = *(_OWORD *)(a3 + 16);
    v35 = *(_QWORD *)(a3 + 32);
    v15 = a7;
    v13 = Length;
  }
  if ( !WORD3(v33) )
    return -1073741811;
  result = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, PreviousMode, &Object, HandleInformation);
  if ( result >= 0 )
  {
    v18 = AlpcpLookupMessage((__int64)Object, DWORD2(v34), v35, &BugCheckParameter2);
    if ( v18 >= 0 )
    {
      v21 = BugCheckParameter2;
      v22 = *(_QWORD *)(BugCheckParameter2 + 32);
      if ( v22 )
      {
        v18 = -1073741811;
        v23 = *(_WORD *)(BugCheckParameter2 + 246);
        if ( v23 )
        {
          v17 = BugCheckParameter2 + v23;
          if ( *(_DWORD *)(v17 + 240) > (unsigned int)v7 )
          {
            v32 = *(__m128i *)(v17 + 16 * v7 + 248);
            v17 = _mm_srli_si128(v32, 8).m128i_u32[0];
            v18 = v17 < v13 ? 0xC000000D : 0;
          }
        }
        if ( v18 >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( a1 )
          {
            Process = CurrentThread->ApcState.Process;
            v26 = v32.m128i_i64[0];
            v27 = *(_KPROCESS **)(v22 + 544);
            v28 = Address;
          }
          else
          {
            v27 = CurrentThread->ApcState.Process;
            v26 = (unsigned __int64)Address;
            v28 = (char *)v32.m128i_i64[0];
            Process = *(_KPROCESS **)(v22 + 544);
          }
          v18 = MmCopyVirtualMemory(Process, v28, v27, v26, v13, PreviousMode, (unsigned __int64 *)&v30);
          if ( v18 >= 0 )
          {
            if ( v15 )
              *v15 = v30;
          }
          v21 = BugCheckParameter2;
        }
        AlpcpUnlockMessage(v21, v17, v19, v20);
      }
      else
      {
        AlpcpUnlockMessage(BugCheckParameter2, v17, v19, v20);
        v18 = -1073741790;
      }
    }
    ObfDereferenceObject(Object);
    return v18;
  }
  return result;
}
