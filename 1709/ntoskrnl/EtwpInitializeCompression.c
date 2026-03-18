/*
 * XREFs of EtwpInitializeCompression @ 0x140281A08
 * Callers:
 *     EtwpInitLoggerContext @ 0x1404EC878 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x140127EC0 (RtlGetCompressionWorkSpaceSize.c)
 *     EtwpFreePlaceholderList @ 0x1401296F8 (EtwpFreePlaceholderList.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpInitializeCompression(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // edi
  PVOID v4; // rax
  unsigned int v5; // ebp
  _DWORD *PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  ULONG v8; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 2332) = 5;
  *(_DWORD *)(a1 + 2336) = 3;
  *(_QWORD *)(a1 + 2280) = EtwpCompressionProc;
  *(_QWORD *)(a1 + 2288) = a1;
  *(_QWORD *)(a1 + 2264) = 0LL;
  result = RtlGetCompressionWorkSpaceSize(3u, (PULONG)&NumberOfBytes, &v8);
  v3 = result;
  if ( result >= 0 )
  {
    if ( !(_DWORD)NumberOfBytes
      || (v4 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x5A777445u),
          (*(_QWORD *)(a1 + 2320) = v4) != 0LL) )
    {
      *(_QWORD *)(a1 + 2304) = 0LL;
      *(_QWORD *)(a1 + 2376) = EtwpCompressionDpc;
      *(_DWORD *)(a1 + 2352) = 275;
      v5 = 0;
      *(_QWORD *)(a1 + 2384) = a1;
      *(_QWORD *)(a1 + 2408) = 0LL;
      *(_QWORD *)(a1 + 2368) = 0LL;
      *(_QWORD *)(a1 + 2344) = 0LL;
      if ( *(_DWORD *)(a1 + 2332) )
      {
        while ( 1 )
        {
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 316), 0x48uLL, 0x42777445u);
          if ( !PoolWithTag )
            break;
          PoolWithTag[11] = 6;
          ++v5;
          *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 2344);
          *(_QWORD *)(a1 + 2344) = PoolWithTag + 8;
          if ( v5 >= *(_DWORD *)(a1 + 2332) )
            goto LABEL_8;
        }
        v3 = -1073741801;
        EtwpFreePlaceholderList(a1);
      }
      else
      {
LABEL_8:
        _InterlockedExchange((volatile __int32 *)(a1 + 2328), 1);
      }
      return v3;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
