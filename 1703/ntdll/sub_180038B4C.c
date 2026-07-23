/*
 * XREFs of sub_180038B4C @ 0x180038B4C
 * Callers:
 *     sub_18003AC90 @ 0x18003AC90 (sub_18003AC90.c)
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 * Callees:
 *     sub_18001BB44 @ 0x18001BB44 (sub_18001BB44.c)
 *     sub_18001BC68 @ 0x18001BC68 (sub_18001BC68.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_180038818 @ 0x180038818 (sub_180038818.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_1800389A8 @ 0x1800389A8 (sub_1800389A8.c)
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 *     sub_18003A7B0 @ 0x18003A7B0 (sub_18003A7B0.c)
 *     sub_18003A99C @ 0x18003A99C (sub_18003A99C.c)
 *     sub_18003C6D0 @ 0x18003C6D0 (sub_18003C6D0.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_1800417FC @ 0x1800417FC (sub_1800417FC.c)
 *     sub_180050570 @ 0x180050570 (sub_180050570.c)
 *     sub_180088E9C @ 0x180088E9C (sub_180088E9C.c)
 */

__int64 __fastcall sub_180038B4C(__int64 a1)
{
  int v2; // eax
  int v3; // esi
  __int64 v4; // rbp
  ULONG64 v5; // r8
  int v6; // r15d
  int v7; // ebx
  int v8; // r8d
  _UNICODE_STRING *v9; // rdx
  int v10; // eax
  PIMAGE_NT_HEADERS v11; // rdi
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+80h] [rbp+18h] BYREF
  DWORD TimeDateStamp; // [rsp+88h] [rbp+20h] BYREF
  DWORD SizeOfImage; // [rsp+8Ch] [rbp+24h]

  v2 = sub_180038D24();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v5 = *(_QWORD *)(a1 + 152);
    v16 = 0LL;
    v6 = v2;
    v3 = RtlImageNtHeaderEx(0, *(PVOID *)(v4 + 48), v5, &OutHeaders);
    if ( v3 >= 0 )
    {
      v7 = sub_18003C6D0(v4 + 88);
      RtlAcquireSRWLockExclusive(&stru_18015C040);
      v8 = *(_DWORD *)(a1 + 24);
      v9 = 0LL;
      if ( (v8 & 0x20) == 0 )
        v9 = (_UNICODE_STRING *)(v4 + 72);
      v10 = sub_18003888C((PUNICODE_STRING)(v4 + 88), v9, v8, &v16, v7);
      v11 = OutHeaders;
      if ( v10 == -1073741515 )
      {
        TimeDateStamp = OutHeaders->FileHeader.TimeDateStamp;
        SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
        sub_18001BC68(*(PVOID *)(v4 + 48), OutHeaders, &TimeDateStamp, &v16);
      }
      v12 = v16;
      if ( !v16 )
      {
        sub_18003A99C(v4);
        sub_18001BB44(v4, (__int64)v11);
      }
      RtlReleaseSRWLockExclusive(&stru_18015C040);
      if ( v12 )
      {
        sub_180050570(a1);
      }
      else if ( CriticalSection.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = sub_1800389A8(a1, (__int64)OutHeaders, v6);
        if ( v3 >= 0 )
        {
          v3 = sub_18003A7B0(v4, 1LL);
          if ( v3 >= 0 )
          {
            sub_180038818(*(_QWORD *)(a1 + 40), v4);
            v13 = *(_QWORD *)(a1 + 40);
            if ( v13 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v13 + 48);
            if ( (*(_BYTE *)(v4 + 104) & 4) != 0 )
            {
              if ( (*(_DWORD *)(v4 + 104) & 0x1000000) != 0 )
              {
                return (unsigned int)sub_180088E9C(v4);
              }
              else
              {
                sub_1800417FC(a1);
                return (unsigned int)**(_DWORD **)(a1 + 32);
              }
            }
            else
            {
              sub_18003CA5C(*(_QWORD *)(v4 + 48), v4 + 72, 5294LL);
              v3 = 0;
              *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL) = 9;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
