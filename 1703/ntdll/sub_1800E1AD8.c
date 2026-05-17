/*
 * XREFs of sub_1800E1AD8 @ 0x1800E1AD8
 * Callers:
 *     LdrAccessResource_0 @ 0x1800380F8 (LdrAccessResource_0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     sub_1800E1C58 @ 0x1800E1C58 (sub_1800E1C58.c)
 */

__int64 __fastcall sub_1800E1AD8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  int v9; // edi
  bool v10; // sf
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v15[0] = 0LL;
  v14 = 0LL;
  RtlAcquireSRWLockShared(&qword_18015C3B0);
  *a4 = 0LL;
  v7 = dword_18015A268;
  HIDWORD(v13) = dword_18015A268;
  for ( i = dword_18015A268 - 1; i >= 0; --i )
  {
    if ( *(_QWORD *)(qword_18015A260 + 72LL * i + 8) == a1 )
    {
      if ( v15[0] )
      {
        v9 = v7;
        for ( LODWORD(v13) = v7; ; LODWORD(v13) = v9 )
        {
          v10 = v9 < 0;
          if ( v9 < 0 )
            break;
          if ( *(_QWORD *)(qword_18015A260 + 72LL * v9 + 8) == a1
            && (unsigned __int8)sub_1800E1C58((unsigned int)v9, a3, v15, &v14, v13) )
          {
            v7 = v9;
            v10 = v9 < 0;
            break;
          }
          --v9;
        }
        if ( v10 )
          v7 = dword_18015A268;
        break;
      }
      v15[0] = *(_QWORD *)(qword_18015A260 + 72LL * i + 32);
      v14 = *(_QWORD *)(qword_18015A260 + 72LL * i + 48);
      v7 = i;
      HIDWORD(v13) = i;
    }
  }
  if ( v7 == dword_18015A268 )
  {
    v15[0] = 0LL;
  }
  else
  {
    if ( !v14 )
    {
      v11 = RtlImageNtHeader(v15[0] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v11 )
      {
        if ( *(_WORD *)(v11 + 24) == 267 || *(_WORD *)(v11 + 24) == 523 )
          v14 = *(unsigned int *)(v11 + 80);
        else
          v14 = 0LL;
      }
    }
    *a4 = v14;
  }
  RtlReleaseSRWLockShared(&qword_18015C3B0);
  return v15[0];
}
