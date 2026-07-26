/*
 * XREFs of ndisOidPreAddPMProtocolOffload @ 0x1C00D50A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsValidPmCountedString @ 0x1C00BAD64 (ndisIsValidPmCountedString.c)
 *     GetMiniportFromReqTracker @ 0x1C00BB01C (GetMiniportFromReqTracker.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00D4D0C (ndisMiniportPreAddProtocolOffload.c)
 *     ndisSourcePreAddProtocolOffload @ 0x1C00D7A54 (ndisSourcePreAddProtocolOffload.c)
 */

char __fastcall ndisOidPreAddPMProtocolOffload(__int64 a1)
{
  __int64 MiniportFromReqTracker; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  char v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  char v21; // [rsp+30h] [rbp+8h] BYREF

  MiniportFromReqTracker = GetMiniportFromReqTracker((__int64 *)a1);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = 1;
  v6 = *(_QWORD *)(v3 + 32);
  v7 = MiniportFromReqTracker;
  v21 = 1;
  if ( (!v4 || (v8 = *(_QWORD *)(v4 + 24), v9 = *(_BYTE *)(v8 + 56), v9 > 6u) || v9 == 6 && *(_BYTE *)(v8 + 57) >= 0x14u)
    && ((v10 = *(_QWORD *)(a1 + 8)) == 0
     || (*(_DWORD *)(v6 + 88) & 0x4000) != 0
     || (v11 = *(_QWORD *)(v10 + 16), v12 = *(_BYTE *)(v11 + 100), v12 > 6u)
     || v12 == 6 && *(_BYTE *)(v11 + 101) >= 0x14u)
    && *(_DWORD *)(v6 + 4) == 1 )
  {
    if ( (*(_DWORD *)(v6 + 88) & 0xC0000) != 0 )
      return 0;
    v13 = *(_QWORD *)(v6 + 40);
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v6 + 48) < 0xF0u )
    {
      *(_DWORD *)(v6 + 56) = 240;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      if ( *(_BYTE *)v13 != 0x80
        || *(_BYTE *)(v13 + 1) != 1
        || *(_WORD *)(v13 + 2) < 0xF0u
        || !ndisIsValidPmCountedString((_WORD *)(v13 + 16))
        || *(_DWORD *)(v14 + 152)
        || (unsigned int)(*(_DWORD *)(v14 + 12) - 1) > 2 )
      {
        *(_DWORD *)(a1 + 40) = -1073676267;
        return v5;
      }
      if ( !*(_QWORD *)(a1 + 24)
        || (v16 = ndisSourcePreAddProtocolOffload(v15, 0LL, v6, &v21), v5 = v21, *(_DWORD *)(a1 + 40) = v16, !v5) )
      {
        v17 = *(_QWORD *)(a1 + 8);
        if ( !v17
          || (*(_DWORD *)(v6 + 88) & 0x4000) != 0
          || (v18 = ndisSourcePreAddProtocolOffload(0LL, v17, v6, &v21), v5 = v21, *(_DWORD *)(a1 + 40) = v18, !v5) )
        {
          if ( !*(_QWORD *)a1 )
            return 0;
          v19 = ndisMiniportPreAddProtocolOffload(v7, v6, &v21);
          v5 = v21;
          *(_DWORD *)(a1 + 40) = v19;
          if ( !v5 )
            return 0;
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v5;
}
