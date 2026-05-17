/*
 * XREFs of sub_1800CCC9C @ 0x1800CCC9C
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x180074BF0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 */

__int64 __fastcall sub_1800CCC9C(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  int v10; // esi
  __int64 result; // rax
  __int16 v12; // bp
  int v13; // edi
  unsigned __int16 *v14; // rbx
  int v15; // ecx
  int *v16; // rbx
  int v17; // r12d
  char *v18; // rsi
  int ValueKey; // eax
  int v20; // edi
  unsigned __int64 v21; // rbp
  int v22; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v25; // eax
  unsigned int v26; // eax
  unsigned __int16 v27[4]; // [rsp+38h] [rbp-470h] BYREF
  _DWORD *v28; // [rsp+40h] [rbp-468h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-460h] BYREF
  char v30; // [rsp+60h] [rbp-448h] BYREF

  v7 = a6;
  v10 = (int)a1;
  if ( MEMORY[0x7FFE02EC] )
  {
    *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
    return 0LL;
  }
  if ( a3 )
  {
    v12 = *a1;
    v13 = *a1;
    v14 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + *a1);
    if ( *a1 )
    {
      do
      {
        if ( *(v14 - 1) == 92 )
          break;
        --v14;
        v13 -= 2;
      }
      while ( v13 );
    }
    RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
    if ( !(unsigned int)RtlCompareUnicodeStrings(
                          v14,
                          (unsigned __int64)(unsigned __int16)(v12 - v13) >> 1,
                          (__int64)DestinationString.Buffer,
                          (unsigned __int64)DestinationString.Length >> 1,
                          1) )
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
      return 0LL;
    }
    v7 = a6;
  }
  byte_18015D404 = (*(_DWORD *)(a2 + 188) & 0x2000100) != 0;
  result = sub_1800D3DA8(a3, v10, a4, 0, a5, v7);
  v15 = *(_DWORD *)(a2 + 188);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a2 + 188) = v15 & 0xFDFFFEFF;
    dword_1801563E8 = 0;
    *(_DWORD *)off_1801563E0 = 0;
    return result;
  }
  if ( (v15 & 0x2000000) != 0 )
  {
    v16 = (int *)off_1801563E0;
    *(_DWORD *)(a2 + 188) = v15 & 0xFFFF670F;
    byte_18015D404 = 1;
    v17 = *v16;
    *v16 = -1;
    if ( !a4 )
      goto LABEL_48;
    if ( (int)RtlInitUnicodeStringEx((__int64)v27, (__int64)L"PageHeapFlags") < 0 )
      goto LABEL_47;
    v18 = &v30;
    ValueKey = ZwQueryValueKey();
    v20 = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey == -2147483643 )
      {
        while ( 1 )
        {
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1572864, (unsigned int)a6);
          v21 = Heap;
          if ( !Heap )
            break;
          v18 = (char *)Heap;
          v25 = ZwQueryValueKey();
          v20 = v25;
          if ( v25 >= 0 )
            goto LABEL_17;
          if ( v25 != -2147483643 )
            goto LABEL_43;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v18);
        }
LABEL_46:
        v16 = (int *)off_1801563E0;
LABEL_47:
        *v16 = -1;
        goto LABEL_48;
      }
LABEL_45:
      if ( v20 >= 0 )
      {
        v16 = (int *)off_1801563E0;
LABEL_48:
        if ( (*(_DWORD *)(a2 + 188) & 0x100) != 0 )
        {
          if ( *v16 == -1 )
            goto LABEL_53;
        }
        else if ( *v16 == -1 )
        {
LABEL_53:
          *v16 = v17;
        }
        if ( (((*v16 & 0x400) != 0) & _bittest(&dword_18015B300, 0xFu)) != 0 )
        {
          if ( (dword_180156A70 & 5) != 0 )
          {
            sub_1800CA554(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              6672,
              (unsigned int)"LdrpInitializeApplicationVerifierPackage",
              2,
              "Per-DLL page heap is disabled since fast fill heap is enabled\n");
            v16 = (int *)off_1801563E0;
          }
          *v16 &= ~0x400u;
        }
        dword_1801563E8 = 1;
        return 0LL;
      }
      goto LABEL_46;
    }
    v21 = 0LL;
LABEL_17:
    v22 = *((_DWORD *)v18 + 1);
    if ( ((v22 - 3) & 0xFFFFFFFB) != 0 )
    {
      switch ( v22 )
      {
        case 4:
          if ( *((_DWORD *)v18 + 2) != 4 )
          {
            v20 = -1073741820;
            goto LABEL_43;
          }
          if ( v16 )
          {
            *v16 = *((_DWORD *)v18 + 3);
            goto LABEL_43;
          }
          break;
        case 11:
          v20 = -1073741788;
          goto LABEL_43;
        case 1:
          if ( ((unsigned __int8)v16 & 3) != 0 )
          {
            v20 = -2147483646;
            goto LABEL_43;
          }
          if ( v16 )
          {
            v28 = v18 + 12;
            v27[0] = *((_WORD *)v18 + 4);
            v27[1] = *((_WORD *)v18 + 4);
            v20 = RtlUnicodeStringToInteger(v27, 0, v16);
            goto LABEL_43;
          }
          break;
        default:
          v20 = -1073741788;
          goto LABEL_43;
      }
    }
    else
    {
      if ( v22 != 4 )
      {
        v20 = -1073741788;
        goto LABEL_43;
      }
      if ( v16 )
      {
        v26 = *((_DWORD *)v18 + 2);
        if ( v26 <= 4 )
        {
          memmove(v16, v18 + 12, v26);
          goto LABEL_43;
        }
      }
    }
    v20 = -2147483643;
LABEL_43:
    if ( v21 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
    goto LABEL_45;
  }
  return 0LL;
}
