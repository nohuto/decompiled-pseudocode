/*
 * XREFs of StorCreateSystemLogEntry @ 0x1C0039C0C
 * Callers:
 *     StorpLogSystemEvent @ 0x1C00333E8 (StorpLogSystemEvent.c)
 * Callees:
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     RaidScsiErrorToIoError @ 0x1C00399F8 (RaidScsiErrorToIoError.c)
 *     RtlStringCchCopyW @ 0x1C0039A3C (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1C0039AC4 (RtlStringCchLengthW.c)
 */

__int64 __fastcall StorCreateSystemLogEntry(PVOID IoObject, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v7; // r15d
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  __int16 v12; // r13
  unsigned int v13; // r11d
  __int64 v14; // r13
  int v15; // r11d
  _WORD *ErrorLogEntry; // rax
  _WORD *v17; // rdi
  size_t v19; // rdx
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // ebp
  wchar_t *i; // r14
  const wchar_t *v24; // r11
  size_t v25; // rbx
  unsigned int v26; // [rsp+68h] [rbp+10h]
  size_t pcchLength; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a2 + 40);
  if ( v3 <= 0xF0 )
  {
    v7 = *(_DWORD *)(a2 + 56);
    v8 = v3 + 32;
    v9 = 0;
    v10 = (v8 + 3) & 0xFFFFFFFC;
    v11 = v10 - v8;
    v12 = v10 + 40;
    v26 = v10 + 40;
    v13 = v10 + 40;
    if ( v7 )
    {
      v14 = *(_QWORD *)(a2 + 64);
      while ( RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(v14 + 8LL * v9), 0xF0uLL, &pcchLength) >= 0 )
      {
        v13 = v15 + 2 * pcchLength + 2;
        if ( v13 > 0xF0 )
          break;
        if ( ++v9 >= v7 )
        {
          v12 = v10 + 40;
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_8:
      if ( v13 <= 0xF0 && v13 - 72 <= 0x96 )
      {
        ErrorLogEntry = IoAllocateErrorLogEntry(IoObject, v13);
        v17 = ErrorLogEntry;
        if ( !ErrorLogEntry )
          return 3238002691LL;
        memset(ErrorLogEntry, 0, 0x28uLL);
        *(_BYTE *)v17 = 15;
        v17[1] = v10;
        v17[2] = *(_WORD *)(a2 + 56);
        v17[3] = *(_DWORD *)(a2 + 56) != 0 ? v12 : 0;
        v20 = *(_DWORD *)(a2 + 32);
        if ( *(_BYTE *)(a2 + 28) )
          v20 = RaidScsiErrorToIoError(v20);
        *((_DWORD *)v17 + 3) = v20;
        *((_DWORD *)v17 + 4) = *(_DWORD *)(a2 + 36);
        *((_DWORD *)v17 + 5) = 0;
        v17[20] = 1;
        v17[22] = 32;
        v17[23] = *(_WORD *)(a2 + 40);
        *((_DWORD *)v17 + 12) = *((_DWORD *)v17 + 3);
        *((_DWORD *)v17 + 13) = *(_DWORD *)(a2 + 36);
        *((_DWORD *)v17 + 14) = *(unsigned __int16 *)(a2 + 16);
        *((_DWORD *)v17 + 15) = *(unsigned __int16 *)(a2 + 20);
        *((_DWORD *)v17 + 16) = *(unsigned __int16 *)(a2 + 24);
        *((_BYTE *)v17 + 68) = *(_BYTE *)(a2 + 12);
        *(_WORD *)((char *)v17 + 69) = 0;
        *((_BYTE *)v17 + 71) = 0;
        v21 = *(_DWORD *)(a2 + 40);
        if ( v21 )
        {
          memmove(v17 + 36, *(const void **)(a2 + 48), v21);
          if ( v11 )
            memset((char *)v17 + *(unsigned int *)(a2 + 40) + 72, 45, v11);
        }
        v22 = 0;
        for ( i = (_WORD *)((char *)v17 + v26); v22 < *(_DWORD *)(a2 + 56); ++i )
        {
          if ( RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a2 + 64) + 8LL * v22), v19, &pcchLength) < 0 )
          {
            *i = 0;
          }
          else
          {
            v25 = pcchLength;
            RtlStringCchCopyW(i, pcchLength + 1, v24);
            i += v25;
          }
          ++v22;
        }
        IoWriteErrorLogEntry(v17);
        return 0LL;
      }
    }
  }
  if ( a3 )
    *a3 = 150;
  return 3238002698LL;
}
