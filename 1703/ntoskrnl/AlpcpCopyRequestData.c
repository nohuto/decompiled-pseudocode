/*
 * XREFs of AlpcpCopyRequestData @ 0x1406B1584
 * Callers:
 *     NtReadRequestData @ 0x1406B0D9C (NtReadRequestData.c)
 *     NtWriteRequestData @ 0x1406B0EA0 (NtWriteRequestData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047545C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
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
  signed int v17; // ebx
  ULONG_PTR v18; // rcx
  __int64 v19; // r10
  __int16 v20; // ax
  ULONG_PTR v21; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  char *v24; // r9
  ULONG_PTR v25; // r8
  char *v26; // rdx
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  __int64 v28; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR v29; // [rsp+58h] [rbp-60h] BYREF
  __m128i v30; // [rsp+60h] [rbp-58h]
  __int128 v31; // [rsp+70h] [rbp-48h] BYREF
  __int128 v32; // [rsp+80h] [rbp-38h]
  __int64 v33; // [rsp+90h] [rbp-28h]

  v7 = a4;
  v30 = 0uLL;
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
    AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&v31, 0);
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
    v31 = *(_OWORD *)a3;
    v32 = *(_OWORD *)(a3 + 16);
    v33 = *(_QWORD *)(a3 + 32);
    v15 = a7;
    v13 = Length;
  }
  if ( !WORD3(v31) )
    return -1073741811;
  result = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, PreviousMode, &Object, HandleInformation);
  if ( result >= 0 )
  {
    v17 = AlpcpLookupMessage((__int64)Object, SDWORD2(v32), v33, &v29);
    if ( v17 >= 0 )
    {
      v18 = v29;
      v19 = *(_QWORD *)(v29 + 32);
      if ( v19 )
      {
        v17 = -1073741811;
        v20 = *(_WORD *)(v29 + 246);
        if ( v20 )
        {
          v21 = v29 + v20;
          if ( *(_DWORD *)(v21 + 240) > (unsigned int)v7 )
          {
            v30 = *(__m128i *)(v21 + 16 * v7 + 248);
            v17 = _mm_srli_si128(v30, 8).m128i_u32[0] < v13 ? 0xC000000D : 0;
          }
        }
        if ( v17 >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( a1 )
          {
            Process = CurrentThread->ApcState.Process;
            v24 = (char *)v30.m128i_i64[0];
            v25 = *(_QWORD *)(v19 + 544);
            v26 = Address;
          }
          else
          {
            v25 = (ULONG_PTR)CurrentThread->ApcState.Process;
            v24 = Address;
            v26 = (char *)v30.m128i_i64[0];
            Process = *(_KPROCESS **)(v19 + 544);
          }
          v17 = MmCopyVirtualMemory(Process, v26, v25, v24, v13, PreviousMode, (unsigned __int64 *)&v28);
          if ( v17 >= 0 )
          {
            if ( v15 )
              *v15 = v28;
          }
          v18 = v29;
        }
        AlpcpUnlockMessage(v18);
      }
      else
      {
        AlpcpUnlockMessage(v29);
        v17 = -1073741790;
      }
    }
    ObfDereferenceObject(Object);
    return v17;
  }
  return result;
}
