/*
 * XREFs of sub_1800DB794 @ 0x1800DB794
 * Callers:
 *     LdrAccessResource_0 @ 0x180010F9C (LdrAccessResource_0.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     sub_1800DB918 @ 0x1800DB918 (sub_1800DB918.c)
 */

__int64 __fastcall sub_1800DB794(__int64 a1, char *a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int v10; // edi
  bool v11; // sf
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v16[0] = 0LL;
  v15 = 0LL;
  RtlAcquireSRWLockShared(&qword_18015D3E8, a2, a3, (__int64)a4);
  *a4 = 0LL;
  v7 = dword_18015B2A0;
  LODWORD(v14) = dword_18015B2A0;
  for ( i = dword_18015B2A0 - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)(v9 + qword_18015B298 + 8) == a1 )
    {
      if ( v16[0] )
      {
        v10 = v7;
        for ( HIDWORD(v14) = v7; ; HIDWORD(v14) = v10 )
        {
          v11 = v10 < 0;
          if ( v10 < 0 )
            break;
          if ( *(_QWORD *)(((__int64)v10 << 6) + qword_18015B298 + 8) == a1
            && (unsigned __int8)sub_1800DB918((unsigned int)v10, a3, v16, &v15, v14) )
          {
            v7 = v10;
            v11 = v10 < 0;
            break;
          }
          --v10;
        }
        if ( v11 )
          v7 = dword_18015B2A0;
        break;
      }
      v16[0] = *(_QWORD *)(v9 + qword_18015B298 + 32);
      v15 = *(_QWORD *)(v9 + qword_18015B298 + 48);
      v7 = i;
      LODWORD(v14) = i;
    }
  }
  if ( v7 == dword_18015B2A0 )
  {
    v16[0] = 0LL;
  }
  else
  {
    if ( !v15 )
    {
      v12 = RtlImageNtHeader(v16[0] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v12 )
      {
        if ( *(_WORD *)(v12 + 24) == 267 || *(_WORD *)(v12 + 24) == 523 )
          v15 = *(unsigned int *)(v12 + 80);
        else
          v15 = 0LL;
      }
    }
    *a4 = v15;
  }
  RtlReleaseSRWLockShared(&qword_18015D3E8);
  return v16[0];
}
