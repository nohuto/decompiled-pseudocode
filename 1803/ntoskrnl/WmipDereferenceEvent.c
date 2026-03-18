/*
 * XREFs of WmipDereferenceEvent @ 0x1407A38F0
 * Callers:
 *     WmipProcessEvent @ 0x1405FF418 (WmipProcessEvent.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x14051B374 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x14051B7F0 (WmipReferenceEntry.c)
 *     WmipSendWmiIrp @ 0x1405DCF88 (WmipSendWmiIrp.c)
 */

char *__fastcall WmipDereferenceEvent(__int64 a1)
{
  int v1; // ebp
  char *v3; // rdi
  ULONG_PTR i; // rbx
  unsigned int v5; // edx
  int v6; // r13d
  unsigned int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // r15d
  unsigned int v10; // ecx
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  char *PoolWithTag; // rax
  int v14; // ecx
  __int128 v16[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+8h]
  unsigned int v18; // [rsp+88h] [rbp+10h]
  int v19; // [rsp+90h] [rbp+18h]

  v1 = *(_DWORD *)(a1 + 4);
  v3 = 0LL;
  v18 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD *)WmipDSHeadPtr; ; i = *(_QWORD *)i )
  {
    if ( i == WmipDSHeadPtr )
    {
      i = 0LL;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(i + 56) == v1 )
      break;
  }
  WmipReferenceEntry(i);
LABEL_6:
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( i )
  {
    v5 = 64;
    v6 = *(_DWORD *)(a1 + 44) & 0x80;
    if ( v6 )
    {
      v7 = 0;
      v17 = 0;
    }
    else
    {
      v7 = *(unsigned __int16 *)(a1 + 68) + 2;
      v17 = 64;
      if ( v7 > 0xFFFFFFBF )
      {
LABEL_27:
        WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)i);
        return v3;
      }
      v5 = *(unsigned __int16 *)(a1 + 68) + 66;
    }
    v8 = (v5 + 7) & 0xFFFFFFF8;
    if ( v5 + 7 >= v5 )
    {
      v9 = (v5 + 7) & 0xFFFFFFF8;
      v10 = *(_DWORD *)(a1 + 64);
      if ( v10 <= ~v8 )
      {
        v11 = v8 + v10;
        v12 = 0;
        while ( 1 )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x70696D57u);
          v3 = PoolWithTag;
          if ( !PoolWithTag )
            break;
          memset(PoolWithTag, 0, v11);
          *(_DWORD *)v3 = v11;
          *((_DWORD *)v3 + 1) = *(_DWORD *)(a1 + 4);
          *(_OWORD *)(v3 + 24) = *(_OWORD *)(a1 + 48);
          *((_DWORD *)v3 + 2) = *(_DWORD *)(a1 + 8);
          *((_DWORD *)v3 + 11) = v6 | 2;
          *((_DWORD *)v3 + 14) = v9;
          if ( v6 )
          {
            *((_DWORD *)v3 + 13) = *(_DWORD *)(a1 + 68);
          }
          else
          {
            v7 -= 2;
            *((_DWORD *)v3 + 12) = v17;
            *(_WORD *)&v3[v17] = v7;
            memmove(&v3[v17 + 2], (const void *)(a1 + 70), v7);
          }
          v19 = WmipSendWmiIrp(1u, *(_DWORD *)(i + 56), (UNICODE_STRING *)(v3 + 24), v11, (__int64)v3, v16);
          if ( v19 >= 0 )
          {
            v14 = *((_DWORD *)v3 + 11);
            if ( (v14 & 0x20) == 0 )
            {
              *((_DWORD *)v3 + 11) = v14 | *(_DWORD *)(a1 + 44) & 0xFF000008 | 8;
              goto LABEL_27;
            }
            v18 = *((_DWORD *)v3 + 12);
          }
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          if ( v19 >= 0 && v18 > v11 )
          {
            ++v12;
            v11 = v18;
            if ( v12 < 2 )
              continue;
          }
          goto LABEL_27;
        }
      }
    }
    goto LABEL_27;
  }
  return v3;
}
