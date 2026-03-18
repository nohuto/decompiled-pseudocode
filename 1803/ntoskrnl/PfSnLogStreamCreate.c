/*
 * XREFs of PfSnLogStreamCreate @ 0x140538EA8
 * Callers:
 *     PfFileInfoNotify @ 0x14008D1A0 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     PfSnLogHelper @ 0x140539004 (PfSnLogHelper.c)
 *     RtlUpcaseUnicodeString @ 0x140539150 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PfSnLogStreamCreate(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned int v7; // esi
  struct _EX_RUNDOWN_REF *v8; // r15
  __int64 *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  v3 = (unsigned __int16)v1;
  v4 = HIWORD(v1);
  if ( v4 <= v3 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v5 = v4 - v3;
    v6 = ((unsigned __int64)(unsigned int)(2 * v5 + 70) + 15) >> 4;
    v7 = 0;
    v8 = (struct _EX_RUNDOWN_REF *)PfSnLogHelper(*(_QWORD *)a1, (unsigned int)v6, &v16);
    if ( v8 )
    {
      v9 = v16;
      DestinationString.Length = 0;
      *v16 = (8LL * (unsigned int)(v6 - 1)) | 5;
      v10 = ((unsigned __int64)v9 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
      v9[1] = *(_QWORD *)(a1 + 16);
      *(_QWORD *)v10 = 0LL;
      DestinationString.Buffer = (wchar_t *)(v10 + 44);
      v11 = (unsigned __int16)*(_DWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 24);
      DestinationString.MaximumLength = 2 * v5;
      SourceString.Length = 2 * v5;
      SourceString.MaximumLength = 2 * v5;
      SourceString.Buffer = (wchar_t *)(v12 + 2 * v11);
      LODWORD(v11) = *(_DWORD *)(v10 + 40);
      *(_DWORD *)v10 = 8 * ((2 * v5 + 54) & 0xFFFFFFF);
      *(_DWORD *)(v10 + 4) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v10 + 8) = *(_DWORD *)(a1 + 44);
      *(_QWORD *)(v10 + 24) = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(v10 + 32) = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(v10 + 16) = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v10 + 40) ^= (*(_DWORD *)(a1 + 36) ^ v11) & 1;
      *(_DWORD *)(v10 + 40) ^= ((unsigned __int8)*(_DWORD *)(v10 + 40) ^ (unsigned __int8)(2 * *(_DWORD *)(a1 + 36))) & 4;
      *(_WORD *)(v10 + 42) = v5;
      RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
      *(_WORD *)(v10 + 2 * v5 + 44) = 0;
      ExReleaseRundownProtection(v8 + 45);
    }
    else
    {
      return (unsigned int)-1073741446;
    }
  }
  return v7;
}
