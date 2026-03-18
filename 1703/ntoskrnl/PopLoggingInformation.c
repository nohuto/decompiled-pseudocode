/*
 * XREFs of PopLoggingInformation @ 0x140453E50
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1404537A0 (PopDiagTraceControlCallback.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopLoggingInformation(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // r9
  int v3; // ebp
  unsigned int v6; // r8d
  unsigned int v7; // edx
  signed int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  char *PoolWithTag; // rax
  _QWORD *v13; // rsi
  __int64 v14; // r14
  size_t v15; // rbx

  v2 = PowerStateDisableReasonListHead;
  v3 = 0;
  v6 = 4;
  if ( (__int64 *)PowerStateDisableReasonListHead == &PowerStateDisableReasonListHead )
  {
LABEL_9:
    v10 = v6 + 16;
    if ( v3 )
      v10 = v6;
    v11 = v10;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x66756263u);
    if ( PoolWithTag )
    {
      *a2 = v11;
      v8 = 0;
      *a1 = PoolWithTag;
      v13 = PoolWithTag + 4;
      *(_DWORD *)PoolWithTag = v11;
      if ( v3 )
      {
        v14 = PowerStateDisableReasonListHead;
        while ( (__int64 *)v14 != &PowerStateDisableReasonListHead && v3 )
        {
          v15 = (unsigned int)(*(_DWORD *)(v14 + 28) + 16);
          memmove(v13, (const void *)(v14 + 16), v15);
          v14 = *(_QWORD *)v14;
          v13 = (_QWORD *)((char *)v13 + v15);
          --v3;
        }
      }
      else
      {
        *v13 = 0LL;
        *(_QWORD *)(PoolWithTag + 12) = 0LL;
        *((_DWORD *)PoolWithTag + 3) = 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    while ( 1 )
    {
      ++v3;
      v7 = v6 + 16;
      if ( v6 + 16 < v6 )
      {
        v7 = -1;
        v8 = -1073741675;
      }
      else
      {
        v8 = 0;
      }
      if ( v8 < 0 )
        break;
      v6 = -1;
      v9 = v7 + *(_DWORD *)(v2 + 28);
      if ( v9 >= v7 )
        v6 = v7 + *(_DWORD *)(v2 + 28);
      v8 = v9 < v7 ? 0xC0000095 : 0;
      if ( v9 < v7 )
        break;
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == &PowerStateDisableReasonListHead )
        goto LABEL_9;
    }
  }
  return (unsigned int)v8;
}
