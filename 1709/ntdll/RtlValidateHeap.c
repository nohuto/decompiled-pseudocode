/*
 * XREFs of RtlValidateHeap @ 0x18004BEC0
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800EFB20 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSizeHeap @ 0x180045DE0 (RtlpHpSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlLockHeap @ 0x18004A090 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18004A120 (RtlUnlockHeap.c)
 *     RtlpCheckHeapSignature @ 0x18004A1AC (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x18004C0E4 (RtlpValidateHeapEntry.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapValidateEvent @ 0x180101DA0 (RtlpLogHeapValidateEvent.c)
 *     RtlpValidateHeap @ 0x180104C28 (RtlpValidateHeap.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int16 v4; // r14
  char v6; // r15
  char *v7; // rdx
  BOOLEAN v8; // al
  __int64 v9; // rcx
  BOOLEAN v11; // di
  ULONG v12; // r15d
  int v13; // ecx
  unsigned int v14; // edx
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rax
  int v23; // eax
  BOOLEAN v24; // [rsp+20h] [rbp-28h]

  v4 = Flags;
  v6 = 0;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v24 = 0;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
      v24 = _guard_dispatch_icall_fptr();
    }
    else if ( RtlpCheckHeapSignature(HeapHandle, "RtlValidateHeap") )
    {
      if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)v4) & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v6 = 1;
      }
      if ( BaseAddress )
      {
        v7 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v7 -= 16 * (unsigned __int8)v7[14];
        v8 = RtlpValidateHeapEntry(HeapHandle, v7, "RtlValidateHeap");
      }
      else
      {
        v8 = RtlpValidateHeap((int)HeapHandle);
      }
      v24 = v8;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v9 = 2147353472LL;
    if ( *(_BYTE *)v9 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapValidateEvent(HeapHandle);
    }
    return v24;
  }
  v11 = 1;
  v12 = Flags & 1;
  if ( !v12 )
    RtlLockHeap(HeapHandle);
  v13 = v12 | 2;
  if ( (v4 & 8) == 0 )
    v13 = v4 & 1;
  v14 = v13 | 0x80000000;
  if ( (v4 & 4) == 0 )
    v14 = v13;
  v15 = v14 | 0x100;
  if ( (v4 & 0x100) == 0 )
    v15 = v14;
  v16 = v4 & 0xE00 | v15;
  if ( (v4 & 0xE00) == 0 )
    v16 = v15;
  v17 = v16 | 0x2000000;
  if ( (v4 & 0x10) == 0 )
    v17 = v16;
  v18 = v17 | 0x1000000;
  if ( (v4 & 2) == 0 )
    v18 = v17;
  v19 = *((_DWORD *)HeapHandle + 16);
  v20 = 0LL;
  if ( v19 )
    LOBYTE(v20) = v19 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v21 = v18 | 1;
  if ( !(_DWORD)v20 )
    v21 = v18;
  if ( BaseAddress )
  {
    if ( (RtlpHpAppCompatFlags & 2) == 0 )
    {
LABEL_39:
      v11 = RtlpHpSizeHeap((__int64)HeapHandle, (unsigned __int64)BaseAddress, v21) != -1;
      goto LABEL_40;
    }
    if ( (_WORD)BaseAddress )
    {
      v23 = 0;
    }
    else
    {
      v22 = RtlCSparseBitmapBitmaskRead(v20, 2 * ((unsigned __int64)BaseAddress >> 20));
      if ( !v22 )
        goto LABEL_39;
      v23 = v22 - 1;
    }
    if ( v23 != 2 )
      BaseAddress = (char *)BaseAddress - 16;
    goto LABEL_39;
  }
LABEL_40:
  if ( !v12 )
    RtlUnlockHeap(HeapHandle);
  return v11;
}
