/*
 * XREFs of sub_18002BBDC @ 0x18002BBDC
 * Callers:
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_18002235C @ 0x18002235C (sub_18002235C.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002AFBC @ 0x18002AFBC (sub_18002AFBC.c)
 *     sub_18002BDB8 @ 0x18002BDB8 (sub_18002BDB8.c)
 *     sub_18002BF70 @ 0x18002BF70 (sub_18002BF70.c)
 *     sub_18002C068 @ 0x18002C068 (sub_18002C068.c)
 *     sub_18002C0DC @ 0x18002C0DC (sub_18002C0DC.c)
 *     sub_18002C268 @ 0x18002C268 (sub_18002C268.c)
 *     sub_18002C388 @ 0x18002C388 (sub_18002C388.c)
 *     sub_180039100 @ 0x180039100 (sub_180039100.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     sub_180082EDC @ 0x180082EDC (sub_180082EDC.c)
 */

__int64 __fastcall sub_18002BBDC(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdi
  unsigned int v5; // r15d
  _UNICODE_STRING *v6; // rdx
  int v7; // eax
  PIMAGE_NT_HEADERS v8; // r14
  void *v9; // rcx
  __int64 v10; // rax
  PIMAGE_NT_HEADERS v12; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp+18h] BYREF
  DWORD TimeDateStamp; // [rsp+78h] [rbp+20h]
  DWORD SizeOfImage; // [rsp+7Ch] [rbp+24h]

  v2 = sub_18002BDB8();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = v2;
    v3 = RtlImageNtHeaderEx(0, *(PVOID *)(v4 + 48), *(_QWORD *)(a1 + 160), &OutHeaders);
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v12 = OutHeaders;
        v5 = 0;
        *(_DWORD *)(v4 + 128) = OutHeaders->FileHeader.TimeDateStamp;
        *(_DWORD *)(v4 + 64) = v12->OptionalHeader.SizeOfImage;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&stru_18015D070);
        v6 = 0LL;
        if ( (*(_DWORD *)(a1 + 32) & 0x20) == 0 )
          v6 = (_UNICODE_STRING *)(v4 + 72);
        v7 = sub_18002BF70((PUNICODE_STRING)(v4 + 88), v6, *(_DWORD *)(v4 + 264));
        v8 = OutHeaders;
        if ( v7 == -1073741515 )
        {
          v9 = *(void **)(v4 + 48);
          TimeDateStamp = OutHeaders->FileHeader.TimeDateStamp;
          SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
          sub_18002C388(v9, OutHeaders);
        }
        sub_18002C268(v4);
        sub_18002235C(v4, (__int64)v8);
        RtlReleaseSRWLockExclusive(&stru_18015D070);
      }
      if ( stru_1801564C0.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = sub_18002C0DC(a1, OutHeaders, v5);
        if ( v3 >= 0 )
        {
          v3 = sub_18002AFBC(v4, *(_DWORD *)(a1 + 32), 1);
          if ( v3 >= 0 )
          {
            sub_18002C068(*(_QWORD *)(a1 + 48), v4);
            v10 = *(_QWORD *)(a1 + 48);
            if ( v10 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v10 + 48);
            if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 && (*(_BYTE *)(v4 + 104) & 4) == 0 )
            {
              sub_18003BC9C(*(_QWORD *)(v4 + 48), v4 + 72, 5294LL);
              v3 = 0;
              *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL) = 9;
            }
            else if ( (*(_DWORD *)(v4 + 104) & 0x1000000) != 0 )
            {
              return (unsigned int)sub_180082EDC(v4);
            }
            else
            {
              sub_180039100(a1);
              return (unsigned int)**(_DWORD **)(a1 + 40);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
