/*
 * XREFs of sub_1800D7198 @ 0x1800D7198
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 */

__int64 __fastcall sub_1800D7198(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v9; // edi
  __int64 result; // rax
  int v11; // eax
  unsigned __int16 *v12; // rbx
  unsigned __int16 v13; // bp
  int v14; // eax
  int *v15; // rbx
  int v16; // r13d
  char *v17; // rbp
  int ValueKey; // eax
  int v19; // edi
  unsigned __int64 v20; // r15
  int v21; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // [rsp+30h] [rbp-478h]
  unsigned __int16 v27[4]; // [rsp+38h] [rbp-470h] BYREF
  _DWORD *v28; // [rsp+40h] [rbp-468h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-460h] BYREF
  char v30; // [rsp+60h] [rbp-448h] BYREF

  v9 = (int)a1;
  if ( MEMORY[0x7FFE02EC] )
  {
    *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
    return 0LL;
  }
  if ( a3 )
  {
    v11 = *a1;
    v12 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + *a1);
    if ( *a1 )
    {
      do
      {
        if ( *(v12 - 1) == 92 )
          break;
        --v12;
        v11 -= 2;
      }
      while ( v11 );
    }
    v13 = *a1 - v11;
    RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
    if ( !(unsigned int)RtlCompareUnicodeStrings(
                          v12,
                          (unsigned __int64)v13 >> 1,
                          (__int64)DestinationString.Buffer,
                          (unsigned __int64)DestinationString.Length >> 1,
                          1) )
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
      return 0LL;
    }
  }
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
  {
    byte_18015C460 = 1;
    result = sub_1800DA690(a3, v9, a4, 0, a5, a6);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
      dword_1801553F8 = 0;
      *(_DWORD *)off_1801553F0 = 0;
      return result;
    }
  }
  v14 = *(_DWORD *)(a2 + 188);
  if ( (v14 & 0x2000000) != 0 )
  {
    v15 = (int *)off_1801553F0;
    *(_DWORD *)(a2 + 188) = v14 & 0xFFFF670F;
    byte_18015C460 = 1;
    v16 = *v15;
    *v15 = -1;
    if ( !a4 )
      goto LABEL_48;
    if ( (int)RtlInitUnicodeStringEx((__int64)v27, (__int64)L"PageHeapFlags") < 0 )
      goto LABEL_47;
    v17 = &v30;
    ValueKey = ZwQueryValueKey();
    v19 = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey == -2147483643 )
      {
        while ( 1 )
        {
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1572864, v26);
          v20 = Heap;
          if ( !Heap )
            break;
          v17 = (char *)Heap;
          v24 = ZwQueryValueKey();
          v19 = v24;
          if ( v24 >= 0 )
            goto LABEL_17;
          if ( v24 != -2147483643 )
            goto LABEL_43;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v17);
        }
LABEL_46:
        v15 = (int *)off_1801553F0;
LABEL_47:
        *v15 = -1;
        goto LABEL_48;
      }
LABEL_45:
      if ( v19 >= 0 )
      {
        v15 = (int *)off_1801553F0;
LABEL_48:
        if ( (*(_DWORD *)(a2 + 188) & 0x100) != 0 )
        {
          if ( *v15 == -1 )
            goto LABEL_53;
        }
        else if ( *v15 == -1 )
        {
LABEL_53:
          *v15 = v16;
        }
        if ( (((*v15 & 0x400) != 0) & _bittest(&dword_18015AE48, 0xFu)) != 0 )
        {
          if ( (dword_180155A10 & 5) != 0 )
          {
            sub_1800D5274(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              6669,
              (unsigned int)"LdrpInitializeApplicationVerifierPackage",
              2,
              "Per-DLL page heap is disabled since fast fill heap is enabled\n");
            v15 = (int *)off_1801553F0;
          }
          *v15 &= ~0x400u;
        }
        dword_1801553F8 = 1;
        return 0LL;
      }
      goto LABEL_46;
    }
    v20 = 0LL;
LABEL_17:
    v21 = *((_DWORD *)v17 + 1);
    if ( ((v21 - 3) & 0xFFFFFFFB) != 0 )
    {
      switch ( v21 )
      {
        case 4:
          if ( *((_DWORD *)v17 + 2) != 4 )
          {
            v19 = -1073741820;
            goto LABEL_43;
          }
          if ( v15 )
          {
            *v15 = *((_DWORD *)v17 + 3);
            goto LABEL_43;
          }
          break;
        case 11:
          v19 = -1073741788;
          goto LABEL_43;
        case 1:
          if ( ((unsigned __int8)v15 & 3) != 0 )
          {
            v19 = -2147483646;
            goto LABEL_43;
          }
          if ( v15 )
          {
            v28 = v17 + 12;
            v27[0] = *((_WORD *)v17 + 4);
            v27[1] = *((_WORD *)v17 + 4);
            v19 = RtlUnicodeStringToInteger(v27, 0, v15);
            goto LABEL_43;
          }
          break;
        default:
          v19 = -1073741788;
          goto LABEL_43;
      }
    }
    else
    {
      if ( v21 != 4 )
      {
        v19 = -1073741788;
        goto LABEL_43;
      }
      if ( v15 )
      {
        v25 = *((_DWORD *)v17 + 2);
        if ( v25 <= 4 )
        {
          memmove(v15, v17 + 12, v25);
          goto LABEL_43;
        }
      }
    }
    v19 = -2147483643;
LABEL_43:
    if ( v20 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v20);
    goto LABEL_45;
  }
  return 0LL;
}
