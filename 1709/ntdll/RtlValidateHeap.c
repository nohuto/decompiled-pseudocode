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

bool __fastcall RtlValidateHeap(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int16 v5; // r14
  char v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rcx
  bool v13; // di
  int v14; // r15d
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // r8d
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r14d
  __int64 v24; // rax
  int v25; // eax
  char v26; // [rsp+20h] [rbp-28h]

  v4 = (unsigned __int64)a3;
  v5 = a2;
  v7 = 0;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v26 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v26 = _guard_dispatch_icall_fptr();
    }
    else if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlValidateHeap") )
    {
      if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)v5) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v7 = 1;
      }
      if ( v4 )
      {
        v9 = v4 - 16;
        _m_prefetchw((const void *)(v4 - 16));
        if ( *(_BYTE *)(v4 - 16 + 15) == 5 )
          v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
        v10 = RtlpValidateHeapEntry(a1, v9, "RtlValidateHeap");
      }
      else
      {
        LOBYTE(v8) = 1;
        v10 = RtlpValidateHeap(a1, v8);
      }
      v26 = v10;
    }
    if ( v7 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapValidateEvent(a1);
    }
    return v26;
  }
  v13 = 1;
  v14 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlLockHeap(a1, a2, a3, a4);
  v15 = v14 | 2;
  if ( (v5 & 8) == 0 )
    v15 = v5 & 1;
  v16 = v15 | 0x80000000;
  if ( (v5 & 4) == 0 )
    v16 = v15;
  v17 = v16 | 0x100;
  if ( (v5 & 0x100) == 0 )
    v17 = v16;
  v18 = v5 & 0xE00 | v17;
  if ( (v5 & 0xE00) == 0 )
    v18 = v17;
  v19 = v18 | 0x2000000;
  if ( (v5 & 0x10) == 0 )
    v19 = v18;
  v20 = v19 | 0x1000000;
  if ( (v5 & 2) == 0 )
    v20 = v19;
  v21 = *(_DWORD *)(a1 + 64);
  v22 = 0LL;
  if ( v21 )
    LOBYTE(v22) = v21 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v23 = v20 | 1;
  if ( !(_DWORD)v22 )
    v23 = v20;
  if ( v4 )
  {
    if ( (RtlpHpAppCompatFlags & 2) == 0 )
    {
LABEL_39:
      v13 = RtlpHpSizeHeap(a1, v4, v23) != -1;
      goto LABEL_40;
    }
    if ( (_WORD)v4 )
    {
      v25 = 0;
    }
    else
    {
      v24 = RtlCSparseBitmapBitmaskRead(v22, 2 * (v4 >> 20));
      if ( !v24 )
        goto LABEL_39;
      v25 = v24 - 1;
    }
    if ( v25 != 2 )
      v4 -= 16LL;
    goto LABEL_39;
  }
LABEL_40:
  if ( !v14 )
    RtlUnlockHeap(a1);
  return v13;
}
